//
//  ProductsListView.swift
//  Sibaro
//
//  Created by Armin on 8/13/23.
//

import SwiftUI

enum SortType: String, CaseIterable {
    case newest = "Newest"
    case oldest = "Oldest"
    case updated = "Updated"
    case alphabetical = "Alphabetical"
}

struct ProductsListView: View {
    
    @StateObject var viewModel: ViewModel
    
    #if os(iOS)
    @Environment(\.horizontalSizeClass) private var horizontalSizeClass
    #endif
    
    init(type: AppType) {
        self._viewModel = StateObject(wrappedValue: ViewModel(type: type))
    }
    
    var body: some View {
        Group {
            #if os(iOS)
            if horizontalSizeClass == .compact {
                normalList
            } else {
                gridList
            }
            #else
            gridList
            #endif
        }
        .overlay {
            emptyState
        }
        .searchable(text: $viewModel.search)
        .task {
            viewModel.getList()
        }
        .refreshable {
            viewModel.getList(changeLoadingState: false)
        }
        .toolbar {
            ToolbarItem {
                #if os(macOS)
                sortPicker
                #elseif os(iOS)
                Menu {
                    sortPicker
                } label: {
                    Label("Sort by", systemImage: "slider.horizontal.3")
                }
                #endif
            }
            #if os(macOS)
            ToolbarItem {
                Button {
                    viewModel.getList()
                } label: {
                    Image(systemName: "arrow.triangle.2.circlepath")
                }
                .disabled(viewModel.loading)
            }
            #endif
        }
        .sheet(item: $viewModel.selectedProduct) { product in
            ProductDetailsView(product: product)
                #if os(macOS)
                .frame(minWidth: 350, idealWidth: 600, minHeight: 500, idealHeight: 650)
                #endif
        }
    }
    
    var normalList: some View {
        List(viewModel.products, id: \.id) { product in
            Button {
                viewModel.selectedProduct = product
            } label: {
                ProductItemView(product: product)
            }
        }
        .listStyle(.plain)
    }
    
    var gridList: some View {
        ScrollView {
            LazyVGrid(columns: [GridItem(.adaptive(minimum: 360), alignment: .top)]) {
                ForEach(viewModel.products, id: \.id) { product in
                    ProductItemView(product: product)
                        .onTapGesture {
                            viewModel.selectedProduct = product
                        }
                        .padding()
                }
            }
            .padding()
        }
    }
    
    var sortPicker: some View {
        Picker("Sort by", selection: $viewModel.sortType) {
            ForEach(SortType.allCases, id: \.self) { type in
                Text(type.rawValue)
            }
        }
        #if os(iOS)
        .onChange(of: viewModel.sortType) { _ in
            HapticFeedback.shared.start(.medium)
        }
        #endif
    }
    
    var emptyState: some View {
        ZStack {
            /// Loading Empty state
            if viewModel.loading && viewModel.products.isEmpty {
                EmptyStateView(
                    isLoading: true,
                    title: "Updating..."
                )
            }
            
            /// Failed Empty state
            if !viewModel.loading && viewModel.products.isEmpty && viewModel.message != "" {
                EmptyStateView(
                    icon: "wifi.exclamationmark",
                    showAlt: false,
                    title: viewModel.message,
                    actionTitle: "Try again"
                ) {
                    viewModel.getList()
                }
            }
        }
    }
    
}

struct ProductsListView_Previews: PreviewProvider {
    @ObservedObject static var i18n = I18nService()
    
    static var previews: some View {
        NavigationStack {
            ProductsListView(type: .app)
                .environmentObject(i18n)
                .navigationTitle("Apps")
        }
    }
}

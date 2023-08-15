//
//  ProductsService.swift
//  Sibaro
//
//  Created by Armin on 8/13/23.
//

import Foundation

protocol ProductsRepositoryType {
    func products(token: String) async throws -> [Product]
    func getManifest(id: Int, token: String) async throws -> URL?
}

struct ProductsRepository: HTTPClient, ProductsRepositoryType {
    @Injected(\.storage) var storage
    
    func products(token: String) async throws -> [Product] {
        return try await sendRequest(
            endpoint: ProductsEndpoint.applications(token: token),
            responseModel: [Product].self
        )
    }
    
    func getManifest(id: Int, token: String) async throws -> URL? {
        let response = try await sendRequest(
            endpoint: ProductsEndpoint.appManifest(id: id, token: token),
            responseModel: AppManifest.self
        )
        
        return response.url
    }
}
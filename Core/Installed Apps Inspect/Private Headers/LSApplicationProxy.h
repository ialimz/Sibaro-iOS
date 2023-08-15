/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <Foundation/Foundation.h>
#import "LSBundleProxy.h"

@interface LSApplicationProxy : LSBundleProxy <NSSecureCoding> {
    NSNumber * _ODRDiskUsage;
    NSArray * _UIBackgroundModes;
    NSArray * _VPNPlugins;
    NSArray * _appTags;
    NSString * _applicationDSID;
    NSString * _applicationVariant;
    NSArray * _audioComponents;
    NSString * _companionAppIdentifier;
    NSArray * _deviceFamily;
    NSUUID * _deviceIdentifierForVendor;
    NSArray * _directionsModes;
    NSNumber * _downloaderDSID;
    NSNumber * _dynamicDiskUsage;
    NSArray * _externalAccessoryProtocols;
    NSNumber * _familyID;
    unsigned long long  _flags;
    NSDictionary * _groupContainers;
    NSArray * _groupIdentifiers;
    unsigned long long  _installType;
    bool  _isContainerized;
    NSNumber * _itemID;
    NSString * _itemName;
    NSString * _minimumSystemVersion;
    int  _modTime;
    unsigned long long  _originalInstallType;
    NSArray * _plugInKitPlugins;
    NSArray * _pluginUUIDs;
    NSArray * _privateDocumentIconNames;
    LSApplicationProxy * _privateDocumentTypeOwner;
    NSNumber * _purchaserDSID;
    int  _regTime;
    NSDate * _registeredDate;
    NSArray * _requiredDeviceCapabilities;
    NSString * _sdkVersion;
    NSString * _shortVersionString;
    NSString * _sourceAppIdentifier;
    NSNumber * _staticDiskUsage;
    NSString * _storeCohortMetadata;
    NSNumber * _storeFront;
    NSString * _teamID;
    NSString * _vendorName;
    NSNumber * _versionID;
}

@property (nonatomic, readonly) NSNumber *ODRDiskUsage;
@property (nonatomic, readonly) NSArray *UIBackgroundModes;
@property (nonatomic, readonly) NSArray *VPNPlugins;
@property (nonatomic, readonly) NSArray *appTags;
@property (nonatomic, readonly) NSString *applicationDSID;
@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) NSString *applicationType;
@property (nonatomic, readonly) NSString *applicationVariant;
@property (nonatomic, readonly) NSArray *audioComponents;
@property (nonatomic, readonly) NSNumber *betaExternalVersionIdentifier;
@property (nonatomic, readonly) NSString *companionApplicationIdentifier;
@property (nonatomic, readonly) NSArray *deviceFamily;
@property (nonatomic, readonly) NSUUID *deviceIdentifierForVendor;
@property (nonatomic, readonly) NSArray *directionsModes;
@property (nonatomic, readonly) NSNumber *downloaderDSID;
@property (nonatomic, readonly) NSNumber *dynamicDiskUsage;
@property (nonatomic, readonly) NSArray *externalAccessoryProtocols;
@property (nonatomic, readonly) NSNumber *externalVersionIdentifier;
@property (nonatomic, readonly) NSNumber *familyID;
@property (nonatomic, readonly) bool fileSharingEnabled;
@property (nonatomic, readonly) NSDictionary *groupContainers;
@property (nonatomic, readonly) NSArray *groupIdentifiers;
@property (nonatomic, readonly) bool hasMIDBasedSINF;
@property (nonatomic, readonly) bool hasSettingsBundle;
@property (nonatomic, readonly) bool iconIsPrerendered;
@property (nonatomic, readonly) NSProgress *installProgress;
@property (nonatomic, readonly) unsigned long long installType;
@property (nonatomic, readonly) bool isAdHocCodeSigned;
@property (nonatomic, readonly) bool isAppUpdate;
@property (nonatomic, readonly) bool isBetaApp;
@property (nonatomic, readonly) bool isContainerized;
@property (nonatomic, readonly) bool isInstalled;
@property (nonatomic, readonly) bool isNewsstandApp;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) bool isPurchasedReDownload;
@property (nonatomic, readonly) bool isRestricted;
@property (nonatomic, readonly) bool isWatchKitApp;
@property (nonatomic, readonly) NSNumber *itemID;
@property (nonatomic, readonly) NSString *itemName;
@property (nonatomic, readonly) NSString *minimumSystemVersion;
@property (nonatomic, readonly) bool missingRequiredSINF;
@property (nonatomic, readonly) unsigned long long originalInstallType;
@property (nonatomic, readonly) NSArray *plugInKitPlugins;
@property (nonatomic, readonly) NSString *preferredArchitecture;
@property (nonatomic, readonly) bool profileValidated;
@property (nonatomic, readonly) NSNumber *purchaserDSID;
@property (nonatomic, readonly) NSDate *registeredDate;
@property (nonatomic, readonly) NSArray *requiredDeviceCapabilities;
@property (nonatomic, readonly) NSString *roleIdentifier;
@property (nonatomic, readonly) NSString *sdkVersion;
@property (nonatomic, readonly) NSString *shortVersionString;
@property (nonatomic, readonly) NSString *sourceAppIdentifier;
@property (nonatomic, readonly) NSNumber *staticDiskUsage;
@property (nonatomic, readonly) NSString *storeCohortMetadata;
@property (nonatomic, readonly) NSNumber *storeFront;
@property (nonatomic, readonly) bool supportsAudiobooks;
@property (nonatomic, readonly) bool supportsExternallyPlayableContent;
@property (nonatomic, readonly) bool supportsOpenInPlace;
@property (nonatomic, readonly) NSString *teamID;
@property (nonatomic, readonly) NSString *vendorName;

// Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices

+ (id)applicationProxyForBundleURL:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1;
+ (id)applicationProxyForIdentifier:(id)arg1 placeholder:(bool)arg2;
+ (id)applicationProxyForIdentifier:(id)arg1 roleIdentifier:(id)arg2;
+ (id)applicationProxyForItemID:(id)arg1;
+ (id)applicationProxyWithBundleUnitID:(unsigned int)arg1;
+ (bool)supportsSecureCoding;

- (id)ODRDiskUsage;
- (id)UIBackgroundModes;
- (id)VPNPlugins;
- (id)_initWithBundleUnit:(unsigned int)arg1 applicationIdentifier:(id)arg2;
- (id)appStoreReceiptURL;
- (id)appTags;
- (id)applicationDSID;
- (id)applicationIdentifier;
- (id)applicationType;
- (id)applicationVariant;
- (id)audioComponents;
- (id)betaExternalVersionIdentifier;
- (int)bundleModTime;
- (id)companionApplicationIdentifier;
- (void)dealloc;
- (id)description;
- (id)deviceFamily;
- (id)deviceIdentifierForVendor;
- (id)directionsModes;
- (id)downloaderDSID;
- (id)dynamicDiskUsage;
- (void)encodeWithCoder:(id)arg1;
- (id)externalAccessoryProtocols;
- (id)externalVersionIdentifier;
- (id)familyID;
- (bool)fileSharingEnabled;
- (id)groupContainers;
- (id)groupIdentifiers;
- (bool)hasMIDBasedSINF;
- (bool)hasSettingsBundle;
- (unsigned long long)hash;
- (id)iconDataForVariant:(int)arg1;
- (bool)iconIsPrerendered;
- (id)iconStyleDomain;
- (id)initWithCoder:(id)arg1;
- (id)installProgress;
- (id)installProgressSync;
- (unsigned long long)installType;
- (bool)isAdHocCodeSigned;
- (bool)isAppUpdate;
- (bool)isBetaApp;
- (bool)isContainerized;
- (bool)isEqual:(id)arg1;
- (bool)isInstalled;
- (bool)isNewsstandApp;
- (bool)isPlaceholder;
- (bool)isPurchasedReDownload;
- (bool)isRestricted;
- (bool)isWatchKitApp;
- (id)itemID;
- (id)itemName;
- (id)localizedName;
- (id)localizedNameForContext:(id)arg1;
- (id)localizedShortName;
- (id)machOUUIDs;
- (id)minimumSystemVersion;
- (bool)missingRequiredSINF;
- (unsigned long long)originalInstallType;
- (id)plugInKitPlugins;
- (void)populateNotificationData;
- (id)preferredArchitecture;
- (bool)privateDocumentIconAllowOverride;
- (id)privateDocumentIconNames;
- (id)privateDocumentTypeOwner;
- (id)privateIconsDictionary;
- (bool)profileValidated;
- (id)purchaserDSID;
- (id)registeredDate;
- (id)requiredDeviceCapabilities;
- (id)resourcesDirectoryURL;
- (id)roleIdentifier;
- (id)sdkVersion;
- (void)setPrivateDocumentIconAllowOverride:(bool)arg1;
- (void)setPrivateDocumentIconNames:(id)arg1;
- (void)setPrivateDocumentTypeOwner:(id)arg1;
- (id)shortVersionString;
- (id)sourceAppIdentifier;
- (id)staticDiskUsage;
- (id)storeCohortMetadata;
- (id)storeFront;
- (bool)supportsAudiobooks;
- (bool)supportsExternallyPlayableContent;
- (bool)supportsOpenInPlace;
- (id)teamID;
- (id)uniqueIdentifier;
- (id)userActivityStringForAdvertisementData:(id)arg1;
- (id)vendorName;
- (id)versionIdentifier;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

//- (struct CGSize { double x1; double x2; })_defaultStyleSize:(id)arg1;
//- (struct { int x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)_iconVariantDefinitions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UserNotification.framework/UserNotification

+ (id)un_applicationProxyForBundleIdentifier:(id)arg1;
+ (id)un_bundleForBundleIdentifier:(id)arg1;

- (bool)_un_isResourceValidForPath:(id)arg1 withContainerPath:(id)arg2;
- (id)un_bundle;
- (id)un_infoDictionary;
- (bool)un_isSystemApplication;
- (id)un_pathForSoundName:(id)arg1;
- (bool)un_requiresLocalNotification;
- (bool)un_shouldUseDefaultDataProvider;
- (bool)un_usesLocalNotification;

@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

#import <NSObject.h> // Unknown library


@interface LSApplicationWorkspace : NSObject {
}
+ (id)defaultWorkspace;	// 0x33e75675
- (id)URLOverrideForURL:(id)url;	// 0x33e75b91
- (id)applicationForOpeningResource:(id)openingResource;	// 0x33e756d5
- (id)applicationIdentifierForOpeningResource:(id)openingResource;	// 0x33e7595d
- (id)applicationsAvailableForHandlingURLScheme:(id)handlingURLScheme;	// 0x33e75b89
- (id)applicationsAvailableForOpeningDocument:(id)openingDocument;	// 0x33e75b7d
- (id)deviceIdentifierForAdvertising;	// 0x33e767c1
- (id)deviceIdentifierForVendor;	// 0x33e76895
- (id)directionsApplications;	// 0x33e75a69
- (id)installedApplications;	// 0x33e75f19
- (BOOL)invalidateIconCache:(id)cache;	// 0x33e767b1
- (BOOL)openSensitiveURL:(id)url withOptions:(id)options;	// 0x33e75d8d
- (BOOL)openURL:(id)url;	// 0x33e75d75
- (BOOL)openURL:(id)url withOptions:(id)options;	// 0x33e75c25
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info;	// 0x33e75ec5
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application uniqueDocumentIdentifier:(id)identifier userInfo:(id)info delegate:(id)delegate;	// 0x33e75e5d
- (id)operationToOpenResource:(id)openResource usingApplication:(id)application userInfo:(id)info;	// 0x33e75ef5
- (id)privateURLSchemes;	// 0x33e763d9
- (id)publicURLSchemes;	// 0x33e761fd
- (BOOL)registerApplication:(id)application;	// 0x33e765cd
- (BOOL)registerApplicationDictionary:(id)dictionary;	// 0x33e76419
- (BOOL)unregisterApplication:(id)application;	// 0x33e765f1
@end


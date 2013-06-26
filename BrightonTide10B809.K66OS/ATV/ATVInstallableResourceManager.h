/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLDownloadDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ATVInstallableResourceManager : XXUnknownSuperclass <NSURLDownloadDelegate> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSString *_basePath;	// 8 = 0x8
	BOOL _downloadingFile;	// 12 = 0xc
	BOOL _downloadCompletedSuccessfully;	// 13 = 0xd
	NSMutableSet *_dirtyResourceRecords;	// 16 = 0x10
	NSArray *_resources;	// 20 = 0x14
}
@property(retain) NSArray *resources;	// G=0x19b2d1; S=0x19b2e5; @synthesize=_resources
+ (id)_buildRecordsAtBasePath:(id)basePath;	// 0x19b5e9
+ (id)_buildRecordsForMerchantPath:(id)merchantPath;	// 0x19b865
+ (id)sharedInstance;	// 0x19a5b9
- (unsigned long long)_bytesUsed;	// 0x19ba0d
- (id)_initWithPath:(id)path;	// 0x19b2f5
- (BOOL)_installDownloadedTarball:(id)tarball to:(id)to version:(id)version;	// 0x19c031
- (void)_markAsDirty:(id)dirty;	// 0x19c481
- (id)_merchantIdentifierFromPath:(id)path;	// 0x19bfe5
- (id)_recordForName:(id)name merchant:(id)merchant;	// 0x19bd8d
- (void)_removeLeastRecentlyUsedResource;	// 0x19bb6d
- (id)_resourcesForMerchant:(id)merchant named:(id)named;	// 0x19affd
- (void)_saveDirtyResourcesNotification:(id)notification;	// 0x19c4a1
- (void)dealloc;	// 0x19a675
- (void)download:(id)download didFailWithError:(id)error;	// 0x19b25d
- (void)downloadDidFinish:(id)download;	// 0x19b295
- (void)installResourceNamed:(id)named version:(id)version url:(id)url merchant:(id)merchant completionHandler:(id)handler;	// 0x19a731
- (id)resourceForMerchant:(id)merchant named:(id)named;	// 0x19b215
// declared property getter: - (id)resources;	// 0x19b2d1
- (id)resourcesForMerchant:(id)merchant;	// 0x19b201
// declared property setter: - (void)setResources:(id)resources;	// 0x19b2e5
@end

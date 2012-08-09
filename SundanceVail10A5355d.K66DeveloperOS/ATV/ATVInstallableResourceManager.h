/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSURLDownloadDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString, NSObject, NSMutableSet;
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
@property(retain) NSArray *resources;	// G=0x1794e1; S=0x1794f5; @synthesize=_resources
+ (id)_buildRecordsAtBasePath:(id)basePath;	// 0x1797f9
+ (id)_buildRecordsForMerchantPath:(id)merchantPath;	// 0x179a75
+ (id)sharedInstance;	// 0x1787c9
- (unsigned long long)_bytesUsed;	// 0x179c1d
- (id)_initWithPath:(id)path;	// 0x179505
- (BOOL)_installDownloadedTarball:(id)tarball to:(id)to version:(id)version;	// 0x17a241
- (void)_markAsDirty:(id)dirty;	// 0x17a691
- (id)_merchantIdentifierFromPath:(id)path;	// 0x17a1f5
- (id)_recordForName:(id)name merchant:(id)merchant;	// 0x179f9d
- (void)_removeLeastRecentlyUsedResource;	// 0x179d7d
- (id)_resourcesForMerchant:(id)merchant named:(id)named;	// 0x17920d
- (void)_saveDirtyResourcesNotification:(id)notification;	// 0x17a6b1
- (void)dealloc;	// 0x178885
- (void)download:(id)download didFailWithError:(id)error;	// 0x17946d
- (void)downloadDidFinish:(id)download;	// 0x1794a5
- (void)installResourceNamed:(id)named version:(id)version url:(id)url merchant:(id)merchant completionHandler:(id)handler;	// 0x178941
- (id)resourceForMerchant:(id)merchant named:(id)named;	// 0x179425
// declared property getter: - (id)resources;	// 0x1794e1
- (id)resourcesForMerchant:(id)merchant;	// 0x179411
// declared property setter: - (void)setResources:(id)resources;	// 0x1794f5
@end

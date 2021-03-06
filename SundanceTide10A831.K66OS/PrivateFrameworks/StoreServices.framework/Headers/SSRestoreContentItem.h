/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString, NSMutableDictionary;

@interface SSRestoreContentItem : NSObject {
	NSNumber *_accountID;	// 4 = 0x4
	NSString *_appleID;	// 8 = 0x8
	NSString *_bundleID;	// 12 = 0xc
	NSNumber *_cloudMatchStatus;	// 16 = 0x10
	BOOL _isRestore;	// 20 = 0x14
	NSMutableDictionary *_properties;	// 24 = 0x18
}
@property(assign, nonatomic, getter=isDRMFree) BOOL DRMFree;	// G=0x378441d1; S=0x37844531; 
@property(copy, nonatomic) NSString *bundleID;	// G=0x37844cc9; S=0x37844cdd; @synthesize=_bundleID
@property(retain, nonatomic) NSNumber *cloudItemID;	// G=0x37843fc5; S=0x378444b5; 
@property(retain, nonatomic) NSNumber *cloudMatchStatus;	// G=0x37844015; S=0x378444d1; 
@property(copy, nonatomic) NSString *downloadKind;	// G=0x37844181; S=0x37844515; 
@property(copy, nonatomic) NSString *podcastEpisodeGUID;	// G=0x37844465; S=0x37844575; 
@property(copy, nonatomic) NSString *storeAccountAppleID;	// G=0x37844821; S=0x37844591; 
@property(retain, nonatomic) NSNumber *storeAccountID;	// G=0x37844859; S=0x378445d5; 
@property(copy, nonatomic) NSString *storeFlavor;	// G=0x37844891; S=0x37844619; 
@property(copy, nonatomic) NSString *storeFrontID;	// G=0x378448e1; S=0x37844635; 
@property(retain, nonatomic) NSNumber *storeItemID;	// G=0x37844931; S=0x37844651; 
@property(copy, nonatomic) NSString *storeSoftwareVersionID;	// G=0x37844981; S=0x3784466d; 
@property(copy, nonatomic) NSString *videoDimensions;	// G=0x378449d1; S=0x37844805; 
- (id)init;	// 0x37843d09
- (id)initWithRestoreDownload:(id)restoreDownload;	// 0x37843d19
- (id)_initSSRestoreContentItem;	// 0x37843ca5
- (id)_restoreKeyForAssetProperty:(id)assetProperty;	// 0x37844a21
- (id)_restoreKeyForDownloadProperty:(id)downloadProperty;	// 0x37844ae5
- (void)_setValue:(id)value forProperty:(id)property;	// 0x37844bfd
// declared property getter: - (id)bundleID;	// 0x37844cc9
// declared property getter: - (id)cloudItemID;	// 0x37843fc5
// declared property getter: - (id)cloudMatchStatus;	// 0x37844015
- (id)copyRestoreDictionary;	// 0x3784404d
- (void)dealloc;	// 0x37843f25
// declared property getter: - (id)downloadKind;	// 0x37844181
// declared property getter: - (BOOL)isDRMFree;	// 0x378441d1
- (BOOL)isEligibleForRestore:(id *)restore;	// 0x37844211
// declared property getter: - (id)podcastEpisodeGUID;	// 0x37844465
// declared property setter: - (void)setBundleID:(id)anId;	// 0x37844cdd
// declared property setter: - (void)setCloudItemID:(id)anId;	// 0x378444b5
// declared property setter: - (void)setCloudMatchStatus:(id)status;	// 0x378444d1
// declared property setter: - (void)setDRMFree:(BOOL)free;	// 0x37844531
// declared property setter: - (void)setDownloadKind:(id)kind;	// 0x37844515
// declared property setter: - (void)setPodcastEpisodeGUID:(id)guid;	// 0x37844575
// declared property setter: - (void)setStoreAccountAppleID:(id)anId;	// 0x37844591
// declared property setter: - (void)setStoreAccountID:(id)anId;	// 0x378445d5
// declared property setter: - (void)setStoreFlavor:(id)flavor;	// 0x37844619
// declared property setter: - (void)setStoreFrontID:(id)anId;	// 0x37844635
// declared property setter: - (void)setStoreItemID:(id)anId;	// 0x37844651
// declared property setter: - (void)setStoreSoftwareVersionID:(id)anId;	// 0x3784466d
- (void)setValue:(id)value forAssetProperty:(id)assetProperty;	// 0x37844689
- (void)setValue:(id)value forDownloadProperty:(id)downloadProperty;	// 0x378446c1
// declared property setter: - (void)setVideoDimensions:(id)dimensions;	// 0x37844805
// declared property getter: - (id)storeAccountAppleID;	// 0x37844821
// declared property getter: - (id)storeAccountID;	// 0x37844859
// declared property getter: - (id)storeFlavor;	// 0x37844891
// declared property getter: - (id)storeFrontID;	// 0x378448e1
// declared property getter: - (id)storeItemID;	// 0x37844931
// declared property getter: - (id)storeSoftwareVersionID;	// 0x37844981
// declared property getter: - (id)videoDimensions;	// 0x378449d1
@end


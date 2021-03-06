/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <AppleTVServices/ATVDataClient.h>

@class ATVCupidAOSynchronizer, ACAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidAccessObject : ATVDataClient {
	ACAccount *_appleAccount;	// 4 = 0x4
	ATVCupidAOSynchronizer *_synchronizer;	// 8 = 0x8
}
@property(retain, nonatomic) ACAccount *appleAccount;	// G=0x499fb1; S=0x499fc1; @synthesize=_appleAccount
@property(assign, nonatomic) __weak ATVCupidAOSynchronizer *synchronizer;	// G=0x499fe9; S=0x49a009; @synthesize=_synchronizer
+ (void)_cancelFetchForAccessObject:(id)accessObject assetID:(id)anId;	// 0x4994d9
+ (void)_fetchImageForAccessObject:(id)accessObject assetID:(id)anId priority:(int)priority completionHandler:(id)handler;	// 0x498e3d
+ (id)_filterAppositePhotoAssetFromAssets:(id)assets;	// 0x498831
+ (id)_filterAppositeVideoAssetFromAssets:(id)assets;	// 0x498c4d
+ (id)_imageFetchRecordForAccessObject:(id)accessObject imageToken:(id)token;	// 0x499de9
+ (void)_postProcessFetchForAccessObject:(id)accessObject imageToken:(id)token withHandler:(id)handler;	// 0x49931d
+ (void)_processNextFromFetchQueue;	// 0x4997f5
+ (id)accessObjectWithAppleAccount:(id)appleAccount;	// 0x4984c5
+ (void)initialize;	// 0x498431
- (void).cxx_destruct;	// 0x49a01d
- (void)_queueOperation:(id)operation;	// 0x499721
// declared property getter: - (id)appleAccount;	// 0x499fb1
- (void)fetchImageForAssetID:(id)assetID completionHandler:(id)handler;	// 0x49872d
- (void)runSetup;	// 0x49851d
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x499fc1
// declared property setter: - (void)setSynchronizer:(id)synchronizer;	// 0x49a009
// declared property getter: - (id)synchronizer;	// 0x499fe9
- (void)tearDown;	// 0x49852d
@end


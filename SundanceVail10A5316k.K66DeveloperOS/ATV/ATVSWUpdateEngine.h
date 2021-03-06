/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, ASAsset, NSString, ASAssetQuery, NSError, BRStateMachine;

__attribute__((visibility("hidden")))
@interface ATVSWUpdateEngine : XXUnknownSuperclass {
	BRStateMachine *_stateMachine;	// 4 = 0x4
	BOOL _processStartedWithAutoCheck;	// 8 = 0x8
	BOOL _processStartedForRestore;	// 9 = 0x9
	NSString *_step2ImagePath;	// 12 = 0xc
	NSDate *_downloadStartTime;	// 16 = 0x10
	NSError *_msuProgressError;	// 20 = 0x14
	ASAsset *_asset;	// 24 = 0x18
	ASAssetQuery *_query;	// 28 = 0x1c
}
- (id)init;	// 0x224f71
- (void).cxx_destruct;	// 0x225455
- (void)_applyUpdateThreaded;	// 0x229d19
- (void)_cancelUpdateDuringDownload;	// 0x22b9f9
- (void)_cancelUpdatePreDownload;	// 0x22b935
- (void)_clearApplySpace;	// 0x229239
- (void)_clearDownloadSpace;	// 0x228b21
- (void)_downloadAsset;	// 0x2290a5
- (void)_handleProgressCallbackWithState:(id)state error:(id)error;	// 0x22a7dd
- (void)_performCheck;	// 0x2275b5
- (void)_prepareUpdate;	// 0x229afd
- (void)_purgePreviousAssets;	// 0x227191
- (void)_registerHandlers;	// 0x2254d9
- (void)_updateProgressStatus:(id)status;	// 0x22b6e9
- (void)_verifyAndExtractUpdate;	// 0x2297f9
- (void)dealloc;	// 0x2252bd
- (BOOL)isChecking;	// 0x22536d
- (BOOL)isDownloading;	// 0x2253e1
- (void)processEvent:(id)event;	// 0x225315
- (void)setStep2ImagePath:(id)path;	// 0x225335
@end


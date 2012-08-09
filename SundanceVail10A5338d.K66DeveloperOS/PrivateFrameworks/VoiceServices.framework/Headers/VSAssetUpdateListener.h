/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class PCPersistentTimer;

@interface VSAssetUpdateListener : NSObject {
	BOOL _isListening;	// 4 = 0x4
	PCPersistentTimer *_assetCleanupTimer;	// 8 = 0x8
}
+ (id)sharedListener;	// 0x345ca369
- (id)init;	// 0x345ca2d9
- (void)_cancelAssetCleanupTimer;	// 0x345caacd
- (void)_cleanupAssets;	// 0x345ca6a1
- (void)_flushLanguageChanges;	// 0x345ca5e1
- (id)_initShared;	// 0x345ca2dd
- (void)_rescheduleAssetCleanup;	// 0x345ca3d5
- (void)_scheduleNextCleanupForDate:(id)date;	// 0x345ca949
- (void)_spokenLanguageChanged:(id)changed;	// 0x345ca821
- (void)_updateNextCleanupDate;	// 0x345ca8a1
- (void)dealloc;	// 0x345ca329
- (void)startListening;	// 0x345ca44d
- (void)stopListening;	// 0x345ca50d
@end

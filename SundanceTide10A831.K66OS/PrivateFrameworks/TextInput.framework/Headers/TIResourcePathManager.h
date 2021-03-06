/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSOperationQueue, NSDictionary;

@interface TIResourcePathManager : NSObject {
	void *_mobileAssetFrameworkFileHandle;	// 4 = 0x4
	NSMutableDictionary *_resourcePaths;	// 8 = 0x8
	NSOperationQueue *_operationQueue;	// 12 = 0xc
	NSDictionary *_inputModeAssets;	// 16 = 0x10
}
@property(retain, nonatomic) NSDictionary *inputModeAssets;	// G=0x34c79609; S=0x34c79619; @synthesize=_inputModeAssets
@property(readonly, assign, nonatomic) NSOperationQueue *operationQueue;	// G=0x34c795f9; @synthesize=_operationQueue
+ (id)sharedInstance;	// 0x34c78361
- (id)init;	// 0x34c783cd
- (id)assetQueryForType:(id)type;	// 0x34c78b0d
- (void)clearPathsForType:(int)type;	// 0x34c78821
- (void)dealloc;	// 0x34c7857d
- (void)didFetchAssets;	// 0x34c78bf1
- (void)fetchAssets;	// 0x34c78c05
- (oneway void)fetchAssetsForQueryResults:(id)queryResults withError:(id)error updatingArray:(id)array continuation:(id)continuation;	// 0x34c793cd
- (oneway void)fetchAssetsWithName:(id)name continuation:(id)continuation;	// 0x34c79355
- (oneway void)fetchAssetsWithNames:(id)names forInputModes:(id)inputModes updatingDictionary:(id)dictionary continuation:(id)continuation;	// 0x34c790bd
- (oneway void)handleUninstalledAsset:(id)asset withError:(id)error continuation:(id)continuation;	// 0x34c795f1
// declared property getter: - (id)inputModeAssets;	// 0x34c79609
- (BOOL)loadMobileAssetLibrary;	// 0x34c78a55
- (id)mobileAssetConstant:(const char *)constant;	// 0x34c78ac1
// declared property getter: - (id)operationQueue;	// 0x34c795f9
- (id)pathsOfType:(int)type;	// 0x34c78641
- (void)postNotification:(id)notification;	// 0x34c78921
- (void)postNotification:(id)notification forType:(int)type;	// 0x34c789a9
- (void)postNotificationForType:(int)type;	// 0x34c78a39
- (void)pushPath:(id)path forType:(int)type;	// 0x34c78771
- (void)resendNotification:(id)notification;	// 0x34c78885
// declared property setter: - (void)setInputModeAssets:(id)assets;	// 0x34c79619
- (void)setupMobileAssets;	// 0x34c7856d
- (void)setupNotifications;	// 0x34c78495
- (void)unloadMobileAssetLibrary;	// 0x34c78a9d
- (id)versionString;	// 0x34c78add
@end


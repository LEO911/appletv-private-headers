/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVAssetResourceLoaderInternal;
@protocol AVAssetResourceLoaderDelegate, OS_dispatch_queue;

@interface AVAssetResourceLoader : NSObject {
	AVAssetResourceLoaderInternal *_resourceLoader;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) id<AVAssetResourceLoaderDelegate> delegate;	// G=0x34268861; 
@property(readonly, assign, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;	// G=0x34268881; 
- (id)initWithAsset:(id)asset;	// 0x342682c5
- (void)_addFigAssetNotifications;	// 0x34268589
- (BOOL)_attemptDelegateHandlingOfRequestWithDictionary:(id)dictionary;	// 0x342688a1
- (OpaqueFigAsset *)_figAsset;	// 0x34268c91
- (void)_removeFigAssetNotifications;	// 0x342685c9
- (id)_weakReference;	// 0x34268569
- (id)asset;	// 0x34268c65
- (void)dealloc;	// 0x3426842d
// declared property getter: - (id)delegate;	// 0x34268861
// declared property getter: - (id)delegateQueue;	// 0x34268881
- (void)finalize;	// 0x342684dd
- (void)setDelegate:(id)delegate queue:(id)queue;	// 0x34268609
- (id)stateQueue;	// 0x34268841
@end

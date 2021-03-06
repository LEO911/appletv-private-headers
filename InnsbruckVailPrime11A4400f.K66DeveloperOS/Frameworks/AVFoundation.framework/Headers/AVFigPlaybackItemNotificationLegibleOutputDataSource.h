/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVLegibleOutputDataSource.h"
#import <NSObject.h> // Unknown library

@class NSString, AVWeakReference;

@interface AVFigPlaybackItemNotificationLegibleOutputDataSource : NSObject <AVLegibleOutputDataSource> {
	AVWeakReference *_weakReferenceToSelf;	// 4 = 0x4
	OpaqueFigPlaybackItem *_figPlaybackItem;	// 8 = 0x8
	NSString *_figLegibleOutputsDictionaryKey;	// 12 = 0xc
	id _dataProviderBlock;	// 16 = 0x10
}
- (id)init;	// 0x2c325471
- (id)initWithFigPlaybackItem:(OpaqueFigPlaybackItem *)figPlaybackItem figLegibleOutputsDictionaryKey:(id)key;	// 0x2c325485
- (void)_collectUncollectables_onlyToBeCalledFromDeallocOrFinalize;	// 0x2c3257c9
- (void)_figPlaybackItem:(OpaqueFigPlaybackItem *)item didOutputAttributedStrings:(id)strings nativeSampleBuffers:(id)buffers atItemTime:(XXStruct_pwHToB)itemTime withLegibleOutputsDictionaryKey:(id)legibleOutputsDictionaryKey;	// 0x2c3258f9
- (void)_registerForNotifications;	// 0x2c3255ed
- (void)_unregisterFromNotifications;	// 0x2c32573d
- (void)dealloc;	// 0x2c3257e1
- (void)finalize;	// 0x2c32587d
- (void)setDataProviderBlock:(id)block;	// 0x2c3258d1
@end


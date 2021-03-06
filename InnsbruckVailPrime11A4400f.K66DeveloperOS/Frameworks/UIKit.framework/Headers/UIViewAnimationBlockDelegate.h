/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>


__attribute__((visibility("hidden")))
@interface UIViewAnimationBlockDelegate : NSObject {
	BOOL _didBeginBlockAnimation;	// 4 = 0x4
	BOOL _allowUserInteraction;	// 5 = 0x5
	BOOL _isZeroDuration;	// 6 = 0x6
	id _start;	// 8 = 0x8
	id _completion;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL _allowsUserInteraction;	// G=0x2f509159; @synthesize=_allowUserInteraction
+ (void)setAnimationBlockDelegateWithDuration:(double)duration options:(unsigned)options start:(id)start completion:(id)completion;	// 0x2f3f465d
// declared property getter: - (BOOL)_allowsUserInteraction;	// 0x2f509159
- (void)_didEndBlockAnimation:(id)animation finished:(id)finished context:(id)context;	// 0x2f3f475d
- (void)_sendDeferredCompletion:(id)completion;	// 0x2f499a25
- (void)_willBeginBlockAnimation:(id)animation context:(id)context;	// 0x2f493941
- (void)dealloc;	// 0x2f3f4c0d
@end


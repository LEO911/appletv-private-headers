/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _UITransitionState : NSObject {
	int _transitionDirection;	// 4 = 0x4
	id _completion;	// 8 = 0x8
	NSDate *_beginDate;	// 12 = 0xc
}
@property(readonly, assign, nonatomic, getter=isActive) BOOL active;	// G=0x2f8a4c2d; 
@property(readonly, assign, nonatomic) NSDate *beginDate;	// G=0x2f8a4dc9; @synthesize=_beginDate
@property(readonly, assign, nonatomic) int effectiveTransitionDirection;	// G=0x2f8a4cd9; 
@property(readonly, assign, nonatomic) int transitionDirection;	// G=0x2f8a4db9; @synthesize=_transitionDirection
- (id)initWithTransitionDirection:(int)transitionDirection completion:(id)completion;	// 0x2f8a4b65
// declared property getter: - (id)beginDate;	// 0x2f8a4dc9
- (void)cleanupWithFinishedState:(BOOL)finishedState completedState:(BOOL)state;	// 0x2f8a4c9d
- (void)dealloc;	// 0x2f8a4bc9
- (id)description;	// 0x2f8a4d0d
// declared property getter: - (int)effectiveTransitionDirection;	// 0x2f8a4cd9
// declared property getter: - (BOOL)isActive;	// 0x2f8a4c2d
- (BOOL)isCompatibleWithTransitionInDirection:(int)direction;	// 0x2f8a4ce9
- (void)markBeginDate;	// 0x2f8a4c45
// declared property getter: - (int)transitionDirection;	// 0x2f8a4db9
@end


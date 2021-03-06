/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIInputViewAnimationStyle;

__attribute__((visibility("hidden")))
@interface UIKeyboardRotationState : NSObject {
@private
	int _state;	// 4 = 0x4
	BOOL _requiresNewState;	// 8 = 0x8
	int _postRotationState;	// 12 = 0xc
	UIInputViewAnimationStyle *_animationStyle;	// 16 = 0x10
	int _targetOrientation;	// 20 = 0x14
}
@property(retain, nonatomic) UIInputViewAnimationStyle *animationStyle;	// G=0x32f936e9; S=0x32f936f9; @synthesize=_animationStyle
@property(assign, nonatomic) int postRotationState;	// G=0x32f936c9; S=0x32f936d9; @synthesize=_postRotationState
@property(assign, nonatomic) BOOL requiresNewState;	// G=0x32f936a9; S=0x32f936b9; @synthesize=_requiresNewState
@property(assign, nonatomic) int state;	// G=0x32f93689; S=0x32f93699; @synthesize=_state
@property(assign, nonatomic) int targetOrientation;	// G=0x32f9371d; S=0x32f9372d; @synthesize=_targetOrientation
+ (id)stateWithState:(int)state targetOrientation:(int)orientation;	// 0x32f93571
// declared property getter: - (id)animationStyle;	// 0x32f936e9
- (void)dealloc;	// 0x32f9360d
// declared property getter: - (int)postRotationState;	// 0x32f936c9
// declared property getter: - (BOOL)requiresNewState;	// 0x32f936a9
// declared property setter: - (void)setAnimationStyle:(id)style;	// 0x32f936f9
// declared property setter: - (void)setPostRotationState:(int)state;	// 0x32f936d9
- (void)setPostRotationState:(int)state animationStyle:(id)style;	// 0x32f93651
// declared property setter: - (void)setRequiresNewState:(BOOL)state;	// 0x32f936b9
// declared property setter: - (void)setState:(int)state;	// 0x32f93699
// declared property setter: - (void)setTargetOrientation:(int)orientation;	// 0x32f9372d
// declared property getter: - (int)state;	// 0x32f93689
// declared property getter: - (int)targetOrientation;	// 0x32f9371d
@end


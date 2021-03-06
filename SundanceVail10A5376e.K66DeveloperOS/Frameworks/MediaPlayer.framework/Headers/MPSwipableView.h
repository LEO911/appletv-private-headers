/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "UIGestureRecognizerDelegate.h"
#import "MediaPlayer-Structs.h"
#import <UIView.h> // Unknown library

@class MPTapGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer, MPSwipeGestureRecognizer;
@protocol MPSwipableViewDelegate;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {
	int _enabledGestureTypes;	// 84 = 0x54
	int _simultaneousGestureTypes;	// 88 = 0x58
	id<MPSwipableViewDelegate> _swipeDelegate;	// 92 = 0x5c
	MPTapGestureRecognizer *_tapGestureRecognizer;	// 96 = 0x60
	MPSwipeGestureRecognizer *_swipeGestureRecognizer;	// 100 = 0x64
	MPActivityGestureRecognizer *_activityGestureRecognizer;	// 104 = 0x68
	UIPinchGestureRecognizer *_pinchGestureRecognizer;	// 108 = 0x6c
}
@property(assign, nonatomic) int enabledGestureTypes;	// G=0x36cd209d; S=0x36cd1cb1; @synthesize=_enabledGestureTypes
@property(assign, nonatomic) int simultaneousGestureTypes;	// G=0x36cd20ad; S=0x36cd20bd; @synthesize=_simultaneousGestureTypes
@property(assign, nonatomic) id<MPSwipableViewDelegate> swipeDelegate;	// G=0x36cd207d; S=0x36cd208d; @synthesize=_swipeDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x36cd16d1
- (void)_activityGestureRecognized:(id)recognized;	// 0x36cd1bc5
- (void)_pinchGestureRecognized:(id)recognized;	// 0x36cd1c0d
- (void)_swipeGestureRecognized:(id)recognized;	// 0x36cd1a71
- (void)_tapGestureRecognized:(id)recognized;	// 0x36cd1af5
- (void)_updateGestureRecognizersForEnabledTypes;	// 0x36cd1d49
- (void)addGestureRecognizer:(id)recognizer;	// 0x36cd1935
- (void)dealloc;	// 0x36cd173d
- (void)didMoveToSuperview;	// 0x36cd1a11
// declared property getter: - (int)enabledGestureTypes;	// 0x36cd209d
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x36cd1cd9
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x36cd18a9
- (void)removeGestureRecognizer:(id)recognizer;	// 0x36cd197d
// declared property setter: - (void)setEnabledGestureTypes:(int)types;	// 0x36cd1cb1
// declared property setter: - (void)setSimultaneousGestureTypes:(int)types;	// 0x36cd20bd
// declared property setter: - (void)setSwipeDelegate:(id)delegate;	// 0x36cd208d
// declared property getter: - (int)simultaneousGestureTypes;	// 0x36cd20ad
// declared property getter: - (id)swipeDelegate;	// 0x36cd207d
- (void)willMoveToSuperview:(id)superview;	// 0x36cd19b9
@end


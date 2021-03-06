/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library

@class UIScrollView, NSTimer;

@interface ABAdjusterRecord : NSObject {
	UIScrollView *_scrollView;	// 4 = 0x4
	float _adjustment;	// 8 = 0x8
	BOOL _manuallyAdjusted;	// 12 = 0xc
	NSTimer *_delayedScrollTimer;	// 16 = 0x10
}
@property(assign, nonatomic) float adjustment;	// G=0x309460b5; S=0x309460c5; @synthesize=_adjustment
@property(retain, nonatomic) NSTimer *delayedScrollTimer;	// G=0x309460f5; S=0x30946105; @synthesize=_delayedScrollTimer
@property(assign, nonatomic) BOOL manuallyAdjusted;	// G=0x309460d5; S=0x309460e5; @synthesize=_manuallyAdjusted
@property(retain, nonatomic) UIScrollView *scrollView;	// G=0x30946095; S=0x309460a5; @synthesize=_scrollView
+ (id)recordWithScrollView:(id)scrollView;	// 0x30945ed9
- (void)_adjustTableForKeyboardInfo:(id)keyboardInfo;	// 0x30945fe9
// declared property getter: - (float)adjustment;	// 0x309460b5
- (void)cancelDelayedAdjustments;	// 0x30946059
- (void)dealloc;	// 0x30945f19
// declared property getter: - (id)delayedScrollTimer;	// 0x309460f5
- (unsigned)hash;	// 0x30945fc9
- (BOOL)isEqual:(id)equal;	// 0x30945f8d
// declared property getter: - (BOOL)manuallyAdjusted;	// 0x309460d5
// declared property getter: - (id)scrollView;	// 0x30946095
// declared property setter: - (void)setAdjustment:(float)adjustment;	// 0x309460c5
// declared property setter: - (void)setDelayedScrollTimer:(id)timer;	// 0x30946105
// declared property setter: - (void)setManuallyAdjusted:(BOOL)adjusted;	// 0x309460e5
// declared property setter: - (void)setScrollView:(id)view;	// 0x309460a5
@end


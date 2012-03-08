/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScrollView.h"


__attribute__((visibility("hidden")))
@interface EmojiScrollView : UIScrollView {
@private
	double _delay;	// 404 = 0x194
	BOOL _canDragToScroll;	// 412 = 0x19c
}
@property(assign) double delay;	// G=0x35347c7d; S=0x35347cb1; @synthesize=_delay
- (id)initWithFrame:(CGRect)frame;	// 0x35347b21
- (void)_lookForScrolling;	// 0x35347bfd
- (void)_stopLookingForScrolling;	// 0x35347be9
- (double)_touchDelayForScrollDetection;	// 0x35347ba1
// declared property getter: - (double)delay;	// 0x35347c7d
- (void)setContentOffset:(CGPoint)offset;	// 0x35347bb9
// declared property setter: - (void)setDelay:(double)delay;	// 0x35347cb1
- (BOOL)touchesShouldBegin:(id)touches withEvent:(id)event inContentView:(id)contentView;	// 0x35347c55
- (BOOL)touchesShouldCancelInContentView:(id)touches;	// 0x35347c6d
@end

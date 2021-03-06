/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIView;

@interface UIViewPrintFormatter : UIPrintFormatter {
	UIView *_view;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) UIView *view;	// G=0x2f7e7431; @synthesize=_view
- (id)_initWithView:(id)view;	// 0x2f7e7045
- (int)_recalcPageCount;	// 0x2f7e7139
- (id)copyWithZone:(NSZone *)zone;	// 0x2f7e7099
- (void)dealloc;	// 0x2f7e70ed
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x2f7e7321
- (CGRect)rectForPageAtIndex:(int)index;	// 0x2f7e7215
// declared property getter: - (id)view;	// 0x2f7e7431
@end


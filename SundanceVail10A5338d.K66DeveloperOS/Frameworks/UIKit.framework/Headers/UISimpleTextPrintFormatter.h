/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UITextView, UIWebPaginationInfo, NSString, UIFont, UIColor;

@interface UISimpleTextPrintFormatter : UIPrintFormatter {
	UITextView *_textView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
}
@property(retain, nonatomic) UIColor *color;	// G=0x30f573e9; S=0x30f57409; @dynamic
@property(retain, nonatomic) UIFont *font;	// G=0x30f5735d; S=0x30f5737d; @dynamic
@property(copy, nonatomic) NSString *text;	// G=0x30f572b5; S=0x30f572d5; @dynamic
@property(assign, nonatomic) int textAlignment;	// G=0x30f57465; S=0x30f57485; @dynamic
- (id)initWithText:(id)text;	// 0x30f57069
- (int)_recalcPageCount;	// 0x30f5752d
// declared property getter: - (id)color;	// 0x30f573e9
- (id)copyWithZone:(NSZone *)zone;	// 0x30f57101
- (void)dealloc;	// 0x30f57251
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x30f576d5
// declared property getter: - (id)font;	// 0x30f5735d
- (CGRect)rectForPageAtIndex:(int)index;	// 0x30f57621
- (void)removeFromPrintPageRenderer;	// 0x30f574dd
// declared property setter: - (void)setColor:(id)color;	// 0x30f57409
// declared property setter: - (void)setFont:(id)font;	// 0x30f5737d
// declared property setter: - (void)setText:(id)text;	// 0x30f572d5
// declared property setter: - (void)setTextAlignment:(int)alignment;	// 0x30f57485
// declared property getter: - (id)text;	// 0x30f572b5
// declared property getter: - (int)textAlignment;	// 0x30f57465
@end


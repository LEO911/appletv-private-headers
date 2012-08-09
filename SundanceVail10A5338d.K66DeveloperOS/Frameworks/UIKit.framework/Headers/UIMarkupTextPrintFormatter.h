/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIPrintFormatter.h"

@class UIWebPaginationInfo, NSString, UIWebDocumentView;

@interface UIMarkupTextPrintFormatter : UIPrintFormatter {
	UIWebDocumentView *_webDocumentView;	// 44 = 0x2c
	UIWebPaginationInfo *_paginationInfo;	// 48 = 0x30
	NSString *_markupText;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *markupText;	// G=0x30f57c4d; S=0x30f57935; @synthesize=_markupText
- (id)initWithMarkupText:(id)markupText;	// 0x30f57775
- (int)_recalcPageCount;	// 0x30f57a2d
- (id)copyWithZone:(NSZone *)zone;	// 0x30f5780d
- (void)dealloc;	// 0x30f578d1
- (void)drawInRect:(CGRect)rect forPageAtIndex:(int)index;	// 0x30f57bc1
// declared property getter: - (id)markupText;	// 0x30f57c4d
- (CGRect)rectForPageAtIndex:(int)index;	// 0x30f57b0d
- (void)removeFromPrintPageRenderer;	// 0x30f579dd
// declared property setter: - (void)setMarkupText:(id)text;	// 0x30f57935
@end

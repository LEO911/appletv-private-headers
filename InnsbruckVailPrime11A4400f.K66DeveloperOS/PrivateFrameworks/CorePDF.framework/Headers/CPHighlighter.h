/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import </libobjc.A.h>

@class CPTextLine, CPZone;

@interface CPHighlighter : NSObject {
	CPZone *boundingZone;	// 4 = 0x4
	CPTextLine *textLine;	// 8 = 0x8
	CGColorRef color;	// 12 = 0xc
	CPPDFStyle *style;	// 16 = 0x10
	CPPDFStyle *highlightedStyle;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) CGColorRef color;	// G=0x3060ace1; @synthesize
@property(assign, nonatomic) CPPDFStyle *highlightedStyle;	// G=0x3060ad11; S=0x3060ad21; @synthesize
@property(assign, nonatomic) CPPDFStyle *style;	// G=0x3060acf1; S=0x3060ad01; @synthesize
+ (BOOL)reconstructHighlightFor:(id)aFor;	// 0x3060aa61
- (id)initWithTextLine:(id)textLine inZone:(id)zone ofColor:(CGColorRef)color;	// 0x3060a751
// declared property getter: - (CGColorRef)color;	// 0x3060ace1
- (void)highlight;	// 0x3060a7b5
// declared property getter: - (CPPDFStyle *)highlightedStyle;	// 0x3060ad11
// declared property setter: - (void)setHighlightedStyle:(CPPDFStyle *)style;	// 0x3060ad21
// declared property setter: - (void)setStyle:(CPPDFStyle *)style;	// 0x3060ad01
// declared property getter: - (CPPDFStyle *)style;	// 0x3060acf1
@end


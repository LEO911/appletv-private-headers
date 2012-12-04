/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPhoneBrush.h"

@class MFPhoneBitmap;

@interface MFPhonePatternBrush : MFPhoneBrush {
	MFPhoneBitmap *m_pattern;	// 4 = 0x4
	BOOL m_usePaletteForBilevel;	// 8 = 0x8
}
+ (id)patternBrushWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;	// 0x34ffee0d
- (id)initWithBitmap:(id)bitmap usePaletteForBilevel:(BOOL)bilevel;	// 0x34ffee4d
- (void)dealloc;	// 0x34fff0bd
- (void)fillPath:(id)path :(CGPathRef)arg2;	// 0x34ffeeb1
@end

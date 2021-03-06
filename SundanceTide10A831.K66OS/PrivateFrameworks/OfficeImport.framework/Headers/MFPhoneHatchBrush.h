/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFPhoneBrush.h"

@class TSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {
	TSUColor *m_colour;	// 4 = 0x4
	int m_style;	// 8 = 0x8
}
+ (id)hatchBrushWithColour:(id)colour :(int)arg2;	// 0x36cbe559
- (id)initWithColour:(id)colour :(int)arg2;	// 0x36cbe599
- (void)dealloc;	// 0x36cbe5fd
- (void)fillPath:(id)path :(CGPathRef)arg2;	// 0x36cbe649
@end


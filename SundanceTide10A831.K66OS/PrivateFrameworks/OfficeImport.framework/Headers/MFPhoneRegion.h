/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "MFRegion.h"


@interface MFPhoneRegion : MFRegion {
	CGPathRef m_path;	// 4 = 0x4
	CGRect m_bounds;	// 8 = 0x8
}
- (id)initWithPath:(id)path :(CGRect)arg2;	// 0x36b6e7f9
- (id)initWithRects:(id)rects :(CGRect)arg2 :(id)arg3;	// 0x36b55d79
- (id).cxx_construct;	// 0x36b55d75
- (void)dealloc;	// 0x36b56391
- (int)fill:(id)fill :(id)arg2;	// 0x36cbe75d
- (int)frame:(id)frame :(id)arg2;	// 0x36cbe78d
- (int)invert:(id)invert;	// 0x36cbe791
- (int)setClip:(id)clip :(int)arg2;	// 0x36b55ec5
@end

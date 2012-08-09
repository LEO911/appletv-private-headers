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
- (id)initWithPath:(id)path :(CGRect)arg2;	// 0x31d287d9
- (id)initWithRects:(id)rects :(CGRect)arg2 :(id)arg3;	// 0x31d0fd59
- (id).cxx_construct;	// 0x31d0fd55
- (void)dealloc;	// 0x31d10371
- (int)fill:(id)fill :(id)arg2;	// 0x31e786ad
- (int)frame:(id)frame :(id)arg2;	// 0x31e786dd
- (int)invert:(id)invert;	// 0x31e786e1
- (int)setClip:(id)clip :(int)arg2;	// 0x31d0fea5
@end

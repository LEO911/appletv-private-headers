/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


@interface OADQuadBezierToPathElement : OADPathElement {
	OADAdjustPoint mControlPoint;	// 4 = 0x4
	OADAdjustPoint mToPoint;	// 20 = 0x14
}
- (id)initWithControlPoint:(OADAdjustPoint)controlPoint toPoint:(OADAdjustPoint)point;	// 0x350a8375
- (id).cxx_construct;	// 0x350a843d
- (OADAdjustPoint)controlPoint;	// 0x350a83f5
- (OADAdjustPoint)toPoint;	// 0x350a8419
@end


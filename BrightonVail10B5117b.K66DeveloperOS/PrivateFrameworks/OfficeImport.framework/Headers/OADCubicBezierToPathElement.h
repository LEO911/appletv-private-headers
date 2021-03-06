/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


@interface OADCubicBezierToPathElement : OADPathElement {
	OADAdjustPoint mControlPoint1;	// 4 = 0x4
	OADAdjustPoint mControlPoint2;	// 20 = 0x14
	OADAdjustPoint mToPoint;	// 36 = 0x24
	BOOL mRelative;	// 52 = 0x34
}
@property(assign) BOOL relative;	// G=0x34c2b365; S=0x34b8a84d; converted property
- (id)initWithControlPoint1:(OADAdjustPoint)controlPoint1 controlPoint2:(OADAdjustPoint)a2 toPoint:(OADAdjustPoint)point;	// 0x34b1c1ad
- (id).cxx_construct;	// 0x34b1c1a9
- (OADAdjustPoint)controlPoint1;	// 0x34b1d349
- (OADAdjustPoint)controlPoint2;	// 0x34b1d36d
// converted property getter: - (BOOL)relative;	// 0x34c2b365
// converted property setter: - (void)setRelative:(BOOL)relative;	// 0x34b8a84d
- (OADAdjustPoint)toPoint;	// 0x34b1d325
@end


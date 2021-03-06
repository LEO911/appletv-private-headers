/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADPathElement.h"
#import "OfficeImport-Structs.h"


@interface OADAngleArcPathElement : OADPathElement {
	OADAdjustPoint mCenter;	// 4 = 0x4
	OADAdjustPoint mSemiaxes;	// 20 = 0x14
	OADAdjustCoord mStartAngle;	// 36 = 0x24
	OADAdjustCoord mAngleLength;	// 44 = 0x2c
	BOOL mConnectedToPrevious;	// 52 = 0x34
}
- (id)initWithCenter:(OADAdjustPoint)center semiaxes:(OADAdjustPoint)semiaxes startAngle:(OADAdjustCoord)angle angleLength:(OADAdjustCoord)length connectedToPrevious:(BOOL)previous;	// 0x31dd2459
- (id).cxx_construct;	// 0x31dd25a9
- (OADAdjustCoord)angleLength;	// 0x31dd2581
- (OADAdjustPoint)center;	// 0x31dd2521
- (BOOL)connectedToPrevious;	// 0x31dd2599
- (OADAdjustPoint)semiaxes;	// 0x31dd2545
- (OADAdjustCoord)startAngle;	// 0x31dd2569
@end


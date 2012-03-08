/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "QuartzCore-Structs.h"


@interface CAMediaTimingFunction : NSObject <NSCoding> {
@private
	CAMediaTimingFunctionPrivate *_priv;	// 4 = 0x4
}
+ (id)functionWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x335c0b95
+ (id)functionWithName:(id)name;	// 0x335b6ead
- (id)initWithCoder:(id)coder;	// 0x33630d81
- (id)initWithControlPoints:(float)controlPoints :(float)arg2 :(float)arg3 :(float)arg4;	// 0x335a0e71
- (void)_getPoints:(double *)points;	// 0x33630a55
- (float)_solveForInput:(float)input;	// 0x335c2cfd
- (void)dealloc;	// 0x335a0fb5
- (id)description;	// 0x33630c75
- (void)encodeWithCoder:(id)coder;	// 0x33630cd5
- (void)getControlPointAtIndex:(unsigned long)index values:(float [2])values;	// 0x33630bd9
@end

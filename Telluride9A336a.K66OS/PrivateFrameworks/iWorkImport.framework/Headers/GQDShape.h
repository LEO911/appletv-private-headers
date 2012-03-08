/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDGraphic.h"
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDPath, GQDWPLayoutFrame;

__attribute__((visibility("hidden")))
@interface GQDShape : GQDGraphic <GQDNameMappable> {
@private
	GQDPath *mPath;	// 40 = 0x28
	GQDWPLayoutFrame *mLayoutFrame;	// 44 = 0x2c
}
+ (const StateSpec *)stateForReading;	// 0x30489651
- (id)initWithGraphic:(id)graphic path:(id)path geometry:(id)geometry;	// 0x304a7521
- (CGPathRef)createBezierPath;	// 0x304896b1
- (void)dealloc;	// 0x30489871
- (BOOL)isBlank;	// 0x3048967d
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)angle;	// 0x30489751
- (id)layoutFrame;	// 0x3048965d
- (id)path;	// 0x3048966d
@end

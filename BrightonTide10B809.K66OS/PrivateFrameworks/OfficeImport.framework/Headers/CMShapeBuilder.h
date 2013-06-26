/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, OADOrientedBounds;

@interface CMShapeBuilder : NSObject {
	int _type;	// 4 = 0x4
	OADOrientedBounds *_orientedBounds;	// 8 = 0x8
	int _format;	// 12 = 0xc
	NSDictionary *_adjustValues;	// 16 = 0x10
}
+ (CGRect)canonicalBounds;	// 0x348819fd
- (CGAffineTransform)affineTransform;	// 0x348c1f79
- (CGPathRef)copyShapeWithTransform:(CGAffineTransform)transform;	// 0x349e0c31
- (void)dealloc;	// 0x34881aa1
- (BOOL)isOffice12;	// 0x34888191
- (float)maxAdjustedValue;	// 0x34888161
- (void)setAdjustValues:(id)values;	// 0x348816a1
- (void)setFileFormat:(int)format;	// 0x348816f1
- (void)setOrientedBounds:(id)bounds;	// 0x34881655
- (void)setShapeType:(int)type;	// 0x34881691
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "OfficeImport-Structs.h"

@class OADColor;

@interface OADGradientFillStop : NSObject <NSCopying> {
	OADColor *mColor;	// 4 = 0x4
	float mPosition;	// 8 = 0x8
}
- (id)initWithColor:(id)color position:(float)position;	// 0x34a5f185
- (id)color;	// 0x34a6125d
- (id)copyWithZone:(NSZone *)zone;	// 0x34b36461
- (void)dealloc;	// 0x34a65059
- (unsigned)hash;	// 0x34c26ca1
- (BOOL)isEqual:(id)equal;	// 0x34c26ce5
- (float)position;	// 0x34c26c91
- (void)setStyleColor:(id)color;	// 0x34b36605
@end

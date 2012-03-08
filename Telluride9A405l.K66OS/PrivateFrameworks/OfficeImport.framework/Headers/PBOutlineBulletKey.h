/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"


__attribute__((visibility("hidden")))
@interface PBOutlineBulletKey : NSObject <NSCopying> {
@private
	unsigned mSlideId;	// 4 = 0x4
	int mTextType;	// 8 = 0x8
	unsigned mPlaceholderIndex;	// 12 = 0xc
}
- (id)initWithOutlineBullet:(id)outlineBullet;	// 0x30d3d701
- (id)initWithSlideId:(unsigned long)slideId textType:(int)type placeholderIndex:(unsigned long)index;	// 0x30d3d771
- (id)copyWithZone:(NSZone *)zone;	// 0x30d3d7d1
- (unsigned)hash;	// 0x30d3d7e1
- (BOOL)isEqual:(id)equal;	// 0x30d3d9b1
@end

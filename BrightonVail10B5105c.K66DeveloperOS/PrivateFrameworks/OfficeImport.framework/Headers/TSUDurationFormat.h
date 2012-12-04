/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "TSUDataFormat.h"
#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface TSUDurationFormat : NSObject <NSCopying, TSUDataFormat> {
	NSString *mFormat;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
}
@property(retain) id formatName;	// G=0x37b97d3d; S=0x37b97d4d; converted property
+ (id)formatWithFormat:(id)format name:(id)name;	// 0x37b97a75
- (id)initWithFormat:(id)format name:(id)name;	// 0x37b97ab5
- (id)copyWithZone:(NSZone *)zone;	// 0x37b97b2d
- (void)dealloc;	// 0x37b97b85
- (id)description;	// 0x37b97cd9
- (id)format;	// 0x37b97d2d
// converted property getter: - (id)formatName;	// 0x37b97d3d
- (unsigned)hash;	// 0x37b97c99
- (BOOL)isEqual:(id)equal;	// 0x37b97bfd
// converted property setter: - (void)setFormatName:(id)name;	// 0x37b97d4d
@end

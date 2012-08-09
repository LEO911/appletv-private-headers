/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

#import "CoreLocation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSCoding> {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) XXStruct_zYrK5D center;	// G=0x3290ac3d; 
@property(readonly, assign, nonatomic) XXStruct_PcbLhD clientRegion;	// G=0x3290acd5; 
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x3290ac95; 
@property(readonly, assign, nonatomic) double radius;	// G=0x3290ac6d; 
- (id)initCircularRegionWithCenter:(XXStruct_zYrK5D)center radius:(double)radius identifier:(id)identifier;	// 0x32909e59
- (id)initWithClientRegion:(XXStruct_PcbLhD)clientRegion;	// 0x32909a59
- (id)initWithCoder:(id)coder;	// 0x3290a449
// declared property getter: - (XXStruct_zYrK5D)center;	// 0x3290ac3d
// declared property getter: - (XXStruct_PcbLhD)clientRegion;	// 0x3290acd5
- (BOOL)containsCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3290ad79
- (id)copyWithZone:(NSZone *)zone;	// 0x3290abe9
- (void)dealloc;	// 0x3290a3fd
- (id)description;	// 0x3290ad01
- (void)encodeWithCoder:(id)coder;	// 0x3290aaad
// declared property getter: - (id)identifier;	// 0x3290ac95
// declared property getter: - (double)radius;	// 0x3290ac6d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"


@interface SAMovieResolution : AceObject <SAAceSerializable> {
}
@property(assign, nonatomic) int height;	// G=0x355d8f9d; S=0x355d900d; 
@property(assign, nonatomic) int width;	// G=0x355d9051; S=0x355d90c1; 
+ (id)resolution;	// 0x355d8f0d
+ (id)resolutionWithDictionary:(id)dictionary context:(id)context;	// 0x355d8f51
- (id)encodedClassName;	// 0x355d8f01
- (id)groupIdentifier;	// 0x355d8ef1
// declared property getter: - (int)height;	// 0x355d8f9d
// declared property setter: - (void)setHeight:(int)height;	// 0x355d900d
// declared property setter: - (void)setWidth:(int)width;	// 0x355d90c1
// declared property getter: - (int)width;	// 0x355d9051
@end


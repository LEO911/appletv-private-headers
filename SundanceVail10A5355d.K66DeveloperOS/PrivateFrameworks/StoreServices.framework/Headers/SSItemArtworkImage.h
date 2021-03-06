/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSXPCCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSURL, NSMutableDictionary;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {
	NSMutableDictionary *_dictionary;	// 4 = 0x4
	NSString *_imageKind;	// 8 = 0x8
}
@property(retain, nonatomic) NSURL *URL;	// G=0x3192c3b5; S=0x3192c781; 
@property(readonly, assign, nonatomic) int height;	// G=0x3192c0d1; 
@property(copy, nonatomic) NSString *imageKind;	// G=0x3192c985; S=0x3192c999; @synthesize=_imageKind
@property(readonly, assign, nonatomic) int imageOrientation;	// G=0x3192c179; 
@property(readonly, assign, nonatomic) float imageScale;	// G=0x3192c239; 
@property(readonly, assign, nonatomic) CGSize imageSize;	// G=0x3192c66d; 
@property(readonly, assign, nonatomic, getter=isPrerendered) BOOL prerendered;	// G=0x3192c2a1; 
@property(readonly, assign, nonatomic) int width;	// G=0x3192c30d; 
- (id)initWithArtworkDictionary:(id)artworkDictionary;	// 0x3192c619
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x3192c85d
// declared property getter: - (id)URL;	// 0x3192c3b5
- (void)_setValue:(id)value forKey:(id)key;	// 0x3192c7cd
- (id)copyWithZone:(NSZone *)zone;	// 0x3192c051
- (id)copyXPCEncoding;	// 0x3192c931
- (void)dealloc;	// 0x3192bfed
- (id)description;	// 0x3192c489
- (unsigned)hash;	// 0x3192c579
// declared property getter: - (int)height;	// 0x3192c0d1
// declared property getter: - (id)imageKind;	// 0x3192c985
// declared property getter: - (int)imageOrientation;	// 0x3192c179
// declared property getter: - (float)imageScale;	// 0x3192c239
// declared property getter: - (CGSize)imageSize;	// 0x3192c66d
- (BOOL)isEqual:(id)equal;	// 0x3192c5a1
// declared property getter: - (BOOL)isPrerendered;	// 0x3192c2a1
// declared property setter: - (void)setImageKind:(id)kind;	// 0x3192c999
- (void)setImageKindWithTypeName:(id)typeName variantName:(id)name;	// 0x3192c6b9
// declared property setter: - (void)setURL:(id)url;	// 0x3192c781
- (void)setValue:(id)value forProperty:(id)property;	// 0x3192c7bd
- (id)valueForProperty:(id)property;	// 0x3192c441
// declared property getter: - (int)width;	// 0x3192c30d
@end


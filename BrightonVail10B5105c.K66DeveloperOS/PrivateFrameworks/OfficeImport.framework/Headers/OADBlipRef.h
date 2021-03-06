/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, OADBlip, NSString;

@interface OADBlipRef : NSObject <NSCopying> {
	long mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x3791eb8d; S=0x379eb631; converted property
@property(retain) id effects;	// G=0x37aebf55; S=0x37aeb995; converted property
@property(assign) long index;	// G=0x3791eb9d; S=0x37aeb945; converted property
@property(retain) id name;	// G=0x379905fd; S=0x37aeb955; converted property
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x37990581
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x379905a5
+ (int)blipTypeForContentType:(id)contentType;	// 0x379901c9
+ (int)blipTypeForExtension:(id)extension;	// 0x37aeb9f1
+ (int)blipTypeForImageData:(id)imageData;	// 0x37aebbe5
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x37aebe8d
- (id)init;	// 0x37aeb941
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x3790bbc9
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x3790bbed
- (void)addEffect:(id)effect;	// 0x37922aa5
// converted property getter: - (id)blip;	// 0x3791eb8d
- (id)copyWithZone:(NSZone *)zone;	// 0x37a64f45
- (void)dealloc;	// 0x3792de0d
- (id)effectAtIndex:(unsigned)index;	// 0x37a65291
- (unsigned)effectCount;	// 0x37a65271
// converted property getter: - (id)effects;	// 0x37aebf55
- (unsigned)hash;	// 0x37aebf65
// converted property getter: - (long)index;	// 0x3791eb9d
- (BOOL)isEqual:(id)equal;	// 0x37aec031
- (BOOL)isNull;	// 0x37aebf25
// converted property getter: - (id)name;	// 0x379905fd
- (void)removeEffectAtIndex:(unsigned)index;	// 0x37aeb9d1
// converted property setter: - (void)setBlip:(id)blip;	// 0x379eb631
// converted property setter: - (void)setEffects:(id)effects;	// 0x37aeb995
// converted property setter: - (void)setIndex:(long)index;	// 0x37aeb945
// converted property setter: - (void)setName:(id)name;	// 0x37aeb955
@end


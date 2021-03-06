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

__attribute__((visibility("hidden")))
@interface OADBlipRef : NSObject <NSCopying> {
@private
	long mIndex;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	OADBlip *mBlip;	// 16 = 0x10
}
@property(retain) id blip;	// G=0x3107d225; S=0x31149cc9; converted property
@property(retain) id effects;	// G=0x3124a585; S=0x31249fc5; converted property
@property(assign) long index;	// G=0x3107d235; S=0x31249f75; converted property
@property(retain) id name;	// G=0x310eec95; S=0x31249f85; converted property
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x310eec19
+ (id)blipRefWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x310eec3d
+ (int)blipTypeForContentType:(id)contentType;	// 0x310ee861
+ (int)blipTypeForExtension:(id)extension;	// 0x3124a021
+ (int)blipTypeForImageData:(id)imageData;	// 0x3124a215
+ (id)inflatedExtensionForGzippedExtension:(id)gzippedExtension;	// 0x3124a4bd
- (id)init;	// 0x31249f71
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip;	// 0x3106a261
- (id)initWithIndex:(long)index name:(id)name blip:(id)blip effects:(id)effects;	// 0x3106a285
- (void)addEffect:(id)effect;	// 0x3108113d
// converted property getter: - (id)blip;	// 0x3107d225
- (id)copyWithZone:(NSZone *)zone;	// 0x311c3605
- (void)dealloc;	// 0x3108c4a5
- (id)effectAtIndex:(unsigned)index;	// 0x311c3951
- (unsigned)effectCount;	// 0x311c3931
// converted property getter: - (id)effects;	// 0x3124a585
- (unsigned)hash;	// 0x3124a595
// converted property getter: - (long)index;	// 0x3107d235
- (BOOL)isEqual:(id)equal;	// 0x3124a661
- (BOOL)isNull;	// 0x3124a555
// converted property getter: - (id)name;	// 0x310eec95
- (void)removeEffectAtIndex:(unsigned)index;	// 0x3124a001
// converted property setter: - (void)setBlip:(id)blip;	// 0x31149cc9
// converted property setter: - (void)setEffects:(id)effects;	// 0x31249fc5
// converted property setter: - (void)setIndex:(long)index;	// 0x31249f75
// converted property setter: - (void)setName:(id)name;	// 0x31249f85
@end


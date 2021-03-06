/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary;
@protocol OADColorPalette;

__attribute__((visibility("hidden")))
@interface OABReaderState : NSObject {
@private
	Class mClient;	// 4 = 0x4
	NSMutableDictionary *mShapeIdMap;	// 8 = 0x8
	NSMutableDictionary *mEshContentIdMap;	// 12 = 0xc
	id<OADColorPalette> mColorPalette;	// 16 = 0x10
	NSMutableDictionary *mBlipIdMap;	// 20 = 0x14
}
@property(retain) id colorPalette;	// G=0x35130ed1; S=0x35207731; converted property
- (id)init;	// 0x3542a8c1
- (id)initWithClient:(Class)client;	// 0x351d2441
- (Class)client;	// 0x351a358d
// converted property getter: - (id)colorPalette;	// 0x35130ed1
- (void)dealloc;	// 0x351b2ca5
- (id)drawableForBlipId:(int)blipId;	// 0x3542a8d9
- (id)drawableForShapeId:(int)shapeId;	// 0x351306ad
- (EshContent *)eshContentForId:(int)anId;	// 0x3513070d
// converted property setter: - (void)setColorPalette:(id)palette;	// 0x35207731
- (void)setDrawable:(id)drawable forBlipId:(int)blipId;	// 0x351e8625
- (void)setDrawable:(id)drawable forShapeId:(int)shapeId;	// 0x35130c5d
- (void)setEshContent:(EshContent *)content forId:(int)anId;	// 0x35130cb1
@end


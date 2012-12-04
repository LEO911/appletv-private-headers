/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDrawableMapper.h"

@class OADShape, CMDrawingContext;

@interface PMDrawableMapper : CMDrawableMapper {
	OADShape *mShape;	// 80 = 0x50
	CMDrawingContext *mDrawingContext;	// 84 = 0x54
	BOOL mTopLevelMapper;	// 88 = 0x58
}
@property(retain) id drawingContext;	// G=0x34edec71; S=0x34ed3449; converted property
@property(assign, getter=isTopLevelMapper) BOOL topLevelMapper;	// G=0x34ed3199; S=0x34ed3319; converted property
+ (id)orientedBoundsForDrawable:(id)drawable;	// 0x34ed21d9
- (void)dealloc;	// 0x34ed31a9
// converted property getter: - (id)drawingContext;	// 0x34edec71
// converted property getter: - (BOOL)isTopLevelMapper;	// 0x34ed3199
- (void)mapAt:(id)at withState:(id)state;	// 0x34ed1a4d
- (void)mapBounds;	// 0x34ed2039
- (void)mapChartAt:(id)at withState:(id)state;	// 0x34ffaf61
- (void)mapDiagramAt:(id)at withState:(id)state;	// 0x34fb9851
- (void)mapFreeForm:(id)form orientedBounds:(id)bounds transformedBounds:(CGRect *)bounds3 state:(id)state;	// 0x34f99685
- (void)mapOfficeArtGroupAt:(id)at withState:(id)state;	// 0x34ede709
- (void)mapOfficeArtImageAt:(id)at withState:(id)state;	// 0x34ed225d
- (void)mapOfficeArtShapeAt:(id)at withState:(id)state;	// 0x34ed3485
- (void)mapRectangularShapeAt:(id)at withState:(id)state;	// 0x34ed39fd
- (void)mapShapeAsBackgroundAt:(id)at withState:(id)state;	// 0x34ed8145
// converted property setter: - (void)setDrawingContext:(id)context;	// 0x34ed3449
// converted property setter: - (void)setTopLevelMapper:(BOOL)mapper;	// 0x34ed3319
- (CGRect)shapeTextBoxWithState:(id)state;	// 0x34ed918d
- (CGRect)slideRect;	// 0x350408a1
- (CGRect)transformRectToPage:(CGRect)page;	// 0x34ed286d
@end

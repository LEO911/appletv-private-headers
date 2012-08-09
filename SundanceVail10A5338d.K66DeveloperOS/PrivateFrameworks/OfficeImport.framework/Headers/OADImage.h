/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADMovie, OADShapeGeometry, OADOle;

@interface OADImage : OADGraphic {
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADOle *mOle;	// 32 = 0x20
	OADMovie *mMovie;	// 36 = 0x24
}
@property(retain) id geometry;	// G=0x33ba1fb5; S=0x33a40465; converted property
@property(retain) id movie;	// G=0x339cdcc9; S=0x33b1fc5d; converted property
@property(retain) id ole;	// G=0x33a41391; S=0x33a9def5; converted property
- (id)init;	// 0x33975cb5
- (id)initWithBlipRef:(id)blipRef;	// 0x33ba1ee1
- (id)createImageFill;	// 0x33ba1fc5
- (void)createPictureFramePresetGeometry;	// 0x33ba2139
- (void)dealloc;	// 0x339dd5b5
// converted property getter: - (id)geometry;	// 0x33ba1fb5
- (id)imageProperties;	// 0x339bac69
// converted property getter: - (id)movie;	// 0x339cdcc9
// converted property getter: - (id)ole;	// 0x33a41391
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x33a40465
// converted property setter: - (void)setMovie:(id)movie;	// 0x33b1fc5d
// converted property setter: - (void)setOle:(id)ole;	// 0x33a9def5
- (void)setParentTextListStyle:(id)style;	// 0x339bff5d
@end

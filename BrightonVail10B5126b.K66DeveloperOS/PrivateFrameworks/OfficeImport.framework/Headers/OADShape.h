/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OADGraphic.h"

@class OADTextBody, OADShapeGeometry;

@interface OADShape : OADGraphic {
	OADShapeGeometry *mGeometry;	// 28 = 0x1c
	OADTextBody *mTextBody;	// 32 = 0x20
}
@property(retain) id geometry;	// G=0x34879971; S=0x3486779d; converted property
@property(retain) id textBody;	// G=0x348699d1; S=0x348693b9; converted property
- (id)init;	// 0x34866fa5
- (void)createPresetGeometryWithShapeType:(int)shapeType;	// 0x34a4fba5
- (void)dealloc;	// 0x34887a99
- (void)flattenProperties;	// 0x34a4fb59
// converted property getter: - (id)geometry;	// 0x34879971
- (void)removeUnnecessaryOverrides;	// 0x3486bacd
// converted property setter: - (void)setGeometry:(id)geometry;	// 0x3486779d
- (void)setParentTextListStyle:(id)style;	// 0x3486a93d
// converted property setter: - (void)setTextBody:(id)body;	// 0x348693b9
- (id)shapeProperties;	// 0x3486f539
// converted property getter: - (id)textBody;	// 0x348699d1
- (int)type;	// 0x348798fd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDKeyedObject.h"
#import <NSObject.h> // Unknown library

@class OADGraphicProperties, CHDDataLabel, CHDMarker;

@interface CHDDataValueProperties : NSObject <EDKeyedObject> {
	CHDDataLabel *mDataLabel;	// 4 = 0x4
	CHDMarker *mMarker;	// 8 = 0x8
	unsigned mDataValueIndex;	// 12 = 0xc
	OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}
@property(retain) id dataLabel;	// G=0x33b482b9; S=0x33ad8271; converted property
@property(assign) unsigned dataValueIndex;	// G=0x33ad608d; S=0x33acaa59; converted property
@property(retain) id graphicProperties;	// G=0x33acb665; S=0x33acabbd; converted property
@property(retain) id marker;	// G=0x33b482c9; S=0x33acb069; converted property
+ (id)dataValueProperties;	// 0x33ad8229
- (id)init;	// 0x33acaa15
// converted property getter: - (id)dataLabel;	// 0x33b482b9
// converted property getter: - (unsigned)dataValueIndex;	// 0x33ad608d
- (void)dealloc;	// 0x33ad8605
// converted property getter: - (id)graphicProperties;	// 0x33acb665
- (int)key;	// 0x33acb0ad
// converted property getter: - (id)marker;	// 0x33b482c9
// converted property setter: - (void)setDataLabel:(id)label;	// 0x33ad8271
// converted property setter: - (void)setDataValueIndex:(unsigned)index;	// 0x33acaa59
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x33acabbd
// converted property setter: - (void)setMarker:(id)marker;	// 0x33acb069
- (id)shallowCopyWithIndex:(int)index;	// 0x33ad817d
@end


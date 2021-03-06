/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADTextBodyProperties, OADShapeProperties, OADTextListStyle;

@interface OADDefaultProperties : NSObject {
	OADShapeProperties *mShapeProperties;	// 4 = 0x4
	OADTextBodyProperties *mTextBodyProperties;	// 8 = 0x8
	OADTextListStyle *mTextListStyle;	// 12 = 0xc
}
@property(retain) id shapeProperties;	// G=0x3481c3b9; S=0x3481f675; converted property
@property(retain) id textBodyProperties;	// G=0x3495c915; S=0x34a5675d; converted property
@property(retain) id textListStyle;	// G=0x3481f7d9; S=0x3481f7e9; converted property
- (id)init;	// 0x3481a901
- (id)initWithDefaults;	// 0x34a5669d
- (void)dealloc;	// 0x3488b2a1
// converted property setter: - (void)setShapeProperties:(id)properties;	// 0x3481f675
// converted property setter: - (void)setTextBodyProperties:(id)properties;	// 0x34a5675d
// converted property setter: - (void)setTextListStyle:(id)style;	// 0x3481f7e9
// converted property getter: - (id)shapeProperties;	// 0x3481c3b9
// converted property getter: - (id)textBodyProperties;	// 0x3495c915
// converted property getter: - (id)textListStyle;	// 0x3481f7d9
@end


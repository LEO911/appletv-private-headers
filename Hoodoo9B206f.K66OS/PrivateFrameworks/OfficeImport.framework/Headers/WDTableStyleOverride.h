/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDTableCellProperties, WDCharacterProperties, WDStyle, WDTableRowProperties, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDTableStyleOverride : NSObject <NSCopying> {
@private
	WDDocument *mDocument;	// 4 = 0x4
	WDStyle *mStyle;	// 8 = 0x8
	int mPart;	// 12 = 0xc
	WDParagraphProperties *mParagraphProperties;	// 16 = 0x10
	WDCharacterProperties *mCharacterProperties;	// 20 = 0x14
	WDTableRowProperties *mTableRowProperties;	// 24 = 0x18
	WDTableCellProperties *mTableCellStyleProperties;	// 28 = 0x1c
	unsigned mParagraphPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mCharacterPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableRowPropertiesOverridden : 1;	// 32 = 0x20
	unsigned mTableCellStylePropertiesOverridden : 1;	// 32 = 0x20
}
@property(assign, getter=isCharacterPropertiesOverridden) BOOL characterPropertiesOverridden;	// G=0x3460f989; S=0x3460f9a5; converted property
@property(assign, getter=isParagraphPropertiesOverridden) BOOL paragraphPropertiesOverridden;	// G=0x3460f941; S=0x3460f95d; converted property
@property(assign) int part;	// G=0x3460f921; S=0x344c3d05; converted property
@property(retain) id style;	// G=0x3460f911; S=0x344c443d; converted property
@property(assign, getter=isTableCellStylePropertiesOverridden) BOOL tableCellStylePropertiesOverridden;	// G=0x3460fa3d; S=0x3460fa59; converted property
@property(assign, getter=isTableRowPropertiesOverridden) BOOL tableRowPropertiesOverridden;	// G=0x3460f9f1; S=0x3460fa0d; converted property
- (id)initWithDocument:(id)document;	// 0x344c3cc5
- (id)characterProperties;	// 0x3460f979
- (id)copyWithZone:(NSZone *)zone;	// 0x3460fa79
- (void)dealloc;	// 0x344c559d
// converted property getter: - (BOOL)isCharacterPropertiesOverridden;	// 0x3460f989
// converted property getter: - (BOOL)isParagraphPropertiesOverridden;	// 0x3460f941
// converted property getter: - (BOOL)isTableCellStylePropertiesOverridden;	// 0x3460fa3d
- (BOOL)isTablePropertiesOverridden;	// 0x3460f9c5
// converted property getter: - (BOOL)isTableRowPropertiesOverridden;	// 0x3460f9f1
- (id)mutableCharacterProperties;	// 0x34574421
- (id)mutableParagraphProperties;	// 0x3460fc05
- (id)mutableTableCellStyleProperties;	// 0x345745ad
- (id)mutableTableRowProperties;	// 0x34574541
- (id)paragraphProperties;	// 0x3460f931
// converted property getter: - (int)part;	// 0x3460f921
// converted property setter: - (void)setCharacterPropertiesOverridden:(BOOL)overridden;	// 0x3460f9a5
// converted property setter: - (void)setParagraphPropertiesOverridden:(BOOL)overridden;	// 0x3460f95d
// converted property setter: - (void)setPart:(int)part;	// 0x344c3d05
// converted property setter: - (void)setStyle:(id)style;	// 0x344c443d
// converted property setter: - (void)setTableCellStylePropertiesOverridden:(BOOL)overridden;	// 0x3460fa59
// converted property setter: - (void)setTableRowPropertiesOverridden:(BOOL)overridden;	// 0x3460fa0d
// converted property getter: - (id)style;	// 0x3460f911
- (id)tableCellStyleProperties;	// 0x3460fa2d
- (id)tableProperties;	// 0x3460fbe5
- (id)tableRowProperties;	// 0x3460f9e1
@end


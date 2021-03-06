/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, NSMutableArray, WDCharacterProperties, WDStyle, NSMutableDictionary, WDParagraphProperties;

__attribute__((visibility("hidden")))
@interface WDStyleSheet : NSObject {
@private
	NSMutableDictionary *mStyleDictionary;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDCharacterProperties *mDefaultCharacterProperties;	// 12 = 0xc
	WDParagraphProperties *mDefaultParagraphProperties;	// 16 = 0x10
	WDStyle *mDefaultParagraphStyle;	// 20 = 0x14
	WDStyle *mDefaultCharacterStyle;	// 24 = 0x18
	WDStyle *mDefaultTableStyle;	// 28 = 0x1c
	WDStyle *mDefaultListStyle;	// 32 = 0x20
	NSMutableArray *mStylesInOrder;	// 36 = 0x24
	NSMutableDictionary *mIdDictionaryForName;	// 40 = 0x28
}
@property(retain) id defaultCharacterStyle;	// G=0x329c92b1; S=0x3285f775; converted property
@property(retain) id defaultListStyle;	// G=0x328c42a5; S=0x3285f7fd; converted property
@property(retain) id defaultParagraphStyle;	// G=0x328bfe35; S=0x3285f6dd; converted property
@property(retain) id defaultTableStyle;	// G=0x329c92c1; S=0x3285f7b9; converted property
- (id)initWithDocument:(id)document;	// 0x32850045
- (void)addStyle:(id)style name:(id)name;	// 0x328c2685
- (void)createDefaultStyles;	// 0x329c92d1
- (id)createStyleWithId:(id)anId type:(int)type;	// 0x3285f365
- (id)createStyleWithName:(id)name type:(int)type;	// 0x329c972d
- (void)dealloc;	// 0x327d62fd
- (id)defaultCharacterProperties;	// 0x32861601
// converted property getter: - (id)defaultCharacterStyle;	// 0x329c92b1
// converted property getter: - (id)defaultListStyle;	// 0x328c42a5
- (id)defaultParagraphProperties;	// 0x32931795
// converted property getter: - (id)defaultParagraphStyle;	// 0x328bfe35
// converted property getter: - (id)defaultTableStyle;	// 0x329c92c1
- (id)document;	// 0x328508e1
- (void)initializeDefaultProperties;	// 0x3285012d
- (id)paragraphStyleWithStartingName:(id)startingName;	// 0x329c9761
- (void)removeStyleWithId:(id)anId;	// 0x329c967d
// converted property setter: - (void)setDefaultCharacterStyle:(id)style;	// 0x3285f775
// converted property setter: - (void)setDefaultListStyle:(id)style;	// 0x3285f7fd
// converted property setter: - (void)setDefaultParagraphStyle:(id)style;	// 0x3285f6dd
// converted property setter: - (void)setDefaultTableStyle:(id)style;	// 0x3285f7b9
- (void)setName:(id)name forId:(id)anId;	// 0x3285f695
- (int)styleCount;	// 0x329c98ed
- (id)styleIdForName:(id)name;	// 0x3285f2fd
- (id)styleIdFromStyleName:(id)styleName;	// 0x329c9845
- (id)styleNameToId:(id)anId;	// 0x3285f29d
- (id)styleWithId:(id)anId;	// 0x3285f341
- (id)styleWithName:(id)name;	// 0x329c9815
- (id)styles;	// 0x329c990d
@end


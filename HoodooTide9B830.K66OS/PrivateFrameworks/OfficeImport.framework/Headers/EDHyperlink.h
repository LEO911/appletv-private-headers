/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDReference;

__attribute__((visibility("hidden")))
@interface EDHyperlink : NSObject {
@private
	EDString *mPath;	// 4 = 0x4
	EDString *mDosPath;	// 8 = 0x8
	EDString *mDescriptionText;	// 12 = 0xc
	EDString *mTextMark;	// 16 = 0x10
	EDString *mToolTip;	// 20 = 0x14
	EDReference *mReference;	// 24 = 0x18
	int mType;	// 28 = 0x1c
}
@property(retain) id descriptionText;	// G=0x31334071; S=0x312976b9; converted property
@property(retain) id dosPath;	// G=0x31334061; S=0x31297749; converted property
@property(retain) id path;	// G=0x312ed44d; S=0x31297701; converted property
@property(retain) id reference;	// G=0x313340a1; S=0x312977d9; converted property
@property(retain) id textMark;	// G=0x31334081; S=0x31297791; converted property
@property(retain) id toolTip;	// G=0x31334091; S=0x312e6ff9; converted property
@property(assign) int type;	// G=0x313340b1; S=0x312976a9; converted property
+ (id)hyperlink;	// 0x312ed405
- (void)dealloc;	// 0x31298c1d
// converted property getter: - (id)descriptionText;	// 0x31334071
// converted property getter: - (id)dosPath;	// 0x31334061
// converted property getter: - (id)path;	// 0x312ed44d
// converted property getter: - (id)reference;	// 0x313340a1
// converted property setter: - (void)setDescriptionText:(id)text;	// 0x312976b9
// converted property setter: - (void)setDosPath:(id)path;	// 0x31297749
// converted property setter: - (void)setPath:(id)path;	// 0x31297701
// converted property setter: - (void)setReference:(id)reference;	// 0x312977d9
// converted property setter: - (void)setTextMark:(id)mark;	// 0x31297791
// converted property setter: - (void)setToolTip:(id)tip;	// 0x312e6ff9
// converted property setter: - (void)setType:(int)type;	// 0x312976a9
// converted property getter: - (id)textMark;	// 0x31334081
// converted property getter: - (id)toolTip;	// 0x31334091
// converted property getter: - (int)type;	// 0x313340b1
@end

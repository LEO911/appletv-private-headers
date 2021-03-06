/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class WDDocument, WDText, WDAContent;

@interface WDATextBox : NSObject {
	WDText *mText;	// 4 = 0x4
	unsigned long mNextTextBoxId;	// 8 = 0x8
	bool mOle;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDAContent *mParent;	// 20 = 0x14
}
@property(retain) id document;	// G=0x36b18bd1; S=0x36ac0805; converted property
@property(assign) unsigned long nextTextBoxId;	// G=0x36ac07f5; S=0x36b12fa1; converted property
@property(assign, getter=isOle) BOOL ole;	// G=0x36b18e91; S=0x36b12f55; converted property
@property(retain) id parent;	// G=0x36b18ba1; S=0x36ac076d; converted property
@property(retain) id text;	// G=0x36aceb79; S=0x36ac077d; converted property
- (id)init;	// 0x36ac0741
- (void)dealloc;	// 0x36acfeb5
// converted property getter: - (id)document;	// 0x36b18bd1
// converted property getter: - (BOOL)isOle;	// 0x36b18e91
// converted property getter: - (unsigned long)nextTextBoxId;	// 0x36ac07f5
// converted property getter: - (id)parent;	// 0x36b18ba1
// converted property setter: - (void)setDocument:(id)document;	// 0x36ac0805
// converted property setter: - (void)setNextTextBoxId:(unsigned long)anId;	// 0x36b12fa1
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x36b12f55
// converted property setter: - (void)setParent:(id)parent;	// 0x36ac076d
// converted property setter: - (void)setText:(id)text;	// 0x36ac077d
// converted property getter: - (id)text;	// 0x36aceb79
@end


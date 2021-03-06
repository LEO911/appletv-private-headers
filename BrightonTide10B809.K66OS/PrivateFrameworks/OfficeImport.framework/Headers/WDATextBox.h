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
@property(retain) id document;	// G=0x34951bd1; S=0x348f9805; converted property
@property(assign) unsigned long nextTextBoxId;	// G=0x348f97f5; S=0x3494bfa1; converted property
@property(assign, getter=isOle) BOOL ole;	// G=0x34951e91; S=0x3494bf55; converted property
@property(retain) id parent;	// G=0x34951ba1; S=0x348f976d; converted property
@property(retain) id text;	// G=0x34907b79; S=0x348f977d; converted property
- (id)init;	// 0x348f9741
- (void)dealloc;	// 0x34908eb5
// converted property getter: - (id)document;	// 0x34951bd1
// converted property getter: - (BOOL)isOle;	// 0x34951e91
// converted property getter: - (unsigned long)nextTextBoxId;	// 0x348f97f5
// converted property getter: - (id)parent;	// 0x34951ba1
// converted property setter: - (void)setDocument:(id)document;	// 0x348f9805
// converted property setter: - (void)setNextTextBoxId:(unsigned long)anId;	// 0x3494bfa1
// converted property setter: - (void)setOle:(BOOL)ole;	// 0x3494bf55
// converted property setter: - (void)setParent:(id)parent;	// 0x348f976d
// converted property setter: - (void)setText:(id)text;	// 0x348f977d
// converted property getter: - (id)text;	// 0x34907b79
@end


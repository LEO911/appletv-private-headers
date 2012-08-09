/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OADTextClient.h"
#import "OfficeImport-Structs.h"
#import "OADClient.h"

@class EDComment, EDSheet, EDAnchor, NSMutableDictionary, EDTextBox;

@interface EDOfficeArtClient : NSObject <OADClient, OADTextClient> {
	EDSheet *mSheet;	// 4 = 0x4
	id mClientState;	// 8 = 0x8
	EDAnchor *mAnchor;	// 12 = 0xc
	EDTextBox *mTextBox;	// 16 = 0x10
	EDComment *mComment;	// 20 = 0x14
	NSMutableDictionary *mTableModels;	// 24 = 0x18
	CGRect mBounds;	// 28 = 0x1c
	bool mIsBoundsSet;	// 44 = 0x2c
}
@property(retain) id anchor;	// G=0x33a0e4bd; S=0x33a06689; converted property
@property(assign) CGRect bounds;	// G=0x33a1c08d; S=0x33a19c9d; converted property
@property(retain) id clientState;	// G=0x33b7f249; S=0x33b7f259; converted property
@property(retain) id comment;	// G=0x33a13e85; S=0x33afbdf9; converted property
@property(retain) id sheet;	// G=0x33b7f2b1; S=0x33acd199; converted property
@property(retain) id tableModels;	// G=0x33b7f2c1; S=0x33b7f2d1; converted property
@property(retain) id textBox;	// G=0x33a1b751; S=0x33a19a0d; converted property
- (id)init;	// 0x33a064bd
- (id).cxx_construct;	// 0x33a064b9
// converted property getter: - (id)anchor;	// 0x33a0e4bd
- (bool)areBoundsSet;	// 0x33b7f29d
// converted property getter: - (CGRect)bounds;	// 0x33a1c08d
// converted property getter: - (id)clientState;	// 0x33b7f249
// converted property getter: - (id)comment;	// 0x33a13e85
- (void)dealloc;	// 0x33a15ea1
- (BOOL)hasBounds;	// 0x33a0e4a9
- (BOOL)hasText;	// 0x33a15335
// converted property setter: - (void)setAnchor:(id)anchor;	// 0x33a06689
// converted property setter: - (void)setBounds:(CGRect)bounds;	// 0x33a19c9d
// converted property setter: - (void)setClientState:(id)state;	// 0x33b7f259
// converted property setter: - (void)setComment:(id)comment;	// 0x33afbdf9
// converted property setter: - (void)setSheet:(id)sheet;	// 0x33acd199
// converted property setter: - (void)setTableModels:(id)models;	// 0x33b7f2d1
// converted property setter: - (void)setTextBox:(id)box;	// 0x33a19a0d
// converted property getter: - (id)sheet;	// 0x33b7f2b1
// converted property getter: - (id)tableModels;	// 0x33b7f2c1
// converted property getter: - (id)textBox;	// 0x33a1b751
@end

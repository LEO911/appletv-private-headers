/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterRun, WDText;

__attribute__((visibility("hidden")))
@interface WDNote : WDRun {
@private
	WDText *mText;	// 8 = 0x8
	WDCharacterRun *mReference;	// 12 = 0xc
	BOOL mAutomaticNumbering;	// 16 = 0x10
}
@property(assign) BOOL automaticNumbering;	// G=0x34601949; S=0x344c5cad; converted property
- (id)initWithParagraph:(id)paragraph footnote:(BOOL)footnote;	// 0x344c57f9
// converted property getter: - (BOOL)automaticNumbering;	// 0x34601949
- (void)dealloc;	// 0x344c7ce1
- (id)reference;	// 0x344c5cbd
- (int)runType;	// 0x344c792d
// converted property setter: - (void)setAutomaticNumbering:(BOOL)numbering;	// 0x344c5cad
- (id)text;	// 0x344c5c9d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface WDFormField : WDRun {
@private
	unsigned mPosition;	// 8 = 0x8
	BOOL mLinkAbsolute;	// 12 = 0xc
	BOOL mLinkSpecifyingNamedLocation;	// 13 = 0xd
	NSString *mNamedLocation;	// 16 = 0x10
	NSString *mURI;	// 20 = 0x14
	NSString *mMacName;	// 24 = 0x18
	NSString *mDosName;	// 28 = 0x1c
}
@property(retain) id URI;	// G=0x31affdf9; S=0x31affec9; converted property
@property(retain) id dosName;	// G=0x31affe19; S=0x31affe59; converted property
@property(assign) BOOL linkAbsolute;	// G=0x31affda9; S=0x31affdb9; converted property
@property(assign) BOOL linkSpecifyingNamedLocation;	// G=0x31affdc9; S=0x31affdd9; converted property
@property(retain) id macName;	// G=0x31affe09; S=0x31affe91; converted property
@property(retain) id namedLocation;	// G=0x31affde9; S=0x31afff01; converted property
@property(assign) unsigned long position;	// G=0x31affd89; S=0x31affd99; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x31affe2d
// converted property getter: - (id)URI;	// 0x31affdf9
- (void)dealloc;	// 0x31afff39
// converted property getter: - (id)dosName;	// 0x31affe19
// converted property getter: - (BOOL)linkAbsolute;	// 0x31affda9
// converted property getter: - (BOOL)linkSpecifyingNamedLocation;	// 0x31affdc9
// converted property getter: - (id)macName;	// 0x31affe09
// converted property getter: - (id)namedLocation;	// 0x31affde9
// converted property getter: - (unsigned long)position;	// 0x31affd89
- (int)runType;	// 0x31affe29
// converted property setter: - (void)setDosName:(id)name;	// 0x31affe59
// converted property setter: - (void)setLinkAbsolute:(BOOL)absolute;	// 0x31affdb9
// converted property setter: - (void)setLinkSpecifyingNamedLocation:(BOOL)location;	// 0x31affdd9
// converted property setter: - (void)setMacName:(id)name;	// 0x31affe91
// converted property setter: - (void)setNamedLocation:(id)location;	// 0x31afff01
// converted property setter: - (void)setPosition:(unsigned long)position;	// 0x31affd99
// converted property setter: - (void)setURI:(id)uri;	// 0x31affec9
@end


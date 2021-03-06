/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegendEntry : NSObject {
@private
	unsigned mFontIndex;	// 4 = 0x4
	unsigned mEntryIndex;	// 8 = 0x8
	EDResources *mResources;	// 12 = 0xc
}
@property(assign) unsigned entryIndex;	// G=0x34de3bfd; S=0x34d65265; converted property
@property(retain) id font;	// G=0x34de3c65; S=0x34de3c1d; converted property
@property(assign) unsigned fontIndex;	// G=0x34de3c0d; S=0x34d6bd49; converted property
- (id)initWithResources:(id)resources;	// 0x34d651ed
- (void)dealloc;	// 0x34d65ebd
// converted property getter: - (unsigned)entryIndex;	// 0x34de3bfd
// converted property getter: - (id)font;	// 0x34de3c65
// converted property getter: - (unsigned)fontIndex;	// 0x34de3c0d
// converted property setter: - (void)setEntryIndex:(unsigned)index;	// 0x34d65265
// converted property setter: - (void)setFont:(id)font;	// 0x34de3c1d
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x34d6bd49
@end


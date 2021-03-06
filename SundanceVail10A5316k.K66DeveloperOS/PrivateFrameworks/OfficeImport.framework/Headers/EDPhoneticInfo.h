/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "EDImmutableObject.h"
#import <NSObject.h> // Unknown library

@class EDResources, EDCollection, NSString;

__attribute__((visibility("hidden")))
@interface EDPhoneticInfo : NSObject <EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	unsigned mFontIndex;	// 8 = 0x8
	NSString *mString;	// 12 = 0xc
	int mType;	// 16 = 0x10
	int mAlign;	// 20 = 0x14
	EDCollection *mRuns;	// 24 = 0x18
	bool mDoNotModify;	// 28 = 0x1c
}
@property(assign) int align;	// G=0x3122eaf5; S=0x3122eb05; converted property
@property(retain) id font;	// G=0x3122eb95; S=0x3122ebdd; converted property
@property(assign) unsigned fontIndex;	// G=0x3122ec5d; S=0x3122ec6d; converted property
@property(retain) id string;	// G=0x3122eb2d; S=0x3122eb3d; converted property
@property(assign) int type;	// G=0x3122eabd; S=0x3122eacd; converted property
+ (id)phoneticInfoWithResources:(id)resources;	// 0x3122e8b1
- (id)initWithResources:(id)resources;	// 0x3122e845
// converted property getter: - (int)align;	// 0x3122eaf5
- (void)dealloc;	// 0x3122e8fd
// converted property getter: - (id)font;	// 0x3122eb95
// converted property getter: - (unsigned)fontIndex;	// 0x3122ec5d
- (unsigned)hash;	// 0x3122ea61
- (BOOL)isEqual:(id)equal;	// 0x3122ea05
- (BOOL)isEqualToEDPhoneticInfo:(id)edphoneticInfo;	// 0x3122e961
- (id)runs;	// 0x3122ec3d
// converted property setter: - (void)setAlign:(int)align;	// 0x3122eb05
- (void)setDoNotModify:(bool)modify;	// 0x3122ec4d
// converted property setter: - (void)setFont:(id)font;	// 0x3122ebdd
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x3122ec6d
// converted property setter: - (void)setString:(id)string;	// 0x3122eb3d
// converted property setter: - (void)setType:(int)type;	// 0x3122eacd
// converted property getter: - (id)string;	// 0x3122eb2d
// converted property getter: - (int)type;	// 0x3122eabd
@end


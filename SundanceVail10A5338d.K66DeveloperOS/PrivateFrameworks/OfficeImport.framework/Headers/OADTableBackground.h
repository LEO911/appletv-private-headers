/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADEffectsParent.h"
#import <NSObject.h> // Unknown library

@class NSArray, OADFill;

@interface OADTableBackground : NSObject <OADEffectsParent> {
	OADFill *mFill;	// 4 = 0x4
	NSArray *mEffects;	// 8 = 0x8
}
@property(retain) id effects;	// G=0x33ba6b41; S=0x33b04a31; converted property
@property(retain) id fill;	// G=0x33b04b6d; S=0x33b048c1; converted property
- (void)dealloc;	// 0x33b04ca9
// converted property getter: - (id)effects;	// 0x33ba6b41
// converted property getter: - (id)fill;	// 0x33b04b6d
- (BOOL)hasEffects;	// 0x33ba6b51
// converted property setter: - (void)setEffects:(id)effects;	// 0x33b04a31
// converted property setter: - (void)setFill:(id)fill;	// 0x33b048c1
@end


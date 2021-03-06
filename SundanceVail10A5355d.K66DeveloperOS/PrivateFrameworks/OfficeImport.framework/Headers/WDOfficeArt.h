/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, OADDrawable;

@interface WDOfficeArt : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	OADDrawable *mDrawable;	// 12 = 0xc
	bool mFloating;	// 16 = 0x10
}
@property(retain) id drawable;	// G=0x31c6fc75; S=0x31c6eee9; converted property
@property(assign, getter=isFloating) bool floating;	// G=0x31c6fc9d; S=0x31c6fc51; converted property
@property(retain) id imageBlipRef;	// G=0x31e324b1; S=0x31e32535; converted property
@property(retain) id properties;	// G=0x31c74585; S=0x31c6c1f9; converted property
+ (int)textBoxTextTypeForRegularTextType:(int)regularTextType;	// 0x31e326fd
- (id)initWithParagraph:(id)paragraph;	// 0x31c6c091
- (void)checkForFloating:(id)floating;	// 0x31cb2919
- (void)clearDrawable;	// 0x31e32485
- (void)clearProperties;	// 0x31e32455
- (void)dealloc;	// 0x31c74595
// converted property getter: - (id)drawable;	// 0x31c6fc75
// converted property getter: - (id)imageBlipRef;	// 0x31e324b1
- (id)imageData;	// 0x31e325b5
- (id)imageName;	// 0x31e32669
- (BOOL)isDrawableOverridden;	// 0x31c6fc85
// converted property getter: - (bool)isFloating;	// 0x31c6fc9d
- (id)overrideDrawable;	// 0x31e32481
- (void)propagateTextTypeToDrawables;	// 0x31c6fce1
// converted property getter: - (id)properties;	// 0x31c74585
- (int)runType;	// 0x31c7f80d
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x31c6eee9
// converted property setter: - (void)setFloating:(bool)floating;	// 0x31c6fc51
// converted property setter: - (void)setImageBlipRef:(id)ref;	// 0x31e32535
// converted property setter: - (void)setProperties:(id)properties;	// 0x31c6c1f9
- (void)setTextType:(int)type recursivelyToDrawable:(id)drawable;	// 0x31c6fd59
@end


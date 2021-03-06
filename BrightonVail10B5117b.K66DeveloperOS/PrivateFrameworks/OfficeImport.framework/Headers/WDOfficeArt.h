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
@property(retain) id drawable;	// G=0x34ac8cbd; S=0x34ac7f31; converted property
@property(assign, getter=isFloating) bool floating;	// G=0x34ac8ce5; S=0x34ac8c99; converted property
@property(retain) id imageBlipRef;	// G=0x34c8b55d; S=0x34c8b5e1; converted property
@property(retain) id properties;	// G=0x34acd5cd; S=0x34ac5241; converted property
+ (int)textBoxTextTypeForRegularTextType:(int)regularTextType;	// 0x34c8b7a9
- (id)initWithParagraph:(id)paragraph;	// 0x34ac50d9
- (void)checkForFloating:(id)floating;	// 0x34b0b961
- (void)clearDrawable;	// 0x34c8b531
- (void)clearProperties;	// 0x34c8b501
- (void)dealloc;	// 0x34acd5dd
// converted property getter: - (id)drawable;	// 0x34ac8cbd
// converted property getter: - (id)imageBlipRef;	// 0x34c8b55d
- (id)imageData;	// 0x34c8b661
- (id)imageName;	// 0x34c8b715
- (BOOL)isDrawableOverridden;	// 0x34ac8ccd
// converted property getter: - (bool)isFloating;	// 0x34ac8ce5
- (id)overrideDrawable;	// 0x34c8b52d
- (void)propagateTextTypeToDrawables;	// 0x34ac8d29
// converted property getter: - (id)properties;	// 0x34acd5cd
- (int)runType;	// 0x34ad8855
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x34ac7f31
// converted property setter: - (void)setFloating:(bool)floating;	// 0x34ac8c99
// converted property setter: - (void)setImageBlipRef:(id)ref;	// 0x34c8b5e1
// converted property setter: - (void)setProperties:(id)properties;	// 0x34ac5241
- (void)setTextType:(int)type recursivelyToDrawable:(id)drawable;	// 0x34ac8da1
@end


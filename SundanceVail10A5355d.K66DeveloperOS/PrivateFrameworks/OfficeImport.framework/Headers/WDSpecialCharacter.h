/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties;

@interface WDSpecialCharacter : WDRun {
	WDCharacterProperties *mProperties;	// 8 = 0x8
	int mType;	// 12 = 0xc
}
@property(assign) int characterType;	// G=0x31e39e05; S=0x31d13535; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x31d13211
// converted property getter: - (int)characterType;	// 0x31e39e05
- (void)clearProperties;	// 0x31e39dd9
- (void)dealloc;	// 0x31d137e5
- (id)properties;	// 0x31d13525
- (int)runType;	// 0x31d358cd
// converted property setter: - (void)setCharacterType:(int)type;	// 0x31d13535
@end


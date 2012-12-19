/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UITextInputMode.h"

@class NSString, NSArray;

@interface UIKeyboardInputMode : UITextInputMode {
	NSString *primaryLanguage;	// 4 = 0x4
	NSString *identifier;	// 8 = 0x8
	NSString *softwareLayout;	// 12 = 0xc
	NSString *hardwareLayout;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *hardwareLayout;	// G=0x32b5a47d; S=0x32b5a3a9; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x32b5a3b9; S=0x32b59f4d; @synthesize
@property(readonly, assign, nonatomic) NSArray *normalizedIdentifierLevels;	// G=0x32e63edd; 
@property(retain, nonatomic) NSString *primaryLanguage;	// G=0x32bdb591; S=0x32b5a309; @synthesize
@property(retain, nonatomic) NSString *softwareLayout;	// G=0x32bdb7b5; S=0x32b5a341; @synthesize
+ (id)canonicalLanguageIdentifierFromIdentifier:(id)identifier;	// 0x32b59f5d
+ (id)hardwareLayoutFromIdentifier:(id)identifier;	// 0x32b5a351
+ (id)keyboardInputModeWithIdentifier:(id)identifier;	// 0x32b59dcd
+ (id)softwareLayoutFromIdentifier:(id)identifier;	// 0x32b5a319
- (id)initWithIdentifier:(id)identifier;	// 0x32b59e81
- (void)dealloc;	// 0x32e63e1d
// declared property getter: - (id)hardwareLayout;	// 0x32b5a47d
// declared property getter: - (id)identifier;	// 0x32b5a3b9
// declared property getter: - (id)normalizedIdentifierLevels;	// 0x32e63edd
// declared property getter: - (id)primaryLanguage;	// 0x32bdb591
// declared property setter: - (void)setHardwareLayout:(id)layout;	// 0x32b5a3a9
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x32b59f4d
// declared property setter: - (void)setPrimaryLanguage:(id)language;	// 0x32b5a309
// declared property setter: - (void)setSoftwareLayout:(id)layout;	// 0x32b5a341
// declared property getter: - (id)softwareLayout;	// 0x32bdb7b5
@end

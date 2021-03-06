/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSTableCell.h"

@class NSString, UIImageView;

@interface LanguageCell : PSTableCell {
	UIImageView *_languageNameImage;	// 364 = 0x16c
	NSString *_languageNameText;	// 368 = 0x170
}
@property(retain, nonatomic) UIImageView *languageNameImage;	// G=0x352fb2a5; S=0x352fb2b5; @synthesize=_languageNameImage
@property(retain, nonatomic) NSString *languageNameText;	// G=0x352fb285; S=0x352fb295; @synthesize=_languageNameText
- (void)dealloc;	// 0x352fb22d
// declared property getter: - (id)languageNameImage;	// 0x352fb2a5
// declared property getter: - (id)languageNameText;	// 0x352fb285
- (void)prepareForReuse;	// 0x352fb1b5
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x352fb085
- (void)setChecked:(BOOL)checked;	// 0x352faf99
- (void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x352fafe5
// declared property setter: - (void)setLanguageNameImage:(id)image;	// 0x352fb2b5
// declared property setter: - (void)setLanguageNameText:(id)text;	// 0x352fb295
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x352fb035
- (void)turnOffLanguageNameImage;	// 0x352faef9
@end


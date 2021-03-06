/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCell.h> // Unknown library

@protocol ABStyleProvider;

@interface ABChameleonCell : UITableViewCell {
	int _abCellStyle;	// 300 = 0x12c
	id<ABStyleProvider> _styleProvider;	// 304 = 0x130
}
@property(assign, nonatomic) int abCellStyle;	// G=0x309166f1; S=0x30916d2d; @synthesize=_abCellStyle
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x30916cd5; S=0x30916b59; @synthesize=_styleProvider
- (void)_updateBackgroundViewsForCellStyleAndLocation;	// 0x309165fd
- (void)_updateTextStylesForCellStyle;	// 0x30916c4d
// declared property getter: - (int)abCellStyle;	// 0x309166f1
- (void)dealloc;	// 0x3091d351
// declared property setter: - (void)setAbCellStyle:(int)style;	// 0x30916d2d
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x309165bd
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x30916b59
// declared property getter: - (id)styleProvider;	// 0x30916cd5
@end


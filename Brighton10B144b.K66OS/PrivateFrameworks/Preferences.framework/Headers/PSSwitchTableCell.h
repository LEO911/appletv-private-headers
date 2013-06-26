/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSControlTableCell.h"

@class UIActivityIndicatorView;

@interface PSSwitchTableCell : PSControlTableCell {
	UIActivityIndicatorView *_activityIndicator;	// 368 = 0x170
	BOOL _alternateSwitchColor;	// 372 = 0x174
}
@property(assign, nonatomic) BOOL loading;	// G=0x353046f9; S=0x35304711; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;	// 0x3530440d
- (BOOL)canReload;	// 0x35304649
- (id)controlValue;	// 0x353049b1
- (void)dealloc;	// 0x35304965
- (void)layoutSubviews;	// 0x35304b25
// declared property getter: - (BOOL)loading;	// 0x353046f9
- (id)newControl;	// 0x353045fd
- (void)prepareForReuse;	// 0x353045b9
- (void)refreshCellContentsWithSpecifier:(id)specifier;	// 0x3530446d
- (void)reloadWithSpecifier:(id)specifier animated:(BOOL)animated;	// 0x353049f9
- (void)setCellEnabled:(BOOL)enabled;	// 0x353046a5
// declared property setter: - (void)setLoading:(BOOL)loading;	// 0x35304711
- (void)setValue:(id)value;	// 0x35304aa1
@end

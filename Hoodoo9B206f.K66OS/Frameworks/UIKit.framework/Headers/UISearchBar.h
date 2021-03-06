/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class UIImageView, UITextField, UIButton, NSArray, UIColor, UIImage, NSString, UILabel;
@protocol UISearchBarDelegate;

@interface UISearchBar : UIView {
@private
	UITextField *_searchField;	// 48 = 0x30
	UILabel *_promptLabel;	// 52 = 0x34
	UIButton *_cancelButton;	// 56 = 0x38
	id<UISearchBarDelegate> _delegate;	// 60 = 0x3c
	id _controller;	// 64 = 0x40
	UIColor *_tintColor;	// 68 = 0x44
	UIImageView *_separator;	// 72 = 0x48
	NSString *_cancelButtonText;	// 76 = 0x4c
	NSArray *_scopes;	// 80 = 0x50
	int _selectedScope;	// 84 = 0x54
	UIView *_background;	// 88 = 0x58
	UIView *_scopeBar;	// 92 = 0x5c
	UIEdgeInsets _contentInset;	// 96 = 0x60
	id _appearanceStorage;	// 112 = 0x70
	struct {
		unsigned barStyle : 3;
		unsigned showsBookmarkButton : 1;
		unsigned showsCancelButton : 1;
		unsigned isTranslucent : 1;
		unsigned autoDisableCancelButton : 1;
		unsigned showsScopeBar : 1;
		unsigned hideBackground : 1;
		unsigned combinesLandscapeBars : 1;
		unsigned usesEmbeddedAppearance : 1;
		unsigned showsSearchResultsButton : 1;
		unsigned searchResultsButtonSelected : 1;
		unsigned pretendsIsInBar : 1;
		unsigned disabled : 1;
	} _searchBarFlags;	// 116 = 0x74
}
@property(assign, nonatomic) int autocapitalizationType;	// G=0x35588cdd; S=0x353ba7c5; 
@property(assign, nonatomic) int autocorrectionType;	// G=0x35588cfd; S=0x35354bbd; 
@property(retain, nonatomic) UIImage *backgroundImage;	// G=0x3558910d; S=0x353d7c31; 
@property(assign, nonatomic) int barStyle;	// G=0x35444b8d; S=0x353d6df9; 
@property(retain) UIButton *cancelButton;	// G=0x35588ccd; S=0x35588c75; converted property
@property(assign) BOOL combinesLandscapeBars;	// G=0x35588c4d; S=0x35355441; converted property
@property(assign) UIEdgeInsets contentInset;	// G=0x35588e45; S=0x353561c9; converted property
@property(retain) id controller;	// G=0x354a0765; S=0x35355255; converted property
@property(assign, nonatomic) id<UISearchBarDelegate> delegate;	// G=0x3558988d; S=0x353548b9; @synthesize=_delegate
@property(assign) BOOL drawsBackground;	// G=0x35372b6d; S=0x35588be1; converted property
@property(assign, nonatomic) int keyboardType;	// G=0x35588d5d; S=0x353ba7a5; 
@property(copy, nonatomic) NSString *placeholder;	// G=0x35355465; S=0x353548c9; 
@property(assign) BOOL pretendsIsInBar;	// G=0x355898ad; S=0x355898c1; converted property
@property(copy, nonatomic) NSString *prompt;	// G=0x35588a81; S=0x35588a09; 
@property(retain, nonatomic) UIImage *scopeBarBackgroundImage;	// G=0x355893f1; S=0x3558939d; 
@property(copy, nonatomic) NSArray *scopeButtonTitles;	// G=0x35588e69; S=0x353b3bad; 
@property(readonly, retain) UITextField *searchField;	// G=0x35446b11; converted property
@property(assign, nonatomic) UIOffset searchFieldBackgroundPositionAdjustment;	// G=0x355896f1; S=0x355895a1; 
@property(assign, nonatomic, getter=isSearchResultsButtonSelected) BOOL searchResultsButtonSelected;	// G=0x35588b45; S=0x35588afd; 
@property(assign, nonatomic) UIOffset searchTextPositionAdjustment;	// G=0x35589791; S=0x35589745; 
@property(assign, nonatomic) int selectedScopeButtonIndex;	// G=0x35588ea1; S=0x353b3b71; 
@property(assign) int shortcutConversionType;	// G=0x35588d9d; S=0x35588d7d; converted property
@property(assign, nonatomic) BOOL showsBookmarkButton;	// G=0x35588ba1; S=0x35588b59; 
@property(assign, nonatomic) BOOL showsCancelButton;	// G=0x3546948d; S=0x353a2221; 
@property(assign, nonatomic) BOOL showsScopeBar;	// G=0x35588ed1; S=0x353ba7e5; 
@property(assign, nonatomic) BOOL showsSearchResultsButton;	// G=0x35588ae9; S=0x35588aa1; 
@property(assign, nonatomic) int spellCheckingType;	// G=0x35588d3d; S=0x35588d1d; 
@property(copy, nonatomic) NSString *text;	// G=0x353d71bd; S=0x35447b91; 
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3558989d; S=0x355890f9; @synthesize=_tintColor
@property(assign, nonatomic, getter=isTranslucent) BOOL translucent;	// G=0x35444b69; S=0x355889a5; 
@property(assign) BOOL usesEmbeddedAppearance;	// G=0x35588c61; S=0x35355289; converted property
- (id)initWithCoder:(id)coder;	// 0x35587d6d
- (id)initWithFrame:(CGRect)frame;	// 0x353504a5
- (float)_availableBoundsWidth;	// 0x35372c55
- (void)_bookmarkButtonPressed;	// 0x35589c09
- (void)_cancelButtonPressed;	// 0x35447969
- (id)_currentSeparatorImage;	// 0x35354ca1
- (void)_destroyCancelButton;	// 0x35447e25
- (void)_hideShowAnimationDidFinish;	// 0x35588bb5
- (id)_imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x35353081
- (BOOL)_isEnabled;	// 0x35589d3d
- (BOOL)_isInBar;	// 0x35354ec9
- (float)_landscapeScopeBarWidth;	// 0x35588df9
- (float)_landscapeSearchFieldWidth;	// 0x35588dbd
- (void)_populateArchivedSubviews:(id)subviews;	// 0x35588441
- (void)_resultsListButtonPressed;	// 0x35589c51
- (id)_scopeBar;	// 0x35467dd5
- (void)_scopeChanged:(id)changed;	// 0x35588ee9
- (void)_searchFieldBeginEditing;	// 0x354446a5
- (void)_searchFieldEditingChanged;	// 0x35446969
- (void)_searchFieldEndEditing;	// 0x35447cc1
- (float)_searchFieldHeight;	// 0x35372bfd
- (void)_searchFieldReturnPressed;	// 0x35469271
- (void)_setAutoDisableCancelButton:(BOOL)button;	// 0x35355265
- (void)_setCancelButtonText:(id)text;	// 0x35589bb1
- (void)_setEnabled:(BOOL)enabled;	// 0x35589d55
- (void)_setEnabled:(BOOL)enabled animated:(BOOL)animated;	// 0x35589d69
- (void)_setScopeBarHidden:(BOOL)hidden;	// 0x35588eb1
- (void)_setShowsCancelButton:(BOOL)button;	// 0x35444d61
- (void)_setShowsSeparator:(BOOL)separator;	// 0x35354bdd
- (void)_setTintColor:(id)color forceUpdate:(BOOL)update;	// 0x35588f81
- (void)_setUpScopeBar;	// 0x353b3d45
- (void)_setupCancelButton;	// 0x35589bf5
- (void)_setupCancelButtonWithAppearance:(id)appearance;	// 0x3544475d
- (void)_setupPromptLabel;	// 0x355898e5
- (void)_setupSearchField;	// 0x353505a5
- (BOOL)_shouldCombineLandscapeBars;	// 0x35372a2d
- (void)_updateMagnifyingGlassView;	// 0x35352fe9
- (void)_updateOpacity;	// 0x35372b89
- (void)_updateRightView;	// 0x35353199
- (void)_updateSearchFieldArt;	// 0x353540cd
// declared property getter: - (int)autocapitalizationType;	// 0x35588cdd
// declared property getter: - (int)autocorrectionType;	// 0x35588cfd
// declared property getter: - (id)backgroundImage;	// 0x3558910d
// declared property getter: - (int)barStyle;	// 0x35444b8d
- (BOOL)becomeFirstResponder;	// 0x35589cf5
- (BOOL)canBecomeFirstResponder;	// 0x35589cd1
- (BOOL)canResignFirstResponder;	// 0x35589d19
// converted property getter: - (id)cancelButton;	// 0x35588ccd
// converted property getter: - (BOOL)combinesLandscapeBars;	// 0x35588c4d
// converted property getter: - (UIEdgeInsets)contentInset;	// 0x35588e45
// converted property getter: - (id)controller;	// 0x354a0765
- (void)dealloc;	// 0x3546e755
// declared property getter: - (id)delegate;	// 0x3558988d
// converted property getter: - (BOOL)drawsBackground;	// 0x35372b6d
- (void)encodeWithCoder:(id)coder;	// 0x35588541
- (id)imageForSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x35589351
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;	// 0x35595545
- (BOOL)isFirstResponder;	// 0x3533474d
// declared property getter: - (BOOL)isSearchResultsButtonSelected;	// 0x35588b45
// declared property getter: - (BOOL)isTranslucent;	// 0x35444b69
// declared property getter: - (int)keyboardType;	// 0x35588d5d
- (void)layoutSubviews;	// 0x3537205d
- (void)movedToSuperview:(id)superview;	// 0x35355f65
// declared property getter: - (id)placeholder;	// 0x35355465
- (UIOffset)positionAdjustmentForSearchBarIcon:(int)searchBarIcon;	// 0x35589835
// converted property getter: - (BOOL)pretendsIsInBar;	// 0x355898ad
// declared property getter: - (id)prompt;	// 0x35588a81
- (void)reloadInputViews;	// 0x35589cb1
- (BOOL)resignFirstResponder;	// 0x353a5e75
// declared property getter: - (id)scopeBarBackgroundImage;	// 0x355893f1
- (id)scopeBarButtonBackgroundImageForState:(unsigned)state;	// 0x3558946d
- (id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x355894f9
- (id)scopeBarButtonTitleTextAttributesForState:(unsigned)state;	// 0x35589581
// declared property getter: - (id)scopeButtonTitles;	// 0x35588e69
// converted property getter: - (id)searchField;	// 0x35446b11
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x355891f5
// declared property getter: - (UIOffset)searchFieldBackgroundPositionAdjustment;	// 0x355896f1
// declared property getter: - (UIOffset)searchTextPositionAdjustment;	// 0x35589791
// declared property getter: - (int)selectedScopeButtonIndex;	// 0x35588ea1
// declared property setter: - (void)setAutocapitalizationType:(int)type;	// 0x353ba7c5
// declared property setter: - (void)setAutocorrectionType:(int)type;	// 0x35354bbd
// declared property setter: - (void)setBackgroundImage:(id)image;	// 0x353d7c31
// declared property setter: - (void)setBarStyle:(int)style;	// 0x353d6df9
// converted property setter: - (void)setCancelButton:(id)button;	// 0x35588c75
// converted property setter: - (void)setCombinesLandscapeBars:(BOOL)bars;	// 0x35355441
// converted property setter: - (void)setContentInset:(UIEdgeInsets)inset;	// 0x353561c9
// converted property setter: - (void)setController:(id)controller;	// 0x35355255
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x353548b9
// converted property setter: - (void)setDrawsBackground:(BOOL)background;	// 0x35588be1
- (void)setImage:(id)image forSearchBarIcon:(int)searchBarIcon state:(unsigned)state;	// 0x35589241
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x353ba7a5
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x353548c9
- (void)setPositionAdjustment:(UIOffset)adjustment forSearchBarIcon:(int)searchBarIcon;	// 0x355897e5
// converted property setter: - (void)setPretendsIsInBar:(BOOL)bar;	// 0x355898c1
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x35588a09
// declared property setter: - (void)setScopeBarBackgroundImage:(id)image;	// 0x3558939d
- (void)setScopeBarButtonBackgroundImage:(id)image forState:(unsigned)state;	// 0x35589411
- (void)setScopeBarButtonDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state;	// 0x3558948d
- (void)setScopeBarButtonTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x35589529
// declared property setter: - (void)setScopeButtonTitles:(id)titles;	// 0x353b3bad
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x3558912d
// declared property setter: - (void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)adjustment;	// 0x355895a1
// declared property setter: - (void)setSearchResultsButtonSelected:(BOOL)selected;	// 0x35588afd
// declared property setter: - (void)setSearchTextPositionAdjustment:(UIOffset)adjustment;	// 0x35589745
// declared property setter: - (void)setSelectedScopeButtonIndex:(int)index;	// 0x353b3b71
// converted property setter: - (void)setShortcutConversionType:(int)type;	// 0x35588d7d
// declared property setter: - (void)setShowsBookmarkButton:(BOOL)button;	// 0x35588b59
// declared property setter: - (void)setShowsCancelButton:(BOOL)button;	// 0x353a2221
- (void)setShowsCancelButton:(BOOL)button animated:(BOOL)animated;	// 0x353a2235
// declared property setter: - (void)setShowsScopeBar:(BOOL)bar;	// 0x353ba7e5
// declared property setter: - (void)setShowsSearchResultsButton:(BOOL)button;	// 0x35588aa1
// declared property setter: - (void)setSpellCheckingType:(int)type;	// 0x35588d1d
// declared property setter: - (void)setText:(id)text;	// 0x35447b91
// declared property setter: - (void)setTintColor:(id)color;	// 0x355890f9
// declared property setter: - (void)setTranslucent:(BOOL)translucent;	// 0x355889a5
// converted property setter: - (void)setUsesEmbeddedAppearance:(BOOL)appearance;	// 0x35355289
// converted property getter: - (int)shortcutConversionType;	// 0x35588d9d
// declared property getter: - (BOOL)showsBookmarkButton;	// 0x35588ba1
// declared property getter: - (BOOL)showsCancelButton;	// 0x3546948d
// declared property getter: - (BOOL)showsScopeBar;	// 0x35588ed1
// declared property getter: - (BOOL)showsSearchResultsButton;	// 0x35588ae9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x35354d1d
// declared property getter: - (int)spellCheckingType;	// 0x35588d3d
// declared property getter: - (id)text;	// 0x353d71bd
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x35445e6d
- (BOOL)textFieldShouldBeginEditing:(id)textField;	// 0x354441a5
- (BOOL)textFieldShouldEndEditing:(id)textField;	// 0x35447c75
// declared property getter: - (id)tintColor;	// 0x3558989d
// converted property getter: - (BOOL)usesEmbeddedAppearance;	// 0x35588c61
- (void)willMoveToSuperview:(id)superview;	// 0x35355e85
@end


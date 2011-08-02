/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class UIPopoverController, UISearchBar, UILabel, UITableView, UIViewController, NSString, UIView;
@protocol UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource;

@interface UISearchDisplayController : NSObject {
@private
	UIViewController *_viewController;	// 4 = 0x4
	UITableView *_tableView;	// 8 = 0x8
	UIView *_dimmingView;	// 12 = 0xc
	UISearchBar *_searchBar;	// 16 = 0x10
	UILabel *_noResultsLabel;	// 20 = 0x14
	NSString *_noResultsMessage;	// 24 = 0x18
	id<UISearchDisplayDelegate> _delegate;	// 28 = 0x1c
	id<UITableViewDataSource> _tableViewDataSource;	// 32 = 0x20
	id<UITableViewDelegate> _tableViewDelegate;	// 36 = 0x24
	CFArrayRef _containingScrollViews;	// 40 = 0x28
	float _lastKeyboardAdjustment;	// 44 = 0x2c
	float _lastFooterAdjustment;	// 48 = 0x30
	UIPopoverController *_popoverController;	// 52 = 0x34
	int _searchResultsTableViewStyle;	// 56 = 0x38
	id _navigationControllerBookkeeper;	// 60 = 0x3c
	struct {
		unsigned visible : 1;
		unsigned animating : 1;
		unsigned hidIndexBar : 1;
		unsigned hidNavigationBar : 1;
		unsigned noResultsMessageVisible : 1;
		unsigned noResultsMessageAutoDisplay : 1;
		unsigned navigationBarHidingEnabled : 1;
		unsigned dimTableViewOnEmptySearchString : 1;
		unsigned isRotatingWithPopover : 1;
		unsigned cancelButtonManagementDisabled : 1;
	} _searchDisplayControllerFlags;	// 64 = 0x40
}
@property(assign, nonatomic, getter=isActive) BOOL active;	// G=0x300f19bd; S=0x3016fcf1; 
@property(assign, nonatomic) BOOL automaticallyShowsNoResultsMessage;	// G=0x302c6bc9; S=0x300ef5d5; 
@property(assign, nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) BOOL cancelButtonManagementDisabled;	// G=0x302c6c09; S=0x301b3f39; 
@property(assign, nonatomic) id<UISearchDisplayDelegate> delegate;	// G=0x302c6c51; S=0x300ef799; @synthesize=_delegate
@property(assign, nonatomic) BOOL dimTableViewOnEmptySearchString;	// G=0x30152481; S=0x300ef77d; 
@property(readonly, assign, nonatomic) BOOL hidNavigationBar;	// G=0x302c6ba1; 
@property(assign, nonatomic, getter=isNavigationBarHidingEnabled) BOOL navigationBarHidingEnabled;	// G=0x30151f99; S=0x302c6bdd; 
@property(copy, nonatomic) NSString *noResultsMessage;	// G=0x3016b835; S=0x302c6c85; 
@property(assign, nonatomic) BOOL noResultsMessageVisible;	// G=0x302c6bb5; S=0x3016a4a1; 
@property(readonly, assign, nonatomic) UISearchBar *searchBar;	// G=0x300f62bd; @synthesize=_searchBar
@property(readonly, assign, nonatomic) UIViewController *searchContentsController;	// G=0x302c6c41; @synthesize=_viewController
@property(assign, nonatomic) id<UITableViewDataSource> searchResultsDataSource;	// G=0x302c6c31; S=0x300ef7a9; @synthesize=_tableViewDataSource
@property(assign, nonatomic) id<UITableViewDelegate> searchResultsDelegate;	// G=0x302c6c21; S=0x300ef7d9; @synthesize=_tableViewDelegate
@property(readonly, assign, nonatomic) UITableView *searchResultsTableView;	// G=0x301204a9; @synthesize=_tableView
- (id)init;	// 0x302c72f5
- (id)initWithCoder:(id)coder;	// 0x302c730d
- (id)initWithSearchBar:(id)searchBar contentsController:(id)controller;	// 0x300eec51
- (id)initWithSearchBar:(id)searchBar contentsController:(id)controller searchResultsTableViewStyle:(int)style;	// 0x300eec75
- (void)_adjustTableViewContentInsets;	// 0x3016aa59
- (BOOL)_areSearchContentsSplitViewMaster;	// 0x300eefe5
- (void)_cleanUpSearchBar;	// 0x3010978d
- (void)_clearViewController;	// 0x302c6bf9
- (void)_configureNewSearchBar;	// 0x300eed75
- (void)_configureSearchBarForTableView;	// 0x300ef0d1
- (id)_containingTableView;	// 0x300ef175
- (id)_containingViewOfClass:(Class)aClass;	// 0x300ef1a9
- (id)_createPopoverController;	// 0x302c73a9
- (void)_destroyManagedTableView;	// 0x3016e315
- (void)_disableParentScrollViews;	// 0x30152ca9
- (void)_enableParentScrollViews;	// 0x3016dde1
- (void)_indexBarFrameChanged:(id)changed;	// 0x300efe81
// declared property getter: - (BOOL)_isCancelButtonManagementDisabled;	// 0x302c6c09
- (BOOL)_isSearchBarInBar;	// 0x30151b39
- (void)_keyboardWillHide:(id)_keyboard;	// 0x30176709
- (void)_keyboardWillShow:(id)_keyboard;	// 0x3015b549
- (void)_managedTableViewDidScroll;	// 0x3017645d
- (id)_noResultsMessageLabel;	// 0x302c6c61
- (void)_popoverClearButtonPressed:(id)pressed;	// 0x302c7009
- (void)_popoverKeyboardDidHide:(id)_popoverKeyboard;	// 0x302c7049
- (void)_popoverKeyboardDidShow:(id)_popoverKeyboard;	// 0x302c7099
- (void)_searchBarSuperviewChanged;	// 0x30109825
- (void)_searchBarSuperviewWillChange;	// 0x30109779
// declared property setter: - (void)_setCancelButtonManagementDisabled:(BOOL)disabled;	// 0x301b3f39
- (void)_setTableViewVisible:(BOOL)visible inView:(id)view;	// 0x3016a529
- (void)_setupNoResultsLabelIfNecessary;	// 0x3016b6ed
- (CGRect)_tableViewFrame;	// 0x3016ab39
- (void)_updateNoSearchResultsMessageVisiblity;	// 0x300ef615
- (void)_updateSearchBarForTableViewIndexBar:(id)tableViewIndexBar;	// 0x300ef285
// declared property getter: - (BOOL)automaticallyShowsNoResultsMessage;	// 0x302c6bc9
- (void)dealloc;	// 0x3016f64d
// declared property getter: - (id)delegate;	// 0x302c6c51
// declared property getter: - (BOOL)dimTableViewOnEmptySearchString;	// 0x30152481
- (void)encodeWithCoder:(id)coder;	// 0x302c6b9d
// declared property getter: - (BOOL)hidNavigationBar;	// 0x302c6ba1
// declared property getter: - (BOOL)isActive;	// 0x300f19bd
// declared property getter: - (BOOL)isNavigationBarHidingEnabled;	// 0x30151f99
- (void)navigationControllerDidShowViewController:(id)navigationController;	// 0x301b06b1
- (void)navigationControllerWillShowViewController:(id)navigationController;	// 0x301b0409
// declared property getter: - (id)noResultsMessage;	// 0x3016b835
// declared property getter: - (BOOL)noResultsMessageVisible;	// 0x302c6bb5
- (void)popoverController:(id)controller animationCompleted:(int)completed;	// 0x302c6cf1
// declared property getter: - (id)searchBar;	// 0x300f62bd
- (void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;	// 0x301afabd
- (void)searchBar:(id)bar textDidChange:(id)text;	// 0x3016a3b5
- (void)searchBarCancelButtonClicked:(id)clicked;	// 0x3016d901
- (void)searchBarResultsListButtonClicked:(id)clicked;	// 0x302c6d0d
- (void)searchBarSearchButtonClicked:(id)clicked;	// 0x301b0af1
- (void)searchBarTextDidBeginEditing:(id)searchBarText;	// 0x30151b21
// declared property getter: - (id)searchContentsController;	// 0x302c6c41
// declared property getter: - (id)searchResultsDataSource;	// 0x302c6c31
// declared property getter: - (id)searchResultsDelegate;	// 0x302c6c21
// declared property getter: - (id)searchResultsTableView;	// 0x301204a9
// declared property setter: - (void)setActive:(BOOL)active;	// 0x3016fcf1
- (void)setActive:(BOOL)active animated:(BOOL)animated;	// 0x3010b5e9
// declared property setter: - (void)setAutomaticallyShowsNoResultsMessage:(BOOL)message;	// 0x300ef5d5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300ef799
// declared property setter: - (void)setDimTableViewOnEmptySearchString:(BOOL)string;	// 0x300ef77d
// declared property setter: - (void)setNavigationBarHidingEnabled:(BOOL)enabled;	// 0x302c6bdd
// declared property setter: - (void)setNoResultsMessage:(id)message;	// 0x302c6c85
// declared property setter: - (void)setNoResultsMessageVisible:(BOOL)visible;	// 0x3016a4a1
- (void)setSearchBar:(id)bar;	// 0x302c71f1
- (void)setSearchContentsController:(id)controller;	// 0x302c711d
// declared property setter: - (void)setSearchResultsDataSource:(id)source;	// 0x300ef7a9
// declared property setter: - (void)setSearchResultsDelegate:(id)delegate;	// 0x300ef7d9
- (void)showHideAnimationDidFinish;	// 0x3015cd45
- (void)windowDidRotate:(id)window;	// 0x3012725d
- (void)windowWillAnimateRotation:(id)window;	// 0x302c6d61
@end

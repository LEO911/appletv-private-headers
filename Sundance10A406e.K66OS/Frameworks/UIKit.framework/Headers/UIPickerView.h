/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewDelegate.h"
#import "NSCoding.h"
#import "UITableViewDataSource.h"
#import "UIView.h"

@class NSMutableArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;

@interface UIPickerView : UIView <UITableViewDelegate, NSCoding, UITableViewDataSource> {
	NSMutableArray *_tables;	// 84 = 0x54
	UIView *_topFrame;	// 88 = 0x58
	NSMutableArray *_dividers;	// 92 = 0x5c
	NSMutableArray *_selectionBars;	// 96 = 0x60
	id<UIPickerViewDataSource> _dataSource;	// 100 = 0x64
	id<UIPickerViewDelegate> _delegate;	// 104 = 0x68
	UIView *_backgroundView;	// 108 = 0x6c
	int _numberOfComponents;	// 112 = 0x70
	struct {
		unsigned needsLayout : 1;
		unsigned delegateRespondsToNumberOfComponentsInPickerView : 1;
		unsigned delegateRespondsToNumberOfRowsInComponent : 1;
		unsigned delegateRespondsToDidSelectRow : 1;
		unsigned delegateRespondsToViewForRow : 1;
		unsigned delegateRespondsToTitleForRow : 1;
		unsigned delegateRespondsToAttributedTitleForRow : 1;
		unsigned delegateRespondsToWidthForComponent : 1;
		unsigned delegateRespondsToRowHeightForComponent : 1;
		unsigned delegateRespondsToCheckableForRow : 1;
		unsigned showsSelectionBar : 1;
		unsigned allowsMultipleSelection : 1;
		unsigned allowSelectingCells : 1;
		unsigned soundsDisabled : 1;
		unsigned usesCheckedSelection : 1;
		unsigned skipsBackground : 1;
	} _pickerViewFlags;	// 116 = 0x74
	BOOL _isInLayoutSubviews;	// 118 = 0x76
}
@property(assign, nonatomic, setter=_setInLayoutSubviews:) BOOL _isInLayoutSubviews;	// G=0x30a7a405; S=0x30a7a415; @synthesize
@property(assign) BOOL allowsMultipleSelection;	// G=0x30a7a2cd; S=0x30a7a231; converted property
@property(assign, nonatomic) id<UIPickerViewDataSource> dataSource;	// G=0x30a7a3e5; S=0x30a501e9; @synthesize=_dataSource
@property(assign, nonatomic) id<UIPickerViewDelegate> delegate;	// G=0x30a7a3f5; S=0x30a50375; @synthesize=_delegate
@property(readonly, assign, nonatomic) int numberOfComponents;	// G=0x30a65715; @synthesize=_numberOfComponents
@property(assign, nonatomic) BOOL showsSelectionIndicator;	// G=0x30a7a219; S=0x30a7a1d9; 
+ (CGSize)defaultSizeForCurrentOrientation;	// 0x30a5c171
+ (CGSize)sizeForCurrentOrientationThatFits:(CGSize)currentOrientationThatFits;	// 0x30a5c7f9
+ (CGSize)sizeThatFits:(CGSize)fits forInterfaceOrientation:(int)interfaceOrientation;	// 0x30a5c851
- (id)init;	// 0x30a79735
- (id)initWithCoder:(id)coder;	// 0x30a4d951
- (id)initWithFrame:(CGRect)frame;	// 0x30a5c6c5
- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;	// 0x30a79a05
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;	// 0x30a79a09
- (id)_createTableWithFrame:(CGRect)frame forComponent:(int)component;	// 0x30a61895
- (id)_createViewForPickerPiece:(int)pickerPiece;	// 0x30a5f399
- (id)_delegateAttributedTitleForRow:(int)row forComponent:(int)component;	// 0x30a79b41
- (int)_delegateNumberOfComponents;	// 0x30a5e0d1
- (int)_delegateNumberOfRowsInComponent:(int)component;	// 0x30a61f79
- (float)_delegateRowHeightForComponent:(int)component;	// 0x30a61d69
- (id)_delegateTitleForRow:(int)row forComponent:(int)component;	// 0x30a79af5
- (float)_delegateWidthForComponent:(int)component ofCount:(int)count withSizeLeft:(float)sizeLeft;	// 0x30a5faf5
- (BOOL)_drawsBackground;	// 0x30a5f37d
- (CGSize)_intrinsicSizeWithinSize:(CGSize)size;	// 0x30a79a0d
// declared property getter: - (BOOL)_isInLayoutSubviews;	// 0x30a7a405
- (BOOL)_isLandscapeOrientation;	// 0x30a5f82d
- (id)_orientationImageSuffix;	// 0x30a5f6fd
- (id)_popoverSuffix;	// 0x30a5f935
- (void)_populateArchivedSubviews:(id)subviews;	// 0x30a79765
- (void)_resetSelectionOfTables;	// 0x30a79cfd
- (void)_selectRow:(int)row inComponent:(int)component animated:(BOOL)animated notify:(BOOL)notify;	// 0x30a651b1
- (CGRect)_selectionBarRectForHeight:(float)height;	// 0x30a61de1
- (id)_selectionBarSuffix;	// 0x30a5f905
- (void)_sendCheckedRow:(int)row inTableView:(id)tableView checked:(BOOL)checked;	// 0x30a79a5d
- (void)_sendSelectionChangedForComponent:(int)component;	// 0x30a6608d
- (void)_sendSelectionChangedFromTable:(id)table;	// 0x30a65f95
- (void)_setDrawsBackground:(BOOL)background;	// 0x30a7a31d
// declared property setter: - (void)_setInLayoutSubviews:(BOOL)layoutSubviews;	// 0x30a7a415
- (void)_setUsesCheckedSelection:(BOOL)selection;	// 0x30a7a2e5
- (CGSize)_sizeThatFits:(CGSize)fits;	// 0x30a66609
- (BOOL)_soundsEnabled;	// 0x30a5e445
- (float)_tableRowHeight;	// 0x30a79705
- (void)_updateSound;	// 0x30a4dbf9
- (void)_updateWithOldSize:(CGSize)oldSize newSize:(CGSize)size;	// 0x30a79de5
- (BOOL)_usesCheckSelection;	// 0x30a64bf1
- (BOOL)_usesCheckedSelection;	// 0x30a7a309
- (float)_wheelShift;	// 0x30a61579
// converted property getter: - (BOOL)allowsMultipleSelection;	// 0x30a7a2cd
- (int)columnForTableView:(id)tableView;	// 0x30a62bc9
- (id)createDividerWithFrame:(CGRect)frame;	// 0x30a615b9
// declared property getter: - (id)dataSource;	// 0x30a7a3e5
- (void)dealloc;	// 0x30a5303d
- (CGSize)defaultSize;	// 0x30a795e5
// declared property getter: - (id)delegate;	// 0x30a7a3f5
- (void)didMoveToWindow;	// 0x30a66311
- (void)encodeWithCoder:(id)coder;	// 0x30a798ed
- (id)imageForPickerPiece:(int)pickerPiece;	// 0x30a5f481
- (BOOL)isAccessibilityElementByDefault;	// 0x30b4aa31
- (void)layoutSubviews;	// 0x30a5e605
- (int)numberOfColumns;	// 0x30a79ced
// declared property getter: - (int)numberOfComponents;	// 0x30a65715
- (int)numberOfRowsInColumn:(int)column;	// 0x30a79cdd
- (int)numberOfRowsInComponent:(int)component;	// 0x30a79c79
- (id)pickerImageNamePrefix;	// 0x30a5f6f1
- (void)reload;	// 0x30a799d1
- (void)reloadAllComponents;	// 0x30a5e029
- (void)reloadAllPickerPieces;	// 0x30a5dd65
- (void)reloadComponent:(int)component;	// 0x30a6595d
- (void)reloadData;	// 0x30a799e1
- (void)reloadDataForColumn:(int)column;	// 0x30a799f5
- (CGSize)rowSizeForComponent:(int)component;	// 0x30a79b91
- (double)scrollAnimationDuration;	// 0x30a79ad9
- (void)selectRow:(int)row inColumn:(int)column animated:(BOOL)animated;	// 0x30a7a3bd
- (void)selectRow:(int)row inComponent:(int)component animated:(BOOL)animated;	// 0x30a65129
- (int)selectedRowForColumn:(int)column;	// 0x30a7a3a9
- (int)selectedRowInComponent:(int)component;	// 0x30a5e48d
// converted property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x30a7a231
- (void)setAlpha:(float)alpha;	// 0x30a4dcb9
- (void)setBounds:(CGRect)bounds;	// 0x30a7a031
// declared property setter: - (void)setDataSource:(id)source;	// 0x30a501e9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30a50375
- (void)setFrame:(CGRect)frame;	// 0x30a4da61
- (void)setHidden:(BOOL)hidden;	// 0x30a4dbb9
- (void)setNeedsLayout;	// 0x30a50329
// declared property setter: - (void)setShowsSelectionIndicator:(BOOL)indicator;	// 0x30a7a1d9
- (void)setSoundsEnabled:(BOOL)enabled;	// 0x30a5e461
// declared property getter: - (BOOL)showsSelectionIndicator;	// 0x30a7a219
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30a79a2d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x30a62795
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x30a61eb1
- (id)tableViewForColumn:(int)column;	// 0x30a643d1
- (id)viewForRow:(int)row forComponent:(int)component;	// 0x30a657a9
- (NSRange)visibleRowsForColumn:(int)column;	// 0x30a6575d
@end

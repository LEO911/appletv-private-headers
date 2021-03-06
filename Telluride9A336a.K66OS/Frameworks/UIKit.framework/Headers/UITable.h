/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIScroller.h"

@class UIFloatArray, NSMutableArray, _UITableReorderingSupport, _UITableDeleteAnimationSupport, UITableCountView;

@interface UITable : UIScroller {
	id _dataSource;	// 348 = 0x15c
	NSMutableArray *_tableColumns;	// 352 = 0x160
	SEL _doubleAction;	// 356 = 0x164
	UIFloatArray *_rowHeights;	// 360 = 0x168
	NSRange _visibleRows;	// 364 = 0x16c
	NSRange _visibleCols;	// 372 = 0x174
	NSMutableArray *_visibleCells;	// 380 = 0x17c
	_UITableDeleteAnimationSupport *_deleteAnimationSupport;	// 384 = 0x180
	unsigned _selectedRow;	// 388 = 0x184
	unsigned _lastHighlightedRow;	// 392 = 0x188
	int _rowCount;	// 396 = 0x18c
	int _tableReloadingSuspendedCount;	// 400 = 0x190
	float _padding;	// 404 = 0x194
	UIView *_accessoryView;	// 408 = 0x198
	UITableCountView *_countLabel;	// 412 = 0x19c
	NSMutableArray *_reusableTableCells;	// 416 = 0x1a0
	int _reusableCapacity;	// 420 = 0x1a4
	NSMutableArray *_extraSeparators;	// 424 = 0x1a8
	int _swipeToDeleteRow;	// 428 = 0x1ac
	struct {
		unsigned separatorStyle : 3;
		unsigned rowDeletionEnabled : 1;
		unsigned allowSelectionDuringRowDeletion : 1;
		unsigned dataSourceHeightForRow : 1;
		unsigned dataSourceSetObjectValue : 1;
		unsigned dataShowDisclosureForRow : 1;
		unsigned dataDisclosureClickableForRow : 1;
		unsigned dataSourceWantsHints : 1;
		unsigned dataSourceCanDeleteRow : 1;
		unsigned dataSourceConfirmDeleteRow : 1;
		unsigned delegateTableSelectionDidChange : 1;
		unsigned scrollsToSelection : 1;
		unsigned reloadSkippedDuringSuspension : 1;
		unsigned reuseTableCells : 1;
		unsigned delegateUpdateVisibleCellsNote : 1;
		unsigned delegateTableRowSelected : 1;
		unsigned rowAlreadyHighlighted : 1;
		unsigned needsReload : 1;
		unsigned delegateCanSwipe : 1;
		unsigned updatingVisibleCellsManually : 1;
		unsigned scheduledUpdateVisibleCells : 1;
		unsigned warnForForcedCellUpdateDisabled : 1;
		unsigned delaySendingSelectionChanged : 1;
		unsigned dataSourceCanInsertAtRow : 1;
		unsigned shouldDisplayTopSeparator : 1;
		unsigned displayTopSeparator : 1;
		unsigned needToAdjustExtraSeparators : 1;
		unsigned ignoreDragSwipe : 1;
		unsigned lastHighlightedRowActive : 1;
		unsigned reloading : 1;
		unsigned countStringInsignificantRowCount : 4;
		unsigned dataSourceCanReuseCell : 1;
		unsigned reserved : 27;
	} _tableFlags;	// 432 = 0x1b0
	_UITableReorderingSupport *_reorderingSupport;	// 440 = 0x1b8
}
@property(retain) UIView *accessoryView;	// G=0x35306a29; S=0x35306939; converted property
@property(retain) id dataSource;	// G=0x35301d85; S=0x35301bad; converted property
@property(assign) int deleteConfirmationRow;	// G=0x35303dd1; S=0x35303ed1; converted property
@property(assign) SEL doubleAction;	// G=0x35303789; S=0x35303779; converted property
@property(assign) float rowHeight;	// G=0x35302161; S=0x353020b5; converted property
@property(assign) int separatorStyle;	// G=0x35305f41; S=0x35305f09; converted property
@property(readonly, retain) NSMutableArray *tableColumns;	// G=0x35301eb1; converted property
@property(readonly, retain) NSMutableArray *visibleCells;	// G=0x35304fcd; converted property
- (id)initWithFrame:(CGRect)frame;	// 0x353015dd
- (void)_addSubview:(id)subview atTop:(BOOL)top;	// 0x35306ebd
- (void)_adjustCountLabel;	// 0x3530e35d
- (void)_adjustExtraSeparators;	// 0x3530df91
- (void)_adjustReusableTableCells;	// 0x3530e3f1
- (void)_animateNewCells:(id)cells bySlidingDownAmount:(float)amount;	// 0x3530b671
- (void)_animateNewCells:(id)cells bySlidingUpAmount:(float)amount;	// 0x3530b521
- (void)_animateRemovalOfCell:(id)cell atRow:(int)row col:(int)col viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x3530b179
- (void)_animateRemovalOfVisibleRows:(id)visibleRows viaEdge:(int)edge withAmountToSlideUp:(float *)slideUp;	// 0x3530b341
- (void)_animateRowsForDeletionOfRow:(int)row withSep:(id)sep;	// 0x35309fcd
- (void)_autoscroll:(id)autoscroll;	// 0x35307591
- (void)_beginReorderingForCell:(id)cell;	// 0x35307081
- (BOOL)_checkCanSelectRow:(int)row view:(id)view;	// 0x353062e9
- (unsigned)_countStringRowCount;	// 0x3530e2d9
- (void)_delaySendSelectionDidChange;	// 0x353056b9
- (void)_deleteRowAlertDidEndContinuation:(id)_deleteRowAlert;	// 0x35309df9
- (void)_deleteRowAlertDidEndWithResult:(BOOL)_deleteRowAlert contextInfo:(id)info;	// 0x35309d31
- (void)_didDeleteRowForTableCell:(id)tableCell;	// 0x3530dc9d
- (void)_didInsertRowForTableCell:(id)tableCell;	// 0x3530dca1
- (void)_disableInteraction;	// 0x35304295
- (void)_enableAndRestoreTableStateAfterAnimation;	// 0x3530dc01
- (void)_enableInteraction;	// 0x353042b5
- (void)_enableRowDeletion:(BOOL)deletion forCell:(id)cell atRow:(int)row allowInsert:(BOOL)insert allowReorder:(BOOL)reorder animated:(BOOL)animated;	// 0x35303b95
- (void)_endCellReorderAnimation;	// 0x35308259
- (void)_endReorderingForCell:(id)cell;	// 0x35308771
- (void)_fadeCellOutAnimationDidStop:(id)_fadeCellOutAnimation finished:(id)finished context:(id)context;	// 0x3530c361
- (void)_finishedAnimatingCellReorder:(id)reorder finished:(id)finished context:(id)context;	// 0x35308199
- (void)_finishedRemovingRemovalButtonForTableCell:(id)tableCell;	// 0x3530dc31
- (void)_getRowCount:(int *)count andHeight:(float *)height beforeVisibleCellsForRows:(id)rows;	// 0x3530b081
- (float)_partOfRow:(int)row thatIsHidden:(BOOL)hidden;	// 0x3530b7c1
- (CGRect)_rectOfRow:(int)row usingRowHeights:(id)heights;	// 0x35304d09
- (void)_reloadRowHeights;	// 0x35306ddd
- (void)_removeContextFromSuperview:(id)superview finished:(id)finished context:(id)context;	// 0x35304281
- (int)_removeFromVisibleRows:(id)visibleRows;	// 0x3530af51
- (void)_reorderPositionChangedForCell:(id)cell;	// 0x35307859
- (void)_restoreTableStateAfterAnimation;	// 0x3530ae1d
- (id)_resuableObjectForTableCell:(id)tableCell;	// 0x35304775
- (void)_resumeReloads;	// 0x35309c3d
- (int)_rowForTableCell:(id)tableCell;	// 0x35309ca1
- (void)_saveTableStateBeforeAnimationForRow:(int)row;	// 0x3530ad71
- (void)_scheduleAdjustExtraSeparators;	// 0x3530df59
- (id)_scriptingInfo;	// 0x3530e549
- (void)_selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible withSelectionNotifications:(BOOL)selectionNotifications;	// 0x3530583d
- (void)_sendSelectionDidChange;	// 0x3530561d
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update;	// 0x35308ae9
- (void)_setRowCount:(int)count;	// 0x3530e305
- (BOOL)_shouldDeleteRowForTableCell:(id)tableCell;	// 0x35309e5d
- (BOOL)_shouldTryPromoteDescendantToFirstResponder;	// 0x3530df55
- (void)_stopAutoscrollTimer;	// 0x35307025
- (void)_suspendReloads;	// 0x35309c29
- (void)_tableCellAnimationDidStop:(id)_tableCellAnimation finished:(id)finished;	// 0x35308761
- (void)_updateContentSize;	// 0x35306c31
- (void)_updateOriginOfCells:(NSRange)cells;	// 0x353022cd
- (void)_updateVisibleCellsImmediatelyIfNecessary;	// 0x35309bf9
- (void)_updateVisibleCellsNow;	// 0x35308e9d
- (BOOL)_userCanDeleteRows;	// 0x35303b65
- (void)_userSelectRow:(int)row;	// 0x353055ad
- (void)_willDeleteRow:(int)row forTableCell:(id)tableCell viaEdge:(int)edge animateOthers:(BOOL)others;	// 0x3530d3b9
// converted property getter: - (id)accessoryView;	// 0x35306a29
- (void)addTableColumn:(id)column;	// 0x35301f61
- (UIEdgeInsets)adornmentMargins;	// 0x35305ff9
- (void)animateDeletionOfCellAtRow:(int)row column:(int)column viaEdge:(int)edge;	// 0x3530398d
- (void)animateDeletionOfRowWithCell:(id)cell;	// 0x35303ab1
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge;	// 0x35303a8d
- (void)animateDeletionOfRowWithCell:(id)cell viaEdge:(int)edge animatingOthersUp:(BOOL)up;	// 0x35303a41
- (float)animationDuration;	// 0x353027d1
- (BOOL)canDeleteRow:(int)row;	// 0x35303ac9
- (BOOL)canHandleSwipes;	// 0x35308b41
- (BOOL)canInsertAtRow:(int)row;	// 0x35303b0d
- (BOOL)canSelectRow:(int)row;	// 0x3530628d
- (BOOL)cancelMouseTracking;	// 0x3530574d
- (BOOL)cancelTouchTracking;	// 0x353057b9
- (id)cellAtRow:(int)row column:(int)column;	// 0x35304515
- (void)clearAllData;	// 0x3530229d
- (int)columnAtPoint:(CGPoint)point;	// 0x35304f65
- (int)columnWithIdentifier:(id)identifier;	// 0x35301fe5
- (NSRange)columnsInRect:(CGRect)rect;	// 0x35304e5d
- (void)completeRowDeletionAnimation;	// 0x35303ac5
- (void)contentMouseUpInView:(id)view withEvent:(GSEventRef)event;	// 0x35306361
- (id)createPreparedCellForRow:(int)row column:(int)column;	// 0x35304779
// converted property getter: - (id)dataSource;	// 0x35301d85
- (id)dataSourceCreateCellForRow:(int)row column:(int)column reusing:(id)reusing;	// 0x35304699
- (int)dataSourceGetRowCount;	// 0x35301ee1
- (BOOL)dataSourceSupportsVariableRowHeights;	// 0x35301f01
- (void)dealloc;	// 0x35301779
// converted property getter: - (int)deleteConfirmationRow;	// 0x35303dd1
- (void)deleteRows:(id)rows viaEdge:(int)edge;	// 0x3530b881
- (void)deleteRows:(id)rows viaEdge:(int)edge animated:(BOOL)animated;	// 0x3530b871
// converted property getter: - (SEL)doubleAction;	// 0x35303789
- (void)drawExtraSeparator:(CGRect)separator;	// 0x35306a39
- (void)enableRowDeletion:(BOOL)deletion;	// 0x35303b51
- (void)enableRowDeletion:(BOOL)deletion animated:(BOOL)animated;	// 0x35304095
- (void)floatArray:(id)array getValueCount:(int *)count gapIndexCount:(int *)count3;	// 0x35306dbd
- (BOOL)floatArray:(id)array loadValues:(float *)values count:(int)count;	// 0x35306d45
- (CGRect)frameOfCellAtColumn:(int)column row:(int)row;	// 0x3530441d
- (CGRect)frameOfCellAtRow:(int)row column:(int)column;	// 0x353043ed
- (BOOL)getRow:(int *)row column:(int *)column ofTableCell:(id)tableCell;	// 0x35305095
- (BOOL)highlightNextRowByDelta:(int)delta;	// 0x35305d91
- (BOOL)highlightRow:(int)row;	// 0x35305d45
- (void)highlightView:(id)view state:(BOOL)state;	// 0x35306715
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x35306109
- (id)hitTest:(CGPoint)test withEvent:(id)event;	// 0x35306251
- (void)insertRows:(id)rows deleteRows:(id)rows2 reloadRows:(id)rows3;	// 0x3530c3f5
- (BOOL)isRowDeletionEnabled;	// 0x353042d5
- (int)lastHighlightedRow;	// 0x35305d35
- (void)layoutSubviews;	// 0x35306f59
- (void)mouseDown:(GSEventRef)down;	// 0x3530dd09
- (void)mouseDragged:(GSEventRef)dragged;	// 0x3530dd4d
- (void)noteNumberOfRowsChanged;	// 0x3530363d
- (int)numberOfColumns;	// 0x35301ec1
- (int)numberOfRows;	// 0x35301f15
- (UIEdgeInsets)pressedAdornmentMargins;	// 0x35306081
- (CGRect)rectOfColumn:(int)column;	// 0x35304ce5
- (CGRect)rectOfRow:(int)row;	// 0x35304ddd
- (CGRect)rectOfViewAtColumn:(int)column row:(int)row;	// 0x3530444d
- (void)reloadCellAtRow:(int)row column:(int)column animated:(BOOL)animated;	// 0x353025b9
- (void)reloadData;	// 0x353033e5
- (void)reloadDataForInsertionOfRows:(NSRange)rows;	// 0x35302595
- (void)reloadDataForInsertionOfRows:(NSRange)rows animated:(BOOL)animated;	// 0x353027dd
- (void)removeControlWillHideRemoveConfirmation:(id)removeControl;	// 0x35304005
- (void)removeFromSuperview;	// 0x353056e9
- (void)removeTableColumn:(id)column;	// 0x35301fc5
- (int)rowAtPoint:(CGPoint)point;	// 0x35304f6d
// converted property getter: - (float)rowHeight;	// 0x35302161
- (NSRange)rowsInRect:(CGRect)rect;	// 0x35304e69
- (void)scrollAndCenterTableCell:(id)cell animated:(BOOL)animated;	// 0x35306ab5
- (void)scrollRowToVisible:(int)visible;	// 0x353021b5
- (void)selectCell:(id)cell inRow:(int)row column:(int)column withFade:(BOOL)fade;	// 0x35305825
- (BOOL)selectHighlightedRow;	// 0x35305e5d
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection;	// 0x353055e9
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade;	// 0x35305cd1
- (void)selectRow:(int)row byExtendingSelection:(BOOL)selection withFade:(BOOL)fade scrollingToVisible:(BOOL)visible;	// 0x35305c8d
- (int)selectedRow;	// 0x35305d25
// converted property getter: - (int)separatorStyle;	// 0x35305f41
// converted property setter: - (void)setAccessoryView:(id)view;	// 0x35306939
- (void)setAllowSelectionDuringRowDeletion:(BOOL)deletion;	// 0x353042e9
- (void)setAllowsReordering:(BOOL)reordering;	// 0x35304585
- (void)setCountString:(id)string;	// 0x35303809
- (void)setCountStringInsignificantRowCount:(unsigned)count;	// 0x35303799
// converted property setter: - (void)setDataSource:(id)source;	// 0x35301bad
- (void)setDelegate:(id)delegate;	// 0x35301d95
// converted property setter: - (void)setDeleteConfirmationRow:(int)row;	// 0x35303ed1
// converted property setter: - (void)setDoubleAction:(SEL)action;	// 0x35303779
- (void)setFrame:(CGRect)frame;	// 0x3530532d
- (void)setNeedsDisplayInRowRange:(NSRange)rowRange;	// 0x353036a9
- (void)setOffset:(CGPoint)offset;	// 0x35305199
- (void)setPadding:(float)padding;	// 0x35305f55
- (void)setResusesTableCells:(BOOL)cells;	// 0x35306a6d
- (void)setReusesTableCells:(BOOL)cells;	// 0x35306a7d
// converted property setter: - (void)setRowHeight:(float)height;	// 0x353020b5
- (void)setScrollsToSelection:(BOOL)selection;	// 0x35305ef1
// converted property setter: - (void)setSeparatorStyle:(int)style;	// 0x35305f09
- (BOOL)shouldDelaySendingSelectionChanged;	// 0x35305d0d
- (BOOL)shouldIndentRow:(int)row;	// 0x3530471d
- (int)swipe:(int)swipe withEvent:(GSEventRef)event;	// 0x35308b45
- (id)tableColumnWithIdentifier:(id)identifier;	// 0x3530206d
// converted property getter: - (id)tableColumns;	// 0x35301eb1
- (void)updateDisclosures;	// 0x35304301
- (BOOL)validateDataSource;	// 0x35301b2d
- (id)viewAtColumn:(int)column row:(int)row;	// 0x353044fd
- (id)visibleCellForRow:(int)row column:(int)column;	// 0x35304ffd
// converted property getter: - (id)visibleCells;	// 0x35304fcd
- (id)visibleCellsWithoutUpdatingLayout;	// 0x35304fbd
- (NSRange)visibleRowsInRect:(CGRect)rect;	// 0x3530515d
@end


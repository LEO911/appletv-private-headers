/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIScrollView.h"
#import "UIKit-Structs.h"

@class NSMutableSet, NSArray, UICollectionViewLayout, UICollectionReusableView, NSMutableDictionary, NSMutableArray, NSString, NSIndexPath, UITouch;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;

@interface UICollectionView : UIScrollView {
	UICollectionViewLayout *_layout;	// 444 = 0x1bc
	id<UICollectionViewDataSource> _dataSource;	// 448 = 0x1c0
	UIView *_backgroundView;	// 452 = 0x1c4
	NSMutableSet *_indexPathsForSelectedItems;	// 456 = 0x1c8
	NSMutableDictionary *_cellReuseQueues;	// 460 = 0x1cc
	NSMutableDictionary *_supplementaryViewReuseQueues;	// 464 = 0x1d0
	NSMutableSet *_indexPathsForHighlightedItems;	// 468 = 0x1d4
	int _reloadingSuspendedCount;	// 472 = 0x1d8
	UICollectionReusableView *_firstResponderView;	// 476 = 0x1dc
	UIView *_newContentView;	// 480 = 0x1e0
	int _firstResponderViewType;	// 484 = 0x1e4
	NSString *_firstResponderViewKind;	// 488 = 0x1e8
	NSIndexPath *_firstResponderIndexPath;	// 492 = 0x1ec
	NSMutableDictionary *_allVisibleViewsDict;	// 496 = 0x1f0
	NSIndexPath *_pendingSelectionIndexPath;	// 500 = 0x1f4
	NSMutableSet *_pendingDeselectionIndexPaths;	// 504 = 0x1f8
	id _collectionViewData;	// 508 = 0x1fc
	id _update;	// 512 = 0x200
	CGRect _visibleBounds;	// 516 = 0x204
	CGRect _preRotationBounds;	// 532 = 0x214
	CGPoint _rotationBoundsOffset;	// 548 = 0x224
	int _rotationAnimationCount;	// 556 = 0x22c
	int _updateCount;	// 560 = 0x230
	NSMutableArray *_insertItems;	// 564 = 0x234
	NSMutableArray *_deleteItems;	// 568 = 0x238
	NSMutableArray *_reloadItems;	// 572 = 0x23c
	NSMutableArray *_moveItems;	// 576 = 0x240
	NSArray *_originalInsertItems;	// 580 = 0x244
	NSArray *_originalDeleteItems;	// 584 = 0x248
	UITouch *_currentTouch;	// 588 = 0x24c
	id _updateCompletionHandler;	// 592 = 0x250
	NSMutableDictionary *_cellClassDict;	// 596 = 0x254
	NSMutableDictionary *_cellNibDict;	// 600 = 0x258
	NSMutableDictionary *_supplementaryViewClassDict;	// 604 = 0x25c
	NSMutableDictionary *_supplementaryViewNibDict;	// 608 = 0x260
	NSMutableDictionary *_cellNibExternalObjectsTables;	// 612 = 0x264
	NSMutableDictionary *_supplementaryViewNibExternalObjectsTables;	// 616 = 0x268
	struct {
		unsigned delegateShouldBegin : 1;
		unsigned delegateCanPrevent : 1;
		unsigned delegateCanBePrevented : 1;
		unsigned delegateShouldRecognizeSimultaneously : 1;
		unsigned delegateShouldReceiveTouch : 1;
		unsigned delegateShouldRequireFailure : 1;
		unsigned delegateShouldBeRequiredToFail : 1;
		unsigned delegateFailed : 1;
		unsigned privateDelegateShouldBegin : 1;
		unsigned privateDelegateCanPrevent : 1;
		unsigned privateDelegateCanBePrevented : 1;
		unsigned privateDelegateShouldRecognizeSimultaneously : 1;
		unsigned privateDelegateShouldReceiveTouch : 1;
		unsigned subclassShouldRequireFailure : 1;
		unsigned cancelsTouchesInView : 1;
		unsigned delaysTouchesBegan : 1;
		unsigned delaysTouchesEnded : 1;
		unsigned disabled : 1;
		unsigned dirty : 1;
		unsigned queriedFailureRequirements : 1;
		unsigned delivered : 1;
		unsigned continuous : 1;
		unsigned requiresDelayedBegan : 1;
	} _collectionViewFlags;	// 620 = 0x26c
	BOOL _haveSnapShot;	// 623 = 0x26f
	NSMutableDictionary *_layoutTransitionItemsInfos;	// 624 = 0x270
	CGPoint _lastLayoutOffset;	// 628 = 0x274
	UITouch *currentTouch;	// 636 = 0x27c
}
@property(assign, nonatomic) BOOL allowsMultipleSelection;	// G=0x30ffe75d; S=0x30ffe245; 
@property(assign, nonatomic) BOOL allowsSelection;	// G=0x30ffe231; S=0x30ffe1dd; 
@property(retain, nonatomic) UIView *backgroundView;	// G=0x3100af51; S=0x3100951d; @synthesize=_backgroundView
@property(retain, nonatomic) UICollectionViewLayout *collectionViewLayout;	// G=0x3100af31; S=0x310019b9; @synthesize=_layout
@property(retain, nonatomic, getter=_currentTouch, setter=_setCurrentTouch:) UITouch *currentTouch;	// G=0x3100af61; S=0x3100af71; @synthesize
@property(assign, nonatomic) id<UICollectionViewDataSource> dataSource;	// G=0x3100af41; S=0x30ffda25; @synthesize=_dataSource
@property(assign, nonatomic) id<UICollectionViewDelegate> delegate;	// S=0x30ffd7f9; @dynamic
@property(readonly, retain) NSMutableSet *indexPathsForSelectedItems;	// G=0x30ffdb39; converted property
+ (id)_reuseKeyForSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x310038e1
- (id)initWithCoder:(id)coder;	// 0x30ffc9dd
- (id)initWithFrame:(CGRect)frame;	// 0x30ffc761
- (id)initWithFrame:(CGRect)frame collectionViewLayout:(id)layout;	// 0x30ffc78d
- (void)_addControlledSubview:(id)subview;	// 0x30ffede1
- (void)_addEntriesFromDictionary:(id)dictionary inDictionary:(id)dictionary2;	// 0x30ffd3dd
- (void)_addEntriesFromDictionary:(id)dictionary inDictionary:(id)dictionary2 andSet:(id)set;	// 0x30ffd219
- (void)_applyRotationLayout;	// 0x3100ac9d
- (id)_arrayForUpdateAction:(int)updateAction;	// 0x31004b99
- (void)_beginUpdates;	// 0x310093b1
- (BOOL)_canPerformAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x3100ae41
- (void)_cancelTouches;	// 0x3100a191
- (void)_cellMenuDismissed;	// 0x3100af21
- (CGPoint)_contentOffsetForNewFrame:(CGRect)newFrame andNewContentSize:(CGSize)size;	// 0x3100a361
- (CGPoint)_contentOffsetForNewFrame:(CGRect)newFrame oldFrame:(CGRect)frame newContentSize:(CGSize)size andOldContentSize:(CGSize)size4;	// 0x3100a475
- (id)_createPreparedCellForItemAtIndexPath:(id)indexPath withLayoutAttributes:(id)layoutAttributes;	// 0x30fff79d
- (id)_createPreparedSupplementaryViewForElementOfKind:(id)kind atIndexPath:(id)indexPath withLayoutAttributes:(id)layoutAttributes;	// 0x30fffa69
// declared property getter: - (id)_currentTouch;	// 0x3100af61
- (id)_currentUpdate;	// 0x31004b89
- (BOOL)_dataSourceImplementsNumberOfSections;	// 0x30ffdb25
- (id)_dequeueReusableViewOfKind:(id)kind withIdentifier:(id)identifier forIndexPath:(id)indexPath;	// 0x31003f5d
- (void)_deselectAllAnimated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x30ffdcc5
- (void)_deselectItemAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x30ffe099
- (void)_endItemAnimations;	// 0x31005175
- (void)_endUpdates;	// 0x310093e5
- (BOOL)_highlightItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(int)position notifyDelegate:(BOOL)delegate;	// 0x30ffe499
- (id)_indexPathForView:(id)view ofType:(int)type;	// 0x31002ddd
- (void)_invalidateLayout;	// 0x310095b5
- (id)_keysForObject:(id)object inDictionary:(id)dictionary;	// 0x30ffd401
- (id)_layoutAttributesForItemsInRect:(CGRect)rect;	// 0x30ffdb75
- (id)_objectInDictionary:(id)dictionary forKind:(id)kind indexPath:(id)path;	// 0x30ffd151
- (void)_performAction:(SEL)action forCell:(id)cell sender:(id)sender;	// 0x3100aeb1
- (void)_prepareLayoutForUpdates;	// 0x31006fd5
- (void)_reloadDataIfNeeded;	// 0x30ffdae1
- (void)_resumeReloads;	// 0x30ffe789
- (void)_reuseCell:(id)cell;	// 0x31004751
- (void)_reuseSupplementaryView:(id)view;	// 0x310049f5
- (void)_scrollViewDidEndDraggingWithDeceleration:(BOOL)_scrollView;	// 0x3100a2fd
- (void)_scrollViewWillEndDraggingWithVelocity:(CGPoint)_scrollView targetContentOffset:(inout CGPoint *)offset;	// 0x31003919
- (void)_selectAllSelectedItems;	// 0x3100a0b5
- (void)_selectItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(unsigned)position notifyDelegate:(BOOL)delegate;	// 0x30ffde31
- (id)_selectableIndexPathForItemContainingHitView:(id)itemContainingHitView;	// 0x310096f9
// declared property setter: - (void)_setCurrentTouch:(id)touch;	// 0x3100af71
- (void)_setExternalObjectTable:(id)table forNibLoadingOfCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x31003e51
- (void)_setExternalObjectTable:(id)table forNibLoadingOfSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x31003ec1
- (void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;	// 0x30ffeaa9
- (void)_setNeedsVisibleCellsUpdate:(BOOL)update withLayoutAttributes:(BOOL)layoutAttributes;	// 0x30ffe7e9
- (void)_setObject:(id)object inDictionary:(id)dictionary forKind:(id)kind indexPath:(id)path;	// 0x30ffd179
- (void)_setUsesFastRotation:(BOOL)rotation;	// 0x310017f5
- (void)_setVisibleCell:(id)cell forIndexPath:(id)indexPath;	// 0x30ffd6b9
- (void)_setVisibleDecorationView:(id)view forReuseIdentifier:(id)reuseIdentifier indexPath:(id)path;	// 0x30ffd75d
- (void)_setVisibleSupplementaryView:(id)view forKind:(id)kind indexPath:(id)path;	// 0x30ffd709
- (void)_setupCellAnimations;	// 0x31005111
- (void)_setupViewsForUpdateWithBoundsSize:(CGSize)boundsSize;	// 0x3100a5d5
- (BOOL)_shouldShowMenuForCell:(id)cell;	// 0x3100ade9
- (void)_suspendReloads;	// 0x30ffe775
- (void)_unhighlightAllItems;	// 0x3100962d
- (void)_unhighlightItemAtIndexPath:(id)indexPath animated:(BOOL)animated notifyDelegate:(BOOL)delegate;	// 0x30ffe3a1
- (void)_updateAnimationDidStop:(id)_updateAnimation finished:(BOOL)finished context:(id)context;	// 0x31008fad
- (void)_updateBackgroundView;	// 0x31001815
- (void)_updateRowsAtIndexPaths:(id)indexPaths updateAction:(int)action;	// 0x31004ec5
- (void)_updateSections:(id)sections updateAction:(int)action;	// 0x31004c19
- (void)_updateVisibleCellsNow:(BOOL)now;	// 0x30fffc4d
- (void)_updateWithItems:(id)items;	// 0x310083c9
- (void)_userSelectItemAtIndexPath:(id)indexPath;	// 0x31009c49
- (BOOL)_usesFastRotation;	// 0x310017dd
- (id)_viewAnimationsForCurrentUpdate;	// 0x310070a5
- (CGRect)_visibleBounds;	// 0x30fff6a1
- (id)_visibleSupplementaryViewForKind:(id)kind andIndexPath:(id)path;	// 0x30ffd7b1
// declared property getter: - (BOOL)allowsMultipleSelection;	// 0x30ffe75d
// declared property getter: - (BOOL)allowsSelection;	// 0x30ffe231
- (void)animationDone:(id)done finished:(BOOL)finished context:(void *)context;	// 0x310019cd
// declared property getter: - (id)backgroundView;	// 0x3100af51
- (id)cellForItemAtIndexPath:(id)indexPath;	// 0x31002fed
- (void)cleanUpAfterBoundsUpdate;	// 0x3100ad5d
// declared property getter: - (id)collectionViewLayout;	// 0x3100af31
// declared property getter: - (id)dataSource;	// 0x3100af41
- (void)dealloc;	// 0x30ffcd99
- (void)deleteItemsAtIndexPaths:(id)indexPaths;	// 0x31005015
- (void)deleteSections:(id)sections;	// 0x31004d91
- (id)dequeueReusableCellWithReuseIdentifier:(id)reuseIdentifier forIndexPath:(id)indexPath;	// 0x310045f1
- (id)dequeueReusableSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier forIndexPath:(id)indexPath;	// 0x31004681
- (id)description;	// 0x30ffd0f9
- (void)deselectItemAtIndexPath:(id)indexPath animated:(BOOL)animated;	// 0x30ffe1a1
- (void)didMoveToWindow;	// 0x3100a2b1
- (void)encodeWithCoder:(id)coder;	// 0x30ffcbd1
- (id)indexPathForCell:(id)cell;	// 0x31002fc5
- (id)indexPathForItemAtPoint:(CGPoint)point;	// 0x31002c19
- (id)indexPathForSupplementaryView:(id)supplementaryView;	// 0x31002fd9
// converted property getter: - (id)indexPathsForSelectedItems;	// 0x30ffdb39
- (id)indexPathsForVisibleItems;	// 0x31003179
- (void)insertItemsAtIndexPaths:(id)indexPaths;	// 0x31005001
- (void)insertSections:(id)sections;	// 0x31004d7d
- (id)layoutAttributesForItemAtIndexPath:(id)indexPath;	// 0x31002b55
- (id)layoutAttributesForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x31002bb5
- (void)layoutSubviews;	// 0x31001899
- (void)moveItemAtIndexPath:(id)indexPath toIndexPath:(id)indexPath2;	// 0x3100503d
- (void)moveSection:(int)section toSection:(int)section2;	// 0x31004db9
- (int)numberOfItemsInSection:(int)section;	// 0x31002b15
- (int)numberOfSections;	// 0x31002ad9
- (void)performBatchUpdates:(id)updates completion:(id)completion;	// 0x31009411
- (void)prepareViewForBoundsSize:(CGSize)boundsSize;	// 0x3100aca1
- (void)registerClass:(Class)aClass forCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x31003969
- (void)registerClass:(Class)aClass forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x31003a65
- (void)registerNib:(id)nib forCellWithReuseIdentifier:(id)reuseIdentifier;	// 0x31003bdd
- (void)registerNib:(id)nib forSupplementaryViewOfKind:(id)kind withReuseIdentifier:(id)reuseIdentifier;	// 0x31003cd9
- (void)reloadData;	// 0x30ffe851
- (void)reloadItemsAtIndexPaths:(id)indexPaths;	// 0x31005029
- (void)reloadSections:(id)sections;	// 0x31004da5
- (void)scrollToItemAtIndexPath:(id)indexPath atScrollPosition:(unsigned)scrollPosition animated:(BOOL)animated;	// 0x310032cd
- (void)selectItemAtIndexPath:(id)indexPath animated:(BOOL)animated scrollPosition:(unsigned)position;	// 0x30ffe059
// declared property setter: - (void)setAllowsMultipleSelection:(BOOL)selection;	// 0x30ffe245
// declared property setter: - (void)setAllowsSelection:(BOOL)selection;	// 0x30ffe1dd
// declared property setter: - (void)setBackgroundView:(id)view;	// 0x3100951d
- (void)setBounds:(CGRect)bounds;	// 0x30fff145
// declared property setter: - (void)setCollectionViewLayout:(id)layout;	// 0x310019b9
- (void)setCollectionViewLayout:(id)layout animated:(BOOL)animated;	// 0x31001b09
// declared property setter: - (void)setDataSource:(id)source;	// 0x30ffda25
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30ffd7f9
- (void)setFrame:(CGRect)frame;	// 0x30fff2b5
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x310097f1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3100a23d
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x31009ced
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x31009b19
- (id)visibleCells;	// 0x31003079
@end


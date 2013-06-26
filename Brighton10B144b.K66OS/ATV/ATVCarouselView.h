/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSArray, ATVCarouselViewUIOpContext, NSTimer;
@protocol ATVCarouselViewDataSource, ATVCarouselViewUIDelegate, ATVCarouselViewDelegate;

__attribute__((visibility("hidden")))
@interface ATVCarouselView : BRControl {
	ATVCarouselViewUIOpContext *__uiOpContext;	// 84 = 0x54
	NSTimer *__delayedAnimationTimer;	// 88 = 0x58
	BOOL _editing;	// 92 = 0x5c
	BOOL __goingForward;	// 93 = 0x5d
	BOOL _subfocusChangeTriggersRelayout;	// 94 = 0x5e
	BOOL _swipeControlsCursor;	// 95 = 0x5f
	BOOL __isAutoAnimating;	// 96 = 0x60
	BOOL _autoAnimates;	// 97 = 0x61
	NSRange __focusableRange;	// 100 = 0x64
	id<ATVCarouselViewDataSource> _dataSource;	// 108 = 0x6c
	BOOL _cyclesItems;	// 112 = 0x70
	NSRange __presentedItemsRange;	// 116 = 0x74
	id<ATVCarouselViewDelegate> _delegate;	// 124 = 0x7c
	XXStruct_qlg9jA _preferredWidth;	// 128 = 0x80
	NSArray *__presentedItems;	// 132 = 0x84
	XXStruct_qlg9jA _preferredHeight;	// 136 = 0x88
	int __currentIndex;	// 140 = 0x8c
	id<ATVCarouselViewUIDelegate> _uiDelegate;	// 144 = 0x90
}
@property(assign, nonatomic) int _currentIndex;	// G=0x147151; S=0x147161; @synthesize=__currentIndex
@property(assign, nonatomic, setter=_setDelayedAnimationTimer:) NSTimer *_delayedAnimationTimer;	// G=0x146f81; S=0x144761; @synthesize=__delayedAnimationTimer
@property(assign, nonatomic) NSRange _focusableRange;	// G=0x147041; S=0x147059; @synthesize=__focusableRange
@property(assign, nonatomic) BOOL _goingForward;	// G=0x146fb1; S=0x146fc1; @synthesize=__goingForward
@property(assign, nonatomic) BOOL _isAutoAnimating;	// G=0x147011; S=0x147021; @synthesize=__isAutoAnimating
@property(retain, nonatomic) NSArray *_presentedItems;	// G=0x147105; S=0x147115; @synthesize=__presentedItems
@property(assign, nonatomic) NSRange _presentedItemsRange;	// G=0x14708d; S=0x1470a5; @synthesize=__presentedItemsRange
@property(retain, nonatomic, setter=_setUIOpContext:) ATVCarouselViewUIOpContext *_uiOpContext;	// G=0x146f71; S=0x1447a5; @synthesize=__uiOpContext
@property(assign, nonatomic) BOOL autoAnimates;	// G=0x147031; S=0x14325d; @synthesize=_autoAnimates
@property(assign, nonatomic) BOOL cyclesItems;	// G=0x14707d; S=0x143231; @synthesize=_cyclesItems
@property(assign, nonatomic) id<ATVCarouselViewDataSource> dataSource;	// G=0x14706d; S=0x1431a9; @synthesize=_dataSource
@property(assign, nonatomic) id<ATVCarouselViewDelegate> delegate;	// G=0x1470b9; S=0x1470c9; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x146f91; S=0x146fa1; @synthesize=_editing
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0x147125; S=0x147141; @synthesize=_preferredHeight
@property(assign, nonatomic) XXStruct_qlg9jA preferredWidth;	// G=0x1470d9; S=0x1470f5; @synthesize=_preferredWidth
@property(assign, nonatomic) int selectedIndex;	// G=0x143325; S=0x143315; 
@property(readonly, assign, nonatomic) BRControl *selectedItem;	// G=0x143379; 
@property(assign, nonatomic) BOOL subfocusChangeTriggersRelayout;	// G=0x146fd1; S=0x146fe1; @synthesize=_subfocusChangeTriggersRelayout
@property(assign, nonatomic) BOOL swipeControlsCursor;	// G=0x146ff1; S=0x147001; @synthesize=_swipeControlsCursor
@property(assign, nonatomic, setter=setUIDelegate:) id<ATVCarouselViewUIDelegate> uiDelegate;	// G=0x147171; S=0x1431e9; @synthesize=_uiDelegate
- (id)init;	// 0x143079
- (void)_beginEditing;	// 0x1458e5
- (void)_bringCurrentIndexWithinFocusableRange;	// 0x146bb5
- (BOOL)_canEditSelectedItem;	// 0x145745
- (BOOL)_canGoBackward;	// 0x145875
- (BOOL)_canGoForward;	// 0x1457d5
- (id)_controlAtIndex:(unsigned)index;	// 0x1445fd
// declared property getter: - (int)_currentIndex;	// 0x147151
// declared property getter: - (id)_delayedAnimationTimer;	// 0x146f81
- (void)_endEditingWithItemRemoved:(BOOL)itemRemoved;	// 0x145a79
- (void)_focusChanged:(id)changed;	// 0x146cfd
// declared property getter: - (NSRange)_focusableRange;	// 0x147041
// declared property getter: - (BOOL)_goingForward;	// 0x146fb1
- (BOOL)_handleEvent:(id)event;	// 0x145c19
- (BOOL)_handleRearrangeEvent:(id)event;	// 0x14658d
// declared property getter: - (BOOL)_isAutoAnimating;	// 0x147011
- (id)_makeUIOpContextWithType:(int)type;	// 0x144895
- (int)_mapPresentedItemsIndex:(int)index;	// 0x1456c9
- (void)_moveControlAtIndex:(int)index toIndex:(int)index2;	// 0x1468f5
// declared property getter: - (id)_presentedItems;	// 0x147105
// declared property getter: - (NSRange)_presentedItemsRange;	// 0x14708d
- (void)_processUIOpForItems:(id)items startingAtPositionIndex:(unsigned)positionIndex context:(id)context waitingForCompletion:(BOOL *)completion;	// 0x144a99
- (void)_scheduleRefreshWithType:(int)type;	// 0x144991
// declared property setter: - (void)_setDelayedAnimationTimer:(id)timer;	// 0x144761
- (BOOL)_setSelectedIndex:(int)index;	// 0x146a49
// declared property setter: - (void)_setUIOpContext:(id)context;	// 0x1447a5
- (void)_startAnimation;	// 0x145541
- (void)_stopAnimation;	// 0x145641
- (int)_targetIndexForMoveFromIndex:(int)index toProposedIndex:(int)proposedIndex;	// 0x146881
- (void)_trickleAnimation:(id)animation;	// 0x14523d
// declared property getter: - (id)_uiOpContext;	// 0x146f71
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x14455d
- (id)accessibilityRangeString;	// 0x144561
// declared property getter: - (BOOL)autoAnimates;	// 0x147031
- (BOOL)beginEditing;	// 0x143661
- (BOOL)brEventAction:(id)action;	// 0x1444d9
- (void)controlWasActivated;	// 0x143b51
- (void)controlWasDeactivated;	// 0x143ba9
- (void)controlWasFocused;	// 0x143c51
- (void)controlWasUnfocused;	// 0x143cd1
// declared property getter: - (BOOL)cyclesItems;	// 0x14707d
// declared property getter: - (id)dataSource;	// 0x14706d
- (void)dealloc;	// 0x143125
// declared property getter: - (id)delegate;	// 0x1470b9
- (void)endEditing;	// 0x1436b5
- (void)focusDirectlyOnControl:(id)control;	// 0x146e49
// declared property getter: - (BOOL)isEditing;	// 0x146f91
- (void)layoutSubcontrols;	// 0x143dfd
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0x147125
// declared property getter: - (XXStruct_qlg9jA)preferredWidth;	// 0x1470d9
- (void)reload;	// 0x143401
- (void)removeItemAtIndex:(int)index;	// 0x1436ed
// declared property getter: - (int)selectedIndex;	// 0x143325
// declared property getter: - (id)selectedItem;	// 0x143379
// declared property setter: - (void)setAutoAnimates:(BOOL)animates;	// 0x14325d
// declared property setter: - (void)setCyclesItems:(BOOL)items;	// 0x143231
// declared property setter: - (void)setDataSource:(id)source;	// 0x1431a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1470c9
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x146fa1
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0x147141
// declared property setter: - (void)setPreferredWidth:(XXStruct_qlg9jA)width;	// 0x1470f5
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x143315
- (void)setSelectedIndexSimulatingEvent:(int)event;	// 0x1432c9
// declared property setter: - (void)setSubfocusChangeTriggersRelayout:(BOOL)relayout;	// 0x146fe1
// declared property setter: - (void)setSwipeControlsCursor:(BOOL)cursor;	// 0x147001
// declared property setter: - (void)setUIDelegate:(id)delegate;	// 0x1431e9
// declared property setter: - (void)set_currentIndex:(int)index;	// 0x147161
// declared property setter: - (void)set_focusableRange:(NSRange)range;	// 0x147059
// declared property setter: - (void)set_goingForward:(BOOL)forward;	// 0x146fc1
// declared property setter: - (void)set_isAutoAnimating:(BOOL)animating;	// 0x147021
// declared property setter: - (void)set_presentedItems:(id)items;	// 0x147115
// declared property setter: - (void)set_presentedItemsRange:(NSRange)range;	// 0x1470a5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x143d69
// declared property getter: - (BOOL)subfocusChangeTriggersRelayout;	// 0x146fd1
// declared property getter: - (BOOL)swipeControlsCursor;	// 0x146ff1
// declared property getter: - (id)uiDelegate;	// 0x147171
@end

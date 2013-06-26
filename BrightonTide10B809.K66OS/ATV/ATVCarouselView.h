/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSTimer, NSArray, ATVCarouselViewUIOpContext;
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
@property(assign, nonatomic) int _currentIndex;	// G=0x147201; S=0x147211; @synthesize=__currentIndex
@property(assign, nonatomic, setter=_setDelayedAnimationTimer:) NSTimer *_delayedAnimationTimer;	// G=0x147031; S=0x144811; @synthesize=__delayedAnimationTimer
@property(assign, nonatomic) NSRange _focusableRange;	// G=0x1470f1; S=0x147109; @synthesize=__focusableRange
@property(assign, nonatomic) BOOL _goingForward;	// G=0x147061; S=0x147071; @synthesize=__goingForward
@property(assign, nonatomic) BOOL _isAutoAnimating;	// G=0x1470c1; S=0x1470d1; @synthesize=__isAutoAnimating
@property(retain, nonatomic) NSArray *_presentedItems;	// G=0x1471b5; S=0x1471c5; @synthesize=__presentedItems
@property(assign, nonatomic) NSRange _presentedItemsRange;	// G=0x14713d; S=0x147155; @synthesize=__presentedItemsRange
@property(retain, nonatomic, setter=_setUIOpContext:) ATVCarouselViewUIOpContext *_uiOpContext;	// G=0x147021; S=0x144855; @synthesize=__uiOpContext
@property(assign, nonatomic) BOOL autoAnimates;	// G=0x1470e1; S=0x14330d; @synthesize=_autoAnimates
@property(assign, nonatomic) BOOL cyclesItems;	// G=0x14712d; S=0x1432e1; @synthesize=_cyclesItems
@property(assign, nonatomic) id<ATVCarouselViewDataSource> dataSource;	// G=0x14711d; S=0x143259; @synthesize=_dataSource
@property(assign, nonatomic) id<ATVCarouselViewDelegate> delegate;	// G=0x147169; S=0x147179; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditing) BOOL editing;	// G=0x147041; S=0x147051; @synthesize=_editing
@property(assign, nonatomic) XXStruct_qlg9jA preferredHeight;	// G=0x1471d5; S=0x1471f1; @synthesize=_preferredHeight
@property(assign, nonatomic) XXStruct_qlg9jA preferredWidth;	// G=0x147189; S=0x1471a5; @synthesize=_preferredWidth
@property(assign, nonatomic) int selectedIndex;	// G=0x1433d5; S=0x1433c5; 
@property(readonly, assign, nonatomic) BRControl *selectedItem;	// G=0x143429; 
@property(assign, nonatomic) BOOL subfocusChangeTriggersRelayout;	// G=0x147081; S=0x147091; @synthesize=_subfocusChangeTriggersRelayout
@property(assign, nonatomic) BOOL swipeControlsCursor;	// G=0x1470a1; S=0x1470b1; @synthesize=_swipeControlsCursor
@property(assign, nonatomic, setter=setUIDelegate:) id<ATVCarouselViewUIDelegate> uiDelegate;	// G=0x147221; S=0x143299; @synthesize=_uiDelegate
- (id)init;	// 0x143129
- (void)_beginEditing;	// 0x145995
- (void)_bringCurrentIndexWithinFocusableRange;	// 0x146c65
- (BOOL)_canEditSelectedItem;	// 0x1457f5
- (BOOL)_canGoBackward;	// 0x145925
- (BOOL)_canGoForward;	// 0x145885
- (id)_controlAtIndex:(unsigned)index;	// 0x1446ad
// declared property getter: - (int)_currentIndex;	// 0x147201
// declared property getter: - (id)_delayedAnimationTimer;	// 0x147031
- (void)_endEditingWithItemRemoved:(BOOL)itemRemoved;	// 0x145b29
- (void)_focusChanged:(id)changed;	// 0x146dad
// declared property getter: - (NSRange)_focusableRange;	// 0x1470f1
// declared property getter: - (BOOL)_goingForward;	// 0x147061
- (BOOL)_handleEvent:(id)event;	// 0x145cc9
- (BOOL)_handleRearrangeEvent:(id)event;	// 0x14663d
// declared property getter: - (BOOL)_isAutoAnimating;	// 0x1470c1
- (id)_makeUIOpContextWithType:(int)type;	// 0x144945
- (int)_mapPresentedItemsIndex:(int)index;	// 0x145779
- (void)_moveControlAtIndex:(int)index toIndex:(int)index2;	// 0x1469a5
// declared property getter: - (id)_presentedItems;	// 0x1471b5
// declared property getter: - (NSRange)_presentedItemsRange;	// 0x14713d
- (void)_processUIOpForItems:(id)items startingAtPositionIndex:(unsigned)positionIndex context:(id)context waitingForCompletion:(BOOL *)completion;	// 0x144b49
- (void)_scheduleRefreshWithType:(int)type;	// 0x144a41
// declared property setter: - (void)_setDelayedAnimationTimer:(id)timer;	// 0x144811
- (BOOL)_setSelectedIndex:(int)index;	// 0x146af9
// declared property setter: - (void)_setUIOpContext:(id)context;	// 0x144855
- (void)_startAnimation;	// 0x1455f1
- (void)_stopAnimation;	// 0x1456f1
- (int)_targetIndexForMoveFromIndex:(int)index toProposedIndex:(int)proposedIndex;	// 0x146931
- (void)_trickleAnimation:(id)animation;	// 0x1452ed
// declared property getter: - (id)_uiOpContext;	// 0x147021
- (BOOL)accessibilityOutputsRangeForChildren;	// 0x14460d
- (id)accessibilityRangeString;	// 0x144611
// declared property getter: - (BOOL)autoAnimates;	// 0x1470e1
- (BOOL)beginEditing;	// 0x143711
- (BOOL)brEventAction:(id)action;	// 0x144589
- (void)controlWasActivated;	// 0x143c01
- (void)controlWasDeactivated;	// 0x143c59
- (void)controlWasFocused;	// 0x143d01
- (void)controlWasUnfocused;	// 0x143d81
// declared property getter: - (BOOL)cyclesItems;	// 0x14712d
// declared property getter: - (id)dataSource;	// 0x14711d
- (void)dealloc;	// 0x1431d5
// declared property getter: - (id)delegate;	// 0x147169
- (void)endEditing;	// 0x143765
- (void)focusDirectlyOnControl:(id)control;	// 0x146ef9
// declared property getter: - (BOOL)isEditing;	// 0x147041
- (void)layoutSubcontrols;	// 0x143ead
// declared property getter: - (XXStruct_qlg9jA)preferredHeight;	// 0x1471d5
// declared property getter: - (XXStruct_qlg9jA)preferredWidth;	// 0x147189
- (void)reload;	// 0x1434b1
- (void)removeItemAtIndex:(int)index;	// 0x14379d
// declared property getter: - (int)selectedIndex;	// 0x1433d5
// declared property getter: - (id)selectedItem;	// 0x143429
// declared property setter: - (void)setAutoAnimates:(BOOL)animates;	// 0x14330d
// declared property setter: - (void)setCyclesItems:(BOOL)items;	// 0x1432e1
// declared property setter: - (void)setDataSource:(id)source;	// 0x143259
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x147179
// declared property setter: - (void)setEditing:(BOOL)editing;	// 0x147051
// declared property setter: - (void)setPreferredHeight:(XXStruct_qlg9jA)height;	// 0x1471f1
// declared property setter: - (void)setPreferredWidth:(XXStruct_qlg9jA)width;	// 0x1471a5
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x1433c5
- (void)setSelectedIndexSimulatingEvent:(int)event;	// 0x143379
// declared property setter: - (void)setSubfocusChangeTriggersRelayout:(BOOL)relayout;	// 0x147091
// declared property setter: - (void)setSwipeControlsCursor:(BOOL)cursor;	// 0x1470b1
// declared property setter: - (void)setUIDelegate:(id)delegate;	// 0x143299
// declared property setter: - (void)set_currentIndex:(int)index;	// 0x147211
// declared property setter: - (void)set_focusableRange:(NSRange)range;	// 0x147109
// declared property setter: - (void)set_goingForward:(BOOL)forward;	// 0x147071
// declared property setter: - (void)set_isAutoAnimating:(BOOL)animating;	// 0x1470d1
// declared property setter: - (void)set_presentedItems:(id)items;	// 0x1471c5
// declared property setter: - (void)set_presentedItemsRange:(NSRange)range;	// 0x147155
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x143e19
// declared property getter: - (BOOL)subfocusChangeTriggersRelayout;	// 0x147081
// declared property getter: - (BOOL)swipeControlsCursor;	// 0x1470a1
// declared property getter: - (id)uiDelegate;	// 0x147221
@end

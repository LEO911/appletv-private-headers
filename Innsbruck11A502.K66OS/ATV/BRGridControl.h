/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRProviderGroup;

__attribute__((visibility("hidden")))
@interface BRGridControl : BRControl {
	BRProviderGroup *_group;	// 84 = 0x54
	BRControl *_requester;	// 88 = 0x58
	NSRange _range;	// 92 = 0x5c
	float _lastGapHeight;	// 100 = 0x64
	double _heightToRange;	// 104 = 0x68
	double _allRowsHeight;	// 112 = 0x70
	float _singleControlHeight;	// 120 = 0x78
	BOOL _allRowsAreSameHeight;	// 124 = 0x7c
	float _allColumnWidths;	// 128 = 0x80
	long _columnCount;	// 132 = 0x84
	XXStruct_qlg9jA _horizontalGap;	// 136 = 0x88
	XXStruct_qlg9jA _verticalGap;	// 140 = 0x8c
	float _leftMargin;	// 144 = 0x90
	float _rightMargin;	// 148 = 0x94
	float _bottomMargin;	// 152 = 0x98
	float _bottomMarginFactor;	// 156 = 0x9c
	float _topMargin;	// 160 = 0xa0
	float _topMarginFactor;	// 164 = 0xa4
	BOOL _wrapsNavigation;	// 168 = 0xa8
	BOOL _explicitlyAcceptsFocus;	// 169 = 0xa9
}
@property(assign) BOOL allRowsAreSameHeight;	// G=0x36370d; S=0x3636fd; converted property
@property(assign) long columnCount;	// G=0x362dad; S=0x362d81; converted property
@property(assign) XXStruct_qlg9jA horizontalGap;	// G=0x362dfd; S=0x362dbd; converted property
@property(assign) float leftMargin;	// G=0x362f0d; S=0x362ed1; converted property
@property(retain) id providerRequester;	// G=0x362f7d; S=0x362f69; converted property
@property(retain) id providers;	// G=0x362cd5; S=0x362a85; converted property
@property(assign) float rightMargin;	// G=0x362f59; S=0x362f1d; converted property
@property(assign) XXStruct_qlg9jA verticalGap;	// G=0x362e81; S=0x362e19; converted property
@property(assign) BOOL wrapsNavigation;	// G=0x3635d5; S=0x3635c5; converted property
- (id)init;	// 0x362921
- (void).cxx_destruct;	// 0x363f0d
- (id)_controlAtIndex:(long)index controls:(id)controls;	// 0x3656c5
- (long)_controlsInHeight:(double)height startingAt:(long)at actualHeight:(double *)height3;	// 0x3650f1
- (long)_controlsInHeightBackwards:(double)heightBackwards startingAt:(long)at actualHeight:(double *)height;	// 0x365219
- (id)_controlsInRange:(NSRange)range;	// 0x3654f9
- (id)_createControlsInRange:(NSRange)range;	// 0x3653a5
- (CGRect)_frameForControlAtIndex:(long)index controls:(id)controls;	// 0x364ad1
- (CGRect)_frameForControlAtIndex:(long)index rowFrame:(CGRect)frame controls:(id)controls;	// 0x364c25
- (void)_frameRowInRange:(NSRange)range rowFrame:(CGRect)frame controls:(id)controls;	// 0x364ced
- (float)_heightOfControlAtIndex:(long)index controls:(id)controls;	// 0x364e49
- (double)_heightOfRowsInRange:(NSRange)range includeVerticalGap:(BOOL)gap controls:(id)controls;	// 0x365011
- (double)_heightToRange;	// 0x364899
- (long)_indexOfFocusedControl;	// 0x365321
- (float)_positionOfColumn:(long)column inRowWidth:(float)rowWidth cellWidth:(float *)width;	// 0x3649a5
- (void)_providerDataSetChanged:(id)changed;	// 0x365901
- (void)_providerModified:(id)modified;	// 0x365981
- (float)_rowHeightForControlsInRange:(NSRange)range controls:(id)controls;	// 0x364dc5
- (id)_setControlRange:(NSRange)range withHeightToRange:(double)range2;	// 0x364651
- (double)_totalHeight;	// 0x364779
- (void)_updateControlsInRange:(NSRange)range controls:(id)controls;	// 0x365775
- (id)accessibilityControls;	// 0x363d29
// converted property getter: - (BOOL)allRowsAreSameHeight;	// 0x36370d
- (BOOL)brEventAction:(id)action;	// 0x3631e9
// converted property getter: - (long)columnCount;	// 0x362dad
- (BOOL)controlAcceptsFocusAtIndex:(long)index;	// 0x364011
- (CGRect)controlFocusFrameAtIndex:(long)index;	// 0x3642d9
- (CGRect)controlFrameAtIndex:(long)index;	// 0x3641dd
- (unsigned)countOfCells;	// 0x363d45
- (long)dataCount;	// 0x362cf5
- (void)dealloc;	// 0x3629cd
- (void)focusControlAtIndex:(long)index;	// 0x364075
- (void)focusDirectlyOnControl:(id)control;	// 0x363f3d
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x36333d
- (float)heightOfControlAtIndex:(long)index;	// 0x3631a5
- (float)heightToMaximum:(float)maximum;	// 0x363061
// converted property getter: - (XXStruct_qlg9jA)horizontalGap;	// 0x362dfd
- (unsigned)indexInCellsOfObject:(id)object;	// 0x363d55
- (id)initialFocus;	// 0x363e19
- (void)layoutSubcontrols;	// 0x363731
// converted property getter: - (float)leftMargin;	// 0x362f0d
- (id)objectInCellsAtIndex:(unsigned)index;	// 0x363dbd
- (float)positionOfColumn:(long)column;	// 0x363151
- (id)providerForDataAtIndex:(long)index providerIndex:(long *)index2;	// 0x362d15
// converted property getter: - (id)providerRequester;	// 0x362f7d
// converted property getter: - (id)providers;	// 0x362cd5
- (void)reloadData;	// 0x364429
// converted property getter: - (float)rightMargin;	// 0x362f59
- (long)rowCount;	// 0x362d35
- (void)setAcceptsFocus:(BOOL)focus;	// 0x3643c5
- (void)setAllColumnWidths:(float)widths;	// 0x362d71
// converted property setter: - (void)setAllRowsAreSameHeight:(BOOL)height;	// 0x3636fd
- (void)setBottomMargin:(float)margin;	// 0x3635e5
// converted property setter: - (void)setColumnCount:(long)count;	// 0x362d81
// converted property setter: - (void)setHorizontalGap:(XXStruct_qlg9jA)gap;	// 0x362dbd
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x362ed1
- (void)setProvider:(id)provider;	// 0x362a39
// converted property setter: - (void)setProviderRequester:(id)requester;	// 0x362f69
// converted property setter: - (void)setProviders:(id)providers;	// 0x362a85
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x362f1d
- (void)setTopMargin:(float)margin;	// 0x363671
// converted property setter: - (void)setVerticalGap:(XXStruct_qlg9jA)gap;	// 0x362e19
- (void)setVerticalMargins:(float)margins;	// 0x362e9d
// converted property setter: - (void)setWrapsNavigation:(BOOL)navigation;	// 0x3635c5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x363b49
// converted property getter: - (XXStruct_qlg9jA)verticalGap;	// 0x362e81
- (id)visibleControlAtIndex:(long)index;	// 0x362ff1
- (id)visibleControlsWithRange:(NSRange *)range;	// 0x362f9d
- (NSRange)visibleRange;	// 0x362fd9
- (void)visibleScrollRectChanged;	// 0x36371d
- (void)windowMaxBoundsChanged;	// 0x363c79
// converted property getter: - (BOOL)wrapsNavigation;	// 0x3635d5
@end


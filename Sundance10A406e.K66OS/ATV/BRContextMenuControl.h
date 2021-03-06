/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRBoxListControl, NSTimer;

__attribute__((visibility("hidden")))
@interface BRContextMenuControl : BRControl {
	BRControl *_endPositionControl;	// 84 = 0x54
	BRControl *_startPositionControl;	// 88 = 0x58
	BRControl *_dimControl;	// 92 = 0x5c
	BRControl *_dimPanel;	// 96 = 0x60
	CGRect _endPositionControlFrame;	// 100 = 0x64
	CGRect _startPositionControlFrame;	// 116 = 0x74
	CGRect _dimControlFrame;	// 132 = 0x84
	BRControl *_container;	// 148 = 0x94
	BRBoxListControl *_contextBox;	// 152 = 0x98
	BRBoxListControl *_detailContextBox;	// 156 = 0x9c
	BOOL showingDetailContextBox;	// 160 = 0xa0
	int _dimOption;	// 164 = 0xa4
	NSTimer *_autoDismissTimer;	// 168 = 0xa8
}
@property(retain) BRControl *dimControl;	// G=0x2bad9d; S=0x2bad61; converted property
@property(assign) int dimOption;	// G=0x2badcd; S=0x2badad; converted property
@property(retain) BRControl *endPositionControl;	// G=0x2bad51; S=0x2bad15; converted property
@property(assign) BOOL isVisible;	// G=0x2bb2f1; S=0x2bb1c1; converted property
@property(retain) id providers;	// G=0x2bac19; S=0x2babdd; converted property
@property(retain) BRControl *startPositionControl;	// G=0x2bad05; S=0x2bacc9; converted property
- (id)init;	// 0x2ba849
- (void)_addAnimationsForDisplayState:(BOOL)displayState;	// 0x2bb341
- (void)_autoDismissTimerFired:(id)fired;	// 0x2bb31d
- (CGRect)_dimControlFrame;	// 0x2bbc11
- (void)_dissmissAnimationComplete;	// 0x2bb951
- (CGRect)_endPositionControlFrame;	// 0x2bb979
- (void)_flipToContextMenu;	// 0x2bbe21
- (void)_flipToDetailContextMenu;	// 0x2bbd5d
- (CGRect)_startPositionControlFrame;	// 0x2bbac5
- (BOOL)brEventAction:(id)action;	// 0x2baac1
- (void)controlWasDeactivated;	// 0x2baa6d
- (void)dealloc;	// 0x2ba9a5
- (void)didMoveToSuperview;	// 0x2bb2b9
// converted property getter: - (id)dimControl;	// 0x2bad9d
// converted property getter: - (int)dimOption;	// 0x2badcd
// converted property getter: - (id)endPositionControl;	// 0x2bad51
// converted property getter: - (BOOL)isVisible;	// 0x2bb2f1
- (void)layoutSubcontrols;	// 0x2baddd
// converted property getter: - (id)providers;	// 0x2bac19
- (void)setDetailProviders:(id)providers;	// 0x2bac39
// converted property setter: - (void)setDimControl:(id)control;	// 0x2bad61
// converted property setter: - (void)setDimOption:(int)option;	// 0x2badad
// converted property setter: - (void)setEndPositionControl:(id)control;	// 0x2bad15
// converted property setter: - (void)setIsVisible:(BOOL)visible;	// 0x2bb1c1
- (void)setProvider:(id)provider;	// 0x2bab9d
// converted property setter: - (void)setProviders:(id)providers;	// 0x2babdd
// converted property setter: - (void)setStartPositionControl:(id)control;	// 0x2bacc9
// converted property getter: - (id)startPositionControl;	// 0x2bad05
@end


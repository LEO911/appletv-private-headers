/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRDotArrayControl, BRCursorControl, BRHeaderControl, BRImageControl, NSString, BRImage;

__attribute__((visibility("hidden")))
@interface BRPageStripView : BRControl {
	id _dataSource;	// 80 = 0x50
	id _delegate;	// 84 = 0x54
	BRHeaderControl *_headerControl;	// 88 = 0x58
	BRCursorControl *_cursor;	// 92 = 0x5c
	BRDotArrayControl *_dotControl;	// 96 = 0x60
	BRImageControl *_overlayImageControl;	// 100 = 0x64
	BRControl *_descControl;	// 104 = 0x68
	int _selectedIndex;	// 108 = 0x6c
	BRControl *_prevPrevControl;	// 112 = 0x70
	BRControl *_prevControl;	// 116 = 0x74
	BRControl *_selectedControl;	// 120 = 0x78
	BRControl *_nextControl;	// 124 = 0x7c
	BRControl *_nextNextControl;	// 128 = 0x80
}
@property(assign, nonatomic) id dataSource;	// G=0x282579; S=0x281ee5; @synthesize=_dataSource
@property(assign, nonatomic) id delegate;	// G=0x282589; S=0x282599; @synthesize=_delegate
@property(readonly, assign, nonatomic) BRDotArrayControl *dotControl;	// G=0x2825c9; @synthesize=_dotControl
@property(retain, nonatomic) BRImage *headerImage;	// G=0x281fe9; S=0x281f85; 
@property(retain, nonatomic) BRImage *overlayImage;	// G=0x281f25; S=0x281f05; 
@property(assign, nonatomic) int selectedIndex;	// G=0x2825a9; S=0x2825b9; @synthesize=_selectedIndex
@property(copy, nonatomic) NSString *title;	// G=0x281f65; S=0x281f45; 
+ (id)pageStripView;	// 0x281c79
- (id)init;	// 0x281cb1
- (BOOL)_loadLeft;	// 0x282bdd
- (BOOL)_loadRight;	// 0x2830d1
- (CGPoint)_nextNextPos;	// 0x283949
- (CGPoint)_nextPos;	// 0x28389d
- (CGPoint)_prevPos;	// 0x283779
- (CGPoint)_prevPrevPos;	// 0x2836c5
- (void)_removeNextNext:(id)next;	// 0x2839f9
- (void)_removePrevPrev:(id)prev;	// 0x283a35
- (CGPoint)_selectedPos;	// 0x283825
- (void)_setPagesTargetBounds;	// 0x2825d9
- (float)_xPosOffset;	// 0x2835d9
- (float)_yPosOffset;	// 0x283679
- (BOOL)brEventAction:(id)action;	// 0x2820b5
// declared property getter: - (id)dataSource;	// 0x282579
- (void)dealloc;	// 0x281de1
// declared property getter: - (id)delegate;	// 0x282589
// declared property getter: - (id)dotControl;	// 0x2825c9
- (id)focusedControlForEvent:(id)event focusPoint:(CGPoint *)point;	// 0x282009
// declared property getter: - (id)headerImage;	// 0x281fe9
- (void)layoutSubcontrols;	// 0x28246d
// declared property getter: - (id)overlayImage;	// 0x281f25
- (void)reload;	// 0x2821e5
// declared property getter: - (int)selectedIndex;	// 0x2825a9
// declared property setter: - (void)setDataSource:(id)source;	// 0x281ee5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x282599
// declared property setter: - (void)setHeaderImage:(id)image;	// 0x281f85
// declared property setter: - (void)setOverlayImage:(id)image;	// 0x281f05
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x2825b9
// declared property setter: - (void)setTitle:(id)title;	// 0x281f45
// declared property getter: - (id)title;	// 0x281f65
@end


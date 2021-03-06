/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRSpacerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardControl : BRControl {
@private
	BRControl *_mainKeysContainer;	// 48 = 0x30
	BRSpacerControl *_verticalSpacer;	// 52 = 0x34
	BRControl *_actionKeysContainer;	// 56 = 0x38
}
@property(retain) BRControl *actionKeysContainer;	// G=0x32ad0c2d; S=0x32ad0c3d; converted property
@property(retain) id focusedKeyControl;	// G=0x32ad0d3d; S=0x32ad0da9; converted property
@property(readonly, retain) BRControl *mainKeysContainer;	// G=0x32ad0c1d; converted property
+ (id)keyboardControlWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x32ad0779
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x32ad07c9
// converted property getter: - (id)actionKeysContainer;	// 0x32ad0c2d
- (void)dealloc;	// 0x32ad08bd
- (id)defaultKeyControl;	// 0x32ad0ca9
- (BOOL)focusIsAtRightEdge;	// 0x32ad1399
// converted property getter: - (id)focusedKeyControl;	// 0x32ad0d3d
- (CGPoint)focusedPoint;	// 0x32ad0fc9
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x32ad128d
- (void)layoutSubcontrols;	// 0x32ad0931
// converted property getter: - (id)mainKeysContainer;	// 0x32ad0c1d
// converted property setter: - (void)setActionKeysContainer:(id)container;	// 0x32ad0c3d
- (void)setFocusToDefaultKeyControl;	// 0x32ad0e91
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x32ad0f51
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x32ad0da9
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x32ad10fd
- (void)setVerticalSpacing:(float)spacing;	// 0x32ad0d01
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x32ad0b19
@end


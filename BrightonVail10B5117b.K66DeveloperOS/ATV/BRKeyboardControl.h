/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRSpacerControl;

__attribute__((visibility("hidden")))
@interface BRKeyboardControl : BRControl {
	BRControl *_mainKeysContainer;	// 84 = 0x54
	BRSpacerControl *_verticalSpacer;	// 88 = 0x58
	BRControl *_actionKeysContainer;	// 92 = 0x5c
}
@property(retain) BRControl *actionKeysContainer;	// G=0x319afd; S=0x319b0d; converted property
@property(retain) id focusedKeyControl;	// G=0x319c05; S=0x319c65; converted property
@property(readonly, retain) BRControl *mainKeysContainer;	// G=0x319aed; converted property
+ (id)keyboardControlWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x319661
- (id)initWithMainKeysContainer:(id)mainKeysContainer actionKeysContainer:(id)container;	// 0x3196b1
// converted property getter: - (id)actionKeysContainer;	// 0x319afd
- (void)dealloc;	// 0x31979d
- (id)defaultKeyControl;	// 0x319b71
- (BOOL)focusIsAtRightEdge;	// 0x31a195
// converted property getter: - (id)focusedKeyControl;	// 0x319c05
- (CGPoint)focusedPoint;	// 0x319de5
- (BOOL)keyboardFocusIsAtEdge:(int)edge;	// 0x31a0a9
- (void)layoutSubcontrols;	// 0x319815
// converted property getter: - (id)mainKeysContainer;	// 0x319aed
// converted property setter: - (void)setActionKeysContainer:(id)container;	// 0x319b0d
- (void)setFocusToGlyphNamed:(id)glyphNamed;	// 0x319d71
// converted property setter: - (void)setFocusedKeyControl:(id)control;	// 0x319c65
- (BOOL)setFocusedPoint:(CGPoint)point;	// 0x319f21
- (void)setTargetTextEntryControl:(id)control;	// 0x31a301
- (void)setTargetTextField:(id)field;	// 0x31a2fd
- (void)setVerticalSpacing:(float)spacing;	// 0x319bc9
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3199fd
@end


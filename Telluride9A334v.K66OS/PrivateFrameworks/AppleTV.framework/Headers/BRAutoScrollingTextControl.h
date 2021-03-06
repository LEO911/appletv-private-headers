/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRMarqueeTextControl, NSAttributedString, BRTextControl;

__attribute__((visibility("hidden")))
@interface BRAutoScrollingTextControl : BRControl {
@private
	NSAttributedString *_text;	// 48 = 0x30
	BRMarqueeTextControl *_scrollingTextControl;	// 52 = 0x34
	BRTextControl *_textControl;	// 56 = 0x38
	BOOL _crossfadeEnabled;	// 60 = 0x3c
	BOOL _autoScrollEnabled;	// 61 = 0x3d
	BOOL _displaysText;	// 62 = 0x3e
	BOOL _useAlphaFadeMask;	// 63 = 0x3f
	BOOL _animationUsesDelay;	// 64 = 0x40
}
@property(assign) BOOL animationUsesDelay;	// G=0x331eab05; S=0x331eaaf5; converted property
@property(retain) id attributedString;	// G=0x331ea9d9; S=0x331ea91d; converted property
@property(assign) BOOL autoScrollEnabled;	// G=0x331eaa39; S=0x331eaa09; converted property
@property(assign) BOOL crossfadeEnabled;	// G=0x331ea9f9; S=0x331ea9e9; converted property
@property(assign) BOOL displaysText;	// G=0x331eaae5; S=0x331eaa49; converted property
@property(assign) BOOL useAlphaFadeMask;	// G=0x331eab25; S=0x331eab15; converted property
- (id)init;	// 0x331ea7f1
- (void)_removeMarqueeControl;	// 0x331eb1dd
- (void)_removeTextControl;	// 0x331eb195
// converted property getter: - (BOOL)animationUsesDelay;	// 0x331eab05
// converted property getter: - (id)attributedString;	// 0x331ea9d9
// converted property getter: - (BOOL)autoScrollEnabled;	// 0x331eaa39
// converted property getter: - (BOOL)crossfadeEnabled;	// 0x331ea9f9
- (void)dealloc;	// 0x331ea835
// converted property getter: - (BOOL)displaysText;	// 0x331eaae5
- (void)layoutSubcontrols;	// 0x331eab35
- (id)preferredActionForKey:(id)key;	// 0x331eb091
// converted property setter: - (void)setAnimationUsesDelay:(BOOL)delay;	// 0x331eaaf5
// converted property setter: - (void)setAttributedString:(id)string;	// 0x331ea91d
// converted property setter: - (void)setAutoScrollEnabled:(BOOL)enabled;	// 0x331eaa09
// converted property setter: - (void)setCrossfadeEnabled:(BOOL)enabled;	// 0x331ea9e9
// converted property setter: - (void)setDisplaysText:(BOOL)text;	// 0x331eaa49
- (void)setText:(id)text withAttributes:(id)attributes;	// 0x331ea8a9
// converted property setter: - (void)setUseAlphaFadeMask:(BOOL)mask;	// 0x331eab15
// converted property getter: - (BOOL)useAlphaFadeMask;	// 0x331eab25
@end


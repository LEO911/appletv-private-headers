/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTextField.h"
#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRMarqueeTextControl, NSDictionary, NSMutableString, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface BRTextFieldControl : BRControl <BRTextField> {
	id _delegate;	// 84 = 0x54
	id _characterDelegate;	// 88 = 0x58
	BRMarqueeTextControl *_displayString;	// 92 = 0x5c
	NSMutableString *_clearString;	// 96 = 0x60
	NSDictionary *_savedAttributes;	// 100 = 0x64
	BOOL _useSecureText;	// 104 = 0x68
	BOOL _processingDeleteChar;	// 105 = 0x69
	BOOL _showCursor;	// 106 = 0x6a
	int _textLengthLimit;	// 108 = 0x6c
	NSTimer *_textObscureTimer;	// 112 = 0x70
	BOOL _drawCursorSymbolNow;	// 116 = 0x74
	NSString *_displayStringToSet;	// 120 = 0x78
	NSTimer *__enhancedCursorBlinkTimer;	// 124 = 0x7c
}
@property(assign, nonatomic, setter=_setEnhancedCursorBlinkTimer:) NSTimer *_enhancedCursorBlinkTimer;	// G=0x30b525; S=0x30b4a1; @synthesize=__enhancedCursorBlinkTimer
@property(assign) id characterDelegate;	// G=0x30a9a5; S=0x30a9b5; converted property
@property(assign) id delegate;	// G=0x30a985; S=0x30a995; converted property
@property(retain, nonatomic) NSString *displayStringToSet;	// G=0x30b505; S=0x30b515; @synthesize=_displayStringToSet
@property(assign, nonatomic) BOOL drawCursorSymbolNow;	// G=0x30b4e5; S=0x30b4f5; @synthesize=_drawCursorSymbolNow
@property(assign) BOOL showCursor;	// G=0x30a9c5; S=0x30a9d5; converted property
@property(retain) id textAttributes;	// G=0x30aaf1; S=0x30ab01; converted property
@property(assign) int textLengthLimit;	// G=0x30aad1; S=0x30aae1; converted property
@property(assign) BOOL useSecureText;	// G=0x30aa89; S=0x30aa99; converted property
- (id)init;	// 0x30a4ad
- (void)_enhancedBlinkCursorTimerFired:(id)fired;	// 0x30b779
// declared property getter: - (id)_enhancedCursorBlinkTimer;	// 0x30b525
- (id)_secureTextFromClearText;	// 0x30b535
- (void)_secureTextObscureTimerFired:(id)fired;	// 0x30b715
// declared property setter: - (void)_setEnhancedCursorBlinkTimer:(id)timer;	// 0x30b4a1
- (void)_startSecureTextObscureTimer;	// 0x30b645
- (void)_stopSecureTextObscureTimer;	// 0x30b6e5
- (id)accessibilityTraitsList;	// 0x30adc5
- (id)accessibilityValue;	// 0x30ada5
- (BOOL)brKeyEvent:(id)event;	// 0x30aec5
// converted property getter: - (id)characterDelegate;	// 0x30a9a5
- (void)controlWasDeactivated;	// 0x30a941
- (void)dealloc;	// 0x30a5e5
// converted property getter: - (id)delegate;	// 0x30a985
// declared property getter: - (id)displayStringToSet;	// 0x30b505
// declared property getter: - (BOOL)drawCursorSymbolNow;	// 0x30b4e5
- (void)drawRect:(CGRect)rect;	// 0x30a695
- (float)maxScrollPosition;	// 0x30ad65
- (BOOL)needsScrollingInBounds:(CGRect)bounds;	// 0x30ad35
// converted property setter: - (void)setCharacterDelegate:(id)delegate;	// 0x30a9b5
- (void)setClearString:(id)string;	// 0x30abd5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x30a995
- (void)setDisplayString:(id)string;	// 0x30ab85
// declared property setter: - (void)setDisplayStringToSet:(id)set;	// 0x30b515
// declared property setter: - (void)setDrawCursorSymbolNow:(BOOL)now;	// 0x30b4f5
- (void)setScrollPosition:(float)position;	// 0x30ad85
// converted property setter: - (void)setShowCursor:(BOOL)cursor;	// 0x30a9d5
- (void)setString:(id)string;	// 0x30ae61
// converted property setter: - (void)setTextAttributes:(id)attributes;	// 0x30ab01
// converted property setter: - (void)setTextLengthLimit:(int)limit;	// 0x30aae1
// converted property setter: - (void)setUseSecureText:(BOOL)text;	// 0x30aa99
// converted property getter: - (BOOL)showCursor;	// 0x30a9c5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x30ac2d
- (id)stringValue;	// 0x30ae29
// converted property getter: - (id)textAttributes;	// 0x30aaf1
// converted property getter: - (int)textLengthLimit;	// 0x30aad1
// converted property getter: - (BOOL)useSecureText;	// 0x30aa89
@end


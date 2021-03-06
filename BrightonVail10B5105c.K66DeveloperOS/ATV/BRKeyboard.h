/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRGridView, BRTextEntryControl, BRKeyboardControl, BRControl, NSMutableArray, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BRKeyboard : XXUnknownSuperclass {
	BRTextEntryControl *_textEntryControl;	// 4 = 0x4
	BRControl *_baseKeyControl;	// 8 = 0x8
	BRKeyboard *_baseKeyboard;	// 12 = 0xc
	NSString *_name;	// 16 = 0x10
	BRKeyboardControl *_keyboardControl;	// 20 = 0x14
	BRGridView *_mainKeysGrid;	// 24 = 0x18
	NSMutableArray *_mainKeyControls;	// 28 = 0x1c
	BRControl *_actionKeysContainer;	// 32 = 0x20
	NSMutableArray *_actionKeyControls;	// 36 = 0x24
	NSArray *_keyDataDictionaries;	// 40 = 0x28
	BOOL _shouldShowLanguageSwitchButton;	// 44 = 0x2c
	BOOL _constrainCursorToPopupKeyboard;	// 45 = 0x2d
	BOOL _canWrapHorizontally;	// 46 = 0x2e
	BOOL _canWrapVertically;	// 47 = 0x2f
}
@property(retain) BRControl *baseKeyControl;	// G=0x304335; S=0x304325; converted property
@property(retain) BRKeyboard *baseKeyboard;	// G=0x304355; S=0x304345; converted property
@property(assign) BOOL canWrapHorizontally;	// G=0x3042e1; S=0x3042f1; converted property
@property(assign) BOOL canWrapVertically;	// G=0x304301; S=0x304311; converted property
@property(readonly, retain) NSArray *keyDataDictionaries;	// G=0x304751; converted property
@property(readonly, retain) BRKeyboardControl *keyboardControl;	// G=0x304369; converted property
@property(readonly, retain) NSMutableArray *mainKeyControls;	// G=0x304741; converted property
@property(readonly, retain) NSString *name;	// G=0x304365; converted property
@property(assign) BOOL shouldShowLanguageSwitchButton;	// G=0x304b11; S=0x304b01; converted property
@property(retain) BRTextEntryControl *textEntryControl;	// G=0x304255; S=0x304265; converted property
- (id)init;	// 0x304001
- (id)initWithBaseKeyControl:(id)baseKeyControl baseKeyboard:(id)keyboard textEntryControl:(id)control;	// 0x304121
- (void)_accessibilityApplyImageLabel:(id)label name:(id)name;	// 0x3069dd
- (float)_actionKeysContainerSpacing;	// 0x3075d1
- (float)_actionKeysContainerWidth;	// 0x3075cd
- (id)_controlForData:(id)data;	// 0x306b7d
- (CGColorRef)_createColorFromDictionary:(id)dictionary;	// 0x306931
- (void)_createMainAndActionKeyControls;	// 0x30576d
- (id)_filterRawKeyboardData:(id)data;	// 0x305f6d
- (id)_glyphDataForImage:(id)image;	// 0x3069f1
- (id)_glyphDataForStrings:(id)strings attributes:(id)attributes;	// 0x30656d
- (id)_glyphDataForTextString:(id)textString attributes:(id)attributes;	// 0x30635d
- (void)_handleActionKeySelectionEvent:(id)event;	// 0x30720d
- (Class)_keyboardControlClass;	// 0x3070f1
- (id)_keyboardDataFileName;	// 0x305f69
- (id)_mainKeyRowPlane;	// 0x30718d
- (float)_mainKeysHorizontalSpacing;	// 0x307209
- (float)_mainKeysVerticalSpacing;	// 0x307205
- (int)_numberOfActionKeyColumns;	// 0x307189
- (int)_numberOfActionKeyRows;	// 0x307175
- (int)_numberOfMainKeyColumns;	// 0x307171
- (int)_numberOfMainKeyRows;	// 0x30716d
- (int)_numberOfMainKeysInLastRow;	// 0x307179
- (id)_optionCharactersForKeyboardInput;	// 0x307075
- (id)_popupKeyboardDataFileName;	// 0x305f65
- (BOOL)_popupKeyboardValidForGlyph:(id)glyph;	// 0x3067fd
- (float)_preferredColumnWidthForMainKeysGrid;	// 0x3073dd
- (float)_preferredGlyphHeight:(id)height;	// 0x30706d
- (CGSize)_preferredGlyphSize:(id)size;	// 0x307265
- (float)_preferredGlyphWidth:(id)width;	// 0x307065
- (float)_preferredTextEntryControlWidth;	// 0x3073d9
- (id)_processGlyphDataChunk:(id)chunk;	// 0x3061dd
- (void)_replaceActionKeysContainerWithContainer:(id)container;	// 0x30710d
- (float)_verticalGapBetweenMainAndActionKeys;	// 0x3075d5
- (id)actionDictionaryForKeyControl:(id)keyControl;	// 0x304b25
- (id)allPopupkeyboardsCharacterSet;	// 0x30519d
- (id)attributesForTextFieldLabel;	// 0x3042ad
// converted property getter: - (id)baseKeyControl;	// 0x304335
// converted property getter: - (id)baseKeyboard;	// 0x304355
- (BOOL)canShowLanguageSwitchButton;	// 0x304b21
// converted property getter: - (BOOL)canWrapHorizontally;	// 0x3042e1
// converted property getter: - (BOOL)canWrapVertically;	// 0x304301
- (CGRect)candidatesBackgroundFrame;	// 0x3076f1
- (CGRect)candidatesContainerFrame;	// 0x307715
- (id)customizeTextEntryControls:(id)controls;	// 0x304289
- (id)customizedTextEntryFieldControls;	// 0x304279
- (void)customizedTextFieldControlsWereRemoved;	// 0x304285
- (void)dealloc;	// 0x30418d
- (id)focusedControlForActionKeysContainer:(id)actionKeysContainer;	// 0x304ae5
- (id)focusedControlForRow:(id)row;	// 0x304ad1
- (CGRect)frameForPopupKeyboardControl:(id)popupKeyboardControl baseKeyControl:(id)control;	// 0x3047d9
- (void)grid:(id)grid didSelectItemAtIndex:(long)index;	// 0x3056dd
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x30563d
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x3055dd
- (BOOL)handleEvent:(id)event;	// 0x304ef5
// converted property getter: - (id)keyDataDictionaries;	// 0x304751
- (id)keyboardCharacterSet;	// 0x304ef9
// converted property getter: - (id)keyboardControl;	// 0x304369
- (CGRect)keyboardControlFrame;	// 0x3076cd
- (float)layoutGapBelowKeyboardControl;	// 0x3075d9
- (float)layoutGapBelowTabControl;	// 0x3075dd
// converted property getter: - (id)mainKeyControls;	// 0x304741
- (int)mapVisualIndex:(int)index toRow:(id)row;	// 0x304af9
// converted property getter: - (id)name;	// 0x304365
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3055b5
- (long)numberOfItemsInGrid:(id)grid;	// 0x305581
- (int)numberOfKeyboardsForCurrentKeyboardType;	// 0x304321
- (CGRect)playPauseFrame;	// 0x3075e1
- (id)popupKeyboardForKeyControl:(id)keyControl textEntryControl:(id)control;	// 0x304769
- (BOOL)popupKeyboardShouldBeRightAlignedForKey:(id)popupKeyboard;	// 0x3049a1
- (BOOL)popupKeyboardShouldRemainDisplayedAfterCharacterSelection;	// 0x3049a5
- (void)removeCustomizedTextEntryControls:(id)controls;	// 0x3042a9
- (BOOL)requiresTextFieldLabel;	// 0x304ee1
// converted property setter: - (void)setBaseKeyControl:(id)control;	// 0x304325
// converted property setter: - (void)setBaseKeyboard:(id)keyboard;	// 0x304345
// converted property setter: - (void)setCanWrapHorizontally:(BOOL)horizontally;	// 0x3042f1
// converted property setter: - (void)setCanWrapVertically:(BOOL)vertically;	// 0x304311
- (void)setConstrainCursorToPopupKeyboard:(BOOL)popupKeyboard;	// 0x304ee5
- (void)setFocusedControlWithVisualIndex:(int)visualIndex forRow:(id)row;	// 0x304a75
// converted property setter: - (void)setShouldShowLanguageSwitchButton:(BOOL)showLanguageSwitchButton;	// 0x304b01
// converted property setter: - (void)setTextEntryControl:(id)control;	// 0x304265
// converted property getter: - (BOOL)shouldShowLanguageSwitchButton;	// 0x304b11
- (CGRect)spinnerFrame;	// 0x3078e1
- (void)startSpinning;	// 0x30427d
- (void)stopSpinning;	// 0x304281
- (id)switchToThisKeyboardIdentifier;	// 0x304275
- (CGRect)tabControlFrame;	// 0x3078bd
// converted property getter: - (id)textEntryControl;	// 0x304255
- (BOOL)textEntryControlShouldHandleActionKeysEvents;	// 0x304765
- (BOOL)textEntryControlShouldHandleMainKeysEvents;	// 0x304761
- (CGRect)textFieldBackgroundFrame;	// 0x30775d
- (CGRect)textFieldFrame;	// 0x307781
- (CGRect)textFieldLabelFrame;	// 0x307739
- (int)visualIndexOfControlWithName:(id)name forRow:(id)row;	// 0x3049ed
- (int)visualIndexOfFocusedControlForRow:(id)row;	// 0x3049a9
@end


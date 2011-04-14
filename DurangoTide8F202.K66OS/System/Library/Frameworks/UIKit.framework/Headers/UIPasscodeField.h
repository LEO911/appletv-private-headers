/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"
#import "UITextFieldDelegate.h"

@class UIButton, NSMutableArray, NSMutableString;

@interface UIPasscodeField : UIView <UITextFieldDelegate> {
	NSMutableString *_value;	// 44 = 0x2c
	NSMutableArray *_entryFields;	// 48 = 0x30
	NSMutableArray *_entryBackgrounds;	// 52 = 0x34
	UIButton *_okButton;	// 56 = 0x38
	BOOL _opaqueBackground;	// 60 = 0x3c
	BOOL _centerHorizontally;	// 61 = 0x3d
	int _keyboardType;	// 64 = 0x40
	int _keyboardAppearance;	// 68 = 0x44
	int _emptyContentReturnKeyType;	// 72 = 0x48
	id _delegate;	// 76 = 0x4c
}
@property(assign) int numberOfEntryFields;	// G=0x30754531; S=0x30754519; converted property
@property(assign) BOOL showsOKButton;	// G=0x307541f9; S=0x30754e15; converted property
@property(retain) id stringValue;	// G=0x305ab5cd; S=0x305b924d; converted property
+ (float)defaultHeight;	// 0x307547d1
+ (Class)textFieldClass;	// 0x307547b1
- (id)initWithFrame:(CGRect)frame;	// 0x307546e9
- (void)_textDidChange;	// 0x30754335
- (void)_updateFields;	// 0x305ab6c1
- (void)appendString:(id)string;	// 0x305ab5fd
- (BOOL)becomeFirstResponder;	// 0x30754499
- (BOOL)canBecomeFirstResponder;	// 0x307544f1
- (void)dealloc;	// 0x30754605
- (void)deleteLastCharacter;	// 0x30754551
- (id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;	// 0x30754221
- (BOOL)isFirstResponder;	// 0x30754425
// converted property getter: - (int)numberOfEntryFields;	// 0x30754531
- (void)okButtonClicked:(id)clicked;	// 0x30754269
- (void)setDelegate:(id)delegate;	// 0x3075420d
- (void)setKeyboardType:(int)type;	// 0x307546d1
- (void)setKeyboardType:(int)type appearance:(int)appearance;	// 0x307546ad
- (void)setKeyboardType:(int)type appearance:(int)appearance emptyContentReturnKeyType:(int)type3;	// 0x307541d1
// converted property setter: - (void)setNumberOfEntryFields:(int)entryFields;	// 0x30754519
- (void)setNumberOfEntryFields:(int)entryFields opaqueBackground:(BOOL)background;	// 0x307547fd
// converted property setter: - (void)setShowsOKButton:(BOOL)button;	// 0x30754e15
// converted property setter: - (void)setStringValue:(id)value;	// 0x305b924d
- (void)setTextCentersHorizontally:(BOOL)horizontally;	// 0x307545ad
// converted property getter: - (BOOL)showsOKButton;	// 0x307541f9
// converted property getter: - (id)stringValue;	// 0x305ab5cd
- (BOOL)textField:(id)field shouldInsertText:(id)text replacingRange:(NSRange)range;	// 0x307542e1
- (void)textFieldDidResignFirstResponder:(id)textField;	// 0x307542a9
- (BOOL)textFieldShouldStartEditing:(id)textField;	// 0x3075421d
@end

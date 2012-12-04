/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSString, NSDictionary, NSMutableDictionary;

@interface PSSpecifier : NSObject {
	id target;	// 4 = 0x4
	SEL getter;	// 8 = 0x8
	SEL setter;	// 12 = 0xc
	SEL action;	// 16 = 0x10
	SEL cancel;	// 20 = 0x14
	Class detailControllerClass;	// 24 = 0x18
	int cellType;	// 28 = 0x1c
	Class editPaneClass;	// 32 = 0x20
	int keyboardType;	// 36 = 0x24
	int autoCapsType;	// 40 = 0x28
	int autoCorrectionType;	// 44 = 0x2c
	int textFieldType;	// 48 = 0x30
	NSString *_name;	// 52 = 0x34
	NSArray *_values;	// 56 = 0x38
	NSDictionary *_titleDict;	// 60 = 0x3c
	NSDictionary *_shortTitleDict;	// 64 = 0x40
	id _userInfo;	// 68 = 0x44
	NSMutableDictionary *_properties;	// 72 = 0x48
	SEL _confirmationAction;	// 76 = 0x4c
	SEL _confirmationCancelAction;	// 80 = 0x50
	SEL _buttonAction;	// 84 = 0x54
@private
	SEL _controllerLoadAction;	// 88 = 0x58
@protected
	BOOL _showContentString;	// 92 = 0x5c
}
@property(assign, nonatomic) SEL buttonAction;	// G=0x3316800d; S=0x3316801d; @synthesize=_buttonAction
@property(assign, nonatomic) int cellType;	// G=0x33167efd; S=0x33167f0d; @synthesize
@property(assign, nonatomic) SEL confirmationAction;	// G=0x33167fcd; S=0x33167fdd; @synthesize=_confirmationAction
@property(assign, nonatomic) SEL confirmationCancelAction;	// G=0x33167fed; S=0x33167ffd; @synthesize=_confirmationCancelAction
@property(assign, nonatomic) SEL controllerLoadAction;	// G=0x3316802d; S=0x3316803d; @synthesize=_controllerLoadAction
@property(assign, nonatomic) Class detailControllerClass;	// G=0x33167edd; S=0x33167eed; @synthesize
@property(assign, nonatomic) Class editPaneClass;	// G=0x33167f1d; S=0x33167f2d; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x33167db5; S=0x33167d99; 
@property(retain, nonatomic) NSString *name;	// G=0x33167fad; S=0x33167fbd; @synthesize=_name
@property(retain) NSMutableDictionary *properties;	// G=0x33167575; S=0x33167539; converted property
@property(retain, nonatomic) NSDictionary *shortTitleDictionary;	// G=0x33167d75; S=0x33167f7d; @synthesize=_shortTitleDict
@property(assign, nonatomic) BOOL showContentString;	// G=0x3316804d; S=0x3316805d; @synthesize=_showContentString
@property(assign, nonatomic) id target;	// G=0x33167ebd; S=0x33167ecd; @synthesize
@property(retain, nonatomic) NSDictionary *titleDictionary;	// G=0x33167f5d; S=0x33167f6d; @synthesize=_titleDict
@property(retain, nonatomic) id userInfo;	// G=0x33167f3d; S=0x33167f4d; @synthesize=_userInfo
@property(retain, nonatomic) NSArray *values;	// G=0x33167f8d; S=0x33167f9d; @synthesize=_values
+ (int)autoCapsTypeForString:(id)string;	// 0x33167cb9
+ (int)autoCorrectionTypeForNumber:(id)number;	// 0x33167c8d
+ (id)emptyGroupSpecifier;	// 0x331674bd
+ (id)groupSpecifierWithName:(id)name;	// 0x33167489
+ (int)keyboardTypeForString:(id)string;	// 0x33167d25
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;	// 0x331673c9
- (id)init;	// 0x3316733d
// declared property getter: - (SEL)buttonAction;	// 0x3316800d
// declared property getter: - (int)cellType;	// 0x33167efd
// declared property getter: - (SEL)confirmationAction;	// 0x33167fcd
// declared property getter: - (SEL)confirmationCancelAction;	// 0x33167fed
// declared property getter: - (SEL)controllerLoadAction;	// 0x3316802d
- (void)dealloc;	// 0x33167b01
- (id)description;	// 0x33167bb5
// declared property getter: - (Class)detailControllerClass;	// 0x33167edd
// declared property getter: - (Class)editPaneClass;	// 0x33167f1d
// declared property getter: - (id)identifier;	// 0x33167db5
- (void)loadValuesAndTitlesFromDataSource;	// 0x33167585
// declared property getter: - (id)name;	// 0x33167fad
// converted property getter: - (id)properties;	// 0x33167575
- (id)propertyForKey:(id)key;	// 0x331674d1
- (void)removePropertyForKey:(id)key;	// 0x33167519
// declared property setter: - (void)setButtonAction:(SEL)action;	// 0x3316801d
// declared property setter: - (void)setCellType:(int)type;	// 0x33167f0d
// declared property setter: - (void)setConfirmationAction:(SEL)action;	// 0x33167fdd
// declared property setter: - (void)setConfirmationCancelAction:(SEL)action;	// 0x33167ffd
// declared property setter: - (void)setControllerLoadAction:(SEL)action;	// 0x3316803d
// declared property setter: - (void)setDetailControllerClass:(Class)aClass;	// 0x33167eed
// declared property setter: - (void)setEditPaneClass:(Class)aClass;	// 0x33167f2d
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x33167d99
- (void)setKeyboardType:(int)type autoCaps:(int)caps autoCorrection:(int)correction;	// 0x33167e39
// declared property setter: - (void)setName:(id)name;	// 0x33167fbd
// converted property setter: - (void)setProperties:(id)properties;	// 0x33167539
- (void)setProperty:(id)property forKey:(id)key;	// 0x331674f1
// declared property setter: - (void)setShortTitleDictionary:(id)dictionary;	// 0x33167f7d
// declared property setter: - (void)setShowContentString:(BOOL)string;	// 0x3316805d
// declared property setter: - (void)setTarget:(id)target;	// 0x33167ecd
// declared property setter: - (void)setTitleDictionary:(id)dictionary;	// 0x33167f6d
// declared property setter: - (void)setUserInfo:(id)info;	// 0x33167f4d
// declared property setter: - (void)setValues:(id)values;	// 0x33167f9d
- (void)setValues:(id)values titles:(id)titles;	// 0x33167649
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3;	// 0x3316766d
- (void)setupIconImageWithBundle:(id)bundle;	// 0x331677bd
- (void)setupIconImageWithPath:(id)path;	// 0x331678bd
// declared property getter: - (id)shortTitleDictionary;	// 0x33167d75
// declared property getter: - (BOOL)showContentString;	// 0x3316804d
// declared property getter: - (id)target;	// 0x33167ebd
- (int)titleCompare:(id)compare;	// 0x33167e81
// declared property getter: - (id)titleDictionary;	// 0x33167f5d
// declared property getter: - (id)userInfo;	// 0x33167f3d
// declared property getter: - (id)values;	// 0x33167f8d
@end

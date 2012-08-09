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
@property(assign, nonatomic) SEL buttonAction;	// G=0x34da83d1; S=0x34da83e1; @synthesize=_buttonAction
@property(assign, nonatomic) int cellType;	// G=0x34da82c1; S=0x34da82d1; @synthesize
@property(assign, nonatomic) SEL confirmationAction;	// G=0x34da8391; S=0x34da83a1; @synthesize=_confirmationAction
@property(assign, nonatomic) SEL confirmationCancelAction;	// G=0x34da83b1; S=0x34da83c1; @synthesize=_confirmationCancelAction
@property(assign, nonatomic) SEL controllerLoadAction;	// G=0x34da83f1; S=0x34da8401; @synthesize=_controllerLoadAction
@property(assign, nonatomic) Class detailControllerClass;	// G=0x34da82a1; S=0x34da82b1; @synthesize
@property(assign, nonatomic) Class editPaneClass;	// G=0x34da82e1; S=0x34da82f1; @synthesize
@property(retain, nonatomic) NSString *identifier;	// G=0x34da8179; S=0x34da815d; 
@property(retain, nonatomic) NSString *name;	// G=0x34da8371; S=0x34da8381; @synthesize=_name
@property(retain) NSMutableDictionary *properties;	// G=0x34da7939; S=0x34da78fd; converted property
@property(retain, nonatomic) NSDictionary *shortTitleDictionary;	// G=0x34da8139; S=0x34da8341; @synthesize=_shortTitleDict
@property(assign, nonatomic) BOOL showContentString;	// G=0x34da8411; S=0x34da8421; @synthesize=_showContentString
@property(assign, nonatomic) id target;	// G=0x34da8281; S=0x34da8291; @synthesize
@property(retain, nonatomic) NSDictionary *titleDictionary;	// G=0x34da8321; S=0x34da8331; @synthesize=_titleDict
@property(retain, nonatomic) id userInfo;	// G=0x34da8301; S=0x34da8311; @synthesize=_userInfo
@property(retain, nonatomic) NSArray *values;	// G=0x34da8351; S=0x34da8361; @synthesize=_values
+ (int)autoCapsTypeForString:(id)string;	// 0x34da807d
+ (int)autoCorrectionTypeForNumber:(id)number;	// 0x34da8051
+ (id)emptyGroupSpecifier;	// 0x34da7881
+ (id)groupSpecifierWithName:(id)name;	// 0x34da784d
+ (int)keyboardTypeForString:(id)string;	// 0x34da80e9
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;	// 0x34da778d
- (id)init;	// 0x34da7701
// declared property getter: - (SEL)buttonAction;	// 0x34da83d1
// declared property getter: - (int)cellType;	// 0x34da82c1
// declared property getter: - (SEL)confirmationAction;	// 0x34da8391
// declared property getter: - (SEL)confirmationCancelAction;	// 0x34da83b1
// declared property getter: - (SEL)controllerLoadAction;	// 0x34da83f1
- (void)dealloc;	// 0x34da7ec5
- (id)description;	// 0x34da7f79
// declared property getter: - (Class)detailControllerClass;	// 0x34da82a1
// declared property getter: - (Class)editPaneClass;	// 0x34da82e1
// declared property getter: - (id)identifier;	// 0x34da8179
- (void)loadValuesAndTitlesFromDataSource;	// 0x34da7949
// declared property getter: - (id)name;	// 0x34da8371
// converted property getter: - (id)properties;	// 0x34da7939
- (id)propertyForKey:(id)key;	// 0x34da7895
- (void)removePropertyForKey:(id)key;	// 0x34da78dd
// declared property setter: - (void)setButtonAction:(SEL)action;	// 0x34da83e1
// declared property setter: - (void)setCellType:(int)type;	// 0x34da82d1
// declared property setter: - (void)setConfirmationAction:(SEL)action;	// 0x34da83a1
// declared property setter: - (void)setConfirmationCancelAction:(SEL)action;	// 0x34da83c1
// declared property setter: - (void)setControllerLoadAction:(SEL)action;	// 0x34da8401
// declared property setter: - (void)setDetailControllerClass:(Class)aClass;	// 0x34da82b1
// declared property setter: - (void)setEditPaneClass:(Class)aClass;	// 0x34da82f1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x34da815d
- (void)setKeyboardType:(int)type autoCaps:(int)caps autoCorrection:(int)correction;	// 0x34da81fd
// declared property setter: - (void)setName:(id)name;	// 0x34da8381
// converted property setter: - (void)setProperties:(id)properties;	// 0x34da78fd
- (void)setProperty:(id)property forKey:(id)key;	// 0x34da78b5
// declared property setter: - (void)setShortTitleDictionary:(id)dictionary;	// 0x34da8341
// declared property setter: - (void)setShowContentString:(BOOL)string;	// 0x34da8421
// declared property setter: - (void)setTarget:(id)target;	// 0x34da8291
// declared property setter: - (void)setTitleDictionary:(id)dictionary;	// 0x34da8331
// declared property setter: - (void)setUserInfo:(id)info;	// 0x34da8311
// declared property setter: - (void)setValues:(id)values;	// 0x34da8361
- (void)setValues:(id)values titles:(id)titles;	// 0x34da7a0d
- (void)setValues:(id)values titles:(id)titles shortTitles:(id)titles3;	// 0x34da7a31
- (void)setupIconImageWithBundle:(id)bundle;	// 0x34da7b81
- (void)setupIconImageWithPath:(id)path;	// 0x34da7c81
// declared property getter: - (id)shortTitleDictionary;	// 0x34da8139
// declared property getter: - (BOOL)showContentString;	// 0x34da8411
// declared property getter: - (id)target;	// 0x34da8281
- (int)titleCompare:(id)compare;	// 0x34da8245
// declared property getter: - (id)titleDictionary;	// 0x34da8321
// declared property getter: - (id)userInfo;	// 0x34da8301
// declared property getter: - (id)values;	// 0x34da8351
@end

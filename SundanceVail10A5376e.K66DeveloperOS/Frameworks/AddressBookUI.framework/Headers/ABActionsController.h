/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "AddressBookUI-Structs.h"

@class NSString;

@interface ABActionsController : NSObject {
	void *_person;	// 4 = 0x4
	int _property;	// 8 = 0x8
	int _recordID;	// 12 = 0xc
	int _multiValueIdentifier;	// 16 = 0x10
	id _value;	// 20 = 0x14
	NSString *_stringValue;	// 24 = 0x18
	void *_context;	// 28 = 0x1c
	int _lastPropertyForActions;	// 32 = 0x20
	CFArrayRef _actionsForProperty;	// 36 = 0x24
}
@property(assign) void *context;	// G=0x30fd63cd; S=0x30fc6979; converted property
@property(assign) void *person;	// G=0x30fd62d5; S=0x30fc68a5; converted property
@property(retain) NSString *stringValue;	// G=0x30fd63ad; S=0x30fc6935; converted property
@property(retain) id value;	// G=0x30fd63bd; S=0x30fc68e1; converted property
+ (int)defaultActionForProperty:(int)property;	// 0x30fc6141
+ (id)newActionsControllerForProperty:(int)property;	// 0x30fd629d
- (id)init;	// 0x30fc0ced
- (id)initWithProperty:(int)property;	// 0x30fc0d01
- (int)_actionAtIndex:(int)index forProperty:(int)property;	// 0x30fc1a85
- (CFArrayRef)_actionsForProperty:(int)property;	// 0x30fc0d91
- (void)_performAction:(int)action forProperty:(int)property;	// 0x30fc69a9
- (int)actionsCountForProperty:(int)property;	// 0x30fc0d6d
// converted property getter: - (void *)context;	// 0x30fd63cd
- (void)dealloc;	// 0x30fc27d9
- (int)defaultAction;	// 0x30fd631d
- (void)performAction:(int)action;	// 0x30fc6989
- (void)performActionAtIndex:(int)index forProperty:(int)property;	// 0x30fd6379
- (void)performDefaultAction;	// 0x30fd6349
// converted property getter: - (void *)person;	// 0x30fd62d5
- (void)resetPrimaryPropertyActions;	// 0x30fd62e5
// converted property setter: - (void)setContext:(void *)context;	// 0x30fc6979
- (void)setMultiValueIdentifier:(int)identifier;	// 0x30fc6925
// converted property setter: - (void)setPerson:(void *)person;	// 0x30fc68a5
- (void)setRecordID:(int)anId;	// 0x30fc68d1
// converted property setter: - (void)setStringValue:(id)value;	// 0x30fc6935
// converted property setter: - (void)setValue:(id)value;	// 0x30fc68e1
// converted property getter: - (id)stringValue;	// 0x30fd63ad
- (id)titleAtIndex:(int)index forProperty:(int)property;	// 0x30fc1ec5
- (id)titleForAction:(int)action;	// 0x30fc1ef5
- (id)urlForAction:(int)action forProperty:(int)property;	// 0x30fc6a2d
// converted property getter: - (id)value;	// 0x30fd63bd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "ABPredicate.h"
#import "AddressBook-Structs.h"

@class NSArray, NSObject;
@protocol NSObject;

@interface ABValuePredicate : ABPredicate {
	int _property;	// 8 = 0x8
	long _comparison;	// 12 = 0xc
	id<NSObject> _value;	// 16 = 0x10
	NSArray *_orderedKeys;	// 20 = 0x14
	BOOL _dictionaryValue;	// 24 = 0x18
}
@property(assign, nonatomic) long comparison;	// G=0x329bdaa5; S=0x329bdab5; @synthesize=_comparison
@property(assign, nonatomic) int property;	// G=0x329bda85; S=0x329bda95; @synthesize=_property
@property(copy, nonatomic) NSObject *value;	// G=0x329bdac5; S=0x329bc65d; @synthesize=_value
+ (id)stringForComparison:(id)comparison withComparision:(long)comparision;	// 0x329bd1a1
- (id)init;	// 0x329bc5a9
- (id)_ftsAllQueryStrings;	// 0x329bd435
- (id)_ftsTermStringForString:(id)string;	// 0x329bd261
- (id)_ftsTokenizedTermStringForString:(id)string;	// 0x329bd309
- (BOOL)_shouldConsultIndexForKey:(id)key;	// 0x329bcb41
- (BOOL)_supportsFTSSearch;	// 0x329bcc91
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x329bd589
// declared property getter: - (long)comparison;	// 0x329bdaa5
- (void)dealloc;	// 0x329bc5f9
- (BOOL)isValid;	// 0x329bc6e1
- (id)predicateFormat;	// 0x329bd9b9
// declared property getter: - (int)property;	// 0x329bda85
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x329bcae1
- (id)querySelectProperties;	// 0x329bca91
- (id)queryWhereString;	// 0x329bcdd5
// declared property setter: - (void)setComparison:(long)comparison;	// 0x329bdab5
// declared property setter: - (void)setProperty:(int)property;	// 0x329bda95
// declared property setter: - (void)setValue:(id)value;	// 0x329bc65d
- (id)stringForComparison:(id)comparison;	// 0x329bd221
// declared property getter: - (id)value;	// 0x329bdac5
@end


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
@property(assign, nonatomic) long comparison;	// G=0x313d39bd; S=0x313d39cd; @synthesize=_comparison
@property(assign, nonatomic) int property;	// G=0x313d399d; S=0x313d39ad; @synthesize=_property
@property(copy, nonatomic) NSObject *value;	// G=0x313d39dd; S=0x313d2575; @synthesize=_value
+ (id)stringForComparison:(id)comparison withComparision:(long)comparision;	// 0x313d30b9
- (id)init;	// 0x313d24c1
- (id)_ftsAllQueryStrings;	// 0x313d334d
- (id)_ftsTermStringForString:(id)string;	// 0x313d3179
- (id)_ftsTokenizedTermStringForString:(id)string;	// 0x313d3221
- (BOOL)_shouldConsultIndexForKey:(id)key;	// 0x313d2a59
- (BOOL)_supportsFTSSearch;	// 0x313d2ba9
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x313d34a1
// declared property getter: - (long)comparison;	// 0x313d39bd
- (void)dealloc;	// 0x313d2511
- (BOOL)isValid;	// 0x313d25f9
- (id)predicateFormat;	// 0x313d38d1
// declared property getter: - (int)property;	// 0x313d399d
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x313d29f9
- (id)querySelectProperties;	// 0x313d29a9
- (id)queryWhereString;	// 0x313d2ced
// declared property setter: - (void)setComparison:(long)comparison;	// 0x313d39cd
// declared property setter: - (void)setProperty:(int)property;	// 0x313d39ad
// declared property setter: - (void)setValue:(id)value;	// 0x313d2575
- (id)stringForComparison:(id)comparison;	// 0x313d3139
// declared property getter: - (id)value;	// 0x313d39dd
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import "ABPredicate.h"

@class NSObject;
@protocol NSObject;

@interface ABValuePredicate : ABPredicate {
@private
	int _property;	// 8 = 0x8
	int _comparison;	// 12 = 0xc
	id<NSObject> _value;	// 16 = 0x10
	BOOL _dictionaryValue;	// 20 = 0x14
}
@property(assign, nonatomic) int comparison;	// G=0x31914741; S=0x31914751; @synthesize=_comparison
@property(assign, nonatomic) int property;	// G=0x31914761; S=0x31914771; @synthesize=_property
@property(copy, nonatomic) NSObject *value;	// G=0x31914731; S=0x319154e1; @synthesize=_value
+ (id)stringForComparison:(id)comparison withComparision:(long)comparision;	// 0x319147d1
- (id)init;	// 0x31914781
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x31914911
// declared property getter: - (long)comparison;	// 0x31914741
- (void)dealloc;	// 0x31915579
- (BOOL)isValid;	// 0x319152f1
- (id)predicateFormat;	// 0x31914841
// declared property getter: - (int)property;	// 0x31914761
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x31915241
- (id)querySelectProperties;	// 0x319152a1
- (id)queryWhereString;	// 0x31914e1d
// declared property setter: - (void)setComparison:(long)comparison;	// 0x31914751
// declared property setter: - (void)setProperty:(int)property;	// 0x31914771
// declared property setter: - (void)setValue:(id)value;	// 0x319154e1
- (id)stringForComparison:(id)comparison;	// 0x31914de1
// declared property getter: - (id)value;	// 0x31914731
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

#import "AddressBook-Structs.h"
#import <NSPredicate.h> // Unknown library


@interface ABPredicate : NSPredicate {
}
+ (id)newQueryFromABPredicate:(id)abpredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x34fd76fd
+ (id)newQueryFromCompoundPredicate:(id)compoundPredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x34fd7169
+ (id)newQueryWithProperties:(id)properties joins:(id)joins whereString:(id)string sortOrder:(unsigned)order groupByProperties:(id)properties5 addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x34fd778d
+ (id)personPredicateWithAnyValueForProperty:(int)property;	// 0x34fd7ac5
+ (id)personPredicateWithGroup:(void *)group source:(void *)source account:(id)account;	// 0x34fd7991
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x34fd7c39
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x34fd7e01
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account showingPersonLinks:(BOOL)links addressBook:(void *)book;	// 0x34fd7dc1
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account showingPersonLinks:(BOOL)links includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x34fd7c95
+ (id)personPredicateWithNameLike:(id)nameLike showingPersonLinks:(BOOL)links addressBook:(void *)book;	// 0x34fd7c65
+ (id)personPredicateWithNameOnly:(id)nameOnly account:(id)account addressBook:(void *)book;	// 0x34fd7be1
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x34fd7a35
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property;	// 0x34fd7b3d
+ (void)searchPeopleWithPredicate:(id)predicate sortOrder:(unsigned)order inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x34fd705d
- (id)init;	// 0x34fd7031
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x34fd848d
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x34fd7021
- (BOOL)ab_hasCallback;	// 0x34fd8059
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x34fd8071
- (void)bindDouble:(double)aDouble toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x34fd7e91
- (void)bindString:(id)string toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x34fd7ea9
- (void *)callbackContext;	// 0x34fd7019
- (void)dealloc;	// 0x34fd7f2d
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x34fd701d
- (BOOL)hasCallback;	// 0x34fd7015
- (BOOL)isValid;	// 0x34fd7001
- (id)predicateFormat;	// 0x34fd7ee1
- (id)queryGroupByProperties;	// 0x34fd700d
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x34fd7009
- (id)querySelectProperties;	// 0x34fd7005
- (id)queryWhereString;	// 0x34fd7011
@end

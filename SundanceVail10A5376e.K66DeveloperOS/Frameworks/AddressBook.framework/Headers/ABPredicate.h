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
+ (id)newQueryFromABPredicate:(id)abpredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x32bf699d
+ (id)newQueryFromCompoundPredicate:(id)compoundPredicate withSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x32bf6a29
+ (id)newQueryWithProperties:(id)properties joins:(id)joins whereString:(id)string sortOrder:(unsigned)order groupByProperties:(id)properties5 addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x32bf67bd
+ (id)personPredicateWithAnyValueForProperty:(int)property;	// 0x32bf660d
+ (id)personPredicateWithGroup:(void *)group source:(void *)source account:(id)account;	// 0x32bf6719
+ (id)personPredicateWithName:(id)name addressBook:(void *)book;	// 0x32bf649d
+ (id)personPredicateWithNameLike:(id)nameLike addressBook:(void *)book;	// 0x32bf617d
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account addressBook:(void *)book;	// 0x32bf620d
+ (id)personPredicateWithNameLike:(id)nameLike group:(void *)group source:(void *)source account:(id)account includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x32bf6245
+ (id)personPredicateWithNameLike:(id)nameLike groups:(id)groups sources:(id)sources addressBook:(void *)book;	// 0x32bf62e5
+ (id)personPredicateWithNameLike:(id)nameLike groups:(id)groups sources:(id)sources includeSourceInResults:(BOOL)results addressBook:(void *)book;	// 0x32bf6315
+ (id)personPredicateWithNameLike:(id)nameLike groups:(id)groups sources:(id)sources includeSourceInResults:(BOOL)results includePhotosInResults:(BOOL)results5 addressBook:(void *)book;	// 0x32bf634d
+ (id)personPredicateWithNameOnly:(id)nameOnly account:(id)account addressBook:(void *)book;	// 0x32bf64cd
+ (id)personPredicateWithPhoneLike:(id)phoneLike countryHint:(id)hint addressBook:(void *)book;	// 0x32bf6689
+ (id)personPredicateWithValue:(id)value comparison:(long)comparison forProperty:(int)property;	// 0x32bf6569
+ (void)searchPeopleWithPredicate:(id)predicate sortOrder:(unsigned)order inAddressBook:(void *)addressBook withDelegate:(id)delegate;	// 0x32bf6f65
- (id)init;	// 0x32bf7069
- (void)ab_addCallbackContextToArray:(CFArrayRef)array;	// 0x32bf7741
- (void)ab_bindStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset predicateIdentifier:(int)identifier;	// 0x32bf712d
- (BOOL)ab_hasCallback;	// 0x32bf7729
- (id)ab_newQueryWithSortOrder:(unsigned)sortOrder addressBook:(void *)book propertyIndices:(const CFDictionaryRef *)indices;	// 0x32bf7781
- (void)bindDouble:(double)aDouble toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x32bf71d9
- (void)bindString:(id)string toStatement:(CPSqliteStatement *)statement withBindingOffset:(int *)bindingOffset;	// 0x32bf7131
- (void *)callbackContext;	// 0x32bf7125
- (void)dealloc;	// 0x32bf7095
- (void)evaluateCallbackWithSqliteContext:(sqlite3_context *)sqliteContext predicateContext:(void *)context values:(Mem **)values count:(int)count;	// 0x32bf7129
- (BOOL)hasCallback;	// 0x32bf7121
- (BOOL)isValid;	// 0x32bf710d
- (id)predicateFormat;	// 0x32bf70c1
- (id)queryGroupByProperties;	// 0x32bf7119
- (id)queryJoinsInCompound:(BOOL)compound;	// 0x32bf7115
- (id)querySelectProperties;	// 0x32bf7111
- (id)queryWhereString;	// 0x32bf711d
@end

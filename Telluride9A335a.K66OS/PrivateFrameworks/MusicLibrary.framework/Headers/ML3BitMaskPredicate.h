/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"
#import "MusicLibrary-Structs.h"


@interface ML3BitMaskPredicate : ML3PropertyPredicate {
@private
	long long _mask;	// 8 = 0x8
	long long _value;	// 16 = 0x10
}
@property(assign, nonatomic) long long mask;	// G=0x3099f6bd; S=0x3099f6d5; @synthesize=_mask
@property(assign, nonatomic) long long value;	// G=0x3099f6e9; S=0x3099f701; @synthesize=_value
+ (id)predicateWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x3099f5a9
- (id)initWithCoder:(id)coder;	// 0x3099f34d
- (id)initWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x3099f2b1
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x3099f60d
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x3099f671
- (void)dealloc;	// 0x3099f321
- (id)description;	// 0x3099f509
- (void)encodeWithCoder:(id)coder;	// 0x3099f3dd
- (BOOL)isEqual:(id)equal;	// 0x3099f46d
// declared property getter: - (long long)mask;	// 0x3099f6bd
// declared property setter: - (void)setMask:(long long)mask;	// 0x3099f6d5
// declared property setter: - (void)setValue:(long long)value;	// 0x3099f701
// declared property getter: - (long long)value;	// 0x3099f6e9
@end


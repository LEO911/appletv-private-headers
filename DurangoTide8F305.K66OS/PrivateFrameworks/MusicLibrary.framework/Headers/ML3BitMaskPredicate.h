/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MusicLibrary-Structs.h"
#import "ML3PropertyPredicate.h"


@interface ML3BitMaskPredicate : ML3PropertyPredicate {
@private
	long long _mask;	// 8 = 0x8
	long long _value;	// 16 = 0x10
}
@property(assign, nonatomic) long long mask;	// G=0x333e4c15; S=0x333e4c25; @synthesize=_mask
@property(assign, nonatomic) long long value;	// G=0x333e4bf1; S=0x333e4c01; @synthesize=_value
+ (id)predicateWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x333e520d
- (id)initWithCoder:(id)coder;	// 0x333e5425
- (id)initWithProperty:(id)property mask:(long long)mask value:(long long)value;	// 0x333e54a9
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x333e51b1
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x333e6475
- (void)dealloc;	// 0x333e4c75
- (id)description;	// 0x333e5271
- (void)encodeWithCoder:(id)coder;	// 0x333e53a1
- (BOOL)isEqual:(id)equal;	// 0x333e5305
// declared property getter: - (long long)mask;	// 0x333e4c15
// declared property setter: - (void)setMask:(long long)mask;	// 0x333e4c25
// declared property setter: - (void)setValue:(long long)value;	// 0x333e4c01
// declared property getter: - (long long)value;	// 0x333e4bf1
@end


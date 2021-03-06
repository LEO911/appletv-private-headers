/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "NSCopying.h"
#import "SQLitePropertyPredicate.h"


__attribute__((visibility("hidden")))
@interface SQLiteComparisonPredicate : SQLitePropertyPredicate <NSCopying> {
@private
	int _comparisonType;	// 8 = 0x8
	id _value;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) int comparisonType;	// G=0x331d0a6d; @synthesize=_comparisonType
@property(readonly, assign, nonatomic) id value;	// G=0x331d0a7d; @synthesize=_value
+ (id)predicateWithProperty:(id)property equalToValue:(id)value;	// 0x331d04c5
+ (id)predicateWithProperty:(id)property value:(id)value comparisonType:(int)type;	// 0x331d04e9
- (id)SQLForEntityClass:(Class)entityClass;	// 0x331d08fd
- (id)_comparisonTypeString;	// 0x331d0971
- (void)bindToStatement:(sqlite3_stmt *)statement bindingIndex:(inout int *)index;	// 0x331d0629
// declared property getter: - (int)comparisonType;	// 0x331d0a6d
- (id)copyWithZone:(NSZone *)zone;	// 0x331d0619
- (void)dealloc;	// 0x331d05cd
- (unsigned)hash;	// 0x331d07f1
- (BOOL)isEqual:(id)equal;	// 0x331d0839
// declared property getter: - (id)value;	// 0x331d0a7d
@end


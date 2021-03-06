/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3PropertyPredicate.h"
#import "MusicLibrary-Structs.h"

@class NSString;

@interface ML3ComparisonPredicate : ML3PropertyPredicate {
@private
	id _value;	// 8 = 0x8
	NSString *_transformFunction;	// 12 = 0xc
	int _comparison;	// 16 = 0x10
	BOOL _caseInsensitive;	// 20 = 0x14
	BOOL _treatNullAsBlank;	// 21 = 0x15
}
@property(assign, nonatomic) BOOL caseInsensitive;	// G=0x30e1aa39; S=0x30defdc1; @synthesize=_caseInsensitive
@property(assign, nonatomic) int comparison;	// G=0x30e1aa29; S=0x30defdb1; @synthesize=_comparison
@property(readonly, assign, nonatomic) NSString *operator;	// G=0x30df1a25; 
@property(copy, nonatomic) NSString *transformFunction;	// G=0x30e1aa59; S=0x30defde1; @synthesize=_transformFunction
@property(assign, nonatomic) BOOL treatNullAsBlank;	// G=0x30e1aa49; S=0x30defdd1; @synthesize=_treatNullAsBlank
@property(retain, nonatomic) id value;	// G=0x30e1aa19; S=0x30defd8d; @synthesize=_value
+ (id)predicateWithProperty:(id)property equalToInt64:(long long)int64;	// 0x30e1a9d1
+ (id)predicateWithProperty:(id)property equalToInteger:(int)integer;	// 0x30defae5
+ (id)predicateWithProperty:(id)property equalToValue:(id)value;	// 0x30defb25
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison;	// 0x30df68a9
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive;	// 0x30df7f59
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive treatNullAsBlank:(BOOL)blank;	// 0x30e1a8fd
+ (id)predicateWithProperty:(id)property value:(id)value comparison:(int)comparison transformFunction:(id)function;	// 0x30e1a969
- (id)initWithCoder:(id)coder;	// 0x30e1a435
- (id)initWithProperty:(id)property value:(id)value comparison:(int)comparison caseInsensitive:(BOOL)insensitive transformFunction:(id)function treatNullAsBlank:(BOOL)blank;	// 0x30defb85
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x30df1799
- (void)bindToSqlite3Statement:(sqlite3_stmt *)sqlite3Statement bindingIndex:(inout int *)index;	// 0x30df2d71
// declared property getter: - (BOOL)caseInsensitive;	// 0x30e1aa39
// declared property getter: - (int)comparison;	// 0x30e1aa29
- (void)dealloc;	// 0x30df7aad
- (id)description;	// 0x30e1a801
- (void)encodeWithCoder:(id)coder;	// 0x30e1a555
- (unsigned)hash;	// 0x30e1a7b9
- (BOOL)isEqual:(id)equal;	// 0x30e1a671
// declared property getter: - (id)operator;	// 0x30df1a25
// declared property setter: - (void)setCaseInsensitive:(BOOL)insensitive;	// 0x30defdc1
// declared property setter: - (void)setComparison:(int)comparison;	// 0x30defdb1
// declared property setter: - (void)setTransformFunction:(id)function;	// 0x30defde1
// declared property setter: - (void)setTreatNullAsBlank:(BOOL)blank;	// 0x30defdd1
// declared property setter: - (void)setValue:(id)value;	// 0x30defd8d
// declared property getter: - (id)transformFunction;	// 0x30e1aa59
// declared property getter: - (BOOL)treatNullAsBlank;	// 0x30e1aa49
// declared property getter: - (id)value;	// 0x30e1aa19
@end


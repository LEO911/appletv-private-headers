/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "MusicLibrary-Structs.h"


@interface ML3Predicate : NSObject <NSCoding, NSCopying> {
}
- (id)initWithCoder:(id)coder;	// 0x305c1f71
- (id)SQLForEntityClass:(Class)entityClass;	// 0x305c2011
- (id)SQLJoinClausesForClass:(Class)aClass;	// 0x305a0591
- (void)appendSQLToMutableString:(id)mutableString entityClass:(Class)aClass;	// 0x305c200d
- (void)bindToStatement:(id)statement bindingIndex:(inout int *)index;	// 0x305a0945
- (id)copyWithZone:(NSZone *)zone;	// 0x305c2009
- (void)encodeWithCoder:(id)coder;	// 0x305c1fad
- (unsigned)hash;	// 0x305c1fe1
- (BOOL)isDynamicForEntityClass:(Class)entityClass;	// 0x305a0531
- (BOOL)isEqual:(id)equal;	// 0x305c1fb1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "NSCoding.h"
#import "Foundation-Structs.h"

@class NSString;

@interface NSSortDescriptor : NSObject <NSCoding, NSCopying> {
	unsigned _sortDescriptorFlags;	// 4 = 0x4
	NSString *_key;	// 8 = 0x8
	SEL _selector;	// 12 = 0xc
	id _selectorOrBlock;	// 16 = 0x10
}
@property(readonly, retain) NSString *key;	// G=0x3194d401; converted property
@property(readonly, assign) SEL selector;	// G=0x3194d3b1; converted property
+ (id)_defaultSelectorName;	// 0x319f2951
+ (void)initialize;	// 0x31966f6d
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending;	// 0x31989f6d
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x319f2909
+ (id)sortDescriptorWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x31989f99
- (id)initWithCoder:(id)coder;	// 0x319f2b91
- (id)initWithKey:(id)key ascending:(BOOL)ascending;	// 0x3196ad4d
- (id)initWithKey:(id)key ascending:(BOOL)ascending comparator:(id)comparator;	// 0x319f295d
- (id)initWithKey:(id)key ascending:(BOOL)ascending selector:(SEL)selector;	// 0x3194cdb9
- (BOOL)_isEqualToSortDescriptor:(id)sortDescriptor;	// 0x319f3071
- (id)_selectorName;	// 0x319f2d85
- (void)_setAscending:(BOOL)ascending;	// 0x319f2cd9
- (void)_setKey:(id)key;	// 0x319f2c95
- (void)_setSelectorName:(id)name;	// 0x319f2d1d
- (BOOL)ascending;	// 0x3194d39d
- (id)comparator;	// 0x319f2cf5
- (int)compareObject:(id)object toObject:(id)object2;	// 0x319f2ea5
- (id)copyWithZone:(NSZone *)zone;	// 0x319f2c85
- (void)dealloc;	// 0x3194d745
- (id)description;	// 0x319f2dc5
- (void)encodeWithCoder:(id)coder;	// 0x319f2a35
- (BOOL)isEqual:(id)equal;	// 0x319f3171
// converted property getter: - (id)key;	// 0x3194d401
- (id)replacementObjectForPortCoder:(id)portCoder;	// 0x31aa3631
- (id)reversedSortDescriptor;	// 0x319f2fb9
// converted property getter: - (SEL)selector;	// 0x3194d3b1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "NSStoreMapping.h"

@class NSPropertyDescription;

__attribute__((visibility("hidden")))
@interface NSPropertyStoreMapping : NSStoreMapping {
@private
	NSPropertyDescription *_property;	// 8 = 0x8
}
@property(retain) NSPropertyDescription *property;	// G=0x33168501; S=0x33168511; converted property
- (id)initWithProperty:(id)property;	// 0x331686c9
- (void)dealloc;	// 0x3316868d
- (id)description;	// 0x3316860d
- (BOOL)isEqual:(id)equal;	// 0x33168521
// converted property getter: - (id)property;	// 0x33168501
// converted property setter: - (void)setProperty:(id)property;	// 0x33168511
@end

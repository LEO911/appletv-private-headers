/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface NSStoreMapping : NSObject {
@private
	NSString *_externalName;	// 4 = 0x4
}
@property(retain) NSString *externalName;	// G=0x32de12d1; S=0x32d214a5; converted property
- (id)initWithExternalName:(id)externalName;	// 0x32de1289
- (void)copyValuesForReadOnlyFetch:(id)readOnlyFetch;	// 0x32d31a9d
- (void)dealloc;	// 0x32d21461
// converted property getter: - (id)externalName;	// 0x32de12d1
- (unsigned)hash;	// 0x32de136d
- (BOOL)isEqual:(id)equal;	// 0x32de12e1
// converted property setter: - (void)setExternalName:(id)name;	// 0x32d214a5
@end

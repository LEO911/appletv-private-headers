/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface PDCommentAuthor : NSObject {
@private
	unsigned mId;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	NSString *mInitials;	// 12 = 0xc
	unsigned mColorIndex;	// 16 = 0x10
}
@property(assign) unsigned colorIndex;	// G=0x3458d37d; S=0x34549591; converted property
@property(assign) unsigned id;	// G=0x3458d34d; S=0x345494f9; converted property
@property(retain) id initials;	// G=0x3458d36d; S=0x3454954d; converted property
@property(retain) id name;	// G=0x3458d35d; S=0x34549509; converted property
- (id)init;	// 0x345494a9
// converted property getter: - (unsigned)colorIndex;	// 0x3458d37d
- (void)dealloc;	// 0x34549741
// converted property getter: - (unsigned)id;	// 0x3458d34d
// converted property getter: - (id)initials;	// 0x3458d36d
// converted property getter: - (id)name;	// 0x3458d35d
// converted property setter: - (void)setColorIndex:(unsigned)index;	// 0x34549591
// converted property setter: - (void)setId:(unsigned)anId;	// 0x345494f9
// converted property setter: - (void)setInitials:(id)initials;	// 0x3454954d
// converted property setter: - (void)setName:(id)name;	// 0x34549509
@end

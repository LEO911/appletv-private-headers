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
@property(assign) unsigned colorIndex;	// G=0x356fa37d; S=0x356b6591; converted property
@property(assign) unsigned id;	// G=0x356fa34d; S=0x356b64f9; converted property
@property(retain) id initials;	// G=0x356fa36d; S=0x356b654d; converted property
@property(retain) id name;	// G=0x356fa35d; S=0x356b6509; converted property
- (id)init;	// 0x356b64a9
// converted property getter: - (unsigned)colorIndex;	// 0x356fa37d
- (void)dealloc;	// 0x356b6741
// converted property getter: - (unsigned)id;	// 0x356fa34d
// converted property getter: - (id)initials;	// 0x356fa36d
// converted property getter: - (id)name;	// 0x356fa35d
// converted property setter: - (void)setColorIndex:(unsigned)index;	// 0x356b6591
// converted property setter: - (void)setId:(unsigned)anId;	// 0x356b64f9
// converted property setter: - (void)setInitials:(id)initials;	// 0x356b654d
// converted property setter: - (void)setName:(id)name;	// 0x356b6509
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, WDDocument, WDListDefinition;

__attribute__((visibility("hidden")))
@interface WDList : NSObject {
@private
	NSMutableArray *mLevelOverrides;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	int mIndex;	// 12 = 0xc
	WDListDefinition *mListDefinition;	// 16 = 0x10
}
@property(assign) int index;	// G=0x345d8421; S=0x3448ab3d; converted property
- (id)initWithDocument:(id)document listDefinition:(id)definition;	// 0x3448aab9
- (id)addLevelOverride;	// 0x344d89ed
- (void)dealloc;	// 0x3446d371
- (id)document;	// 0x344d8a95
// converted property getter: - (int)index;	// 0x345d8421
- (id)levelOverrideAt:(int)at;	// 0x345d8451
- (int)levelOverrideCount;	// 0x345d8471
- (id)levelOverrides;	// 0x345d8411
- (id)listDefinition;	// 0x34466759
- (int)listId;	// 0x345d8431
// converted property setter: - (void)setIndex:(int)index;	// 0x3448ab3d
@end

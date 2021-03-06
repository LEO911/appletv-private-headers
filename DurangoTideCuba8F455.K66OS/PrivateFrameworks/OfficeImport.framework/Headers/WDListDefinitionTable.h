/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSMutableArray, WDListDefinition, WDDocument;

__attribute__((visibility("hidden")))
@interface WDListDefinitionTable : NSObject {
@private
	NSMutableArray *mListDefinitions;	// 4 = 0x4
	CFDictionaryRef mListDefinitionMap;	// 8 = 0x8
	unsigned mNextIdIndex;	// 12 = 0xc
	WDDocument *mDocument;	// 16 = 0x10
	WDListDefinition *mLastKnownGoodListDefinition;	// 20 = 0x14
}
- (id)initWithDocument:(id)document;	// 0x32bcbcbd
- (id)addDefinition;	// 0x32d224d1
- (id)addDefinition:(int)definition;	// 0x32bd38d5
- (void)dealloc;	// 0x32bb7189
- (id)definitionAt:(int)at;	// 0x32d224fd
- (int)definitionCount;	// 0x32d2251d
- (id)definitionWithId:(int)anId;	// 0x32bd49f1
- (id)document;	// 0x32bd3a3d
- (int)nextId;	// 0x32d2253d
- (void)setLastKnowGoodListDefinition:(id)definition;	// 0x32bd39f5
@end


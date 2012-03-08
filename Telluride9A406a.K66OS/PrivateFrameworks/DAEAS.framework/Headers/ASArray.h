/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"
#import "ASParsingWithSubItems.h"
#import "ASParsingFrontingBasicType.h"

@class NSDictionary, NSMutableArray;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {
	NSMutableArray *_items;	// 40 = 0x28
	NSDictionary *_subclassRuleSet;	// 44 = 0x2c
}
+ (BOOL)acceptsTopLevelLeaves;	// 0x343eed4d
+ (BOOL)frontingBasicTypes;	// 0x343eee49
+ (BOOL)notifyOfUnknownTokens;	// 0x343eee9d
+ (BOOL)parsingLeafNode;	// 0x343eeda1
+ (BOOL)parsingWithSubItems;	// 0x343eedf5
- (id)initWithSubclassRuleSet:(id)subclassRuleSet;	// 0x343eeef1
- (void)addItem:(id)item;	// 0x343ef011
- (id)asParseRules;	// 0x343ef001
- (id)commonValue;	// 0x343ef075
- (void)dealloc;	// 0x343eef45
- (id)description;	// 0x343eefa5
@end

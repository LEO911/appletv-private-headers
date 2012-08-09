/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSString;

@interface ASPolicy : ASItem {
	NSString *_type;	// 40 = 0x28
	NSString *_key;	// 44 = 0x2c
	NSString *_status;	// 48 = 0x30
}
@property(readonly, retain) NSString *key;	// G=0x34b9faf1; converted property
@property(readonly, retain) NSString *type;	// G=0x34b9fae1; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x34b9f8c5
+ (id)asParseRules;	// 0x34b9fc89
+ (BOOL)frontingBasicTypes;	// 0x34b9f9c1
+ (BOOL)notifyOfUnknownTokens;	// 0x34b9fa15
+ (BOOL)parsingLeafNode;	// 0x34b9f919
+ (BOOL)parsingWithSubItems;	// 0x34b9f96d
- (void)_setKey:(id)key;	// 0x34b9fb65
- (void)_setStatus:(id)status;	// 0x34b9fba9
- (void)_setType:(id)type;	// 0x34b9fb21
- (void)dealloc;	// 0x34b9fa69
- (id)description;	// 0x34b9fbed
// converted property getter: - (id)key;	// 0x34b9faf1
- (id)perDomainDictsForPolicy;	// 0x34b9fee9
- (int)status;	// 0x34b9fb01
// converted property getter: - (id)type;	// 0x34b9fae1
@end

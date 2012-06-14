/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber, NSString;

@interface ASMovedItem : ASItem {
	NSString *_srcMsgId;	// 40 = 0x28
	NSNumber *_status;	// 44 = 0x2c
	NSString *_dstMsgId;	// 48 = 0x30
}
@property(retain) NSString *dstMsgId;	// G=0x30992e31; S=0x30992e69; converted property
@property(retain) NSString *srcMsgId;	// G=0x30992d39; S=0x30992d71; converted property
@property(retain) NSNumber *status;	// G=0x30992db5; S=0x30992ded; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x309928c1
+ (id)asParseRules;	// 0x30992add
+ (BOOL)frontingBasicTypes;	// 0x309929bd
+ (BOOL)notifyOfUnknownTokens;	// 0x30992a11
+ (BOOL)parsingLeafNode;	// 0x30992915
+ (BOOL)parsingWithSubItems;	// 0x30992969
- (void)dealloc;	// 0x30992a65
// converted property getter: - (id)dstMsgId;	// 0x30992e31
// converted property setter: - (void)setDstMsgId:(id)anId;	// 0x30992e69
// converted property setter: - (void)setSrcMsgId:(id)anId;	// 0x30992d71
// converted property setter: - (void)setStatus:(id)status;	// 0x30992ded
// converted property getter: - (id)srcMsgId;	// 0x30992d39
// converted property getter: - (id)status;	// 0x30992db5
@end

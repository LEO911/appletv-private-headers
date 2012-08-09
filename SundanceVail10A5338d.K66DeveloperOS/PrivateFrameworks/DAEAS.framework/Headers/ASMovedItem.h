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
@property(retain) NSString *dstMsgId;	// G=0x36f28ae1; S=0x36f28b19; converted property
@property(retain) NSString *srcMsgId;	// G=0x36f289e9; S=0x36f28a21; converted property
@property(retain) NSNumber *status;	// G=0x36f28a65; S=0x36f28a9d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x36f28571
+ (id)asParseRules;	// 0x36f2878d
+ (BOOL)frontingBasicTypes;	// 0x36f2866d
+ (BOOL)notifyOfUnknownTokens;	// 0x36f286c1
+ (BOOL)parsingLeafNode;	// 0x36f285c5
+ (BOOL)parsingWithSubItems;	// 0x36f28619
- (void)dealloc;	// 0x36f28715
// converted property getter: - (id)dstMsgId;	// 0x36f28ae1
// converted property setter: - (void)setDstMsgId:(id)anId;	// 0x36f28b19
// converted property setter: - (void)setSrcMsgId:(id)anId;	// 0x36f28a21
// converted property setter: - (void)setStatus:(id)status;	// 0x36f28a9d
// converted property getter: - (id)srcMsgId;	// 0x36f289e9
// converted property getter: - (id)status;	// 0x36f28a65
@end

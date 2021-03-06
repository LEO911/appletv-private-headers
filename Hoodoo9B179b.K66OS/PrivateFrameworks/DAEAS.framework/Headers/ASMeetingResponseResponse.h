/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSMutableArray, NSArray;

@interface ASMeetingResponseResponse : ASItem {
	NSMutableArray *_singularResponses;	// 40 = 0x28
}
@property(readonly, assign) NSArray *singularResponses;	// G=0x31db4c15; @synthesize=_singularResponses
+ (BOOL)acceptsTopLevelLeaves;	// 0x31db4859
+ (BOOL)frontingBasicTypes;	// 0x31db4955
+ (BOOL)notifyOfUnknownTokens;	// 0x31db49a9
+ (BOOL)parsingLeafNode;	// 0x31db48ad
+ (BOOL)parsingWithSubItems;	// 0x31db4901
- (id)init;	// 0x31db49fd
- (void)_addSingularResponse:(id)response;	// 0x31db4a61
- (id)asParseRules;	// 0x31db4a81
- (void)dealloc;	// 0x31db4bc9
- (id)description;	// 0x31db4b61
// declared property getter: - (id)singularResponses;	// 0x31db4c15
@end


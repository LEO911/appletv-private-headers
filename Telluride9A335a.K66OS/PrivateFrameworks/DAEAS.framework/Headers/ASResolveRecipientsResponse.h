/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, NSNumber, NSMutableArray;

@interface ASResolveRecipientsResponse : ASItem {
	NSMutableArray *_responses;	// 40 = 0x28
	NSNumber *_easStatus;	// 44 = 0x2c
}
@property(retain) NSNumber *easStatus;	// G=0x321e7435; @synthesize=_easStatus
@property(retain) NSArray *responses;	// G=0x321e746d; S=0x321e7481; @synthesize=_responses
+ (BOOL)acceptsTopLevelLeaves;	// 0x321e6fdd
+ (BOOL)frontingBasicTypes;	// 0x321e70d9
+ (BOOL)notifyOfUnknownTokens;	// 0x321e712d
+ (BOOL)parsingLeafNode;	// 0x321e7031
+ (BOOL)parsingWithSubItems;	// 0x321e7085
- (void)addResponse:(id)response;	// 0x321e7181
- (id)asParseRules;	// 0x321e71e5
- (void)dealloc;	// 0x321e73d5
- (id)description;	// 0x321e735d
// declared property getter: - (id)easStatus;	// 0x321e7435
// declared property getter: - (id)responses;	// 0x321e746d
- (void)setEASStatus:(id)status;	// 0x321e7449
// declared property setter: - (void)setResponses:(id)responses;	// 0x321e7481
@end


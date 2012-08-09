/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSNumber;

@interface ASSendMailResponse : ASItem {
	NSNumber *_status;	// 40 = 0x28
}
@property(retain) NSNumber *status;	// G=0x34bb0131; S=0x34bb0145; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x34bafd89
+ (id)asParseRules;	// 0x34baff2d
+ (BOOL)frontingBasicTypes;	// 0x34bafe85
+ (BOOL)notifyOfUnknownTokens;	// 0x34bafed9
+ (BOOL)parsingLeafNode;	// 0x34bafddd
+ (BOOL)parsingWithSubItems;	// 0x34bafe31
- (void)dealloc;	// 0x34bb00e5
- (id)description;	// 0x34bb0089
// declared property setter: - (void)setStatus:(id)status;	// 0x34bb0145
// declared property getter: - (id)status;	// 0x34bb0131
@end

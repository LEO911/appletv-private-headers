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
@property(retain) NSNumber *status;	// G=0x315a31b9; S=0x315a31cd; @synthesize=_status
+ (BOOL)acceptsTopLevelLeaves;	// 0x315a2e95
+ (BOOL)frontingBasicTypes;	// 0x315a2f91
+ (BOOL)notifyOfUnknownTokens;	// 0x315a2fe5
+ (BOOL)parsingLeafNode;	// 0x315a2ee9
+ (BOOL)parsingWithSubItems;	// 0x315a2f3d
- (id)asParseRules;	// 0x315a3039
- (void)dealloc;	// 0x315a316d
- (id)description;	// 0x315a3111
// declared property setter: - (void)setStatus:(id)status;	// 0x315a31cd
// declared property getter: - (id)status;	// 0x315a31b9
@end

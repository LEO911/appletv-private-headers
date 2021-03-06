/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASPolicy.h"

@class NSString;

@interface ASWAPXMLPolicy : ASPolicy {
	NSString *_data;	// 52 = 0x34
}
@property(readonly, retain) NSString *data;	// G=0x321a2741; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x321a2551
+ (BOOL)frontingBasicTypes;	// 0x321a264d
+ (BOOL)notifyOfUnknownTokens;	// 0x321a26a1
+ (BOOL)parsingLeafNode;	// 0x321a25a5
+ (BOOL)parsingWithSubItems;	// 0x321a25f9
- (id)_policyForWAPProvisioningXMLData;	// 0x321a292d
- (void)_setData:(id)data;	// 0x321a2761
- (id)_wbxmlPolicyDict;	// 0x321a2f7d
- (id)asParseRules;	// 0x321a27a5
// converted property getter: - (id)data;	// 0x321a2741
- (void)dealloc;	// 0x321a26f5
- (id)perDomainDictsForPolicy;	// 0x321a3481
@end


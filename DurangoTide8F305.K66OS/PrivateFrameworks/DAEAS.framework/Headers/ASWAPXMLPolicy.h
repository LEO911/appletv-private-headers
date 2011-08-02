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
@property(readonly, retain) NSString *data;	// G=0x302f16f9; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x302f183d
+ (BOOL)frontingBasicTypes;	// 0x302f1765
+ (BOOL)notifyOfUnknownTokens;	// 0x302f171d
+ (BOOL)parsingLeafNode;	// 0x302f17f5
+ (BOOL)parsingWithSubItems;	// 0x302f17ad
- (id)_policyForWAPProvisioningXMLData;	// 0x302f1a3d
- (void)_setData:(id)data;	// 0x302f16bd
- (id)_wbxmlPolicyDict;	// 0x302f1ea9
- (id)asParseRules;	// 0x302f1885
// converted property getter: - (id)data;	// 0x302f16f9
- (void)dealloc;	// 0x302f199d
- (id)perDomainDictsForPolicy;	// 0x302f2309
@end

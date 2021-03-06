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
@property(readonly, retain) NSString *data;	// G=0x339d5f11; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x339d5d21
+ (id)asParseRules;	// 0x339d5f75
+ (BOOL)frontingBasicTypes;	// 0x339d5e1d
+ (BOOL)notifyOfUnknownTokens;	// 0x339d5e71
+ (BOOL)parsingLeafNode;	// 0x339d5d75
+ (BOOL)parsingWithSubItems;	// 0x339d5dc9
- (id)_policyForWAPProvisioningXMLData;	// 0x339d6199
- (void)_setData:(id)data;	// 0x339d5f31
- (id)_wbxmlPolicyDict;	// 0x339d66f5
// converted property getter: - (id)data;	// 0x339d5f11
- (void)dealloc;	// 0x339d5ec5
- (id)perDomainDictsForPolicy;	// 0x339d6bc9
@end


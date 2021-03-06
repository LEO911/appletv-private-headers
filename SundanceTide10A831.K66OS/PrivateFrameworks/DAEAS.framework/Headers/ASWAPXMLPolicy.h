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
@property(readonly, retain) NSString *data;	// G=0x36e17259; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e17069
+ (id)asParseRules;	// 0x36e172bd
+ (BOOL)frontingBasicTypes;	// 0x36e17165
+ (BOOL)notifyOfUnknownTokens;	// 0x36e171b9
+ (BOOL)parsingLeafNode;	// 0x36e170bd
+ (BOOL)parsingWithSubItems;	// 0x36e17111
- (id)_policyForWAPProvisioningXMLData;	// 0x36e174e1
- (void)_setData:(id)data;	// 0x36e17279
- (id)_wbxmlPolicyDict;	// 0x36e17a3d
// converted property getter: - (id)data;	// 0x36e17259
- (void)dealloc;	// 0x36e1720d
- (id)perDomainDictsForPolicy;	// 0x36e17f11
@end


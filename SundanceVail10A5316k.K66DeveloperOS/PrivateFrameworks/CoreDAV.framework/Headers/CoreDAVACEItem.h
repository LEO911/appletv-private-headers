/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem, CoreDAVInvertItem, CoreDAVPrincipalItem, CoreDAVGrantItem;

@interface CoreDAVACEItem : CoreDAVItem {
	CoreDAVPrincipalItem *_principal;	// 24 = 0x18
	CoreDAVInvertItem *_invert;	// 28 = 0x1c
	CoreDAVGrantItem *_grant;	// 32 = 0x20
	CoreDAVDenyItem *_deny;	// 36 = 0x24
	CoreDAVItemWithNoChildren *_protectedItem;	// 40 = 0x28
	CoreDAVItemWithHrefChildItem *_inherited;	// 44 = 0x2c
}
@property(retain) CoreDAVDenyItem *deny;	// G=0x35f6e709; S=0x35f6e71d; @synthesize=_deny
@property(retain) CoreDAVGrantItem *grant;	// G=0x35f6e6e5; S=0x35f6e6f9; @synthesize=_grant
@property(retain) CoreDAVItemWithHrefChildItem *inherited;	// G=0x35f6e751; S=0x35f6e765; @synthesize=_inherited
@property(retain) CoreDAVInvertItem *invert;	// G=0x35f6e6c1; S=0x35f6e6d5; @synthesize=_invert
@property(retain) CoreDAVPrincipalItem *principal;	// G=0x35f6e69d; S=0x35f6e6b1; @synthesize=_principal
@property(retain) CoreDAVItemWithNoChildren *protectedItem;	// G=0x35f6e72d; S=0x35f6e741; @synthesize=_protectedItem
+ (id)copyParseRules;	// 0x35f6e1a5
+ (id)privilegeItemWithNameSpace:(id)nameSpace andName:(id)name;	// 0x35f6e5e1
- (id)init;	// 0x35f6dc91
- (id)initWithPrincipal:(id)principal shouldInvert:(BOOL)invert action:(int)action withPrivileges:(id)privileges;	// 0x35f6dcbd
- (void)dealloc;	// 0x35f6de75
// declared property getter: - (id)deny;	// 0x35f6e709
- (id)description;	// 0x35f6df29
// declared property getter: - (id)grant;	// 0x35f6e6e5
// declared property getter: - (id)inherited;	// 0x35f6e751
// declared property getter: - (id)invert;	// 0x35f6e6c1
// declared property getter: - (id)principal;	// 0x35f6e69d
// declared property getter: - (id)protectedItem;	// 0x35f6e72d
// declared property setter: - (void)setDeny:(id)deny;	// 0x35f6e71d
// declared property setter: - (void)setGrant:(id)grant;	// 0x35f6e6f9
// declared property setter: - (void)setInherited:(id)inherited;	// 0x35f6e765
// declared property setter: - (void)setInvert:(id)invert;	// 0x35f6e6d5
// declared property setter: - (void)setPrincipal:(id)principal;	// 0x35f6e6b1
// declared property setter: - (void)setProtectedItem:(id)item;	// 0x35f6e741
- (void)write:(id)write;	// 0x35f6e09d
@end


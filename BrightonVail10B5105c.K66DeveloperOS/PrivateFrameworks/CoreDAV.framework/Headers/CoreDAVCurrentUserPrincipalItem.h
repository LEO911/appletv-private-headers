/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class CoreDAVItemWithNoChildren, CoreDAVHrefItem;

@interface CoreDAVCurrentUserPrincipalItem : CoreDAVItem {
	CoreDAVHrefItem *_href;	// 28 = 0x1c
	CoreDAVItemWithNoChildren *_unauthenticated;	// 32 = 0x20
}
@property(retain) CoreDAVHrefItem *href;	// G=0x36008a3d; S=0x36008a51; @synthesize=_href
@property(retain) CoreDAVItemWithNoChildren *unauthenticated;	// G=0x36008a61; S=0x36008a75; @synthesize=_unauthenticated
+ (id)copyParseRules;	// 0x36008825
- (id)init;	// 0x360086a9
- (void)dealloc;	// 0x360086d5
- (id)description;	// 0x36008739
// declared property getter: - (id)href;	// 0x36008a3d
// declared property setter: - (void)setHref:(id)href;	// 0x36008a51
// declared property setter: - (void)setUnauthenticated:(id)unauthenticated;	// 0x36008a75
// declared property getter: - (id)unauthenticated;	// 0x36008a61
@end


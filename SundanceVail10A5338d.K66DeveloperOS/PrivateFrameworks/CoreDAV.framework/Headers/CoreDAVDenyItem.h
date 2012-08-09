/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 28 = 0x1c
}
@property(retain) NSMutableSet *privileges;	// G=0x34c16eed; S=0x34c16f01; @synthesize=_privileges
+ (id)copyParseRules;	// 0x34c16cd1
- (id)init;	// 0x34c16a51
- (void)addPrivilege:(id)privilege;	// 0x34c16e55
- (void)dealloc;	// 0x34c16a7d
- (id)description;	// 0x34c16ac9
// declared property getter: - (id)privileges;	// 0x34c16eed
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x34c16f01
- (void)write:(id)write;	// 0x34c16b8d
@end

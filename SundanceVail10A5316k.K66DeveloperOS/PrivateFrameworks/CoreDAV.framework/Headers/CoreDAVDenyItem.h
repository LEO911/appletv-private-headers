/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVDenyItem : CoreDAVItem {
	NSMutableSet *_privileges;	// 24 = 0x18
}
@property(retain) NSMutableSet *privileges;	// G=0x35f700d9; S=0x35f700ed; @synthesize=_privileges
+ (id)copyParseRules;	// 0x35f6febd
- (id)init;	// 0x35f6fc3d
- (void)addPrivilege:(id)privilege;	// 0x35f70041
- (void)dealloc;	// 0x35f6fc69
- (id)description;	// 0x35f6fcb5
// declared property getter: - (id)privileges;	// 0x35f700d9
// declared property setter: - (void)setPrivileges:(id)privileges;	// 0x35f700ed
- (void)write:(id)write;	// 0x35f6fd79
@end

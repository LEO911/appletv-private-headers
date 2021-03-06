/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet *_accessControlEntities;	// 24 = 0x18
}
@property(retain) NSMutableSet *accessControlEntities;	// G=0x3006df5d; S=0x3006df71; @synthesize=_accessControlEntities
- (id)init;	// 0x3006d6f1
// declared property getter: - (id)accessControlEntities;	// 0x3006df5d
- (void)addACE:(id)ace;	// 0x3006d931
- (id)copyParseRules;	// 0x3006d82d
- (void)dealloc;	// 0x3006d71d
- (id)description;	// 0x3006d769
- (id)liveACEs;	// 0x3006dee9
- (id)notGrantedSubsetOfACEs:(id)aces;	// 0x3006d9cd
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x3006df71
@end


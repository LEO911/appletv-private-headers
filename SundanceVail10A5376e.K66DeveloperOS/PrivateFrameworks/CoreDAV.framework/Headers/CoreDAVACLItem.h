/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVItem.h"

@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem {
	NSMutableSet *_accessControlEntities;	// 28 = 0x1c
}
@property(retain) NSMutableSet *accessControlEntities;	// G=0x33a55751; S=0x33a55765; @synthesize=_accessControlEntities
+ (id)copyParseRules;	// 0x33a54f3d
- (id)init;	// 0x33a54e01
// declared property getter: - (id)accessControlEntities;	// 0x33a55751
- (void)addACE:(id)ace;	// 0x33a550cd
- (void)dealloc;	// 0x33a54e2d
- (id)description;	// 0x33a54e79
- (id)liveACEs;	// 0x33a556dd
- (id)notGrantedSubsetOfACEs:(id)aces;	// 0x33a55165
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x33a55765
@end


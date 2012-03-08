/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "CoreFoundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"
#import "NSFileSecurity.h"


__attribute__((visibility("hidden")))
@interface __NSFileSecurity : NSFileSecurity <NSCopying, NSCoding> {
@private
	filesec *_filesec;	// 4 = 0x4
}
+ (id)__new:(filesec *)aNew;	// 0x34929f1d
+ (id)allocWithZone:(NSZone *)zone;	// 0x3492a4b9
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x3492a4b5
- (id)initWithCoder:(id)coder;	// 0x3492a6bd
- (filesec *)_filesec;	// 0x34929f39
- (BOOL)copyAccessControlList:(acl **)list;	// 0x3492a115
- (id)copyWithZone:(NSZone *)zone;	// 0x3492a455
- (void)dealloc;	// 0x3492a175
- (id)description;	// 0x3492a20d
- (void)encodeWithCoder:(id)coder;	// 0x3492a4d5
- (void)finalize;	// 0x3492a1b9
- (BOOL)getGroup:(unsigned *)group;	// 0x34929fa5
- (BOOL)getGroupUUID:(unsigned char (*)[16])uuid;	// 0x3492a0bd
- (BOOL)getMode:(unsigned short *)mode;	// 0x3492a001
- (BOOL)getOwner:(unsigned *)owner;	// 0x34929f49
- (BOOL)getOwnerUUID:(unsigned char (*)[16])uuid;	// 0x3492a065
- (unsigned)hash;	// 0x3492a1fd
- (BOOL)isEqual:(id)equal;	// 0x3492a201
- (BOOL)setAccessControlList:(acl *)list;	// 0x3492a139
- (BOOL)setGroup:(unsigned)group;	// 0x34929fd5
- (BOOL)setGroupUUID:(unsigned char [16])uuid;	// 0x3492a0f1
- (BOOL)setMode:(unsigned short)mode;	// 0x3492a035
- (BOOL)setOwner:(unsigned)owner;	// 0x34929f79
- (BOOL)setOwnerUUID:(unsigned char [16])uuid;	// 0x3492a099
@end

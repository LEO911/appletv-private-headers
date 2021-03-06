/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "NSCoding.h"
#import "ASItem.h"

@class NSString;

@interface ASFolder : ASItem <NSCoding> {
	int _folderType;	// 40 = 0x28
	NSString *_serverID;	// 44 = 0x2c
	NSString *_parentID;	// 48 = 0x30
	NSString *_displayName;	// 52 = 0x34
	int _changeType;	// 56 = 0x38
	BOOL _renameOnCollision;	// 60 = 0x3c
	int _localID;	// 64 = 0x40
}
@property(assign) int changeType;	// G=0x36e55c3d; S=0x36e55c51; @synthesize=_changeType
@property(readonly, assign) int dataclass;	// G=0x36e553ed; 
@property(retain) NSString *displayName;	// G=0x36e55bf1; S=0x36e55c05; @synthesize=_displayName
@property(readonly, assign) int folderType;	// G=0x36e55c15; @synthesize=_folderType
@property(readonly, assign) int localID;	// G=0x36e55c29; @synthesize=_localID
@property(retain) NSString *parentID;	// G=0x36e55bcd; S=0x36e55be1; @synthesize=_parentID
@property(assign) BOOL renameOnCollision;	// G=0x36e55c69; S=0x36e55c81; @synthesize=_renameOnCollision
@property(retain) NSString *serverID;	// G=0x36e55ba9; S=0x36e55bbd; @synthesize=_serverID
+ (BOOL)acceptsTopLevelLeaves;	// 0x36e54df5
+ (id)asParseRules;	// 0x36e55849
+ (BOOL)frontingBasicTypes;	// 0x36e54ef1
+ (BOOL)notifyOfUnknownTokens;	// 0x36e54f45
+ (BOOL)parsingLeafNode;	// 0x36e54e49
+ (BOOL)parsingWithSubItems;	// 0x36e54e9d
- (id)initWithCoder:(id)coder;	// 0x36e54f99
- (id)initWithFolderType:(int)folderType serverID:(id)anId parentID:(id)anId3 displayName:(id)name localID:(int)anId5;	// 0x36e555d5
- (id)_folderTypeString;	// 0x36e5541d
// declared property getter: - (int)changeType;	// 0x36e55c3d
// declared property getter: - (int)dataclass;	// 0x36e553ed
- (void)dealloc;	// 0x36e55b31
- (id)description;	// 0x36e55539
// declared property getter: - (id)displayName;	// 0x36e55bf1
- (void)encodeWithCoder:(id)coder;	// 0x36e55285
// declared property getter: - (int)folderType;	// 0x36e55c15
- (unsigned)hash;	// 0x36e5517d
- (BOOL)isEqual:(id)equal;	// 0x36e55181
// declared property getter: - (int)localID;	// 0x36e55c29
- (BOOL)mayContainDataclasses:(int)dataclasses;	// 0x36e55401
// declared property getter: - (id)parentID;	// 0x36e55bcd
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x36e5568d
// declared property getter: - (BOOL)renameOnCollision;	// 0x36e55c69
// declared property getter: - (id)serverID;	// 0x36e55ba9
// declared property setter: - (void)setChangeType:(int)type;	// 0x36e55c51
// declared property setter: - (void)setDisplayName:(id)name;	// 0x36e55c05
- (void)setFolderTypeNumber:(id)number;	// 0x36e55b09
// declared property setter: - (void)setParentID:(id)anId;	// 0x36e55be1
// declared property setter: - (void)setRenameOnCollision:(BOOL)collision;	// 0x36e55c81
// declared property setter: - (void)setServerID:(id)anId;	// 0x36e55bbd
@end


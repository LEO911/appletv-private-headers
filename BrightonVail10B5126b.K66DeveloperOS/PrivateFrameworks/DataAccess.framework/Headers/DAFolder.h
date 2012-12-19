/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface DAFolder : NSObject {
	NSString *_folderName;	// 4 = 0x4
	NSString *_folderID;	// 8 = 0x8
	NSString *_parentFolderID;	// 12 = 0xc
	int _dataclass;	// 16 = 0x10
	BOOL _isDefault;	// 20 = 0x14
	BOOL _hasRemoteChanges;	// 21 = 0x15
}
@property(assign) int dataclass;	// G=0x33956239; S=0x3395624d; @synthesize=_dataclass
@property(copy) NSString *folderID;	// G=0x339561f1; S=0x33956205; @synthesize=_folderID
@property(copy) NSString *folderName;	// G=0x339561cd; S=0x339561e1; @synthesize=_folderName
@property(assign) BOOL hasRemoteChanges;	// G=0x33956295; S=0x339562ad; @synthesize=_hasRemoteChanges
@property(assign) BOOL isDefault;	// G=0x33956265; S=0x3395627d; @synthesize=_isDefault
@property(copy) NSString *parentFolderID;	// G=0x33956215; S=0x33956229; @synthesize=_parentFolderID
// declared property getter: - (int)dataclass;	// 0x33956239
- (void)dealloc;	// 0x33955f85
- (id)description;	// 0x33955ffd
// declared property getter: - (id)folderID;	// 0x339561f1
// declared property getter: - (id)folderName;	// 0x339561cd
// declared property getter: - (BOOL)hasRemoteChanges;	// 0x33956295
- (unsigned)hash;	// 0x339560bd
// declared property getter: - (BOOL)isDefault;	// 0x33956265
- (BOOL)isEqual:(id)equal;	// 0x339560dd
- (id)mailboxID;	// 0x3395140d
// declared property getter: - (id)parentFolderID;	// 0x33956215
- (id)parentMailboxID;	// 0x33951421
// declared property setter: - (void)setDataclass:(int)dataclass;	// 0x3395624d
// declared property setter: - (void)setFolderID:(id)anId;	// 0x33956205
// declared property setter: - (void)setFolderName:(id)name;	// 0x339561e1
// declared property setter: - (void)setHasRemoteChanges:(BOOL)changes;	// 0x339562ad
// declared property setter: - (void)setIsDefault:(BOOL)aDefault;	// 0x3395627d
// declared property setter: - (void)setParentFolderID:(id)anId;	// 0x33956229
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMFoundation.framework/IMFoundation
 */

#import <NSDictionary.h> // Unknown library


@interface NSDictionary (FezAdditions)
+ (id)_dictionaryWithData:(id)data isPlist:(BOOL)plist allowedClasses:(id)classes;	// 0x30b6e02d
+ (id)dictionaryWithArchiveData:(id)archiveData;	// 0x30b6c8f5
+ (id)dictionaryWithArchiveData:(id)archiveData allowedClasses:(id)classes;	// 0x30b6c90d
+ (id)dictionaryWithPlistData:(id)plistData;	// 0x30b6c959
- (id)archiveData;	// 0x30b6df65
- (id)dictionaryFromChanges:(id)changes;	// 0x30b6da35
- (id)keysOfChangedEntriesComparedTo:(id)to;	// 0x30b6dccd
- (id)plistData;	// 0x30b6c92d
@end

@interface NSDictionary (HFSFileAttributes)
@property(readonly, assign, nonatomic) unsigned short fileHFSFlags;	// G=0x30b6f8a1; 
@property(readonly, assign, nonatomic) unsigned long long fileHFSResourceForkSize;	// G=0x30b6f86d; 
// declared property getter: - (unsigned short)fileHFSFlags;	// 0x30b6f8a1
// declared property getter: - (unsigned long long)fileHFSResourceForkSize;	// 0x30b6f86d
@end


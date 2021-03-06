/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSDictionary.h> // Unknown library
#import "Foundation-Structs.h"

@class NSMutableDictionary, NSDate;

__attribute__((visibility("hidden")))
@interface NSFileAttributes : NSDictionary {
@private
	NSMutableDictionary *dict;	// 4 = 0x4
	stat statInfo;	// 8 = 0x8
	struct {
		BOOL extensionHidden;
		NSDate *creationDate;
		fields validFields;
	} catInfo;	// 116 = 0x74
	NSDictionary *extendedAttrs;	// 128 = 0x80
	int fileProtectionClass;	// 132 = 0x84
}
+ (id)_attributesAtPath:(id)path partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3203aab9
+ (id)_attributesAtURL:(id)url partialReturn:(BOOL)aReturn filterResourceFork:(BOOL)fork error:(id *)error;	// 0x3206ce3d
+ (id)attributesAtPath:(id)path traverseLink:(BOOL)link;	// 0x32049b19
+ (id)attributesWithStat:(stat *)stat;	// 0x3203ac0d
- (unsigned)count;	// 0x3206d68d
- (void)dealloc;	// 0x3203bb45
- (id)fileGroupOwnerAccountName;	// 0x3206d875
- (unsigned)fileGroupOwnerAccountNumber;	// 0x3206d8c1
- (id)fileModificationDate;	// 0x3206d781
- (id)fileOwnerAccountName;	// 0x3206d815
- (unsigned)fileOwnerAccountNumber;	// 0x3206d861
- (unsigned)filePosixPermissions;	// 0x3206d7fd
- (unsigned long long)fileSize;	// 0x3206d76d
- (unsigned)fileSystemFileNumber;	// 0x3206d8e5
- (int)fileSystemNumber;	// 0x3206d8d5
- (id)fileType;	// 0x3206d7e9
- (unsigned)hash;	// 0x3206d085
- (BOOL)isDirectory;	// 0x3206d8f9
- (BOOL)isEqual:(id)equal;	// 0x3206d541
- (id)keyEnumerator;	// 0x3206d6fd
- (id)objectForKey:(id)key;	// 0x3203afb5
@end


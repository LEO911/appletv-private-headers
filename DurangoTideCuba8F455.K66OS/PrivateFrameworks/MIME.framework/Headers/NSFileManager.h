/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSFileManager.h> // Unknown library


@interface NSFileManager (NSFileManagerAdditions)
- (BOOL)mf_canWriteToDirectoryAtPath:(id)path;	// 0x315107f5
- (void)mf_deleteFilesInSortedArray:(id)sortedArray matchingPrefix:(id)prefix fromDirectory:(id)directory;	// 0x315109d1
- (id)mf_fileModificationDateAtPath:(id)path traverseLink:(BOOL)link;	// 0x31510975
- (BOOL)mf_makeCompletePath:(id)path mode:(int)mode;	// 0x31510965
- (id)mf_makeUniqueFileInDirectory:(id)directory;	// 0x31510871
- (id)mf_pathsAtDirectory:(id)directory beginningWithString:(id)string;	// 0x31510739
- (BOOL)mf_protectFileAtPath:(id)path withClass:(int)aClass error:(id *)error;	// 0x3151064d
@end


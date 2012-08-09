/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

#import <NSMergePolicy.h> // Unknown library


@interface NoteResurrectionMergePolicy : NSMergePolicy {
}
+ (id)sharedNoteResurrectionMergePolicy;	// 0x30e576a5
- (id)localStoreForNote:(id)note;	// 0x30e57729
- (BOOL)resolveConflicts:(id)conflicts error:(id *)error;	// 0x30e57b69
- (id)snapshotFromRecord:(id)record;	// 0x30e57a75
@end

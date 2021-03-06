/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaArray.h"
#import "NSCopying.h"
#import "MediaPlayer-Structs.h"

@class MPWeakRef, NSObject, MPMediaQuerySectionInfo, MPMediaQueryCriteria;
@protocol MPMediaLibraryResultSet, OS_dispatch_queue;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
	id<MPMediaLibraryResultSet> _resultSet;	// 4 = 0x4
	Class _entityClass;	// 8 = 0x8
	MPWeakRef *_libraryWeakRef;	// 12 = 0xc
	MPMediaQuerySectionInfo *_sectionInfo;	// 16 = 0x10
	id *_entities;	// 20 = 0x14
	NSObject<OS_dispatch_queue> *_entitiesQueue;	// 24 = 0x18
	MPMediaQueryCriteria *_queryCriteria;	// 28 = 0x1c
}
@property(readonly, retain) MPMediaQuerySectionInfo *sectionInfo;	// G=0x341cea25; converted property
- (id)initWithResultSet:(id)resultSet queryCriteria:(id)criteria entityType:(int)type library:(id)library;	// 0x341ce169
- (id)copyWithZone:(NSZone *)zone;	// 0x341ce46d
- (unsigned)count;	// 0x341ce47d
- (void)dealloc;	// 0x341ce33d
- (id)objectAtIndex:(unsigned)index;	// 0x341ce49d
// converted property getter: - (id)sectionInfo;	// 0x341cea25
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMediaQueryCriteria, NSSet, MPMediaLibraryEntityWriteStream;

@interface MPMediaLibraryFetchRequest : NSObject {
@private
	id _entityArray;	// 4 = 0x4
	MPMediaLibraryEntityWriteStream *_stream;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSSet *propertiesToFetch;	// G=0x31a3f3f1; 
@property(readonly, assign, nonatomic) MPMediaQueryCriteria *queryCriteria;	// G=0x31a3f3d1; 
- (id)initWithEntityStreamArray:(id)entityStreamArray;	// 0x31a3f2bd
- (void)dealloc;	// 0x31a3f311
- (id)description;	// 0x31a3f371
// declared property getter: - (id)propertiesToFetch;	// 0x31a3f3f1
// declared property getter: - (id)queryCriteria;	// 0x31a3f3d1
- (id)streamForWritingWithCount:(unsigned)count containedMediaTypes:(int)types sectionInfo:(id)info;	// 0x31a3f411
@end


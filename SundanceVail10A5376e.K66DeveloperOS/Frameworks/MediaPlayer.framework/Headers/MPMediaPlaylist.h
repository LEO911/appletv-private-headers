/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItemCollection.h"

@class NSString;

@interface MPMediaPlaylist : MPMediaItemCollection {
}
@property(readonly, assign, nonatomic) NSString *name;	// G=0x36cd786d; 
@property(readonly, assign, nonatomic) unsigned long long persistentID;	// G=0x36cd7839; 
@property(readonly, assign, nonatomic) int playlistAttributes;	// G=0x36cd7889; 
+ (void)_createFilterableDictionary;	// 0x36cd78bd
+ (BOOL)_isValidPlaylistProperty:(id)property;	// 0x36cd7a9d
+ (BOOL)canFilterByProperty:(id)property;	// 0x36cd7581
- (id)initWithCoder:(id)coder;	// 0x36cd7475
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x36cd7369
- (unsigned)count;	// 0x36cd7b5d
- (void)encodeWithCoder:(id)coder;	// 0x36cd7505
- (BOOL)existsInLibrary;	// 0x36cd77bd
- (unsigned)hash;	// 0x36cd73c5
- (BOOL)isEqual:(id)equal;	// 0x36cd73dd
- (id)items;	// 0x36cd7ae1
- (id)loadGeniusMixArtworkWithTileLength:(float)tileLength completionBlock:(id)block;	// 0x36cd76b5
- (int)mediaTypes;	// 0x36cd7bd9
// declared property getter: - (id)name;	// 0x36cd786d
// declared property getter: - (unsigned long long)persistentID;	// 0x36cd7839
// declared property getter: - (int)playlistAttributes;	// 0x36cd7889
- (id)representativeItem;	// 0x36cd7c59
- (id)valueForProperty:(id)property;	// 0x36cd760d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAMPMediaEntity.h"

@class NSString;

@interface SAMPMediaItem : SAMPMediaEntity {
}
@property(copy, nonatomic) NSString *album;	// G=0x304d9c2d; S=0x304d9c49; 
@property(copy, nonatomic) NSString *artist;	// G=0x304d9c99; S=0x304d9cb5; 
@property(copy, nonatomic) NSString *composer;	// G=0x304d9d05; S=0x304d9d21; 
@property(copy, nonatomic) NSString *genre;	// G=0x304d9d71; S=0x304d9d8d; 
@property(assign, nonatomic) int playCount;	// G=0x304d9ddd; S=0x304d9e4d; 
@property(assign, nonatomic) int rating;	// G=0x304d9e91; S=0x304d9f01; 
@property(copy, nonatomic) NSString *sortAlbum;	// G=0x304d9f45; S=0x304d9f61; 
@property(copy, nonatomic) NSString *sortArtist;	// G=0x304d9fb1; S=0x304d9fcd; 
@property(assign, nonatomic) int trackNumber;	// G=0x304da01d; S=0x304da08d; 
+ (id)mediaItem;	// 0x304d9b9d
+ (id)mediaItemWithDictionary:(id)dictionary context:(id)context;	// 0x304d9be1
// declared property getter: - (id)album;	// 0x304d9c2d
// declared property getter: - (id)artist;	// 0x304d9c99
// declared property getter: - (id)composer;	// 0x304d9d05
- (id)encodedClassName;	// 0x304d9b91
// declared property getter: - (id)genre;	// 0x304d9d71
- (id)groupIdentifier;	// 0x304d9b81
// declared property getter: - (int)playCount;	// 0x304d9ddd
// declared property getter: - (int)rating;	// 0x304d9e91
// declared property setter: - (void)setAlbum:(id)album;	// 0x304d9c49
// declared property setter: - (void)setArtist:(id)artist;	// 0x304d9cb5
// declared property setter: - (void)setComposer:(id)composer;	// 0x304d9d21
// declared property setter: - (void)setGenre:(id)genre;	// 0x304d9d8d
// declared property setter: - (void)setPlayCount:(int)count;	// 0x304d9e4d
// declared property setter: - (void)setRating:(int)rating;	// 0x304d9f01
// declared property setter: - (void)setSortAlbum:(id)album;	// 0x304d9f61
// declared property setter: - (void)setSortArtist:(id)artist;	// 0x304d9fcd
// declared property setter: - (void)setTrackNumber:(int)number;	// 0x304da08d
// declared property getter: - (id)sortAlbum;	// 0x304d9f45
// declared property getter: - (id)sortArtist;	// 0x304d9fb1
// declared property getter: - (int)trackNumber;	// 0x304da01d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x304da0d1
@end


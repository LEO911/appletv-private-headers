/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "MLPlaylist.h"

@class ML3Entity;

__attribute__((visibility("hidden")))
@interface ML3PlaylistRep : MLPlaylist {
@private
	ML3Entity *_entity;	// 4 = 0x4
}
@property(retain) id name;	// G=0x31c01445; S=0x31c01471; converted property
- (id)initWithML3Entity:(id)ml3Entity;	// 0x31c015a5
- (void)dealloc;	// 0x31c0155d
- (unsigned)hash;	// 0x31c0149d
- (BOOL)isEqual:(id)equal;	// 0x31c014c1
// converted property getter: - (id)name;	// 0x31c01445
- (unsigned long long)persistentUID;	// 0x31c01425
// converted property setter: - (void)setName:(id)name;	// 0x31c01471
@end

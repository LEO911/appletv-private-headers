/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface RUIYTPlayerMemento : XXUnknownSuperclass {
	BOOL isPlaybackRestorable;	// 4 = 0x4
	int mediaIndex;	// 8 = 0x8
	NSArray *_trackList;	// 12 = 0xc
}
@property(assign) BOOL isPlaybackRestorable;	// G=0x2725cd; S=0x2725e5; @synthesize
@property(assign) int mediaIndex;	// G=0x2725fd; S=0x272611; @synthesize
@property(retain) NSArray *trackList;	// G=0x272629; S=0x27263d; @synthesize=_trackList
- (void).cxx_destruct;	// 0x27264d
// declared property getter: - (BOOL)isPlaybackRestorable;	// 0x2725cd
// declared property getter: - (int)mediaIndex;	// 0x2725fd
// declared property setter: - (void)setIsPlaybackRestorable:(BOOL)restorable;	// 0x2725e5
// declared property setter: - (void)setMediaIndex:(int)index;	// 0x272611
// declared property setter: - (void)setTrackList:(id)list;	// 0x27263d
// declared property getter: - (id)trackList;	// 0x272629
@end


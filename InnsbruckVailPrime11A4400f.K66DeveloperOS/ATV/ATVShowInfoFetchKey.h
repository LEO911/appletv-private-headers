/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class BRMediaType, NSURL, NSString;

__attribute__((visibility("hidden")))
@interface ATVShowInfoFetchKey : XXUnknownSuperclass {
	NSString *_itemID;	// 4 = 0x4
	BRMediaType *_mediaType;	// 8 = 0x8
	NSString *_podcastGUID;	// 12 = 0xc
	NSURL *_podcastURL;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *itemID;	// G=0x1a6735; S=0x1a6749; @synthesize=_itemID
@property(retain, nonatomic) BRMediaType *mediaType;	// G=0x1a6759; S=0x1a6769; @synthesize=_mediaType
@property(copy, nonatomic) NSString *podcastGUID;	// G=0x1a6791; S=0x1a67a5; @synthesize=_podcastGUID
@property(retain, nonatomic) NSURL *podcastURL;	// G=0x1a67b5; S=0x1a67c5; @synthesize=_podcastURL
+ (id)fetchKeyFromEpisodeDictionary:(id)episodeDictionary;	// 0x1a66e1
- (void).cxx_destruct;	// 0x1a67ed
// declared property getter: - (id)itemID;	// 0x1a6735
// declared property getter: - (id)mediaType;	// 0x1a6759
// declared property getter: - (id)podcastGUID;	// 0x1a6791
// declared property getter: - (id)podcastURL;	// 0x1a67b5
// declared property setter: - (void)setItemID:(id)anId;	// 0x1a6749
// declared property setter: - (void)setMediaType:(id)type;	// 0x1a6769
// declared property setter: - (void)setPodcastGUID:(id)guid;	// 0x1a67a5
// declared property setter: - (void)setPodcastURL:(id)url;	// 0x1a67c5
@end

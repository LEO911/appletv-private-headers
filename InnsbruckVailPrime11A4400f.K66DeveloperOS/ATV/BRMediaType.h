/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRType.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BRMediaType : BRType {
	BRMediaType *_derivedFrom;	// 8 = 0x8
	NSString *_canonicalName;	// 12 = 0xc
}
@property(assign, nonatomic) NSString *canonicalName;	// G=0x3ee4b9; S=0x3ee4fd; @synthesize=_canonicalName
@property(retain) id parentType;	// G=0x3ee479; S=0x3ee43d; converted property
+ (id)TVShow;	// 0x3eb9b1
+ (id)TVShowPreview;	// 0x3ebad9
+ (id)_defaultImageForMediaType:(id)mediaType forImageSize:(int)imageSize;	// 0x3ee50d
+ (id)airTunes;	// 0x3ece79
+ (id)app;	// 0x3ed7fd
+ (id)audioBook;	// 0x3ebc21
+ (id)booklet;	// 0x3ebf95
+ (id)cdSong;	// 0x3eb049
+ (id)coachedAudio;	// 0x3ec18d
+ (id)defaultImageForMediaType:(id)mediaType forImageSize:(int)imageSize;	// 0x3ee1d5
+ (id)demoRentalMovie;	// 0x3ec88d
+ (id)downloadSpeedTest;	// 0x3ecfb5
+ (id)dvd;	// 0x3eb779
+ (id)flickrPhoto;	// 0x3ec4cd
+ (id)iTunesExtras;	// 0x3ed0f1
+ (id)iTunesLP;	// 0x3ed1ed
+ (id)iTunesU;	// 0x3ed3ed
+ (void)initialize;	// 0x3eaa75
+ (id)interactiveBooklet;	// 0x3ec091
+ (id)internetPhoto;	// 0x3ec385
+ (id)internetPhotoMediaTypes;	// 0x3edd11
+ (id)internetRadioStation;	// 0x3ecd3d
+ (id)liveStreamingTypes;	// 0x3ee129
+ (id)liveVideo;	// 0x3ed5f5
+ (id)movie;	// 0x3eb651
+ (id)moviePreview;	// 0x3eb875
+ (id)movieTrailer;	// 0x3ebd1d
+ (id)musicVideo;	// 0x3eb185
+ (id)musicVideoPreview;	// 0x3eb2f1
+ (id)onTheGoMediaTypes;	// 0x3ede35
+ (id)photo;	// 0x3ec289
+ (id)podcast;	// 0x3eb42d
+ (id)podcastSubscription;	// 0x3eb555
+ (id)radioStation;	// 0x3ecac5
+ (id)song;	// 0x3eade5
+ (id)songPreview;	// 0x3eaf0d
+ (id)storeMediaTypeStringForMediaType:(id)mediaType;	// 0x3ee1f5
+ (id)storeMediaTypes;	// 0x3ed901
+ (id)storeRentalMovie;	// 0x3ec615
+ (id)storeRentalTVShow;	// 0x3ec751
+ (id)streamingPodcast;	// 0x3ec9c9
+ (id)streamingVideo;	// 0x3ed4f1
+ (id)syncedInternetRadioStation;	// 0x3ecc01
+ (id)trickPlay;	// 0x3ed2e9
+ (id)unchapteredTypes;	// 0x3edfa9
+ (id)videoClip;	// 0x3ed6f9
+ (id)ytVideo;	// 0x3ebe59
// declared property getter: - (id)canonicalName;	// 0x3ee4b9
- (void)dealloc;	// 0x3ee3b1
- (id)description;	// 0x3ee3fd
- (BOOL)isKindOfMediaType:(id)mediaType;	// 0x3ee489
// converted property getter: - (id)parentType;	// 0x3ee479
// declared property setter: - (void)setCanonicalName:(id)name;	// 0x3ee4fd
// converted property setter: - (void)setParentType:(id)type;	// 0x3ee43d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaEntity.h"

@class NSString, MPMediaItemArtwork, NSDate, NSArray;

@interface MPMediaItem : MPMediaEntity {
}
@property(readonly, assign, nonatomic) NSString *albumArtist;	// G=0x34197a59; 
@property(readonly, assign, nonatomic) NSString *albumTitle;	// G=0x34197ab5; 
@property(readonly, assign, nonatomic) NSString *artist;	// G=0x34197ad1; 
@property(readonly, assign, nonatomic) MPMediaItemArtwork *artwork;	// G=0x34197aed; 
@property(assign, nonatomic) double bookmarkTime;	// G=0x34197b09; S=0x34197b3d; 
@property(readonly, assign, nonatomic) NSArray *chapters;	// G=0x3419723d; 
@property(readonly, assign, nonatomic) NSString *composer;	// G=0x34197b81; 
@property(readonly, assign, nonatomic) NSString *effectiveAlbumArtist;	// G=0x34197a75; 
@property(readonly, assign, nonatomic) double effectiveStopTime;	// G=0x34197d7d; 
@property(readonly, assign, nonatomic) NSString *genre;	// G=0x34197b9d; 
@property(assign, nonatomic) BOOL hasBeenPlayed;	// G=0x34198189; S=0x341981b9; 
@property(readonly, assign, nonatomic) BOOL isITunesU;	// G=0x34197c7d; 
@property(readonly, assign, nonatomic) BOOL isRental;	// G=0x34197bb9; 
@property(readonly, assign, nonatomic) BOOL isUsableAsRepresentativeItem;	// G=0x34198921; 
@property(copy, nonatomic) NSDate *lastPlayedDate;	// G=0x34197ff1; S=0x3419800d; 
@property(copy, nonatomic) NSDate *lastSkippedDate;	// G=0x34198151; S=0x3419816d; 
@property(copy, nonatomic) NSDate *lastUsedDate;	// G=0x34198029; S=0x34198045; 
@property(readonly, assign, nonatomic) int mediaType;	// G=0x34197cad; 
@property(readonly, assign, nonatomic) BOOL mediaTypeCanSeedGenius;	// G=0x342305a5; 
@property(assign, nonatomic) unsigned playCount;	// G=0x34197f01; S=0x34197f35; 
@property(assign, nonatomic) unsigned playCountSinceSync;	// G=0x34197f79; S=0x34197fad; 
@property(readonly, assign, nonatomic) double playbackDuration;	// G=0x34197ce1; 
@property(readonly, assign, nonatomic) NSString *podcastTitle;	// G=0x34197dc1; 
@property(assign, nonatomic) unsigned rating;	// G=0x34197ddd; S=0x34197e11; 
@property(readonly, assign, nonatomic) NSDate *releaseDate;	// G=0x34197e55; 
@property(readonly, assign, nonatomic) BOOL rememberBookmarkTime;	// G=0x341981fd; 
@property(assign, nonatomic) unsigned skipCount;	// G=0x34198061; S=0x34198095; 
@property(assign, nonatomic) unsigned skipCountSinceSync;	// G=0x341980d9; S=0x3419810d; 
@property(readonly, assign, nonatomic) double startTime;	// G=0x34197d15; 
@property(readonly, assign, nonatomic) double stopTime;	// G=0x34197d49; 
@property(readonly, assign, nonatomic) NSString *title;	// G=0x34197e71; 
@property(readonly, assign, nonatomic) unsigned year;	// G=0x34197e8d; 
+ (void)_createFilterableDictionary;	// 0x34197259
+ (BOOL)_isValidItemProperty:(id)property;	// 0x34197a15
+ (BOOL)canFilterByProperty:(id)property;	// 0x341969ad
+ (id)dynamicProperties;	// 0x34197111
+ (id)fallbackTitlePropertyForGroupingType:(int)groupingType;	// 0x341970f5
+ (id)persistentIDPropertyForGroupingType:(int)groupingType;	// 0x34197005
+ (id)titlePropertyForGroupingType:(int)groupingType;	// 0x34197071
- (id)initWithCoder:(id)coder;	// 0x341968a9
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x3419679d
- (id)_bestStoreURL;	// 0x34196f4d
- (id)_directStoreURL;	// 0x34198925
- (void)_getIsDownloadable:(BOOL *)downloadable isDownloadInProgress:(BOOL *)progress;	// 0x34204ebd
- (id)_libraryLinkArtist;	// 0x34198acd
- (id)_libraryLinkKind;	// 0x34198b41
- (id)_libraryLinkPlaylistName;	// 0x34198c01
- (id)_libraryLinkURL;	// 0x34198c95
// declared property getter: - (id)albumArtist;	// 0x34197a59
// declared property getter: - (id)albumTitle;	// 0x34197ab5
// declared property getter: - (id)artist;	// 0x34197ad1
// declared property getter: - (id)artwork;	// 0x34197aed
// declared property getter: - (double)bookmarkTime;	// 0x34197b09
- (id)chapterOfType:(int)type atIndex:(unsigned)index;	// 0x34198361
- (id)chapterOfType:(int)type atTime:(double)time;	// 0x3419844d
// declared property getter: - (id)chapters;	// 0x3419723d
- (id)chaptersOfType:(int)type;	// 0x3419822d
- (void)clearBookmarkTime;	// 0x34196ecd
// declared property getter: - (id)composer;	// 0x34197b81
- (unsigned)countOfChaptersOfType:(int)type;	// 0x34198581
- (void)didReceiveMemoryWarning;	// 0x34196f49
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x34196b61
// declared property getter: - (id)effectiveAlbumArtist;	// 0x34197a75
// declared property getter: - (double)effectiveStopTime;	// 0x34197d7d
- (void)encodeWithCoder:(id)coder;	// 0x34196931
- (BOOL)existsInLibrary;	// 0x34196f85
- (void)gaplessHeuristicInfo:(unsigned *)info durationInSamples:(unsigned long long *)samples lastPacketsResync:(unsigned long long *)resync encodingDelay:(unsigned *)delay encodingDrain:(unsigned *)drain;	// 0x34198661
// declared property getter: - (id)genre;	// 0x34197b9d
// declared property getter: - (BOOL)hasBeenPlayed;	// 0x34198189
- (unsigned)hash;	// 0x341967f9
- (void)incrementPlayCountForPlayingToEnd;	// 0x34196d55
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x34196dd1
- (void)incrementSkipCount;	// 0x34196cd9
- (BOOL)isEqual:(id)equal;	// 0x34196811
// declared property getter: - (BOOL)isITunesU;	// 0x34197c7d
// declared property getter: - (BOOL)isRental;	// 0x34197bb9
// declared property getter: - (BOOL)isUsableAsRepresentativeItem;	// 0x34198921
// declared property getter: - (id)lastPlayedDate;	// 0x34197ff1
// declared property getter: - (id)lastSkippedDate;	// 0x34198151
// declared property getter: - (id)lastUsedDate;	// 0x34198029
- (void)markNominalAmountHasBeenPlayed;	// 0x34196be1
// declared property getter: - (int)mediaType;	// 0x34197cad
// declared property getter: - (BOOL)mediaTypeCanSeedGenius;	// 0x342305a5
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x34196c5d
// declared property getter: - (unsigned)playCount;	// 0x34197f01
// declared property getter: - (unsigned)playCountSinceSync;	// 0x34197f79
// declared property getter: - (double)playbackDuration;	// 0x34197ce1
// declared property getter: - (id)podcastTitle;	// 0x34197dc1
- (void)populateLocationPropertiesWithPath:(id)path;	// 0x34197209
- (id)predicateForProperty:(id)property;	// 0x34197ec1
// declared property getter: - (unsigned)rating;	// 0x34197ddd
// declared property getter: - (id)releaseDate;	// 0x34197e55
// declared property getter: - (BOOL)rememberBookmarkTime;	// 0x341981fd
- (id)representativeItem;	// 0x34196f81
// declared property setter: - (void)setBookmarkTime:(double)time;	// 0x34197b3d
// declared property setter: - (void)setHasBeenPlayed:(BOOL)played;	// 0x341981b9
// declared property setter: - (void)setLastPlayedDate:(id)date;	// 0x3419800d
// declared property setter: - (void)setLastSkippedDate:(id)date;	// 0x3419816d
// declared property setter: - (void)setLastUsedDate:(id)date;	// 0x34198045
// declared property setter: - (void)setPlayCount:(unsigned)count;	// 0x34197f35
// declared property setter: - (void)setPlayCountSinceSync:(unsigned)sync;	// 0x34197fad
// declared property setter: - (void)setRating:(unsigned)rating;	// 0x34197e11
// declared property setter: - (void)setSkipCount:(unsigned)count;	// 0x34198095
// declared property setter: - (void)setSkipCountSinceSync:(unsigned)sync;	// 0x3419810d
// declared property getter: - (unsigned)skipCount;	// 0x34198061
// declared property getter: - (unsigned)skipCountSinceSync;	// 0x341980d9
// declared property getter: - (double)startTime;	// 0x34197d15
// declared property getter: - (double)stopTime;	// 0x34197d49
// declared property getter: - (id)title;	// 0x34197e71
- (void)updateLastUsedDateToCurrentDate;	// 0x34196e51
- (id)valueForProperty:(id)property;	// 0x34196a39
- (id)valuesForProperties:(id)properties;	// 0x34196ae1
// declared property getter: - (unsigned)year;	// 0x34197e8d
@end

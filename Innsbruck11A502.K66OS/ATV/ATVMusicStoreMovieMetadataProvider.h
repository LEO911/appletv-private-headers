/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVMusicStoreBaseMetadataProvider.h"


__attribute__((visibility("hidden")))
@interface ATVMusicStoreMovieMetadataProvider : ATVMusicStoreBaseMetadataProvider {
}
+ (void)initialize;	// 0x1ef509
- (void)_addDetail:(id)detail withStrings:(id)strings label:(id)label;	// 0x1f1125
- (void)_addSplitDetails:(id)details withTopDetailStrings:(id)topDetailStrings topLabel:(id)label bottomDetailStrings:(id)strings bottomLabel:(id)label5;	// 0x1f119d
- (id)_detailControlWithDetail:(id)detail;	// 0x1f1529
- (id)_detailControlsWithDetails:(id)details;	// 0x1f1669
- (id)_labelControlWithLabel:(id)label;	// 0x1f13e9
- (void)_populateActors:(id)actors;	// 0x1f06a1
- (void)_populateAudio:(id)audio;	// 0x1f0a49
- (void)_populateDirector:(id)director;	// 0x1f086d
- (void)_populateDirectorsAndProducers:(id)producers;	// 0x1f0731
- (void)_populateMetadataDetails:(id)details withStoreOffer:(id)storeOffer;	// 0x1efb6d
- (void)_populateMovieDetails:(id)details withStoreOffer:(id)storeOffer;	// 0x1efcfd
- (void)_populateProducers:(id)producers;	// 0x1f0915
- (void)_populateSubtitles:(id)subtitles;	// 0x1f09bd
- (void)_populateSubtitlesAndAudioDetailPage:(id)page;	// 0x1f0ad5
- (void)_populateSubtitlesAndAudioLanguages:(id)languages;	// 0x1f036d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1ef8d5
- (void)populateMetadataForControl:(id)control;	// 0x1efae5
@end

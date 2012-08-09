/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPTimeMarker, MPAVItem;

@interface MPAVItemTimeMarkerEvent : NSObject {
	MPAVItem *_AVItem;	// 4 = 0x4
	MPTimeMarker *_chapterMarker;	// 8 = 0x8
	MPTimeMarker *_artworkMarker;	// 12 = 0xc
	MPTimeMarker *_URLMarker;	// 16 = 0x10
	MPTimeMarker *_closedCaptionMarker;	// 20 = 0x14
}
@property(retain, nonatomic) MPAVItem *AVItem;	// G=0x34156fa9; S=0x34156fb9; @synthesize=_AVItem
@property(retain, nonatomic) MPTimeMarker *URLMarker;	// G=0x34157009; S=0x34157019; @synthesize=_URLMarker
@property(retain, nonatomic) MPTimeMarker *artworkMarker;	// G=0x34156fe9; S=0x34156ff9; @synthesize=_artworkMarker
@property(retain, nonatomic) MPTimeMarker *chapterMarker;	// G=0x34156fc9; S=0x34156fd9; @synthesize=_chapterMarker
@property(retain, nonatomic) MPTimeMarker *closedCaptionMarker;	// G=0x34157029; S=0x34157039; @synthesize=_closedCaptionMarker
- (id)initWithTimeMarkerNotificationUserInfo:(id)timeMarkerNotificationUserInfo;	// 0x34156d55
// declared property getter: - (id)AVItem;	// 0x34156fa9
// declared property getter: - (id)URLMarker;	// 0x34157009
// declared property getter: - (id)artworkMarker;	// 0x34156fe9
// declared property getter: - (id)chapterMarker;	// 0x34156fc9
// declared property getter: - (id)closedCaptionMarker;	// 0x34157029
- (id)crossedMarkerOfType:(int)type;	// 0x34156f55
- (void)dealloc;	// 0x34156eb5
// declared property setter: - (void)setAVItem:(id)item;	// 0x34156fb9
// declared property setter: - (void)setArtworkMarker:(id)marker;	// 0x34156ff9
// declared property setter: - (void)setChapterMarker:(id)marker;	// 0x34156fd9
// declared property setter: - (void)setClosedCaptionMarker:(id)marker;	// 0x34157039
// declared property setter: - (void)setURLMarker:(id)marker;	// 0x34157019
@end

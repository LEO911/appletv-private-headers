/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>

@class MPTimeMarker, MPAVItem;

@interface MPAVItemTimeMarkerEvent : NSObject {
	MPAVItem *_AVItem;	// 4 = 0x4
	MPTimeMarker *_chapterMarker;	// 8 = 0x8
	MPTimeMarker *_artworkMarker;	// 12 = 0xc
	MPTimeMarker *_URLMarker;	// 16 = 0x10
	MPTimeMarker *_closedCaptionMarker;	// 20 = 0x14
}
@property(retain, nonatomic) MPAVItem *AVItem;	// G=0x2e260ca9; S=0x2e260cb9; @synthesize=_AVItem
@property(retain, nonatomic) MPTimeMarker *URLMarker;	// G=0x2e260d51; S=0x2e260d61; @synthesize=_URLMarker
@property(retain, nonatomic) MPTimeMarker *artworkMarker;	// G=0x2e260d19; S=0x2e260d29; @synthesize=_artworkMarker
@property(retain, nonatomic) MPTimeMarker *chapterMarker;	// G=0x2e260ce1; S=0x2e260cf1; @synthesize=_chapterMarker
@property(retain, nonatomic) MPTimeMarker *closedCaptionMarker;	// G=0x2e260d89; S=0x2e260d99; @synthesize=_closedCaptionMarker
- (id)initWithTimeMarkerNotificationUserInfo:(id)timeMarkerNotificationUserInfo;	// 0x2e260a89
- (void).cxx_destruct;	// 0x2e260dc1
// declared property getter: - (id)AVItem;	// 0x2e260ca9
// declared property getter: - (id)URLMarker;	// 0x2e260d51
// declared property getter: - (id)artworkMarker;	// 0x2e260d19
// declared property getter: - (id)chapterMarker;	// 0x2e260ce1
// declared property getter: - (id)closedCaptionMarker;	// 0x2e260d89
- (id)crossedMarkerOfType:(int)type;	// 0x2e260c35
// declared property setter: - (void)setAVItem:(id)item;	// 0x2e260cb9
// declared property setter: - (void)setArtworkMarker:(id)marker;	// 0x2e260d29
// declared property setter: - (void)setChapterMarker:(id)marker;	// 0x2e260cf1
// declared property setter: - (void)setClosedCaptionMarker:(id)marker;	// 0x2e260d99
// declared property setter: - (void)setURLMarker:(id)marker;	// 0x2e260d61
@end


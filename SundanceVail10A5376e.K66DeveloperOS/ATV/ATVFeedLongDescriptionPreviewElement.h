/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString, ATVFeedImageElement, ATVFeedMediaBadgesElement, ATVFeedStarRatingElement, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedLongDescriptionPreviewElement : ATVFeedElement {
	NSString *_title;	// 4 = 0x4
	NSString *_summary;	// 8 = 0x8
	NSString *_footnote;	// 12 = 0xc
	NSString *_rating;	// 16 = 0x10
	ATVFeedImageElement *_image;	// 20 = 0x14
	NSArray *_metadataLabels;	// 24 = 0x18
	ATVFeedMediaBadgesElement *_mediaBadges;	// 28 = 0x1c
	ATVFeedStarRatingElement *_starRating;	// 32 = 0x20
}
@property(copy, nonatomic) NSString *footnote;	// G=0x14e089; S=0x14e09d; @synthesize=_footnote
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x14e0d1; S=0x14e0e1; @synthesize=_image
@property(retain, nonatomic) ATVFeedMediaBadgesElement *mediaBadges;	// G=0x14e111; S=0x14e121; @synthesize=_mediaBadges
@property(retain, nonatomic) NSArray *metadataLabels;	// G=0x14e0f1; S=0x14e101; @synthesize=_metadataLabels
@property(copy, nonatomic) NSString *rating;	// G=0x14e0ad; S=0x14e0c1; @synthesize=_rating
@property(retain, nonatomic) ATVFeedStarRatingElement *starRating;	// G=0x14e131; S=0x14e141; @synthesize=_starRating
@property(copy, nonatomic) NSString *summary;	// G=0x14e065; S=0x14e079; @synthesize=_summary
@property(copy, nonatomic) NSString *title;	// G=0x14e041; S=0x14e055; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x14dc2d
- (void)dealloc;	// 0x14df65
// declared property getter: - (id)footnote;	// 0x14e089
// declared property getter: - (id)image;	// 0x14e0d1
// declared property getter: - (id)mediaBadges;	// 0x14e111
// declared property getter: - (id)metadataLabels;	// 0x14e0f1
// declared property getter: - (id)rating;	// 0x14e0ad
// declared property setter: - (void)setFootnote:(id)footnote;	// 0x14e09d
// declared property setter: - (void)setImage:(id)image;	// 0x14e0e1
// declared property setter: - (void)setMediaBadges:(id)badges;	// 0x14e121
// declared property setter: - (void)setMetadataLabels:(id)labels;	// 0x14e101
// declared property setter: - (void)setRating:(id)rating;	// 0x14e0c1
// declared property setter: - (void)setStarRating:(id)rating;	// 0x14e141
// declared property setter: - (void)setSummary:(id)summary;	// 0x14e079
// declared property setter: - (void)setTitle:(id)title;	// 0x14e055
// declared property getter: - (id)starRating;	// 0x14e131
// declared property getter: - (id)summary;	// 0x14e065
// declared property getter: - (id)title;	// 0x14e041
@end


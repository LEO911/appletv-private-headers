/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedStarRatingElement : ATVFeedElement {
	float _ratingPercentage;	// 4 = 0x4
	NSString *_rightLabel;	// 8 = 0x8
	BOOL _hasUserSetRating;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL hasUserSetRating;	// G=0x1640b5; S=0x1640c5; @synthesize=_hasUserSetRating
@property(assign, nonatomic) float ratingPercentage;	// G=0x164071; S=0x164081; @synthesize=_ratingPercentage
@property(copy, nonatomic) NSString *rightLabel;	// G=0x164091; S=0x1640a5; @synthesize=_rightLabel
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x163f15
- (void)dealloc;	// 0x164025
// declared property getter: - (BOOL)hasUserSetRating;	// 0x1640b5
// declared property getter: - (float)ratingPercentage;	// 0x164071
// declared property getter: - (id)rightLabel;	// 0x164091
// declared property setter: - (void)setHasUserSetRating:(BOOL)rating;	// 0x1640c5
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x164081
// declared property setter: - (void)setRightLabel:(id)label;	// 0x1640a5
@end

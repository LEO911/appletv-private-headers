/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRTextControl, NSArray, BRDividerControl, NSNumber, BRImageControl;

@interface BRMetadataLongDescriptionControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 44 = 0x2c
	BRTextControl *_titleSubtextLayer;	// 48 = 0x30
	BRTextControl *_priceLayer;	// 52 = 0x34
	BRControl *_formatControl;	// 56 = 0x38
	BRTextControl *_releaseDateLayer;	// 60 = 0x3c
	BRTextControl *_lengthLayer;	// 64 = 0x40
	BRTextControl *_studioNameLayer;	// 68 = 0x44
	BRImageControl *_ratingImageLayer;	// 72 = 0x48
	BRControl *_userRatingControl;	// 76 = 0x4c
	BRImageControl *_topRightImageLayer;	// 80 = 0x50
	BRTextControl *_summaryLayer;	// 84 = 0x54
	BRTextControl *_copyrightLayer;	// 88 = 0x58
	NSNumber *_trackNumber;	// 92 = 0x5c
	BRDividerControl *_topDivider;	// 96 = 0x60
	BRDividerControl *_bottomDivider;	// 100 = 0x64
	NSArray *_metadataObjs;	// 104 = 0x68
	NSArray *_metadataLabels;	// 108 = 0x6c
	float _totalHeight;	// 112 = 0x70
	int _alignment;	// 116 = 0x74
	CGSize _artworkSize;	// 120 = 0x78
}
- (id)init;	// 0x32a10cc5
- (void)_setCopyright:(id)copyright;	// 0x32a11079
- (void)_setFormatControl:(id)control;	// 0x32a10545
- (void)_setLength:(id)length;	// 0x32a11381
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x32a103d5
- (void)_setPrice:(id)price;	// 0x32a11501
- (void)_setRating:(id)rating;	// 0x32a104f5
- (void)_setReleaseDate:(id)date;	// 0x32a11441
- (void)_setStudioName:(id)name;	// 0x32a112c1
- (void)_setSummary:(id)summary;	// 0x32a11139
- (void)_setTitle:(id)title;	// 0x32a1167d
- (void)_setTitleSubtext:(id)subtext;	// 0x32a115c1
- (void)_setTopRightImage:(id)image;	// 0x32a10465
- (void)_setTrackNumber:(id)number;	// 0x32a105b5
- (void)_setUserRatingControl:(id)control;	// 0x32a10485
- (void)_themeMetricsChanged;	// 0x32a103c1
- (id)accessibilityScreenContent;	// 0x32a11739
- (void)dealloc;	// 0x32a10b35
- (void)layoutSubcontrols;	// 0x32a11875
- (CGSize)renderedSize;	// 0x32a11015
- (void)resetAllFields;	// 0x32a10a35
- (void)setAlignment:(int)alignment;	// 0x32a103b1
- (void)setArtworkSize:(CGSize)size;	// 0x32a106d9
- (void)setCopyright:(id)copyright;	// 0x32a10725
- (void)setFormatControl:(id)control;	// 0x32a1091d
- (void)setLength:(id)length;	// 0x32a108ad
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x32a1075d
- (void)setPrice:(id)price;	// 0x32a10955
- (void)setRating:(id)rating;	// 0x32a1083d
- (void)setReleaseDate:(id)date;	// 0x32a108e5
- (void)setStudioName:(id)name;	// 0x32a10875
- (void)setSummary:(id)summary;	// 0x32a10795
- (void)setTitle:(id)title;	// 0x32a109fd
- (void)setTitleSubtext:(id)subtext;	// 0x32a109c5
- (void)setTopRightImage:(id)image;	// 0x32a107cd
- (void)setTrackNumber:(id)number;	// 0x32a1098d
- (void)setUserRatingControl:(id)control;	// 0x32a10805
- (id)topRightImageControl;	// 0x32a103a1
@end


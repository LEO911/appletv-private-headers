/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class BRTextControl, BRDividerControl, BRMetadataLinesLayer, NSString, NSArray, BRImageControl;

@interface BRMetadataControl : BRControl {
@private
	BRTextControl *_titleLayer;	// 48 = 0x30
	BRTextControl *_rightJustifiedTitleLayer;	// 52 = 0x34
	BRImageControl *_ratingImageLayer;	// 56 = 0x38
	BRImageControl *_starRatingImageLayer;	// 60 = 0x3c
	BRImageControl *_topRightImageLayer;	// 64 = 0x40
	BRTextControl *_summaryLayer;	// 68 = 0x44
	BRMetadataLinesLayer *_metadataLinesLayer;	// 72 = 0x48
	BRTextControl *_copyrightLayer;	// 76 = 0x4c
	BRDividerControl *_topDividerLayer;	// 80 = 0x50
	BRDividerControl *_middleDividerLayer;	// 84 = 0x54
	BRDividerControl *_bottomDividerLayer;	// 88 = 0x58
	NSArray *_metadataObjs;	// 92 = 0x5c
	NSArray *_metadataLabels;	// 96 = 0x60
	float _totalHeight;	// 100 = 0x64
	int _alignment;	// 104 = 0x68
}
@property(retain, nonatomic) NSString *rightJustifiedTitle;	// G=0x366ad945; S=0x366ad8fd; 
- (id)init;	// 0x366ad3c1
- (void)_setCopyright:(id)copyright;	// 0x366aed21
- (void)_setMetadata:(id)metadata withLabels:(id)labels;	// 0x366aec89
- (void)_setRating:(id)rating;	// 0x366aea19
- (void)_setStarRating:(id)rating;	// 0x366aea75
- (void)_setSummary:(id)summary;	// 0x366aeaf1
- (void)_setTitle:(id)title;	// 0x366ae959
- (void)_setTopRightImage:(id)image;	// 0x366aead1
- (id)accessibilityLabel;	// 0x366ae86d
- (void)dealloc;	// 0x366ad69d
- (void)layoutSubcontrols;	// 0x366adc25
- (CGSize)renderedSize;	// 0x366adb85
- (void)resetAllFields;	// 0x366ad809
// declared property getter: - (id)rightJustifiedTitle;	// 0x366ad945
- (void)setAlignment:(int)alignment;	// 0x366ae949
- (void)setCopyright:(id)copyright;	// 0x366adb49
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x366adb0d
- (void)setRating:(id)rating;	// 0x366ad97d
// declared property setter: - (void)setRightJustifiedTitle:(id)title;	// 0x366ad8fd
- (void)setStarRating:(id)rating;	// 0x366ada49
- (void)setSummary:(id)summary;	// 0x366adad1
- (void)setTitle:(id)title;	// 0x366ad8c1
- (void)setTopRightImage:(id)image;	// 0x366ada95
- (void)setUserRating:(id)rating;	// 0x366ad9b9
- (id)topRightImageControl;	// 0x366ada85
- (void)windowMaxBoundsChanged;	// 0x366adbe5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSMutableDictionary, BRImageControl, NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface BRSegmentedSortControl : BRControl {
	BRImageControl *_leftEndCapLayer;	// 84 = 0x54
	NSMutableArray *_dividerLayers;	// 88 = 0x58
	NSMutableArray *_contentLayers;	// 92 = 0x5c
	NSMutableArray *_textLayers;	// 96 = 0x60
	BRImageControl *_rightEndCapLayer;	// 100 = 0x64
	NSArray *_segmentNames;	// 104 = 0x68
	NSMutableDictionary *_images;	// 108 = 0x6c
	int _selectedSegment;	// 112 = 0x70
	float _widthRatio;	// 116 = 0x74
}
@property(assign) int selectedSegment;	// G=0x326729; S=0x326649; converted property
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment;	// 0x3261e1
- (id)initWithSegmentNames:(id)segmentNames selectedSegment:(int)segment widthRatio:(float)ratio;	// 0x326205
- (id)_attributedTextForSegment:(int)segment forSelectedState:(BOOL)selectedState;	// 0x326efd
- (id)_contentBackgroundTextureForSelectedState:(BOOL)selectedState;	// 0x326ecd
- (id)_dividerTextureForSelectedState:(BOOL)selectedState;	// 0x326eb1
- (id)_leftEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x326e51
- (id)_loadImageFromFile:(id)file;	// 0x326fc9
- (id)_rightEndCapTexureForSelectedState:(BOOL)selectedState;	// 0x326e81
- (void)_updateSegmentState;	// 0x3270d1
- (id)accessibilityLabel;	// 0x326ded
- (BOOL)brEventAction:(id)action;	// 0x3267fd
- (void)dealloc;	// 0x326561
- (void)layoutSubcontrols;	// 0x3268c9
- (int)segmentCount;	// 0x326629
// converted property getter: - (int)selectedSegment;	// 0x326729
// converted property setter: - (void)setSelectedSegment:(int)segment;	// 0x326649
- (float)visualHorizontalCenter;	// 0x326739
@end


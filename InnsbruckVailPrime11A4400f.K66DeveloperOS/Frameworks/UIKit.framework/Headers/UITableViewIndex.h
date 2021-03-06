/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIControl.h"

@class UIColor, UIFont, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl {
	NSArray *_titles;	// 120 = 0x78
	UIFont *_font;	// 124 = 0x7c
	int _selectedSection;	// 128 = 0x80
	BOOL _pastTop;	// 132 = 0x84
	BOOL _pastBottom;	// 133 = 0x85
	CGSize _cachedSize;	// 136 = 0x88
	CGSize _cachedSizeToFit;	// 144 = 0x90
	UIColor *_indexColor;	// 152 = 0x98
	UIColor *_indexBackgroundColor;	// 156 = 0x9c
	UIColor *_indexTrackingBackgroundColor;	// 160 = 0xa0
	float _topPadding;	// 164 = 0xa4
	float _bottomPadding;	// 168 = 0xa8
	float _verticalTextHeightEstimate;	// 172 = 0xac
	NSArray *_entries;	// 176 = 0xb0
}
@property(retain, nonatomic) UIFont *font;	// G=0x2f473ef5; S=0x2f6b77fd; 
@property(retain, nonatomic) UIColor *indexBackgroundColor;	// G=0x2f6b7de9; S=0x2f4738f1; 
@property(retain, nonatomic) UIColor *indexColor;	// G=0x2f6b7cd1; S=0x2f473899; 
@property(retain, nonatomic) UIColor *indexTrackingBackgroundColor;	// G=0x2f6b7d41; S=0x2f6b7d79; 
@property(readonly, assign, nonatomic) BOOL pastBottom;	// G=0x2f6b7f0d; @synthesize=_pastBottom
@property(readonly, assign, nonatomic) BOOL pastTop;	// G=0x2f52fd15; @synthesize=_pastTop
@property(readonly, assign, nonatomic) int selectedSection;	// G=0x2f4fcffd; @synthesize=_selectedSection
@property(readonly, assign, nonatomic) NSString *selectedSectionTitle;	// G=0x2f4fd00d; 
@property(retain, nonatomic) NSArray *titles;	// G=0x2f6b77ed; S=0x2f473961; 
- (id)initWithFrame:(CGRect)frame;	// 0x2f473729
- (void)_cacheAndMeasureTitles;	// 0x2f6b71f1
- (id)_displayTitles;	// 0x2f6b6e61
- (id)_fontForIdiom:(int)idiom;	// 0x2f6b6c85
- (int)_idiom;	// 0x2f6b6c4d
- (float)_minLineSpacingForIdiom:(int)idiom;	// 0x2f6b6d09
- (void)_selectSectionForTouch:(id)touch withEvent:(id)event;	// 0x2f4fce39
- (CGRect)_visibleBoundsForRect:(CGRect)rect stride:(float *)stride;	// 0x2f6b78b9
- (void)_willChangeToIdiom:(int)idiom onScreen:(id)screen;	// 0x2f6b6e31
- (BOOL)beginTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f4fce09
- (void)cancelTrackingWithEvent:(id)event;	// 0x2f6b7c5d
- (BOOL)continueTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f52fcf9
- (void)dealloc;	// 0x2f6b76b9
- (void)drawRect:(CGRect)rect;	// 0x2f47a289
- (void)endTrackingWithTouch:(id)touch withEvent:(id)event;	// 0x2f4fde81
// declared property getter: - (id)font;	// 0x2f473ef5
// declared property getter: - (id)indexBackgroundColor;	// 0x2f6b7de9
// declared property getter: - (id)indexColor;	// 0x2f6b7cd1
// declared property getter: - (id)indexTrackingBackgroundColor;	// 0x2f6b7d41
- (unsigned)maximumNumberOfTitlesWithoutTruncationForHeight:(float)height;	// 0x2f6b7869
// declared property getter: - (BOOL)pastBottom;	// 0x2f6b7f0d
// declared property getter: - (BOOL)pastTop;	// 0x2f52fd15
- (BOOL)pointInside:(CGPoint)inside withEvent:(id)event;	// 0x2f6b7e61
// declared property getter: - (int)selectedSection;	// 0x2f4fcffd
// declared property getter: - (id)selectedSectionTitle;	// 0x2f4fd00d
// declared property setter: - (void)setFont:(id)font;	// 0x2f6b77fd
- (void)setFrame:(CGRect)frame;	// 0x2f6b775d
// declared property setter: - (void)setIndexBackgroundColor:(id)color;	// 0x2f4738f1
// declared property setter: - (void)setIndexColor:(id)color;	// 0x2f473899
// declared property setter: - (void)setIndexTrackingBackgroundColor:(id)color;	// 0x2f6b7d79
// declared property setter: - (void)setTitles:(id)titles;	// 0x2f473961
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2f473a01
- (void)tintColorDidChange;	// 0x2f6b7e21
// declared property getter: - (id)titles;	// 0x2f6b77ed
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class UIImage, NSMutableDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface _UISegmentedControlAppearanceStorage : NSObject {
@private
	UIImage *_optionsBackgroundImage;	// 4 = 0x4
	NSMutableDictionary *_backgroundImages;	// 8 = 0x8
	NSMutableDictionary *_miniBackgroundImages;	// 12 = 0xc
	NSMutableDictionary *_dividerImages;	// 16 = 0x10
	NSMutableDictionary *_miniDividerImages;	// 20 = 0x14
	NSMutableDictionary *_textAttributesForState;	// 24 = 0x18
	NSNumber *_backgroundPositionAdjustmentInBar;	// 28 = 0x1c
	NSNumber *_backgroundPositionAdjustmentInMiniBar;	// 32 = 0x20
	NSMutableDictionary *_contentPositionOffsets;	// 36 = 0x24
	NSMutableDictionary *_miniContentPositionOffsets;	// 40 = 0x28
	BOOL _legacyDontHighlight;	// 44 = 0x2c
	BOOL _legacySuppressOptionsBackground;	// 45 = 0x2d
	BOOL _isTiled;	// 46 = 0x2e
	unsigned _leftCapWidth;	// 48 = 0x30
	unsigned _rightCapWidth;	// 52 = 0x34
}
@property(readonly, assign) BOOL legacySuppressOptionsBackground;	// G=0x3020c675; converted property
@property(retain, nonatomic) UIImage *optionsBackgroundImage;	// G=0x3020cb0d; S=0x3020cb1d; @synthesize=_optionsBackgroundImage
- (id)init;	// 0x3020c4b9
- (id)anyDividerImage;	// 0x3020c229
- (id)anyDividerImageForMini:(BOOL)mini;	// 0x3020c195
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x3020bf81
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x3020bead
- (id)backgroundPositionAdjustmentInMiniBar:(BOOL)miniBar;	// 0x3020bbd5
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x3020bd85
- (id)contentPositionOffsetForSegment:(int)segment inMiniBar:(BOOL)miniBar noFallback:(BOOL)fallback;	// 0x3020bcfd
- (void)dealloc;	// 0x3020c3b9
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x3020c255
- (id)dividerImageForLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini withFallback:(BOOL)fallback;	// 0x3020c0b5
// converted property getter: - (BOOL)legacySuppressOptionsBackground;	// 0x3020c675
// declared property getter: - (id)optionsBackgroundImage;	// 0x3020cb0d
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x3020bda9
- (void)setBackgroundPositionAdjustment:(id)adjustment inMiniBar:(BOOL)miniBar;	// 0x3020bb05
- (void)setContentPositionOffset:(id)offset forSegment:(int)segment inMiniBar:(BOOL)miniBar;	// 0x3020bbf9
- (void)setDetail:(XXStruct_wXTbsB *)detail;	// 0x3020c685
- (void)setDividerImage:(id)image forLeftSegmentState:(unsigned)leftSegmentState rightSegmentState:(unsigned)state isMini:(BOOL)mini;	// 0x3020bfa5
- (void)setIsTiled:(BOOL)tiled leftCapWidth:(unsigned)width rightCapWidth:(unsigned)width3;	// 0x3020cadd
// declared property setter: - (void)setOptionsBackgroundImage:(id)image;	// 0x3020cb1d
- (void)setTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3020c279
- (void)takeTextAttributesFrom:(XXStruct_V3NSMA)from forState:(unsigned)state;	// 0x3020c509
- (id)textAttributesForState:(unsigned)state;	// 0x3020c371
- (BOOL)wantsTrackingSuppressed;	// 0x3020ba6d
@end

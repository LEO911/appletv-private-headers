/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIBarItemAppearanceStorage.h"

@class NSValue, _UIBarBackButtonItemAppearanceStorage, NSMutableDictionary, NSNumber, UIColor;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemAppearanceStorage : _UIBarItemAppearanceStorage {
@private
	NSMutableDictionary *backgroundImages;	// 8 = 0x8
	NSMutableDictionary *miniBackgroundImages;	// 12 = 0xc
	UIColor *tintColor;	// 16 = 0x10
	NSValue *titlePositionOffset;	// 20 = 0x14
	NSValue *miniTitlePositionOffset;	// 24 = 0x18
	NSNumber *backgroundVerticalAdjustment;	// 28 = 0x1c
	NSNumber *miniBackgroundVerticalAdjustment;	// 32 = 0x20
	_UIBarBackButtonItemAppearanceStorage *backButtonAppearance;	// 36 = 0x24
}
@property(retain, nonatomic) NSNumber *backButtonBackgroundVerticalAdjustment;	// G=0x35811d2d; S=0x358f64e1; 
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;	// G=0x35811ccd; S=0x358f6409; 
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x3573df71; S=0x358f6601; @synthesize
@property(retain, nonatomic) NSNumber *miniBackButtonBackgroundVerticalAdjustment;	// G=0x35811d5d; S=0x358f654d; 
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;	// G=0x35811cfd; S=0x358f6475; 
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x35746745; S=0x358f6625; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x35746735; S=0x358f65dd; @synthesize
@property(retain, nonatomic) UIColor *tintColor;	// G=0x3573dbfd; S=0x35746711; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x3573df61; S=0x358f65b9; @synthesize
- (id)anyBackButtonBackgroundImage;	// 0x358f63e9
- (id)anyBackgroundImage;	// 0x358f633d
- (id)backButtonBackgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x357459ad
// declared property getter: - (id)backButtonBackgroundVerticalAdjustment;	// 0x35811d2d
// declared property getter: - (id)backButtonTitlePositionOffset;	// 0x35811ccd
- (id)backgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x3573d709
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x3573df71
- (void)dealloc;	// 0x35746a0d
// declared property getter: - (id)miniBackButtonBackgroundVerticalAdjustment;	// 0x35811d5d
// declared property getter: - (id)miniBackButtonTitlePositionOffset;	// 0x35811cfd
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x35746745
// declared property getter: - (id)miniTitlePositionOffset;	// 0x35746735
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x357459cd
// declared property setter: - (void)setBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x358f64e1
// declared property setter: - (void)setBackButtonTitlePositionOffset:(id)offset;	// 0x358f6409
- (void)setBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x3573d765
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x358f6601
// declared property setter: - (void)setMiniBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x358f654d
// declared property setter: - (void)setMiniBackButtonTitlePositionOffset:(id)offset;	// 0x358f6475
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x358f6625
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x358f65dd
// declared property setter: - (void)setTintColor:(id)color;	// 0x35746711
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x358f65b9
// declared property getter: - (id)tintColor;	// 0x3573dbfd
// declared property getter: - (id)titlePositionOffset;	// 0x3573df61
@end

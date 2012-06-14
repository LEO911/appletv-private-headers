/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "_UIBarItemAppearanceStorage.h"

@class NSMutableDictionary, NSNumber, _UIBarBackButtonItemAppearanceStorage, UIColor, NSValue;

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
@property(retain, nonatomic) NSNumber *backButtonBackgroundVerticalAdjustment;	// G=0x3020c3bd; S=0x302edae5; 
@property(retain, nonatomic) NSValue *backButtonTitlePositionOffset;	// G=0x3020c35d; S=0x302ed9ed; 
@property(retain, nonatomic) NSNumber *backgroundVerticalAdjustment;	// G=0x301489e1; S=0x302edbfd; @synthesize
@property(retain, nonatomic) NSNumber *miniBackButtonBackgroundVerticalAdjustment;	// G=0x3020c3ed; S=0x302edb61; 
@property(retain, nonatomic) NSValue *miniBackButtonTitlePositionOffset;	// G=0x3020c38d; S=0x302eda69; 
@property(retain, nonatomic) NSNumber *miniBackgroundVerticalAdjustment;	// G=0x30150089; S=0x302edc0d; @synthesize
@property(retain, nonatomic) NSValue *miniTitlePositionOffset;	// G=0x30150079; S=0x302edbed; @synthesize
@property(retain, nonatomic) UIColor *tintColor;	// G=0x301486d9; S=0x30150069; @synthesize
@property(retain, nonatomic) NSValue *titlePositionOffset;	// G=0x301489d1; S=0x302edbdd; @synthesize
- (id)anyBackButtonBackgroundImage;	// 0x302ed9cd
- (id)anyBackgroundImage;	// 0x302ed8b5
- (id)backButtonBackgroundImageForState:(unsigned)state isMini:(BOOL)mini;	// 0x3014f499
// declared property getter: - (id)backButtonBackgroundVerticalAdjustment;	// 0x3020c3bd
// declared property getter: - (id)backButtonTitlePositionOffset;	// 0x3020c35d
- (id)backgroundImageForState:(unsigned)state style:(int)style isMini:(BOOL)mini;	// 0x302ed809
// declared property getter: - (id)backgroundVerticalAdjustment;	// 0x301489e1
- (void)dealloc;	// 0x3015041d
// declared property getter: - (id)miniBackButtonBackgroundVerticalAdjustment;	// 0x3020c3ed
// declared property getter: - (id)miniBackButtonTitlePositionOffset;	// 0x3020c38d
// declared property getter: - (id)miniBackgroundVerticalAdjustment;	// 0x30150089
// declared property getter: - (id)miniTitlePositionOffset;	// 0x30150079
- (void)setBackButtonBackgroundImage:(id)image forState:(unsigned)state isMini:(BOOL)mini;	// 0x3014f4b9
// declared property setter: - (void)setBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x302edae5
// declared property setter: - (void)setBackButtonTitlePositionOffset:(id)offset;	// 0x302ed9ed
- (void)setBackgroundImage:(id)image forState:(unsigned)state style:(int)style isMini:(BOOL)mini;	// 0x302ed5ed
// declared property setter: - (void)setBackgroundVerticalAdjustment:(id)adjustment;	// 0x302edbfd
// declared property setter: - (void)setMiniBackButtonBackgroundVerticalAdjustment:(id)adjustment;	// 0x302edb61
// declared property setter: - (void)setMiniBackButtonTitlePositionOffset:(id)offset;	// 0x302eda69
// declared property setter: - (void)setMiniBackgroundVerticalAdjustment:(id)adjustment;	// 0x302edc0d
// declared property setter: - (void)setMiniTitlePositionOffset:(id)offset;	// 0x302edbed
// declared property setter: - (void)setTintColor:(id)color;	// 0x30150069
// declared property setter: - (void)setTitlePositionOffset:(id)offset;	// 0x302edbdd
// declared property getter: - (id)tintColor;	// 0x301486d9
// declared property getter: - (id)titlePositionOffset;	// 0x301489d1
@end

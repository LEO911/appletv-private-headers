/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class UIImage, NSString, UIView, NSSet;

@interface UITabBarItem : UIBarItem {
@private
	NSString *_title;	// 8 = 0x8
	NSSet *_possibleTitles;	// 12 = 0xc
	SEL _action;	// 16 = 0x10
	id _target;	// 20 = 0x14
	UIImage *_image;	// 24 = 0x18
	UIImage *_selectedImage;	// 28 = 0x1c
	UIImage *_unselectedImage;	// 32 = 0x20
	UIEdgeInsets _imageInsets;	// 36 = 0x24
	NSString *_badgeValue;	// 52 = 0x34
	UIView *_view;	// 56 = 0x38
	int _tag;	// 60 = 0x3c
	id _appearanceStorage;	// 64 = 0x40
	struct {
		unsigned enabled : 1;
		unsigned style : 3;
		unsigned isSystemItem : 1;
		unsigned systemItem : 7;
		unsigned viewIsCustom : 1;
		unsigned animatedBadge : 1;
		unsigned customSelectedImage : 1;
		unsigned customUnselectedImage : 1;
	} _tabBarItemFlags;	// 68 = 0x44
}
@property(assign, nonatomic) SEL action;	// G=0x32fdc461; S=0x32f50491; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x3313b285; S=0x3313b209; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x3313ad7d; S=0x32f4ee25; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32f52511; S=0x32f4eae5; converted property
@property(retain) UIImage *image;	// G=0x32f4f7b5; S=0x32f4effd; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x32f528a9; S=0x3313acdd; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x32f4f805; S=0x3313b299; 
@property(assign) int tag;	// G=0x32f94e41; S=0x32f4eb61; converted property
@property(assign, nonatomic) id target;	// G=0x32fdc471; S=0x32f50481; 
@property(retain) NSString *title;	// G=0x32f52859; S=0x32f4edf9; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x3313b191; S=0x3313b071; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x32f4f859; S=0x3313b2fd; 
@property(retain, nonatomic) UIView *view;	// G=0x32f50ab9; S=0x32f525bd; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x32f523e9; S=0x3313b1e5; 
+ (id)_appearanceProxyViewClasses;	// 0x3313b4a9
- (id)init;	// 0x32f4ea9d
- (id)initWithCoder:(id)coder;	// 0x3313a8b1
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x32f4ea41
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x32f4ef95
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;	// 0x32f50ac9
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;	// 0x32f50aed
- (id)_internalTemplateImage;	// 0x32f51035
- (id)_internalTitle;	// 0x32f51121
- (void)_setInternalTemplateImage:(id)image;	// 0x32f4f029
- (void)_setInternalTitle:(id)title;	// 0x32f4ebed
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x3313b36d
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x32f5272d
- (void)_updateView;	// 0x32f4ec61
// declared property getter: - (SEL)action;	// 0x32fdc461
// declared property getter: - (BOOL)animatedBadge;	// 0x3313b285
// declared property getter: - (id)badgeValue;	// 0x3313ad7d
- (void)dealloc;	// 0x3313ac19
- (void)encodeWithCoder:(id)coder;	// 0x3313aa81
- (id)finishedSelectedImage;	// 0x3313aeb1
- (id)finishedUnselectedImage;	// 0x3313aedd
// converted property getter: - (id)image;	// 0x32f4f7b5
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x32f528a9
// converted property getter: - (BOOL)isEnabled;	// 0x32f52511
- (BOOL)isSystemItem;	// 0x32f4ebd9
- (id)nextResponder;	// 0x3313b34d
// declared property getter: - (id)selectedImage;	// 0x32f4f805
// declared property setter: - (void)setAction:(SEL)action;	// 0x32f50491
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x3313b209
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x32f4ee25
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32f4eae5
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x3313adb5
// converted property setter: - (void)setImage:(id)image;	// 0x32f4effd
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x3313acdd
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x3313b299
// converted property setter: - (void)setTag:(int)tag;	// 0x32f4eb61
// declared property setter: - (void)setTarget:(id)target;	// 0x32f50481
// converted property setter: - (void)setTitle:(id)title;	// 0x32f4edf9
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x3313b071
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x3313af05
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x3313b2fd
// declared property setter: - (void)setView:(id)view;	// 0x32f525bd
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x3313b1e5
- (int)systemItem;	// 0x32f51021
// converted property getter: - (int)tag;	// 0x32f94e41
// declared property getter: - (id)target;	// 0x32fdc471
// converted property getter: - (id)title;	// 0x32f52859
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x3313b191
- (id)titleTextAttributesForState:(unsigned)state;	// 0x3313b029
// declared property getter: - (id)unselectedImage;	// 0x32f4f859
// declared property getter: - (id)view;	// 0x32f50ab9
// declared property getter: - (BOOL)viewIsCustom;	// 0x32f523e9
@end

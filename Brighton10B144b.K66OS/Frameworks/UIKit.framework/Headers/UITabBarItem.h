/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIBarItem.h"

@class NSSet, NSString, UIImage, UIView;

@interface UITabBarItem : UIBarItem {
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
@property(assign, nonatomic) SEL action;	// G=0x32c1b859; S=0x32b24791; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x32d7339d; S=0x32d7331d; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x32d730b5; S=0x32b78449; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32b25bd1; S=0x32b780ed; converted property
@property(retain) UIImage *image;	// G=0x32b23b1d; S=0x32b785bd; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x32b7b8b5; S=0x32ba7a75; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x32b79491; S=0x32d733b1; 
@property(assign) int tag;	// G=0x32b23b71; S=0x32b78171; converted property
@property(assign, nonatomic) id target;	// G=0x32c1b869; S=0x32b24781; 
@property(retain) NSString *title;	// G=0x32b7b865; S=0x32b7841d; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x32d7329d; S=0x32d7318d; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x32b794e5; S=0x32d7341d; 
@property(retain, nonatomic) UIView *view;	// G=0x32b24e2d; S=0x32b7b5e1; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x32b7b431; S=0x32d732f5; 
+ (id)_appearanceProxyViewClasses;	// 0x32d735c1
- (id)init;	// 0x32b780a1
- (id)initWithCoder:(id)coder;	// 0x32d72c5d
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x32b78041
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x32b78551
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;	// 0x32b79599
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;	// 0x32b795bd
- (id)_internalTemplateImage;	// 0x32b79b09
- (id)_internalTitle;	// 0x32b79bdd
- (void)_setInternalTemplateImage:(id)image;	// 0x32b785e5
- (void)_setInternalTitle:(id)title;	// 0x32b78209
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x32d73489
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x32b7b751
- (void)_updateView;	// 0x32b78281
// declared property getter: - (SEL)action;	// 0x32c1b859
// declared property getter: - (BOOL)animatedBadge;	// 0x32d7339d
// declared property getter: - (id)badgeValue;	// 0x32d730b5
- (void)dealloc;	// 0x32d72fed
- (void)encodeWithCoder:(id)coder;	// 0x32d72e41
- (id)finishedSelectedImage;	// 0x32d730f1
- (id)finishedUnselectedImage;	// 0x32d7311d
// converted property getter: - (id)image;	// 0x32b23b1d
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x32b7b8b5
// converted property getter: - (BOOL)isEnabled;	// 0x32b25bd1
- (BOOL)isSystemItem;	// 0x32b781f1
- (id)nextResponder;	// 0x32d73469
// declared property getter: - (id)selectedImage;	// 0x32b79491
// declared property setter: - (void)setAction:(SEL)action;	// 0x32b24791
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x32d7331d
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x32b78449
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32b780ed
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x32b7883d
// converted property setter: - (void)setImage:(id)image;	// 0x32b785bd
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x32ba7a75
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x32d733b1
// converted property setter: - (void)setTag:(int)tag;	// 0x32b78171
// declared property setter: - (void)setTarget:(id)target;	// 0x32b24781
// converted property setter: - (void)setTitle:(id)title;	// 0x32b7841d
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x32d7318d
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x32ba762d
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x32d7341d
// declared property setter: - (void)setView:(id)view;	// 0x32b7b5e1
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x32d732f5
- (int)systemItem;	// 0x32b79af5
// converted property getter: - (int)tag;	// 0x32b23b71
// declared property getter: - (id)target;	// 0x32c1b869
// converted property getter: - (id)title;	// 0x32b7b865
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x32d7329d
- (id)titleTextAttributesForState:(unsigned)state;	// 0x32d73145
// declared property getter: - (id)unselectedImage;	// 0x32b794e5
// declared property getter: - (id)view;	// 0x32b24e2d
// declared property getter: - (BOOL)viewIsCustom;	// 0x32b7b431
@end


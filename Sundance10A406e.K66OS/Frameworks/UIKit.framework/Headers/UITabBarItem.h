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
@property(assign, nonatomic) SEL action;	// G=0x309e5781; S=0x308ee791; 
@property(assign, nonatomic) BOOL animatedBadge;	// G=0x30b3ce6d; S=0x30b3cded; 
@property(copy, nonatomic) NSString *badgeValue;	// G=0x30b3cb85; S=0x30942431; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x308efbd1; S=0x309420d5; converted property
@property(retain) UIImage *image;	// G=0x308edb1d; S=0x309425a5; converted property
@property(assign) UIEdgeInsets imageInsets;	// G=0x3094589d; S=0x30971a5d; converted property
@property(retain, nonatomic) UIImage *selectedImage;	// G=0x30943479; S=0x30b3ce81; 
@property(assign) int tag;	// G=0x308edb71; S=0x30942159; converted property
@property(assign, nonatomic) id target;	// G=0x309e5791; S=0x308ee781; 
@property(retain) NSString *title;	// G=0x3094584d; S=0x30942405; converted property
@property(assign) UIOffset titlePositionAdjustment;	// G=0x30b3cd6d; S=0x30b3cc5d; converted property
@property(retain, nonatomic) UIImage *unselectedImage;	// G=0x309434cd; S=0x30b3ceed; 
@property(retain, nonatomic) UIView *view;	// G=0x308eee2d; S=0x309455c9; 
@property(assign, nonatomic) BOOL viewIsCustom;	// G=0x30945419; S=0x30b3cdc5; 
+ (id)_appearanceProxyViewClasses;	// 0x30b3d091
- (id)init;	// 0x30942089
- (id)initWithCoder:(id)coder;	// 0x30b3c72d
- (id)initWithTabBarSystemItem:(int)tabBarSystemItem tag:(int)tag;	// 0x30942029
- (id)initWithTitle:(id)title image:(id)image tag:(int)tag;	// 0x30942539
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge;	// 0x30943581
- (id)_createViewForTabBar:(id)tabBar showingBadge:(BOOL)badge withTint:(BOOL)tint;	// 0x309435a5
- (id)_internalTemplateImage;	// 0x30943af1
- (id)_internalTitle;	// 0x30943bc5
- (void)_setInternalTemplateImage:(id)image;	// 0x309425cd
- (void)_setInternalTitle:(id)title;	// 0x309421f1
- (void)_setTitleTextAttributeValue:(id)value forAttributeKey:(id)attributeKey state:(unsigned)state;	// 0x30b3cf59
- (id)_updateImageWithTintColor:(id)tintColor isSelected:(BOOL)selected getImageOffset:(UIOffset *)offset;	// 0x30945739
- (void)_updateView;	// 0x30942269
// declared property getter: - (SEL)action;	// 0x309e5781
// declared property getter: - (BOOL)animatedBadge;	// 0x30b3ce6d
// declared property getter: - (id)badgeValue;	// 0x30b3cb85
- (void)dealloc;	// 0x30b3cabd
- (void)encodeWithCoder:(id)coder;	// 0x30b3c911
- (id)finishedSelectedImage;	// 0x30b3cbc1
- (id)finishedUnselectedImage;	// 0x30b3cbed
// converted property getter: - (id)image;	// 0x308edb1d
// converted property getter: - (UIEdgeInsets)imageInsets;	// 0x3094589d
// converted property getter: - (BOOL)isEnabled;	// 0x308efbd1
- (BOOL)isSystemItem;	// 0x309421d9
- (id)nextResponder;	// 0x30b3cf39
// declared property getter: - (id)selectedImage;	// 0x30943479
// declared property setter: - (void)setAction:(SEL)action;	// 0x308ee791
// declared property setter: - (void)setAnimatedBadge:(BOOL)badge;	// 0x30b3cded
// declared property setter: - (void)setBadgeValue:(id)value;	// 0x30942431
// converted property setter: - (void)setEnabled:(BOOL)enabled;	// 0x309420d5
- (void)setFinishedSelectedImage:(id)image withFinishedUnselectedImage:(id)finishedUnselectedImage;	// 0x30942825
// converted property setter: - (void)setImage:(id)image;	// 0x309425a5
// converted property setter: - (void)setImageInsets:(UIEdgeInsets)insets;	// 0x30971a5d
// declared property setter: - (void)setSelectedImage:(id)image;	// 0x30b3ce81
// converted property setter: - (void)setTag:(int)tag;	// 0x30942159
// declared property setter: - (void)setTarget:(id)target;	// 0x308ee781
// converted property setter: - (void)setTitle:(id)title;	// 0x30942405
// converted property setter: - (void)setTitlePositionAdjustment:(UIOffset)adjustment;	// 0x30b3cc5d
- (void)setTitleTextAttributes:(id)attributes forState:(unsigned)state;	// 0x30971615
// declared property setter: - (void)setUnselectedImage:(id)image;	// 0x30b3ceed
// declared property setter: - (void)setView:(id)view;	// 0x309455c9
// declared property setter: - (void)setViewIsCustom:(BOOL)custom;	// 0x30b3cdc5
- (int)systemItem;	// 0x30943add
// converted property getter: - (int)tag;	// 0x308edb71
// declared property getter: - (id)target;	// 0x309e5791
// converted property getter: - (id)title;	// 0x3094584d
// converted property getter: - (UIOffset)titlePositionAdjustment;	// 0x30b3cd6d
- (id)titleTextAttributesForState:(unsigned)state;	// 0x30b3cc15
// declared property getter: - (id)unselectedImage;	// 0x309434cd
// declared property getter: - (id)view;	// 0x308eee2d
// declared property getter: - (BOOL)viewIsCustom;	// 0x30945419
@end


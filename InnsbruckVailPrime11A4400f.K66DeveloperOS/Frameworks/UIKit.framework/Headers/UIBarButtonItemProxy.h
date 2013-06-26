/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface UIBarButtonItemProxy : NSObject {
	UIBarButtonItem *_item;	// 4 = 0x4
	UIView *_view;	// 8 = 0x8
}
@property(readonly, retain) UIBarButtonItem *item;	// G=0x2f61f94d; converted property
@property(readonly, retain) UIView *view;	// G=0x2f61f95d; converted property
- (id)initWithItem:(id)item inToolbar:(id)toolbar;	// 0x2f61f889
- (void)dealloc;	// 0x2f61f901
// converted property getter: - (id)item;	// 0x2f61f94d
// converted property getter: - (id)view;	// 0x2f61f95d
@end

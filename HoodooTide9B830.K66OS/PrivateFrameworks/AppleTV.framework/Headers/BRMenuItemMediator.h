/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class BRMenuItem;

@interface BRMenuItemMediator : NSObject {
@private
	BRMenuItem *_menuItem;	// 4 = 0x4
	SEL _mediaParadeSelector;	// 8 = 0x8
	SEL _menuSelector;	// 12 = 0xc
	id _object;	// 16 = 0x10
}
@property(assign) SEL mediaPreviewSelector;	// G=0x32a31915; S=0x32a31905; converted property
@property(assign) SEL menuActionSelector;	// G=0x32a31935; S=0x32a31925; converted property
@property(readonly, retain) BRMenuItem *menuItem;	// G=0x32a318f5; converted property
@property(readonly, retain) id object;	// G=0x32a31991; converted property
+ (id)mediatorWithMenuItem:(id)menuItem;	// 0x32a317f5
- (id)initWithMenuItem:(id)menuItem;	// 0x32a31841
- (void)dealloc;	// 0x32a31895
// converted property getter: - (SEL)mediaPreviewSelector;	// 0x32a31915
// converted property getter: - (SEL)menuActionSelector;	// 0x32a31935
// converted property getter: - (id)menuItem;	// 0x32a318f5
// converted property getter: - (id)object;	// 0x32a31991
// converted property setter: - (void)setMediaPreviewSelector:(SEL)selector;	// 0x32a31905
// converted property setter: - (void)setMenuActionSelector:(SEL)selector;	// 0x32a31925
- (void)setMenuActionSelector:(SEL)selector withObject:(id)object;	// 0x32a31945
@end


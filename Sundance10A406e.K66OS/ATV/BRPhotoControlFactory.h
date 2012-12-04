/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"

@class NSDateFormatter;
@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface BRPhotoControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
	NSDateFormatter *_formatter;	// 8 = 0x8
	BOOL _useMinimumImages;	// 12 = 0xc
}
@property(readonly, retain) NSDateFormatter *formatter;	// G=0x3325e9; converted property
@property(retain) id selectionHandler;	// G=0x332339; S=0x332349; converted property
+ (id)standardFactory;	// 0x332125
- (id)_cyclerForData:(id)data;	// 0x3329a9
- (id)_cyclerItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x332c9d
- (void)_decorateControlWithPlayIcon:(id)playIcon forMediaObject:(id)mediaObject;	// 0x3332fd
- (id)_gridItemForData:(id)data;	// 0x3327dd
- (id)_menuItemForData:(id)data;	// 0x332675
- (id)_previewControlForData:(id)data;	// 0x333221
- (id)_shelfItemForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x333589
- (id)_subtitleForCollection:(id)collection;	// 0x33377d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3321d1
- (void)dealloc;	// 0x33216d
// converted property getter: - (id)formatter;	// 0x3325e9
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x332385
// converted property getter: - (id)selectionHandler;	// 0x332339
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x332349
- (void)setUseMinimumImages:(BOOL)images;	// 0x3325c9
- (BOOL)useMinumumImages;	// 0x3325d9
@end

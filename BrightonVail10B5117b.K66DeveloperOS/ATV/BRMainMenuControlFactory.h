/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRControlFactory.h"

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface BRMainMenuControlFactory : XXUnknownSuperclass <BRControlFactory> {
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
}
@property(retain) id selectionHandler;	// G=0x2bad21; S=0x2bace5; converted property
+ (id)factory;	// 0x2bac51
- (id)_posterControlForAsset:(id)asset currentControl:(id)control requestedBy:(id)by;	// 0x2bae55
- (id)_posterControlForCollection:(id)collection currentControl:(id)control requestedBy:(id)by;	// 0x2bb0d5
- (id)_posterControlForMediaItem:(id)mediaItem currentControl:(id)control requestedBy:(id)by;	// 0x2bb32d
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x2bad31
- (void)dealloc;	// 0x2bac99
// converted property getter: - (id)selectionHandler;	// 0x2bad21
// converted property setter: - (void)setSelectionHandler:(id)handler;	// 0x2bace5
@end

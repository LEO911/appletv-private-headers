/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreOfferControlFactory : XXUnknownSuperclass <BRControlFactory> {
	UIColor *_color;	// 4 = 0x4
}
@property(retain, nonatomic) UIColor *color;	// G=0xb7639; S=0xb7649; @synthesize=_color
+ (id)factory;	// 0xb70f1
// declared property getter: - (id)color;	// 0xb7639
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0xb7175
- (void)dealloc;	// 0xb7129
// declared property setter: - (void)setColor:(id)color;	// 0xb7649
@end

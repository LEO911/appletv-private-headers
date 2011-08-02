/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <NSCoding> {
@private
	id source;	// 4 = 0x4
	id destination;	// 8 = 0x8
	NSString *label;	// 12 = 0xc
}
@property(retain) id destination;	// G=0x30280f0d; S=0x30280f71; converted property
@property(retain) NSString *label;	// G=0x30280f1d; S=0x30280f35; converted property
@property(retain) id source;	// G=0x30280efd; S=0x30280fad; converted property
- (id)initWithCoder:(id)coder;	// 0x30281065
- (void)connect;	// 0x30280f2d
- (void)connectForSimulator;	// 0x30280f31
- (void)dealloc;	// 0x30281111
// converted property getter: - (id)destination;	// 0x30280f0d
- (void)encodeWithCoder:(id)coder;	// 0x30280fe9
// converted property getter: - (id)label;	// 0x30280f1d
// converted property setter: - (void)setDestination:(id)destination;	// 0x30280f71
// converted property setter: - (void)setLabel:(id)label;	// 0x30280f35
// converted property setter: - (void)setSource:(id)source;	// 0x30280fad
// converted property getter: - (id)source;	// 0x30280efd
@end

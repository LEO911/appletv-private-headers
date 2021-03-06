/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import "ScreenReaderCore-Structs.h"
#import <NSObject.h> // Unknown library


@interface SCRCGestureFinger : NSObject {
	unsigned _identifier;	// 4 = 0x4
	CGPoint _location;	// 8 = 0x8
}
@property(readonly, assign) unsigned identifier;	// G=0x35422521; converted property
@property(readonly, assign) CGPoint location;	// G=0x35422531; converted property
- (id)initWithIdentifier:(unsigned)identifier location:(CGPoint)location;	// 0x35422469
- (id)description;	// 0x354224bd
// converted property getter: - (unsigned)identifier;	// 0x35422521
// converted property getter: - (CGPoint)location;	// 0x35422531
@end


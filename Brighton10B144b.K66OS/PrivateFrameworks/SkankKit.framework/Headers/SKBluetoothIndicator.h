/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SkankKit.framework/SkankKit
 */

#import "SkankKit-Structs.h"
#import "SKLayer.h"

@class BluetoothManager;

@interface SKBluetoothIndicator : SKLayer {
	BluetoothManager *_bt;	// 56 = 0x38
}
- (id)init;	// 0x3544450d
- (void)dealloc;	// 0x354445b9
- (void)drawInContext:(CGContextRef)context;	// 0x35444615
- (void)powerChanged:(id)changed;	// 0x35444769
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CADisplayMode;

__attribute__((visibility("hidden")))
@interface BRDisplayMode : XXUnknownSuperclass {
	CADisplayMode *_displayMode;	// 4 = 0x4
	double _refreshRate;	// 8 = 0x8
	BOOL _isVirtual;	// 16 = 0x10
}
@property(readonly, retain) CADisplayMode *displayMode;	// G=0x300c8d; converted property
@property(readonly, assign) BOOL isVirtual;	// G=0x300d05; converted property
@property(readonly, assign) double refreshRate;	// G=0x300ced; converted property
- (id)initWithDisplayMode:(id)displayMode refreshRate:(double)rate isVirtual:(BOOL)aVirtual;	// 0x300a81
- (unsigned long)bitsPerPixel;	// 0x300ce5
- (void)dealloc;	// 0x300b15
- (id)description;	// 0x300c21
// converted property getter: - (id)displayMode;	// 0x300c8d
- (unsigned long)height;	// 0x300cc5
- (BOOL)interlaced;	// 0x300ce9
- (BOOL)isEqual:(id)equal;	// 0x300b61
// converted property getter: - (BOOL)isVirtual;	// 0x300d05
// converted property getter: - (double)refreshRate;	// 0x300ced
- (BOOL)safe;	// 0x300c9d
- (BOOL)safeForHardware;	// 0x300ca1
- (unsigned long)width;	// 0x300ca5
@end


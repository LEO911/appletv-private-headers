/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface GEOTileSourceCallbacks : NSObject {
	NSMutableSet *_callbacks;	// 4 = 0x4
	BOOL _allowNetwork;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL allowNetwork;	// G=0x33f520cd; S=0x33f516f1; @synthesize=_allowNetwork
@property(readonly, assign, nonatomic) NSMutableSet *callbacks;	// G=0x33f516e1; @synthesize=_callbacks
- (id)init;	// 0x33f51535
// declared property getter: - (BOOL)allowNetwork;	// 0x33f520cd
// declared property getter: - (id)callbacks;	// 0x33f516e1
- (void)dealloc;	// 0x33f543b1
- (id)description;	// 0x33fc8211
// declared property setter: - (void)setAllowNetwork:(BOOL)network;	// 0x33f516f1
@end

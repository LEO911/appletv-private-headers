/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

#import "CoreMIDI-Structs.h"
#import <NSObject.h> // Unknown library

@class MIDINetworkHost;

@interface MIDINetworkConnection : NSObject {
	MIDINetworkConnectionImpl *_impl;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) MIDINetworkHost *host;	// G=0x3167984d; 
+ (id)connectionWithHost:(id)host;	// 0x316796f5
- (id)init;	// 0x316796a9
- (void)dealloc;	// 0x31679761
// declared property getter: - (id)host;	// 0x3167984d
@end

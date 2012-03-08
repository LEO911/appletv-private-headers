/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import "ImageCapture-Structs.h"
#import <NSObject.h> // Unknown library


@interface ICPTPIPClient : NSObject {
@private
	id _clientProperties;	// 4 = 0x4
}
@property(assign) CFFileDescriptorRef fdref;	// G=0x36dedf89; S=0x36dedfa9; converted property
@property(assign) int pid;	// G=0x36dedefd; S=0x36dedf1d; converted property
@property(assign) BOOL registered;	// G=0x36dedf41; S=0x36dedf65; converted property
@property(assign) int remoteAddress;	// G=0x36dee011; S=0x36dee031; converted property
@property(assign) CFMessagePortRef remotePort;	// G=0x36dedfcd; S=0x36dedfed; converted property
@property(assign) int serverFD;	// G=0x36dee055; S=0x36dee075; converted property
- (id)init;	// 0x36dee4c5
// converted property getter: - (CFFileDescriptorRef)fdref;	// 0x36dedf89
// converted property getter: - (int)pid;	// 0x36dedefd
// converted property getter: - (BOOL)registered;	// 0x36dedf41
// converted property getter: - (int)remoteAddress;	// 0x36dee011
// converted property getter: - (CFMessagePortRef)remotePort;	// 0x36dedfcd
// converted property getter: - (int)serverFD;	// 0x36dee055
// converted property setter: - (void)setFdref:(CFFileDescriptorRef)fdref;	// 0x36dedfa9
// converted property setter: - (void)setPid:(int)pid;	// 0x36dedf1d
// converted property setter: - (void)setRegistered:(BOOL)registered;	// 0x36dedf65
// converted property setter: - (void)setRemoteAddress:(int)address;	// 0x36dee031
// converted property setter: - (void)setRemotePort:(CFMessagePortRef)port;	// 0x36dedfed
// converted property setter: - (void)setServerFD:(int)fd;	// 0x36dee075
@end

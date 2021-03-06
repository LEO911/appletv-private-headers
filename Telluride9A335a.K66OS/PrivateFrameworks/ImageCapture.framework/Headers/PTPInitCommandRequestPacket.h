/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {
	unsigned char _initiatorGUID[16];	// 4 = 0x4
	NSString *_initiatorFriendlyName;	// 20 = 0x14
}
@property(retain) NSString *initiatorFriendlyName;	// G=0x36de4969; S=0x36de4a3d; converted property
- (id)initWithInitiatorGUID:(char *)initiatorGUID initiatorFriendlyName:(id)name;	// 0x36de4995
- (id)initWithTCPBuffer:(void *)tcpbuffer;	// 0x36de4cf5
- (id)contentForTCP;	// 0x36de4be1
- (void)dealloc;	// 0x36de4ca9
- (id)description;	// 0x36de4ab5
// converted property getter: - (id)initiatorFriendlyName;	// 0x36de4969
- (const char *)initiatorGUID;	// 0x36de4959
// converted property setter: - (void)setInitiatorFriendlyName:(id)name;	// 0x36de4a3d
- (void)setInitiatorGUID:(char *)guid;	// 0x36de4979
@end


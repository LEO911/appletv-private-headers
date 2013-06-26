/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "NSSecureCoding.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

@interface AXIPCMessage : NSObject <NSSecureCoding> {
	int _key;	// 4 = 0x4
	NSDictionary *_payload;	// 8 = 0x8
	unsigned _clientPort;	// 12 = 0xc
}
@property(assign, nonatomic) unsigned clientPort;	// G=0x333825dd; S=0x333825ed; @synthesize=_clientPort
@property(assign, nonatomic) int key;	// G=0x3338259d; S=0x333825ad; @synthesize=_key
@property(retain, nonatomic) NSDictionary *payload;	// G=0x333825bd; S=0x333825cd; @synthesize=_payload
+ (BOOL)supportsSecureCoding;	// 0x333824f1
- (id)initWithCoder:(id)coder;	// 0x33382361
- (id)initWithKey:(int)key;	// 0x333822ad
- (id)initWithKey:(int)key payload:(id)payload;	// 0x33382301
// declared property getter: - (unsigned)clientPort;	// 0x333825dd
- (void)dealloc;	// 0x333824f5
- (id)description;	// 0x33382539
- (void)encodeWithCoder:(id)coder;	// 0x33382415
// declared property getter: - (int)key;	// 0x3338259d
// declared property getter: - (id)payload;	// 0x333825bd
// declared property setter: - (void)setClientPort:(unsigned)port;	// 0x333825ed
// declared property setter: - (void)setKey:(int)key;	// 0x333825ad
// declared property setter: - (void)setPayload:(id)payload;	// 0x333825cd
@end

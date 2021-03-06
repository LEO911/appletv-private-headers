/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import "NSSecureCoding.h"
#import </libobjc.A.h>
#import "AccessibilityUtilities-Structs.h"

@class NSString, NSDictionary;

@interface AXIPCMessage : NSObject <NSSecureCoding> {
	int _key;	// 4 = 0x4
	NSDictionary *_payload;	// 8 = 0x8
	unsigned _clientPort;	// 12 = 0xc
	XXStruct_zetnhA _auditToken;	// 16 = 0x10
}
@property(assign, nonatomic) XXStruct_zetnhA auditToken;	// G=0x2fe2df85; S=0x2fe2dfa9; @synthesize=_auditToken
@property(assign, nonatomic) unsigned clientPort;	// G=0x2fe2df65; S=0x2fe2df75; @synthesize=_clientPort
@property(assign, nonatomic) int key;	// G=0x2fe2df25; S=0x2fe2df35; @synthesize=_key
@property(retain, nonatomic) NSDictionary *payload;	// G=0x2fe2df45; S=0x2fe2df55; @synthesize=_payload
@property(readonly, assign, nonatomic) NSString *senderBundleId;	// G=0x2fe2de01; 
+ (id)archivedMessageFromData:(id)data;	// 0x2fe2d9e1
+ (BOOL)supportsSecureCoding;	// 0x2fe2ddfd
- (id)initWithCoder:(id)coder;	// 0x2fe2db49
- (id)initWithKey:(int)key;	// 0x2fe2d945
- (id)initWithKey:(int)key payload:(id)payload;	// 0x2fe2d959
// declared property getter: - (XXStruct_zetnhA)auditToken;	// 0x2fe2df85
// declared property getter: - (unsigned)clientPort;	// 0x2fe2df65
- (void)dealloc;	// 0x2fe2de3d
- (id)description;	// 0x2fe2de81
- (void)encodeWithCoder:(id)coder;	// 0x2fe2dd2d
// declared property getter: - (int)key;	// 0x2fe2df25
// declared property getter: - (id)payload;	// 0x2fe2df45
// declared property getter: - (id)senderBundleId;	// 0x2fe2de01
// declared property setter: - (void)setAuditToken:(XXStruct_zetnhA)token;	// 0x2fe2dfa9
// declared property setter: - (void)setClientPort:(unsigned)port;	// 0x2fe2df75
// declared property setter: - (void)setKey:(int)key;	// 0x2fe2df35
// declared property setter: - (void)setPayload:(id)payload;	// 0x2fe2df55
@end


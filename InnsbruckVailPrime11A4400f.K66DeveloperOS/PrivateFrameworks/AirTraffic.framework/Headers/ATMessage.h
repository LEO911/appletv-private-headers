/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
 */

#import </libobjc.A.h>

@class NSData, NSDictionary, NSString;

@interface ATMessage : NSObject {
	unsigned _session;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSDictionary *_params;	// 12 = 0xc
	NSData *_sig;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *name;	// G=0x2ffc1445; S=0x2ffc1455; @synthesize=_name
@property(retain, nonatomic) NSDictionary *parameters;	// G=0x2ffc1479; S=0x2ffc1489; @synthesize=_params
@property(readonly, assign, nonatomic) unsigned sessionNumber;	// G=0x2ffc14ad; @synthesize=_session
@property(retain, nonatomic) NSData *sig;	// G=0x2ffc14bd; S=0x2ffc14cd; @synthesize=_sig
+ (unsigned)currentSessionNumber;	// 0x2ffc0e99
+ (id)messageFromData:(id)data;	// 0x2ffc0fd1
+ (id)messageFromDictionary:(id)dictionary;	// 0x2ffc0ed9
+ (id)messageWithName:(id)name parameters:(id)parameters;	// 0x2ffc126d
+ (id)messageWithName:(id)name parameters:(id)parameters session:(unsigned)session;	// 0x2ffc12fd
+ (unsigned)nextSessionNumber;	// 0x2ffc0e85
+ (void)setSessionNumber:(unsigned)number;	// 0x2ffc0ea9
- (id)initWithDictionary:(id)dictionary;	// 0x2ffc1175
- (id)data;	// 0x2ffc1135
- (void)dealloc;	// 0x2ffc1331
- (id)description;	// 0x2ffc13a9
- (id)dictionary;	// 0x2ffc1069
// declared property getter: - (id)name;	// 0x2ffc1445
- (id)parameterForKey:(id)key;	// 0x2ffc0eb9
// declared property getter: - (id)parameters;	// 0x2ffc1479
// declared property getter: - (unsigned)sessionNumber;	// 0x2ffc14ad
// declared property setter: - (void)setName:(id)name;	// 0x2ffc1455
// declared property setter: - (void)setParameters:(id)parameters;	// 0x2ffc1489
// declared property setter: - (void)setSig:(id)sig;	// 0x2ffc14cd
// declared property getter: - (id)sig;	// 0x2ffc14bd
@end


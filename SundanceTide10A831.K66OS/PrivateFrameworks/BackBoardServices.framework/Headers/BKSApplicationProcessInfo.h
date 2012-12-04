/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "BKSXPCCoding.h"
#import "BackBoardServices-Structs.h"

@class BKSMachSendRight, NSNumber, NSString;

@interface BKSApplicationProcessInfo : NSObject <NSCopying, BKSXPCCoding> {
	NSString *_bundleIdentifier;	// 4 = 0x4
	NSNumber *_pidNumber;	// 8 = 0x8
	NSNumber *_beingDebugged;	// 12 = 0xc
	BKSMachSendRight *_eventPort;	// 16 = 0x10
	BOOL _suspended;	// 20 = 0x14
	BOOL _classic;	// 21 = 0x15
}
@property(retain, nonatomic) NSNumber *beingDebugged;	// G=0x33073319; S=0x33073329; @synthesize=_beingDebugged
@property(copy, nonatomic) NSString *bundleIdentifier;	// G=0x330732d5; S=0x330732e9; @synthesize=_bundleIdentifier
@property(assign, nonatomic) BOOL classic;	// G=0x33073379; S=0x33073389; @synthesize=_classic
@property(retain, nonatomic) BKSMachSendRight *eventPort;	// G=0x33073339; S=0x33073349; @synthesize=_eventPort
@property(retain, nonatomic) NSNumber *pidNumber;	// G=0x330732f9; S=0x33073309; @synthesize=_pidNumber
@property(assign, nonatomic) BOOL suspended;	// G=0x33073359; S=0x33073369; @synthesize=_suspended
- (id)initWithInfo:(id)info zone:(NSZone *)zone;	// 0x33072e49
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x3307311d
// declared property getter: - (id)beingDebugged;	// 0x33073319
// declared property getter: - (id)bundleIdentifier;	// 0x330732d5
// declared property getter: - (BOOL)classic;	// 0x33073379
- (id)copyWithZone:(NSZone *)zone;	// 0x330730d9
- (void)dealloc;	// 0x33072f65
- (id)description;	// 0x33072fdd
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x33073209
// declared property getter: - (id)eventPort;	// 0x33073339
// declared property getter: - (id)pidNumber;	// 0x330732f9
// declared property setter: - (void)setBeingDebugged:(id)debugged;	// 0x33073329
// declared property setter: - (void)setBundleIdentifier:(id)identifier;	// 0x330732e9
// declared property setter: - (void)setClassic:(BOOL)classic;	// 0x33073389
// declared property setter: - (void)setEventPort:(id)port;	// 0x33073349
// declared property setter: - (void)setPidNumber:(id)number;	// 0x33073309
// declared property setter: - (void)setSuspended:(BOOL)suspended;	// 0x33073369
// declared property getter: - (BOOL)suspended;	// 0x33073359
@end

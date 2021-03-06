/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <NSObject.h> // Unknown library

@class BKSSignal, NSString;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface BKSProcessAssertion : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSObject<OS_xpc_object> *_serverConnection;	// 8 = 0x8
	BOOL _valid;	// 12 = 0xc
	BKSSignal *_invalidationSignal;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	NSString *_bundleIdentifier;	// 24 = 0x18
	NSString *_name;	// 28 = 0x1c
	unsigned _flags;	// 32 = 0x20
	unsigned _reason;	// 36 = 0x24
	id _invalidationHandler;	// 40 = 0x28
	id _acquisitionHandler;	// 44 = 0x2c
}
@property(copy, nonatomic) id acquisitionHandler;	// G=0x340d181d; S=0x340d1945; @dynamic
@property(assign, nonatomic) unsigned flags;	// G=0x340d1c09; S=0x340d1cd5; @dynamic
@property(copy, nonatomic) id invalidationHandler;	// G=0x340d1a1d; S=0x340d1b31; @dynamic
@property(copy, nonatomic) NSString *name;	// G=0x340d1d7d; S=0x340d1ea5; @dynamic
@property(readonly, assign, nonatomic) unsigned reason;	// G=0x340d16c9; @dynamic
@property(readonly, assign, nonatomic) BOOL valid;	// G=0x340d1571; @dynamic
+ (id)NameForReason:(unsigned)reason;	// 0x340d1059
- (id)init;	// 0x340d1171
- (id)initWithBundleIdentifier:(id)bundleIdentifier flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;	// 0x340d132d
- (id)initWithPID:(int)pid flags:(unsigned)flags reason:(unsigned)reason name:(id)name withHandler:(id)handler;	// 0x340d1455
// declared property getter: - (id)acquisitionHandler;	// 0x340d181d
- (void)dealloc;	// 0x340d1215
// declared property getter: - (unsigned)flags;	// 0x340d1c09
- (void)invalidate;	// 0x340d1fc1
// declared property getter: - (id)invalidationHandler;	// 0x340d1a1d
// declared property getter: - (id)name;	// 0x340d1d7d
- (void)queue_acquireAssertion;	// 0x340d23c1
- (void)queue_invalidate:(BOOL)invalidate;	// 0x340d203d
- (void)queue_notifyAssertionAcquired:(BOOL)acquired;	// 0x340d2729
- (void)queue_registerWithServer;	// 0x340d2161
- (void)queue_updateAssertion;	// 0x340d2615
// declared property getter: - (unsigned)reason;	// 0x340d16c9
// declared property setter: - (void)setAcquisitionHandler:(id)handler;	// 0x340d1945
// declared property setter: - (void)setFlags:(unsigned)flags;	// 0x340d1cd5
// declared property setter: - (void)setInvalidationHandler:(id)handler;	// 0x340d1b31
// declared property setter: - (void)setName:(id)name;	// 0x340d1ea5
- (void)setReason:(unsigned)reason;	// 0x340d1795
- (void)setValid:(BOOL)valid;	// 0x340d1641
// declared property getter: - (BOOL)valid;	// 0x340d1571
@end


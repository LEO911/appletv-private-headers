/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class BKSProcessAssertion;
@protocol OS_dispatch_queue;

@interface MZProcessAssertion : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	id _expirationBlock;	// 8 = 0x8
	unsigned _identifier;	// 12 = 0xc
	BKSProcessAssertion *_bkProcessAssertion;	// 16 = 0x10
}
@property(retain, nonatomic) BKSProcessAssertion *bkProcessAssertion;	// G=0x300f09ad; S=0x300f08fd; @synthesize=_bkProcessAssertion
@property(readonly, assign, nonatomic) unsigned identifier;	// G=0x300f0dcd; @synthesize=_identifier
- (id)initWithExpirationBlock:(id)expirationBlock debugDescription:(id)description;	// 0x300f043d
- (void)_expireBackgroundTask;	// 0x300f0b71
- (void)_onQueueSetBkProcessAssertion:(id)assertion;	// 0x300f0729
// declared property getter: - (id)bkProcessAssertion;	// 0x300f09ad
- (void)dealloc;	// 0x300f06b9
- (id)description;	// 0x300f0651
// declared property getter: - (unsigned)identifier;	// 0x300f0dcd
- (void)invalidate;	// 0x300f0d51
// declared property setter: - (void)setBkProcessAssertion:(id)assertion;	// 0x300f08fd
@end

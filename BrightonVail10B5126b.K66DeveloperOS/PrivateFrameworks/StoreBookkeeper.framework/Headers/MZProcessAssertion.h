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
@property(retain, nonatomic) BKSProcessAssertion *bkProcessAssertion;	// G=0x3549480d; S=0x3549475d; @synthesize=_bkProcessAssertion
@property(readonly, assign, nonatomic) unsigned identifier;	// G=0x35494c2d; @synthesize=_identifier
- (id)initWithExpirationBlock:(id)expirationBlock debugDescription:(id)description;	// 0x3549429d
- (void)_expireBackgroundTask;	// 0x354949d1
- (void)_onQueueSetBkProcessAssertion:(id)assertion;	// 0x35494589
// declared property getter: - (id)bkProcessAssertion;	// 0x3549480d
- (void)dealloc;	// 0x35494519
- (id)description;	// 0x354944b1
// declared property getter: - (unsigned)identifier;	// 0x35494c2d
- (void)invalidate;	// 0x35494bb1
// declared property setter: - (void)setBkProcessAssertion:(id)assertion;	// 0x3549475d
@end


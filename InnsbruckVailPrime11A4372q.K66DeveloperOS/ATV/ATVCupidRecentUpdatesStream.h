/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidRecentUpdatesStream : XXUnknownSuperclass {
	ACAccount *_appleAccount;	// 4 = 0x4
}
@property(retain, nonatomic) ACAccount *appleAccount;	// G=0x48fea5; S=0x48feb5; @synthesize=_appleAccount
+ (id)collectionWithDataClient:(id)dataClient accessObject:(id)object;	// 0x48f8ed
+ (id)idForAppleAccount:(id)appleAccount;	// 0x48f88d
- (id)initWithDataClient:(id)dataClient;	// 0x48fb69
- (id)initWithDataClient:(id)dataClient appleAccount:(id)account;	// 0x48fb75
- (void).cxx_destruct;	// 0x48fedd
// declared property getter: - (id)appleAccount;	// 0x48fea5
- (id)concreteValueForProperty:(id)property;	// 0x48fbe5
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x48feb5
@end

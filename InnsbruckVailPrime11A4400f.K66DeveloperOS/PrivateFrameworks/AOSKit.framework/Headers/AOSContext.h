/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

#import "AOSKit-Structs.h"
#import </libobjc.A.h>
#import "NSPortDelegate.h"

@class NSThread;

@interface AOSContext : NSObject <NSPortDelegate> {
	AOSAccountRef _account;	// 4 = 0x4
	AOSTransactionC *_transaction;	// 8 = 0x8
	/*function-pointer*/ void *_callback;	// 12 = 0xc
	NSThread *_callbackThread;	// 16 = 0x10
	id _info;	// 20 = 0x14
}
@property(assign) AOSAccountRef account;	// G=0x2fb340cd; S=0x2fb34099; converted property
@property(retain) id info;	// G=0x2fb34155; S=0x2fb34121; converted property
@property(assign) AOSTransactionC *transaction;	// G=0x2fb34111; S=0x2fb340dd; converted property
+ (id)contextWithAccount:(AOSAccountRef)account andTransaction:(AOSTransactionC *)transaction;	// 0x2fb33ea1
- (id)init;	// 0x2fb33f15
- (id)_callbackThread;	// 0x2fb34389
- (void)_performCallback;	// 0x2fb34399
// converted property getter: - (AOSAccountRef)account;	// 0x2fb340cd
- (void)dealloc;	// 0x2fb33f79
- (void)finalize;	// 0x2fb34009
// converted property getter: - (id)info;	// 0x2fb34155
- (BOOL)scheduleCallback;	// 0x2fb34165
// converted property setter: - (void)setAccount:(AOSAccountRef)account;	// 0x2fb34099
// converted property setter: - (void)setInfo:(id)info;	// 0x2fb34121
// converted property setter: - (void)setTransaction:(AOSTransactionC *)transaction;	// 0x2fb340dd
// converted property getter: - (AOSTransactionC *)transaction;	// 0x2fb34111
@end


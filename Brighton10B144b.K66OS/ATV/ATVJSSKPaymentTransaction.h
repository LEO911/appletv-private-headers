/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVJSObject.h"

@class SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface ATVJSSKPaymentTransaction : XXUnknownSuperclass <ATVJSObject> {
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SKPaymentTransaction *_paymentTransaction;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x176cb5; converted property
@property(readonly, assign, nonatomic) SKPaymentTransaction *paymentTransaction;	// G=0x176cc5; @synthesize=_paymentTransaction
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x176855
+ (id)paymentTransactionFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x176ae5
- (id)init;	// 0x176b41
- (id)initWithPaymentTransaction:(id)paymentTransaction context:(OpaqueJSContext *)context;	// 0x176b89
- (void)dealloc;	// 0x176c69
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x176cb5
// declared property getter: - (id)paymentTransaction;	// 0x176cc5
@end


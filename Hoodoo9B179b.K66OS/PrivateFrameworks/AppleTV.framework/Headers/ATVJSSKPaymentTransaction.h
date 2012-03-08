/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"
#import "ATVJSObject.h"

@class SKPaymentTransaction;

__attribute__((visibility("hidden")))
@interface ATVJSSKPaymentTransaction : NSObject <ATVJSObject> {
@private
	OpaqueJSValue *_jsObjectRef;	// 4 = 0x4
	SKPaymentTransaction *_paymentTransaction;	// 8 = 0x8
}
@property(readonly, assign) OpaqueJSValue *jsObjectRef;	// G=0x303cabd9; converted property
@property(readonly, assign, nonatomic) SKPaymentTransaction *paymentTransaction;	// G=0x303cabe9; @synthesize=_paymentTransaction
+ (void)addClassDefinitionInContext:(OpaqueJSContext *)context;	// 0x303ca795
+ (id)paymentTransactionFromJSValue:(OpaqueJSValue *)jsvalue context:(OpaqueJSContext *)context;	// 0x303caa01
- (id)init;	// 0x303caa5d
- (id)initWithPaymentTransaction:(id)paymentTransaction context:(OpaqueJSContext *)context;	// 0x303caaa1
- (void)dealloc;	// 0x303cab8d
// converted property getter: - (OpaqueJSValue *)jsObjectRef;	// 0x303cabd9
// declared property getter: - (id)paymentTransaction;	// 0x303cabe9
@end

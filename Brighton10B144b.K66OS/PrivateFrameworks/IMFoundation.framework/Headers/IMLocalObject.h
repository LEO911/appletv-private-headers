/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_xpc_object;

@interface IMLocalObject : NSObject {
	id _internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSObject<OS_xpc_object> *connection;	// G=0x341b0a49; 
@property(readonly, assign, nonatomic) BOOL isValid;	// G=0x341b156d; 
@property(readonly, assign, nonatomic) NSString *portName;	// G=0x341b0a69; 
@property(assign, nonatomic) id target;	// G=0x341b03c9; S=0x341b03e9; 
+ (void)_registerIMLocalObject:(id)object;	// 0x341af89d
+ (id)_registeredIMLocalObjectForPort:(unsigned)port;	// 0x341af749
+ (void)_unregisterIMLocalObject:(id)object;	// 0x341af8e9
+ (void)initialize;	// 0x341af935
- (id)initWithTarget:(id)target connection:(id)connection protocol:(id)protocol;	// 0x341afa99
- (id)initWithTarget:(id)target portName:(id)name protocol:(id)protocol;	// 0x341afe01
- (id)initWithTarget:(id)target protocol:(id)protocol;	// 0x341afa79
- (void)_cancelHandlerCompleted;	// 0x341b07c9
- (void)_clearPort:(BOOL)port;	// 0x341b0409
- (void)_enqueueInvocation:(id)invocation;	// 0x341b13ed
- (BOOL)_handleInvocation:(id)invocation;	// 0x341b0ae5
- (void)_handleNewInvocations;	// 0x341b0f39
- (void)_noteNewInvocation;	// 0x341b11f5
- (id)_peekInvocation;	// 0x341b129d
- (void)_popInvocation;	// 0x341b135d
- (void)_portDidBecomeInvalid;	// 0x341b0879
- (void)_portInterrupted;	// 0x341b07f1
- (void)_systemShutdown:(id)shutdown;	// 0x341b09a5
// declared property getter: - (id)connection;	// 0x341b0a49
- (void)dealloc;	// 0x341b05a1
- (id)description;	// 0x341b17dd
- (BOOL)handleInvocation:(id)invocation;	// 0x341b0efd
- (void)invalidate;	// 0x341b15f1
// declared property getter: - (BOOL)isValid;	// 0x341b156d
- (BOOL)isValidSelector:(SEL)selector;	// 0x341b1509
// declared property getter: - (id)portName;	// 0x341b0a69
- (void)setPortName:(id)name;	// 0x341b0a89
// declared property setter: - (void)setTarget:(id)target;	// 0x341b03e9
// declared property getter: - (id)target;	// 0x341b03c9
- (void)terminated;	// 0x341b0901
@end

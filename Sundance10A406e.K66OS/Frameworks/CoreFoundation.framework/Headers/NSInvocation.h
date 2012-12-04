/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import <NSObject.h> // Unknown library
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x33a56805; S=0x33a57b21; converted property
@property(retain) id target;	// G=0x33aa00c1; S=0x33a83f51; converted property
+ (id)_invocationWithMethodSignature:(id)methodSignature frame:(void *)frame;	// 0x33a566a9
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x33a57b0d
- (id)init;	// 0x33afd955
- (void)_addAttachedObject:(id)object;	// 0x33a9bc7d
- (BOOL)argumentsRetained;	// 0x33afdd31
- (id)copyWithZone:(NSZone *)zone;	// 0x33afdd49
- (void)dealloc;	// 0x33a576d5
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x33a56829
- (void)getReturnValue:(void *)value;	// 0x33aa1059
- (void)invoke;	// 0x33a56ecd
- (void)invokeSuper;	// 0x33afe1d1
- (void)invokeUsingIMP:(/*function-pointer*/ void *)imp;	// 0x33afe091
- (void)invokeWithTarget:(id)target;	// 0x33a56b11
- (id)methodSignature;	// 0x33a57a09
- (void)retainArguments;	// 0x33a57d51
// converted property getter: - (SEL)selector;	// 0x33a56805
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x33a56b49
- (void)setReturnValue:(void *)value;	// 0x33afde09
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x33a57b21
// converted property setter: - (void)setTarget:(id)target;	// 0x33a83f51
// converted property getter: - (id)target;	// 0x33aa00c1
@end

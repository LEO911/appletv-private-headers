/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

#import "NSObject.h"
#import "CoreFoundation-Structs.h"


@interface NSInvocation : NSObject {
@private
	void *_frame;	// 4 = 0x4
	void *_retdata;	// 8 = 0x8
	id _signature;	// 12 = 0xc
	id _container;	// 16 = 0x10
	unsigned char _retainedArgs;	// 20 = 0x14
	unsigned char _reserved[15];	// 21 = 0x15
}
@property(assign) SEL selector;	// G=0x31c92dd9; S=0x31c9b375; converted property
@property(retain) id target;	// G=0x31cc5ffd; S=0x31caa7a5; converted property
+ (id)invocationWithMethodSignature:(id)methodSignature;	// 0x31c92bed
- (id)init;	// 0x31d1895d
- (void)_addAttachedObject:(id)object;	// 0x31d18909
- (BOOL)argumentsRetained;	// 0x31d188dd
- (id)copyWithZone:(NSZone *)zone;	// 0x31d1aff5
- (void)dealloc;	// 0x31c935f9
- (void)getArgument:(void *)argument atIndex:(int)index;	// 0x31c92e01
- (void)getReturnValue:(void *)value;	// 0x31cc2a75
- (void)invoke;	// 0x31c933d1
- (void)invokeSuper;	// 0x31d1b299
- (void)invokeWithTarget:(id)target;	// 0x31c930b5
- (id)methodSignature;	// 0x31c9b365
- (void)retainArguments;	// 0x31caa7c5
// converted property getter: - (SEL)selector;	// 0x31c92dd9
- (void)setArgument:(void *)argument atIndex:(int)index;	// 0x31c930e9
- (void)setReturnValue:(void *)value;	// 0x31d188f1
// converted property setter: - (void)setSelector:(SEL)selector;	// 0x31c9b375
// converted property setter: - (void)setTarget:(id)target;	// 0x31caa7a5
// converted property getter: - (id)target;	// 0x31cc5ffd
@end


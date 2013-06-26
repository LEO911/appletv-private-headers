/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSCopying.h"
#import "Foundation-Structs.h"

@class NSString, NSDocInfo;

@interface NSLeafProxy <NSCopying> {
	Class isa;	// 0 = 0x0
	NSString *dir;	// 4 = 0x4
	NSString *file;	// 8 = 0x8
	NSDocInfo *docInfo;	// 12 = 0xc
	int refCount;	// 16 = 0x10
	id realObject;	// 20 = 0x14
}
+ (id)alloc;	// 0x319b8289
+ (id)allocWithZone:(NSZone *)zone;	// 0x319b8269
+ (void)forwardInvocation:(id)invocation;	// 0x319b829d
- (id)initDir:(id)dir file:(id)file docInfo:(id)info;	// 0x319b84b1
- (BOOL)_isDeallocating;	// 0x319b8621
- (BOOL)_tryRetain;	// 0x319b861d
- (id)autorelease;	// 0x319b8625
- (id)copy;	// 0x319b8555
- (id)copyWithZone:(NSZone *)zone;	// 0x319b8511
- (void)dealloc;	// 0x319b865d
- (void)forwardInvocation:(id)invocation;	// 0x319b82e9
- (BOOL)isProxy;	// 0x319b8689
- (id)methodSignatureForSelector:(SEL)selector;	// 0x319b8461
- (void)reallyDealloc;	// 0x319b8569
- (void)release;	// 0x319b85f1
- (id)retain;	// 0x319b85dd
- (unsigned)retainCount;	// 0x319b864d
@end

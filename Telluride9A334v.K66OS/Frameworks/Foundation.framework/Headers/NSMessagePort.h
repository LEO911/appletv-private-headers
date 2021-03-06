/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPort.h"


@interface NSMessagePort : NSPort {
@private
	void *_port;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
}
@property(assign) id delegate;	// G=0x3068e8d1; S=0x3068e8c1; converted property
+ (void)_fixNSMessagePortLeak;	// 0x3068f089
+ (BOOL)sendBeforeTime:(double)time streamData:(id)data components:(id)components to:(id)to from:(id)from msgid:(unsigned)msgid reserved:(unsigned)reserved;	// 0x3068e919
- (id)init;	// 0x3068f075
- (id)initWithName:(id)name;	// 0x3068ed39
- (id)initWithRemoteName:(id)remoteName;	// 0x3068f009
- (BOOL)_isDeallocating;	// 0x3068f08d
- (BOOL)_tryRetain;	// 0x3068f091
- (void)dealloc;	// 0x3068f149
// converted property getter: - (id)delegate;	// 0x3068e8d1
- (void)finalize;	// 0x3068f191
- (void)invalidate;	// 0x3068e849
- (BOOL)isValid;	// 0x3068e825
- (id)name;	// 0x3068e8e1
- (oneway void)release;	// 0x3068f0b1
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x3068eced
- (id)retain;	// 0x3068f095
- (unsigned)retainCount;	// 0x3068f135
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x3068eca1
- (BOOL)sendBeforeDate:(id)date components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x3068ebd9
- (BOOL)sendBeforeDate:(id)date msgid:(unsigned)msgid components:(id)components from:(id)from reserved:(unsigned)reserved;	// 0x3068ec39
- (BOOL)sendBeforeTime:(double)time streamData:(void *)data components:(id)components from:(id)from msgid:(unsigned)msgid;	// 0x3068eb79
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3068e8c1
- (BOOL)setName:(id)name;	// 0x3068e8f5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"


@interface NSBlockOperation : NSOperation {
@private
	id _private2;	// 12 = 0xc
	void *_reserved2;	// 16 = 0x10
}
+ (id)blockOperationWithBlock:(id)block;	// 0x31d2d2f1
- (id)init;	// 0x31d2d341
- (void)addExecutionBlock:(id)block;	// 0x31d2d39d
- (void)dealloc;	// 0x31d3429d
- (id)executionBlocks;	// 0x31d7c2d9
- (void)main;	// 0x31d33d8d
@end


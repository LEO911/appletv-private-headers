/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISOperation.h"

@class ISURLOperation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ISURLOperationPoolOperation : ISOperation {
@private
	int _cancelCount;	// 60 = 0x3c
	BOOL _forwardImmediately;	// 64 = 0x40
	NSMutableArray *_operations;	// 68 = 0x44
}
@property(readonly, assign, nonatomic) ISURLOperation *mainOperation;	// G=0x34335099; 
- (void)_forwardResponseFromOperation:(id)operation toOperation:(id)operation2;	// 0x34335225
- (void)addOperation:(id)operation;	// 0x34334eb9
- (void)cancelOperation:(id)operation;	// 0x34334fc1
- (BOOL)containsOperation:(id)operation;	// 0x3433503d
- (void)dealloc;	// 0x34334e6d
// declared property getter: - (id)mainOperation;	// 0x34335099
- (void)run;	// 0x34335101
@end

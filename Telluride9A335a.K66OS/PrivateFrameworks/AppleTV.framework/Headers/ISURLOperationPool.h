/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class ISOperationQueue;

__attribute__((visibility("hidden")))
@interface ISURLOperationPool : NSObject {
@private
	ISOperationQueue *_operationQueue;	// 4 = 0x4
}
@property(retain, nonatomic) ISOperationQueue *operationQueue;	// G=0x34334e39; S=0x34334e49; @synthesize=_operationQueue
- (id)init;	// 0x34334a41
- (id)_poolOperationForOperation:(id)operation flags:(int)flags;	// 0x34334c91
- (void)addOperation:(id)operation withFlags:(int)flags;	// 0x34334af9
- (void)cancelOperation:(id)operation;	// 0x34334ba5
- (void)dealloc;	// 0x34334aad
// declared property getter: - (id)operationQueue;	// 0x34334e39
// declared property setter: - (void)setOperationQueue:(id)queue;	// 0x34334e49
@end

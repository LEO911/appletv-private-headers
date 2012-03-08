/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface ISOperationQueue : NSObject {
@private
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(assign) int maxConcurrentOperationCount;	// G=0x33bcc2ad; S=0x33bcc2ed; converted property
+ (BOOL)isActive;	// 0x33bcc0a5
+ (id)mainQueue;	// 0x33bcc0e5
+ (id)microPaymentQueue;	// 0x33be05c5
- (id)init;	// 0x33bcbfc5
- (void)addOperation:(id)operation;	// 0x33bcc151
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x33bcc1ad
- (void)cancelAllOperations;	// 0x33bcc28d
- (void)dealloc;	// 0x33bcc03d
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x33bcc2ad
- (id)operations;	// 0x33bcc2cd
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x33bcc2ed
- (void)setSuspended:(BOOL)suspended;	// 0x33bcc30d
@end

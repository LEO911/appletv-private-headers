/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject {
	NSObject<OS_dispatch_queue> *_postCompletionQueue;	// 4 = 0x4
}
+ (void)whenInvocationsCompleteForObservers:(id)observers do:(id)aDo;	// 0x32eeb289
- (id)init;	// 0x32eeb1b5
- (void)_didCompleteInvocation;	// 0x32eeb205
- (void)dealloc;	// 0x32eeb4a9
- (void)whenCompleteDo:(id)aDo;	// 0x32eeb245
@end

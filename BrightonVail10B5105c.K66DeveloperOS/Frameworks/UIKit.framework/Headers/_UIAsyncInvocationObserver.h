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
+ (void)whenInvocationsCompleteForObservers:(id)observers do:(id)aDo;	// 0x349454d9
- (id)init;	// 0x34945405
- (void)_didCompleteInvocation;	// 0x34945455
- (void)dealloc;	// 0x349456f9
- (void)whenCompleteDo:(id)aDo;	// 0x34945495
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface _UIAsyncInvocationObserver : NSObject {
@private
	NSObject<OS_dispatch_queue> *_postCompletionQueue;	// 4 = 0x4
}
+ (void)whenInvocationsCompleteForObservers:(id)observers do:(id)aDo;	// 0x30466831
- (id)init;	// 0x3046675d
- (void)_didCompleteInvocation;	// 0x304667ad
- (void)dealloc;	// 0x30466a51
- (void)whenCompleteDo:(id)aDo;	// 0x304667ed
@end


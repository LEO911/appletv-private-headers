/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSOperationQueue;

@interface ISOperationQueue : NSObject {
	NSOperationQueue *_queue;	// 4 = 0x4
}
@property(assign) BOOL adjustsMaxConcurrentOperationCount;	// G=0x36876c35; S=0x36876ccd; 
@property(assign) int maxConcurrentOperationCount;	// G=0x36876c8d; S=0x36876ce1; converted property
+ (id)mainQueue;	// 0x36876a6d
- (id)init;	// 0x36876951
- (void)addOperation:(id)operation;	// 0x36876ad9
- (void)addOperations:(id)operations waitUntilFinished:(BOOL)finished;	// 0x36876b35
// declared property getter: - (BOOL)adjustsMaxConcurrentOperationCount;	// 0x36876c35
- (void)cancelAllOperations;	// 0x36876c4d
- (void)dealloc;	// 0x368769ed
// converted property getter: - (int)maxConcurrentOperationCount;	// 0x36876c8d
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x36876d21
- (int)operationCount;	// 0x36876c6d
- (id)operations;	// 0x36876cad
// declared property setter: - (void)setAdjustsMaxConcurrentOperationCount:(BOOL)count;	// 0x36876ccd
// converted property setter: - (void)setMaxConcurrentOperationCount:(int)count;	// 0x36876ce1
- (void)setSuspended:(BOOL)suspended;	// 0x36876d01
@end


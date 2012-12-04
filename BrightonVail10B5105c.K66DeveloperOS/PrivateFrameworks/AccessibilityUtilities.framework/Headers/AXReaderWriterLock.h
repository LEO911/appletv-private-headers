/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <NSObject.h> // Unknown library

@class NSString;
@protocol OS_dispatch_queue;

@interface AXReaderWriterLock : NSObject {
	NSObject<OS_dispatch_queue> *_concurrentQueue;	// 4 = 0x4
	NSString *label;	// 8 = 0x8
}
@property(copy, nonatomic) NSString *label;	// G=0x31c9d855; @synthesize
+ (id)_copyQueueLabelWithString:(id)string shouldAppendUUID:(BOOL)uuid;	// 0x31c9d7b9
- (id)init;	// 0x31c9d629
- (id)initWithLabel:(id)label appendUUIDToLabel:(BOOL)label2;	// 0x31c9d63d
- (void)_setLabel:(id)label;	// 0x31c9d869
- (void)dealloc;	// 0x31c9d711
// declared property getter: - (id)label;	// 0x31c9d855
- (void)performAsynchronousReadingBlock:(id)block;	// 0x31c9d791
- (void)performAsynchronousWritingBlock:(id)block;	// 0x31c9d7a5
- (void)performReadingBlock:(id)block;	// 0x31c9d769
- (void)performWritingBlock:(id)block;	// 0x31c9d77d
@end

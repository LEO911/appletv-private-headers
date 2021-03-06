/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSRecursiveLock.h> // Unknown library
#import "MFLockObject.h"

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {
	NSString *_name;	// 8 = 0x8
	id _delegate;	// 12 = 0xc
}
+ (void)initialize;	// 0x35e6d1a5
- (id)init;	// 0x35e6bf9d
- (id)initWithName:(id)name andDelegate:(id)delegate;	// 0x35e6d13d
- (void)dealloc;	// 0x35e6d1bd
- (id)description;	// 0x35e6d209
- (BOOL)isLockedByMe;	// 0x35e6ccb9
- (void)lock;	// 0x35e6d3ad
- (BOOL)lockBeforeDate:(id)date;	// 0x35e6d2e1
- (BOOL)tryLock;	// 0x35e6d349
- (void)unlock;	// 0x35e6d2ad
@end


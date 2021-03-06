/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ISSingleton.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSLock, ISUniqueOperationContext, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ISUniqueOperationManager : NSObject <ISSingleton> {
@private
	ISUniqueOperationContext *_activeContext;	// 4 = 0x4
	NSMutableArray *_contexts;	// 8 = 0x8
	NSLock *_lock;	// 12 = 0xc
	NSMutableDictionary *_lockPool;	// 16 = 0x10
}
+ (void)setSharedInstance:(id)instance;	// 0x35f34bdd
+ (id)sharedInstance;	// 0x35f34c31
- (id)init;	// 0x35f34acd
- (id)_activeContext;	// 0x35f350c5
- (id)_contextForOperation:(id)operation;	// 0x35f35139
- (void)checkInOperation:(id)operation;	// 0x35f34ca5
- (void)checkOutOperation:(id)operation;	// 0x35f34d09
- (void)dealloc;	// 0x35f34b55
- (id)lockWithIdentifier:(id)identifier;	// 0x35f34ddd
- (id)predecessorForKey:(id)key operation:(id)operation;	// 0x35f34f11
- (void)setPredecessorIfNeeded:(id)needed forKey:(id)key;	// 0x35f34fa5
- (void)uniqueOperationFinished:(id)finished forKey:(id)key;	// 0x35f35035
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ATVDataQueryProcessor : NSObject {
	NSObject<OS_dispatch_queue> *_serialProcessingQueue;	// 4 = 0x4
	NSMutableDictionary *_dataClientQueryRecords;	// 8 = 0x8
}
+ (void)initialize;	// 0x300982bd
- (id)initWithQueueName:(id)queueName;	// 0x3009834d
- (void)executeFirstQuery:(id)query dataClient:(id)client;	// 0x300986f1
- (void)executeQuery:(id)query andProcessNextWithDataClient:(id)dataClient;	// 0x300983d9
- (void)processQuery:(id)query concurrentCount:(int)count dataClient:(id)client priority:(int)priority withCompletionQueue:(id)completionQueue completionHandler:(id)handler;	// 0x300987f1
- (void)shutdownClient:(id)client;	// 0x30098d31
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVPropFindTask : CoreDAVPropertyFindBaseTask {
}
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
- (id)initWithPropertiesToFind:(id)find atURL:(id)url withDepth:(int)depth;	// 0x3340c455
- (id)additionalHeaderValues;	// 0x3340c4d5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x3340c841
- (id)httpMethod;	// 0x3340c581
- (id)requestBody;	// 0x3340c58d
@end

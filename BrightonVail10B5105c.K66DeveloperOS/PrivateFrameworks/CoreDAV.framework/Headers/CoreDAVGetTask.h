/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@protocol CoreDAVTaskDelegate;

@interface CoreDAVGetTask : CoreDAVTask {
	id _appSpecificDataItemResult;	// 136 = 0x88
	BOOL _forceNoCache;	// 140 = 0x8c
}
@property(retain) id appSpecificDataItemResult;	// G=0x360063e5; S=0x360063f9; @synthesize=_appSpecificDataItemResult
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// @dynamic
@property(assign) BOOL forceNoCache;	// G=0x36006409; S=0x36006421; @synthesize=_forceNoCache
// declared property getter: - (id)appSpecificDataItemResult;	// 0x360063e5
- (unsigned)cachePolicy;	// 0x36006219
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x3600623d
- (void)dealloc;	// 0x36006079
- (id)description;	// 0x360060c5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x36006271
// declared property getter: - (BOOL)forceNoCache;	// 0x36006409
- (id)httpMethod;	// 0x3600620d
- (id)requestBody;	// 0x36006239
// declared property setter: - (void)setAppSpecificDataItemResult:(id)result;	// 0x360063f9
// declared property setter: - (void)setForceNoCache:(BOOL)cache;	// 0x36006421
@end

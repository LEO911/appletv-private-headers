/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVActionBackedTask.h"

@class NSData, NSString, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {
	BOOL _forceToServer;	// 136 = 0x88
	NSString *_previousETag;	// 140 = 0x8c
	NSString *_requestDataContentType;	// 144 = 0x90
	NSData *_requestDataPayload;	// 148 = 0x94
	BOOL _sendOrder;	// 152 = 0x98
	int _absoluteOrder;	// 156 = 0x9c
	NSURL *_priorOrderedURL;	// 160 = 0xa0
}
@property(assign, nonatomic) int absoluteOrder;	// G=0x35f5f8dd; S=0x35f5f7c5; @synthesize=_absoluteOrder
@property(assign) BOOL forceToServer;	// G=0x35f5f841; S=0x35f5f859; @synthesize=_forceToServer
@property(retain) NSString *previousETag;	// G=0x35f5f871; S=0x35f5f885; @synthesize=_previousETag
@property(retain, nonatomic) NSURL *priorOrderedURL;	// G=0x35f5f8ed; S=0x35f5f7e9; @synthesize=_priorOrderedURL
@property(retain) NSString *requestDataContentType;	// G=0x35f5f895; S=0x35f5f8a9; @synthesize=_requestDataContentType
@property(retain) NSData *requestDataPayload;	// G=0x35f5f8b9; S=0x35f5f8cd; @synthesize=_requestDataPayload
- (id)initWithDataPayload:(id)dataPayload dataContentType:(id)type atURL:(id)url previousETag:(id)tag;	// 0x35f5f2f9
- (id)initWithURL:(id)url;	// 0x35f5f2d5
// declared property getter: - (int)absoluteOrder;	// 0x35f5f8dd
- (id)additionalHeaderValues;	// 0x35f5f58d
- (void)dealloc;	// 0x35f5f39d
- (id)description;	// 0x35f5f429
// declared property getter: - (BOOL)forceToServer;	// 0x35f5f841
// declared property getter: - (id)previousETag;	// 0x35f5f871
// declared property getter: - (id)priorOrderedURL;	// 0x35f5f8ed
- (id)requestBody;	// 0x35f5f78d
// declared property getter: - (id)requestDataContentType;	// 0x35f5f895
// declared property getter: - (id)requestDataPayload;	// 0x35f5f8b9
// declared property setter: - (void)setAbsoluteOrder:(int)order;	// 0x35f5f7c5
// declared property setter: - (void)setForceToServer:(BOOL)server;	// 0x35f5f859
// declared property setter: - (void)setPreviousETag:(id)tag;	// 0x35f5f885
// declared property setter: - (void)setPriorOrderedURL:(id)url;	// 0x35f5f7e9
// declared property setter: - (void)setRequestDataContentType:(id)type;	// 0x35f5f8a9
// declared property setter: - (void)setRequestDataPayload:(id)payload;	// 0x35f5f8cd
@end

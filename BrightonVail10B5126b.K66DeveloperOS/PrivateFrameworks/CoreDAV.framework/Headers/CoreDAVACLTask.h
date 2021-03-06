/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSArray;
@protocol CoreDAVACLTaskDelegate;

@interface CoreDAVACLTask : CoreDAVTask {
	NSArray *_accessControlEntities;	// 136 = 0x88
}
@property(retain) NSArray *accessControlEntities;	// G=0x33715fe5; S=0x33715ff9; @synthesize=_accessControlEntities
@property(assign, nonatomic) id<CoreDAVACLTaskDelegate> delegate;	// @dynamic
- (id)initWithAccessControlEntities:(id)accessControlEntities atURL:(id)url;	// 0x33715b75
- (id)initWithURL:(id)url;	// 0x33715b71
// declared property getter: - (id)accessControlEntities;	// 0x33715fe5
- (void)dealloc;	// 0x33715c21
- (id)description;	// 0x33715c6d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33715ec5
- (id)httpMethod;	// 0x33715d45
- (id)requestBody;	// 0x33715d51
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x33715ff9
@end


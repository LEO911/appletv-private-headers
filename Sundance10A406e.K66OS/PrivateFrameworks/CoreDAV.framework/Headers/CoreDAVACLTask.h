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
@property(retain) NSArray *accessControlEntities;	// G=0x303cd055; S=0x303cd069; @synthesize=_accessControlEntities
@property(assign, nonatomic) id<CoreDAVACLTaskDelegate> delegate;	// @dynamic
- (id)initWithAccessControlEntities:(id)accessControlEntities atURL:(id)url;	// 0x303ccbe5
- (id)initWithURL:(id)url;	// 0x303ccbe1
// declared property getter: - (id)accessControlEntities;	// 0x303cd055
- (void)dealloc;	// 0x303ccc91
- (id)description;	// 0x303cccdd
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x303ccf35
- (id)httpMethod;	// 0x303ccdb5
- (id)requestBody;	// 0x303ccdc1
// declared property setter: - (void)setAccessControlEntities:(id)entities;	// 0x303cd069
@end


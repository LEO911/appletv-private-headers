/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import "CoreMediaStream-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSString;
@protocol MSStreamsProtocolDelegate;

@interface MSStreamsProtocol : NSObject {
	id<MSStreamsProtocolDelegate> _delegate;	// 4 = 0x4
	NSString *_personID;	// 8 = 0x8
}
@property(assign, nonatomic) id<MSStreamsProtocolDelegate> delegate;	// G=0x3388959d; S=0x338895ad; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSURL *deleteURL;	// G=0x338892fd; 
@property(readonly, assign, nonatomic) NSURL *getURL;	// G=0x33888f51; 
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x338895bd; @synthesize=_personID
@property(readonly, assign, nonatomic) NSURL *putURL;	// G=0x3388900d; 
@property(readonly, assign, nonatomic) NSURL *reauthorizeURL;	// G=0x33889185; 
@property(readonly, assign, nonatomic) NSURL *resetURL;	// G=0x338890c9; 
@property(readonly, assign, nonatomic) NSURL *uploadCompleteURL;	// G=0x33889241; 
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x33888ee9
- (void).cxx_destruct;	// 0x338895cd
- (void)_didFindServerSideConfigurationVersion:(id)version;	// 0x33889435
- (void)_didReceiveRetryAfterDate:(id)date;	// 0x338894bd
- (void)_refreshAuthTokenForContext:(MSSPCContext *)context;	// 0x3388954d
- (void)abort;	// 0x338893b9
// declared property getter: - (id)delegate;	// 0x3388959d
// declared property getter: - (id)deleteURL;	// 0x338892fd
- (id)deviceInfoDict;	// 0x338893e1
// declared property getter: - (id)getURL;	// 0x33888f51
// declared property getter: - (id)personID;	// 0x338895bd
// declared property getter: - (id)putURL;	// 0x3388900d
// declared property getter: - (id)reauthorizeURL;	// 0x33889185
// declared property getter: - (id)resetURL;	// 0x338890c9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x338895ad
// declared property getter: - (id)uploadCompleteURL;	// 0x33889241
@end


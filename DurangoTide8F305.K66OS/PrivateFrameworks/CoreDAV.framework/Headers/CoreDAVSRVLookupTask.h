/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"
#import "CoreDAV-Structs.h"

@class NSString;
@protocol CoreDAVSVRLookupTaskDelegate;

@interface CoreDAVSRVLookupTask : CoreDAVTask {
	NSString *_serviceString;	// 104 = 0x68
	NSString *_srvHost;	// 108 = 0x6c
	int _srvPort;	// 112 = 0x70
	CFHostRef _host;	// 116 = 0x74
}
@property(assign, nonatomic) id<CoreDAVSVRLookupTaskDelegate> delegate;	// @dynamic
@property(retain, nonatomic) NSString *srvHost;	// G=0x33872079; S=0x338726cd; @synthesize=_srvHost
@property(assign, nonatomic) int srvPort;	// G=0x33872059; S=0x33872069; @synthesize=_srvPort
- (id)initWithServiceString:(id)serviceString;	// 0x338723bd
- (id)_parseDNSReply:(XXStruct_uGjhZD *)reply;	// 0x338721c1
- (void)dealloc;	// 0x3387240d
- (id)description;	// 0x338722d5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33872479
- (void)finishWithSRVLookupResults:(id)srvlookupResults;	// 0x338720f9
- (void)performCoreDAVTask;	// 0x33872089
// declared property setter: - (void)setSrvHost:(id)host;	// 0x338726cd
// declared property setter: - (void)setSrvPort:(int)port;	// 0x33872069
// declared property getter: - (id)srvHost;	// 0x33872079
- (void)srvLookupForHost:(id)host forService:(id)service;	// 0x3387253d
// declared property getter: - (int)srvPort;	// 0x33872059
- (void)tearDownResources;	// 0x3387265d
@end

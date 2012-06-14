/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "NSCopying.h"
#import "ISDataProvider.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ISPropertyListProvider : ISDataProvider <NSCopying> {
@private
	BOOL _shouldPostFooterSectionChanged;	// 36 = 0x24
	BOOL _shouldProcessAccount;	// 37 = 0x25
	BOOL _shouldProcessAuthenticationDialogs;	// 38 = 0x26
	BOOL _shouldProcessDialogs;	// 39 = 0x27
	BOOL _shouldProcessProtocol;	// 40 = 0x28
	BOOL _shouldTriggerDownloads;	// 41 = 0x29
}
@property(assign) BOOL shouldPostFooterSectionChanged;	// G=0x36821575; S=0x36821585; @synthesize=_shouldPostFooterSectionChanged
@property(assign) BOOL shouldProcessAccount;	// G=0x36821595; S=0x368215a5; @synthesize=_shouldProcessAccount
@property(assign) BOOL shouldProcessAuthenticationDialogs;	// G=0x368215b5; S=0x368215c5; @synthesize=_shouldProcessAuthenticationDialogs
@property(assign) BOOL shouldProcessDialogs;	// G=0x368215d5; S=0x368215e5; @synthesize=_shouldProcessDialogs
@property(assign) BOOL shouldProcessProtocol;	// G=0x368215f5; S=0x36821605; @synthesize=_shouldProcessProtocol
@property(assign) BOOL shouldTriggerDownloads;	// G=0x36821615; S=0x36821625; @synthesize=_shouldTriggerDownloads
- (id)init;	// 0x368201a1
- (void)_checkDownloadQueues;	// 0x36820ec5
- (void)_performActionsForResponse:(id)response;	// 0x36820ec9
- (BOOL)_processFailureTypeFromPropertyList:(id)propertyList error:(id *)error;	// 0x36821329
- (BOOL)_runAuthorizationDialog:(id)dialog returningError:(id *)error;	// 0x368213e1
- (void)_selectFooterSection:(id)section;	// 0x368212dd
- (BOOL)_verifyAccountInfo;	// 0x36820321
- (id)copyWithZone:(NSZone *)zone;	// 0x3682022d
- (BOOL)parseData:(id)data returningError:(id *)error;	// 0x36820dd9
- (BOOL)processDialogFromPropertyList:(id)propertyList returningError:(id *)error;	// 0x368208a5
- (BOOL)processPropertyList:(id)list returningError:(id *)error;	// 0x36820b8d
// declared property setter: - (void)setShouldPostFooterSectionChanged:(BOOL)postFooterSectionChanged;	// 0x36821585
// declared property setter: - (void)setShouldProcessAccount:(BOOL)processAccount;	// 0x368215a5
// declared property setter: - (void)setShouldProcessAuthenticationDialogs:(BOOL)processAuthenticationDialogs;	// 0x368215c5
// declared property setter: - (void)setShouldProcessDialogs:(BOOL)processDialogs;	// 0x368215e5
// declared property setter: - (void)setShouldProcessProtocol:(BOOL)processProtocol;	// 0x36821605
// declared property setter: - (void)setShouldTriggerDownloads:(BOOL)triggerDownloads;	// 0x36821625
// declared property getter: - (BOOL)shouldPostFooterSectionChanged;	// 0x36821575
// declared property getter: - (BOOL)shouldProcessAccount;	// 0x36821595
// declared property getter: - (BOOL)shouldProcessAuthenticationDialogs;	// 0x368215b5
// declared property getter: - (BOOL)shouldProcessDialogs;	// 0x368215d5
// declared property getter: - (BOOL)shouldProcessProtocol;	// 0x368215f5
// declared property getter: - (BOOL)shouldTriggerDownloads;	// 0x36821615
@end

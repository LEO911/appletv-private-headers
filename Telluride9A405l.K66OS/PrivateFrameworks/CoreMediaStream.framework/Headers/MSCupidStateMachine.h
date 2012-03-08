/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSStreamsProtocolDelegate.h"

@class NSString, NSMutableDictionary, MSBackoffManager;

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	NSString *_manifestPath;	// 8 = 0x8
	NSMutableDictionary *_userManifest;	// 12 = 0xc
	MSBackoffManager *_streamsBackoffManager;	// 16 = 0x10
	MSBackoffManager *_MMCSBackoffManager;	// 20 = 0x14
}
@property(retain, nonatomic) NSMutableDictionary *_userManifest;	// G=0x36ff1785; S=0x36ff1795; @synthesize
@property(readonly, assign, nonatomic) NSString *personID;	// G=0x36ff17b9; @synthesize=_personID
- (id)initWithPersonID:(id)personID;	// 0x36ff0ac9
- (void)_abort;	// 0x36ff1721
- (void)_backoffMMCSBackoffTimer;	// 0x36ff1441
- (void)_backoffStreamsBackoffTimer;	// 0x36ff1105
- (void)_commitUserManifest;	// 0x36ff0f81
- (void)_didReceiveMMCSRetryAfterDate:(id)date;	// 0x36ff15ad
- (void)_didReceiveStreamsRetryAfterDate:(id)date;	// 0x36ff1271
- (void)_forget;	// 0x36ff1749
- (id)_latestNextActivityDate;	// 0x36ff169d
- (void)_resetMMCSBackoffTimer;	// 0x36ff1361
- (void)_resetStreamsBackoffTimer;	// 0x36ff1025
- (void)_updateMasterManifest;	// 0x36ff16f9
// declared property getter: - (id)_userManifest;	// 0x36ff1785
- (void)deactivate;	// 0x36ff0e8d
- (void)dealloc;	// 0x36ff0e4d
- (void)forget;	// 0x36ff0f2d
// declared property getter: - (id)personID;	// 0x36ff17b9
- (void)protocol:(id)protocol didReceiveRetryAfterDate:(id)date;	// 0x36ff1771
// declared property setter: - (void)set_userManifest:(id)manifest;	// 0x36ff1795
@end

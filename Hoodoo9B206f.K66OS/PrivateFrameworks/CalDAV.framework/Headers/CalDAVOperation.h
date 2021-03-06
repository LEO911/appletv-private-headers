/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

#import <CoreDAVTaskGroup.h> // Unknown library

@class NSMutableSet;
@protocol CalDAVPrincipal;

@interface CalDAVOperation : CoreDAVTaskGroup {
	id<CalDAVPrincipal> _principal;	// 44 = 0x2c
	BOOL _isCancellingTaskGroups;	// 48 = 0x30
	NSMutableSet *_outstandingTaskGroups;	// 52 = 0x34
}
@property(readonly, assign) NSMutableSet *outstandingTaskGroups;	// G=0x302e16f1; @synthesize=_outstandingTaskGroups
@property(readonly, assign) id<CalDAVPrincipal> principal;	// G=0x302e1701; @synthesize=_principal
- (id)init;	// 0x302e1711
- (id)initWithPrincipal:(id)principal;	// 0x302e17c5
- (void)_tearDownAllTaskGroupsWithBlock:(id)block;	// 0x302e1931
- (void)bailWithError:(id)error;	// 0x302e186d
- (void)cancelTaskGroup;	// 0x302e18e9
- (void)dealloc;	// 0x302e1a25
// declared property getter: - (id)outstandingTaskGroups;	// 0x302e16f1
// declared property getter: - (id)principal;	// 0x302e1701
@end


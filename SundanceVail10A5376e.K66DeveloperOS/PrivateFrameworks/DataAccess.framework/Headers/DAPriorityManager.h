/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"


@interface DAPriorityManager : NSObject {
	CFDictionaryRef _clientsToPriorityRequests;	// 4 = 0x4
	int _foregroundDataclasses;	// 8 = 0x8
	int _currentPriority;	// 12 = 0xc
}
@property(readonly, assign) CFDictionaryRef clientsToPriorityRequests;	// G=0x311f1459; @synthesize=_clientsToPriorityRequests
@property(readonly, assign) int currentPriority;	// G=0x311f146d; @synthesize=_currentPriority
+ (id)sharedManager;	// 0x311f0321
+ (void)vendPriorityManagers;	// 0x311f0311
- (id)init;	// 0x311f05fd
- (void)_SBApplicationStateChanged:(id)changed;	// 0x311f04dd
- (id)_appIDsToDataclasses;	// 0x311f03a1
- (int)_recalculatePriority;	// 0x311f0bfd
- (void)_setForegroundDataclasses:(int)dataclasses;	// 0x311f0969
- (void)_setNewPriority;	// 0x311f0df9
- (void)bumpDataclassesToUIPriority:(int)uipriority;	// 0x311f1281
// declared property getter: - (CFDictionaryRef)clientsToPriorityRequests;	// 0x311f1459
// declared property getter: - (int)currentPriority;	// 0x311f146d
- (void)dealloc;	// 0x311f08ad
- (void)requestPriority:(int)priority forClient:(id)client dataclasses:(int)dataclasses;	// 0x311f0e6d
- (id)stateString;	// 0x311f0979
@end


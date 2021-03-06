/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import </libobjc.A.h>

@class NSArray, NSMutableArray, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface MPEnabledMediaTypesMonitor : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSMutableArray *_completionHandlers;	// 8 = 0x8
	BOOL _ignoreLibraryDidChangeNotifications;	// 12 = 0xc
	BOOL _monitoringActive;	// 13 = 0xd
	BOOL _hidesSecondPartyMediaTypes;	// 14 = 0xe
	unsigned _enabledMediaTypes;	// 16 = 0x10
	unsigned _enabledIfPresentMediaTypes;	// 20 = 0x14
	NSArray *_externalTypeManagers;	// 24 = 0x18
	unsigned _defaultEnabledMediaTypes;	// 28 = 0x1c
	unsigned _disablableMediaTypes;	// 32 = 0x20
	unsigned _unavailableDisabledTypes;	// 36 = 0x24
	unsigned _externallyManagedMediaTypes;	// 40 = 0x28
	NSOperationQueue *_lookupQueue;	// 44 = 0x2c
}
@property(assign, nonatomic) unsigned defaultEnabledMediaTypes;	// G=0x2e33d689; S=0x2e33ba49; @synthesize=_defaultEnabledMediaTypes
@property(assign, nonatomic) unsigned disablableMediaTypes;	// G=0x2e33d699; S=0x2e33d6a9; @synthesize=_disablableMediaTypes
@property(readonly, assign, nonatomic) unsigned enabledIfPresentMediaTypes;	// G=0x2e33bf65; @synthesize=_enabledIfPresentMediaTypes
@property(assign, nonatomic) unsigned enabledMediaTypes;	// G=0x2e33be99; S=0x2e33d641; @synthesize=_enabledMediaTypes
@property(retain, nonatomic) NSArray *externalTypeManagers;	// G=0x2e33d651; S=0x2e33d661; @synthesize=_externalTypeManagers
@property(assign, nonatomic) unsigned externallyManagedMediaTypes;	// G=0x2e33d6f9; S=0x2e33d709; @synthesize=_externallyManagedMediaTypes
@property(assign, nonatomic) BOOL hidesSecondPartyMediaTypes;	// G=0x2e33d6b9; S=0x2e33d6c9; @synthesize=_hidesSecondPartyMediaTypes
@property(retain, nonatomic) NSOperationQueue *lookupQueue;	// G=0x2e33d719; S=0x2e33d729; @synthesize=_lookupQueue
@property(assign, nonatomic) unsigned unavailableDisabledTypes;	// G=0x2e33d6d9; S=0x2e33d6e9; @synthesize=_unavailableDisabledTypes
+ (void)alertUserOneTimeForDisabledMediaTypes;	// 0x2e33b9d5
+ (void)monitorWithDefaultMediaTypes:(unsigned)defaultMediaTypes;	// 0x2e33ba0d
+ (id)sharedInstance;	// 0x2e33b91d
- (id)init;	// 0x2e33b1e5
- (void).cxx_destruct;	// 0x2e33d751
- (void)_beginMonitoringWithDefaultMediaTypes:(unsigned)defaultMediaTypes;	// 0x2e33b331
- (unsigned)_calculatedEnabledIfPresentMediaTypes;	// 0x2e33bc79
- (unsigned)_calculatedEnabledMediaTypes;	// 0x2e33bc21
- (void)_installedSoftwaredChanged;	// 0x2e33c031
- (void)_libraryDidChangeNotification:(id)_library;	// 0x2e33baa1
- (void)_onQueueUpdateEnabledTypesByUpdatingExternallyManagedTypes:(BOOL)types updateNonExistentTypes:(BOOL)types2;	// 0x2e33c045
- (void)_onQueueUpdateExternallyManagedTypes;	// 0x2e33c0a1
- (void)_onQueueUpdateUnavailableDisabledTypes;	// 0x2e33c465
- (void)_updateWithCompletionHandler:(id)completionHandler;	// 0x2e33c611
- (void)alertUserOneTimeForDisabledMediaTypes;	// 0x2e33cff9
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x2e33cef1
- (void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;	// 0x2e33cccd
- (void)dealloc;	// 0x2e33b859
// declared property getter: - (unsigned)defaultEnabledMediaTypes;	// 0x2e33d689
// declared property getter: - (unsigned)disablableMediaTypes;	// 0x2e33d699
// declared property getter: - (unsigned)enabledIfPresentMediaTypes;	// 0x2e33bf65
// declared property getter: - (unsigned)enabledMediaTypes;	// 0x2e33be99
// declared property getter: - (id)externalTypeManagers;	// 0x2e33d651
// declared property getter: - (unsigned)externallyManagedMediaTypes;	// 0x2e33d6f9
// declared property getter: - (BOOL)hidesSecondPartyMediaTypes;	// 0x2e33d6b9
// declared property getter: - (id)lookupQueue;	// 0x2e33d719
// declared property setter: - (void)setDefaultEnabledMediaTypes:(unsigned)types;	// 0x2e33ba49
// declared property setter: - (void)setDisablableMediaTypes:(unsigned)types;	// 0x2e33d6a9
// declared property setter: - (void)setEnabledMediaTypes:(unsigned)types;	// 0x2e33d641
- (void)setEnabledMediaTypes:(unsigned)types enabledIfPresentMediaTypes:(unsigned)types2;	// 0x2e33bcbd
// declared property setter: - (void)setExternalTypeManagers:(id)managers;	// 0x2e33d661
// declared property setter: - (void)setExternallyManagedMediaTypes:(unsigned)types;	// 0x2e33d709
// declared property setter: - (void)setHidesSecondPartyMediaTypes:(BOOL)types;	// 0x2e33d6c9
// declared property setter: - (void)setLookupQueue:(id)queue;	// 0x2e33d729
// declared property setter: - (void)setUnavailableDisabledTypes:(unsigned)types;	// 0x2e33d6e9
// declared property getter: - (unsigned)unavailableDisabledTypes;	// 0x2e33d6d9
@end


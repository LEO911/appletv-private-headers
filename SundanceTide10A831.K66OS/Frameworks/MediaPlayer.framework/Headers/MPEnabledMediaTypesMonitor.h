/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSOperationQueue, NSArray;
@protocol OS_dispatch_queue;

@interface MPEnabledMediaTypesMonitor : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSMutableArray *_completionHandlers;	// 8 = 0x8
	BOOL _ignoreLibraryDidChangeNotifications;	// 12 = 0xc
	BOOL _monitoringActive;	// 13 = 0xd
	int _enabledMediaTypes;	// 16 = 0x10
	int _enabledIfPresentMediaTypes;	// 20 = 0x14
	NSArray *_externalTypeManagers;	// 24 = 0x18
	int _defaultEnabledMediaTypes;	// 28 = 0x1c
	int _disablableMediaTypes;	// 32 = 0x20
	BOOL _hidesSecondPartyMediaTypes;	// 36 = 0x24
	int _externallyManagedMediaTypes;	// 40 = 0x28
	int _unavailableDisabledTypes;	// 44 = 0x2c
	NSOperationQueue *_lookupQueue;	// 48 = 0x30
}
@property(assign, nonatomic) int defaultEnabledMediaTypes;	// G=0x36f80b31; S=0x36f7f295; @synthesize=_defaultEnabledMediaTypes
@property(assign, nonatomic) int disablableMediaTypes;	// G=0x36f80b41; S=0x36f80b51; @synthesize=_disablableMediaTypes
@property(readonly, assign, nonatomic) int enabledIfPresentMediaTypes;	// G=0x36f7f765; @synthesize=_enabledIfPresentMediaTypes
@property(assign, nonatomic) int enabledMediaTypes;	// G=0x36f7f699; S=0x36f80b01; @synthesize=_enabledMediaTypes
@property(retain, nonatomic) NSArray *externalTypeManagers;	// G=0x36f80b11; S=0x36f80b21; @synthesize=_externalTypeManagers
@property(assign, nonatomic) int externallyManagedMediaTypes;	// G=0x36f80b81; S=0x36f80b91; @synthesize=_externallyManagedMediaTypes
@property(assign, nonatomic) BOOL hidesSecondPartyMediaTypes;	// G=0x36f80b61; S=0x36f80b71; @synthesize=_hidesSecondPartyMediaTypes
@property(retain, nonatomic) NSOperationQueue *lookupQueue;	// G=0x36f80bc1; S=0x36f80bd1; @synthesize=_lookupQueue
@property(assign, nonatomic) int unavailableDisabledTypes;	// G=0x36f80ba1; S=0x36f80bb1; @synthesize=_unavailableDisabledTypes
+ (void)alertUserOneTimeForDisabledMediaTypes;	// 0x36f7f241
+ (void)monitorWithDefaultMediaTypes:(int)defaultMediaTypes;	// 0x36f7f269
+ (id)sharedInstance;	// 0x36f7f191
- (id)init;	// 0x36f7ea35
- (void)_beginMonitoringWithDefaultMediaTypes:(int)defaultMediaTypes;	// 0x36f7eb69
- (int)_calculatedEnabledIfPresentMediaTypes;	// 0x36f7f4bd
- (int)_calculatedEnabledMediaTypes;	// 0x36f7f465
- (void)_installedSoftwaredChanged;	// 0x36f7f831
- (void)_libraryDidChangeNotification:(id)_library;	// 0x36f7f2ed
- (void)_onQueueUpdateEnabledTypesByUpdatingExternallyManagedTypes:(BOOL)types updateNonExistentTypes:(BOOL)types2;	// 0x36f7f845
- (void)_onQueueUpdateExternallyManagedTypes;	// 0x36f7f8a1
- (void)_onQueueUpdateUnavailableDisabledTypes;	// 0x36f7fbdd
- (void)_updateWithCompletionHandler:(id)completionHandler;	// 0x36f7fd41
- (void)alertUserOneTimeForDisabledMediaTypes;	// 0x36f80631
- (void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;	// 0x36f8054d
- (void)alertView:(id)view willDismissWithButtonIndex:(int)buttonIndex;	// 0x36f80375
- (void)dealloc;	// 0x36f7f099
// declared property getter: - (int)defaultEnabledMediaTypes;	// 0x36f80b31
// declared property getter: - (int)disablableMediaTypes;	// 0x36f80b41
// declared property getter: - (int)enabledIfPresentMediaTypes;	// 0x36f7f765
// declared property getter: - (int)enabledMediaTypes;	// 0x36f7f699
// declared property getter: - (id)externalTypeManagers;	// 0x36f80b11
// declared property getter: - (int)externallyManagedMediaTypes;	// 0x36f80b81
// declared property getter: - (BOOL)hidesSecondPartyMediaTypes;	// 0x36f80b61
// declared property getter: - (id)lookupQueue;	// 0x36f80bc1
// declared property setter: - (void)setDefaultEnabledMediaTypes:(int)types;	// 0x36f7f295
// declared property setter: - (void)setDisablableMediaTypes:(int)types;	// 0x36f80b51
// declared property setter: - (void)setEnabledMediaTypes:(int)types;	// 0x36f80b01
- (void)setEnabledMediaTypes:(int)types enabledIfPresentMediaTypes:(int)types2;	// 0x36f7f501
// declared property setter: - (void)setExternalTypeManagers:(id)managers;	// 0x36f80b21
// declared property setter: - (void)setExternallyManagedMediaTypes:(int)types;	// 0x36f80b91
// declared property setter: - (void)setHidesSecondPartyMediaTypes:(BOOL)types;	// 0x36f80b71
// declared property setter: - (void)setLookupQueue:(id)queue;	// 0x36f80bd1
// declared property setter: - (void)setUnavailableDisabledTypes:(int)types;	// 0x36f80bb1
// declared property getter: - (int)unavailableDisabledTypes;	// 0x36f80ba1
@end

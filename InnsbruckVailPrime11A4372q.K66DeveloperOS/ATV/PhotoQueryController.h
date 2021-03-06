/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"

@class NSMutableDictionary, NSTimer;

__attribute__((visibility("hidden")))
@interface PhotoQueryController : PhotoController {
	NSMutableDictionary *_previews;	// 172 = 0xac
	BOOL _refreshData;	// 176 = 0xb0
	NSTimer *_deviceSleepHoldOffTimer;	// 180 = 0xb4
}
@property(assign, nonatomic) __weak NSTimer *deviceSleepHoldOffTimer;	// G=0x28e5c5; S=0x28e169; @synthesize=_deviceSleepHoldOffTimer
- (id)initWithMode:(int)mode dataServerID:(id)anId;	// 0x28cf19
- (void).cxx_destruct;	// 0x28e5e5
- (id)_createItemsQueryForCollection:(id)collection;	// 0x28e251
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x28e481
- (void)_selectedScreenSaverCollection:(id)collection;	// 0x28e4fd
- (void)_sendScreenSaverHoldOfNotification:(id)notification;	// 0x28e1fd
- (BOOL)dataClientUpdated:(id)updated;	// 0x28d149
- (BOOL)dataQueryComplete:(id)complete;	// 0x28cf91
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x28d381
// declared property getter: - (id)deviceSleepHoldOffTimer;	// 0x28e5c5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x28d3cd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x28d501
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x28de09
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x28d931
- (void)playQueryComplete:(id)complete;	// 0x28df79
- (BOOL)previewQueryComplete:(id)complete;	// 0x28dd19
// declared property setter: - (void)setDeviceSleepHoldOffTimer:(id)timer;	// 0x28e169
- (void)wasPopped;	// 0x28d101
@end


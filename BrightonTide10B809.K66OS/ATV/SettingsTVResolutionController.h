/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface SettingsTVResolutionController : BRViewController {
	NSArray *_resolutionList;	// 104 = 0x68
	long _currentSavedSelection;	// 108 = 0x6c
}
- (id)init;	// 0xc43c9
- (void).cxx_destruct;	// 0xc4925
- (void)_buildSupportedResolutionList;	// 0xc4939
- (void)_handleResolutionChangeResult:(int)result forMode:(id)mode;	// 0xc4c8d
- (void)_refreshDisplaySettings:(id)settings;	// 0xc4c5d
- (void)dealloc;	// 0xc4591
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc4771
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc45fd
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc4749
@end


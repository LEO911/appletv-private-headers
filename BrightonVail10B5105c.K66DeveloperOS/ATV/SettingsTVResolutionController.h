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
- (id)init;	// 0xbff35
- (void).cxx_destruct;	// 0xc0491
- (void)_buildSupportedResolutionList;	// 0xc04a5
- (void)_handleResolutionChangeResult:(int)result forMode:(id)mode;	// 0xc07f9
- (void)_refreshDisplaySettings:(id)settings;	// 0xc07c9
- (void)dealloc;	// 0xc00fd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc02dd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc0169
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc02b5
@end


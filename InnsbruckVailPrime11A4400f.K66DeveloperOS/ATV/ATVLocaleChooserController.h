/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "AppleTV-Structs.h"

@class NSArray, BRListView;

__attribute__((visibility("hidden")))
@interface ATVLocaleChooserController : BRViewController {
	NSArray *_countryEntries;	// 104 = 0x68
	BRListView *_list;	// 108 = 0x6c
}
- (id)init;	// 0x474da5
- (void).cxx_destruct;	// 0x475675
- (void)_performLocaleChange:(id)change;	// 0x475585
- (void)_showProgressForLocale:(id)locale;	// 0x475491
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x4753c1
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x4752b5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x4753a1
- (void)wasPushed;	// 0x4750d9
@end

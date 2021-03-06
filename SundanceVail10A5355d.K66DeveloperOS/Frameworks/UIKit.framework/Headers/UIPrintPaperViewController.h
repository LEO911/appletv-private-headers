/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintPanelViewController;

__attribute__((visibility("hidden")))
@interface UIPrintPaperViewController : UITableViewController {
	UIPrintPanelViewController *_printPanelViewController;	// 208 = 0xd0
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x33d77565
- (void)adjustPopoverSize;	// 0x33d77649
- (void)dealloc;	// 0x33d775d9
- (void)loadView;	// 0x33d7782d
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x33d7786d
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x33d77605
- (unsigned)supportedInterfaceOrientations;	// 0x33d77629
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x33d778a9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x33d77aad
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x33d77871
@end


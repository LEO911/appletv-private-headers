/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"
#import "PKPrinterBrowserDelegate.h"

@class UIPrintPanelViewController, UIPrinterSearchingView, PKPrinter, PKPrinterBrowser, NSMutableArray;

__attribute__((visibility("hidden")))
@interface UIPrinterBrowserViewController : UITableViewController <PKPrinterBrowserDelegate> {
@private
	UIPrintPanelViewController *_printPanelViewController;	// 144 = 0x90
	PKPrinterBrowser *_printerBrowser;	// 148 = 0x94
	NSMutableArray *_printers;	// 152 = 0x98
	PKPrinter *_lockedPrinter;	// 156 = 0x9c
	BOOL _loaded;	// 160 = 0xa0
	UIPrinterSearchingView *_searchingView;	// 164 = 0xa4
	double _displayTime;	// 168 = 0xa8
}
- (id)initWithPrintPanelViewController:(id)printPanelViewController;	// 0x30864169
- (void)addPrinter:(id)printer moreComing:(BOOL)coming;	// 0x308634fd
- (void)adjustPopoverSize;	// 0x30863d05
- (void)dealloc;	// 0x30864069
- (void)loadView;	// 0x30864009
- (void)removePrinter:(id)printer moreGoing:(BOOL)going;	// 0x308633c9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x308639bd
- (void)startPrinterBrowser;	// 0x30863b4d
- (void)stopPrinterBrowser;	// 0x30863ae9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x308645ad
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x30863785
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3086399d
- (void)updateSearching;	// 0x30863a25
- (void)viewDidDisappear:(BOOL)view;	// 0x30863eb5
- (void)viewWillAppear:(BOOL)view;	// 0x30863f9d
- (void)viewWillDisappear:(BOOL)view;	// 0x30863f15
- (void)willEnterForeground;	// 0x308639e1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UITableViewController.h"

@class UIPrintingMessageView, NSArray;

__attribute__((visibility("hidden")))
@interface UIPrintStatusJobsViewController : UITableViewController {
	NSArray *_jobs;	// 320 = 0x140
	BOOL _autoPush;	// 324 = 0x144
	UIPrintingMessageView *_noJobsView;	// 328 = 0x148
}
- (id)init;	// 0x2f7f6c71
- (CGSize)contentSizeForViewInPopover;	// 0x2f7f6df9
- (void)dealloc;	// 0x2f7f6cf5
- (void)handleJobListDidChange;	// 0x2f7f7855
- (void)loadView;	// 0x2f7f6d85
- (void)pushJob:(id)job animated:(BOOL)animated;	// 0x2f7f6e0d
- (void)pushSingleJobAnimated:(BOOL)animated;	// 0x2f7f6ed9
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x2f7f7b5d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2f7f7be5
- (void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;	// 0x2f7f7d15
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x2f7f7cc1
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2f7f7bc5
- (void)updateForJobCountChange;	// 0x2f7f6f1d
- (void)updateJobInfo:(id)info;	// 0x2f7f7369
- (void)updateTableViewCell:(id)cell withJob:(id)job;	// 0x2f7f71b5
- (void)viewWillAppear:(BOOL)view;	// 0x2f7f79e5
- (void)viewWillDisappear:(BOOL)view;	// 0x2f7f7aed
- (id)visibleJobs;	// 0x2f7f709d
- (void)willReappear;	// 0x2f7f797d
@end

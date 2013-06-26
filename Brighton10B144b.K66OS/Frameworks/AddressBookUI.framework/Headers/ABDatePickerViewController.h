/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import <UIViewController.h> // Unknown library

@class UIDatePicker;
@protocol ABDatePickerViewControllerDismissDelegate;

@interface ABDatePickerViewController : UIViewController {
	void *_context;	// 196 = 0xc4
	UIDatePicker *_datePicker;	// 200 = 0xc8
	id<ABDatePickerViewControllerDismissDelegate> _dismissDelegate;	// 204 = 0xcc
}
@property(assign, nonatomic) void *context;	// G=0x3094e719; S=0x3094e729; @synthesize=_context
@property(retain, nonatomic) UIDatePicker *datePicker;	// G=0x3094e739; S=0x3094e749; @synthesize=_datePicker
@property(assign, nonatomic) id<ABDatePickerViewControllerDismissDelegate> dismissDelegate;	// G=0x3094e759; S=0x3094e769; @synthesize=_dismissDelegate
+ (CGSize)datePickerSize;	// 0x3094e59d
- (float)ab_heightToFitForViewInPopoverView;	// 0x3094e5fd
// declared property getter: - (void *)context;	// 0x3094e719
// declared property getter: - (id)datePicker;	// 0x3094e739
- (void)dealloc;	// 0x3094e5b1
// declared property getter: - (id)dismissDelegate;	// 0x3094e759
- (void)loadView;	// 0x3094e6d9
// declared property setter: - (void)setContext:(void *)context;	// 0x3094e729
// declared property setter: - (void)setDatePicker:(id)picker;	// 0x3094e749
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x3094e769
- (void)viewDidLoad;	// 0x3094e63d
- (void)viewWillDisappear:(BOOL)view;	// 0x3094e6f9
@end

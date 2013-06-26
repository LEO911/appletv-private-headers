/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewController.h> // Unknown library

@class UIBarButtonItem;
@protocol ABPickerViewControllerDelegate, ABStyleProvider, ABPickerViewControllerDismissDelegate;

@interface ABPickerViewController : UITableViewController {
	void *_context;	// 212 = 0xd4
	id _defaultValue;	// 216 = 0xd8
	SEL _selectionAction;	// 220 = 0xdc
	id<ABPickerViewControllerDelegate> _delegate;	// 224 = 0xe0
	id<ABPickerViewControllerDismissDelegate> _dismissDelegate;	// 228 = 0xe4
	id<ABStyleProvider> _styleProvider;	// 232 = 0xe8
}
@property(readonly, assign, nonatomic) UIBarButtonItem *cancelBarButtonItem;	// G=0x30947861; 
@property(assign, nonatomic) void *context;	// G=0x30947c9d; S=0x30947cad; @synthesize=_context
@property(retain, nonatomic) id defaultValue;	// G=0x30947cbd; S=0x30947ccd; @synthesize=_defaultValue
@property(assign, nonatomic) id<ABPickerViewControllerDelegate> delegate;	// G=0x30947cdd; S=0x30947ced; @synthesize=_delegate
@property(assign, nonatomic) id<ABPickerViewControllerDismissDelegate> dismissDelegate;	// G=0x30947cfd; S=0x30947d0d; @synthesize=_dismissDelegate
@property(readonly, assign, nonatomic) UIBarButtonItem *doneBarButtonItem;	// G=0x309478bd; 
@property(assign, nonatomic) SEL selectionAction;	// G=0x30947919; S=0x30947d1d; @synthesize=_selectionAction
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x30947d2d; S=0x30947d3d; @synthesize=_styleProvider
- (BOOL)_allowsAutorotation;	// 0x30947c2d
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x30947c71
- (float)ab_heightToFitForViewInPopoverView;	// 0x309479dd
- (void)attemptDismissAfterSelectingItem:(id)item;	// 0x3094793d
// declared property getter: - (id)cancelBarButtonItem;	// 0x30947861
- (void)cancelButtonClicked:(id)clicked;	// 0x309479c9
// declared property getter: - (void *)context;	// 0x30947c9d
- (void)dealloc;	// 0x309477fd
// declared property getter: - (id)defaultValue;	// 0x30947cbd
// declared property getter: - (id)delegate;	// 0x30947cdd
// declared property getter: - (id)dismissDelegate;	// 0x30947cfd
// declared property getter: - (id)doneBarButtonItem;	// 0x309478bd
// declared property getter: - (SEL)selectionAction;	// 0x30947919
// declared property setter: - (void)setContext:(void *)context;	// 0x30947cad
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x30947ccd
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x30947ced
// declared property setter: - (void)setDismissDelegate:(id)delegate;	// 0x30947d0d
// declared property setter: - (void)setSelectionAction:(SEL)action;	// 0x30947d1d
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x30947d3d
// declared property getter: - (id)styleProvider;	// 0x30947d2d
- (void)viewDidLoad;	// 0x30947b29
@end

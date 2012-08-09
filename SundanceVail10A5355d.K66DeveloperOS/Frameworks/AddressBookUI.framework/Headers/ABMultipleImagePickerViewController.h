/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewController.h> // Unknown library

@class NSMutableArray;
@protocol ABMultipleSourceImagePickerDelegate;

@interface ABMultipleImagePickerViewController : UITableViewController {
	NSMutableArray *_imageCellData;	// 208 = 0xd0
	unsigned _selectedImageIndex;	// 212 = 0xd4
	id<ABMultipleSourceImagePickerDelegate> _delegate;	// 216 = 0xd8
}
@property(assign, nonatomic) id<ABMultipleSourceImagePickerDelegate> delegate;	// G=0x34fda285; S=0x34fda295; @synthesize=_delegate
- (id)initWithStyle:(int)style;	// 0x34fd9cbd
- (void)addImageData:(id)data title:(id)title isSelectedImage:(BOOL)image person:(void *)person;	// 0x34fd9db9
- (void)dealloc;	// 0x34fda239
// declared property getter: - (id)delegate;	// 0x34fda285
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x34fd9f01
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34fda295
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x34fd9f2d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34fda159
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x34fd9f05
- (void)viewDidLoad;	// 0x34fd9d19
@end

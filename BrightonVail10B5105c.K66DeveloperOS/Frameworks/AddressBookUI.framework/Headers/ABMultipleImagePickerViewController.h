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
	NSMutableArray *_imageCellData;	// 212 = 0xd4
	unsigned _selectedImageIndex;	// 216 = 0xd8
	id<ABMultipleSourceImagePickerDelegate> _delegate;	// 220 = 0xdc
}
@property(assign, nonatomic) id<ABMultipleSourceImagePickerDelegate> delegate;	// G=0x37686bc9; S=0x37686bd9; @synthesize=_delegate
- (id)initWithStyle:(int)style;	// 0x37686601
- (void)addImageData:(id)data title:(id)title isSelectedImage:(BOOL)image person:(void *)person;	// 0x376866fd
- (void)dealloc;	// 0x37686b7d
// declared property getter: - (id)delegate;	// 0x37686bc9
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x37686845
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x37686bd9
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x37686871
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x37686a9d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x37686849
- (void)viewDidLoad;	// 0x3768665d
@end


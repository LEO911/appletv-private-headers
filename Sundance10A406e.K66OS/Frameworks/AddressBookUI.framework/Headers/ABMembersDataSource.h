/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "UITableViewDataSource.h"
#import <NSObject.h> // Unknown library
#import "UITableViewDelegate.h"

@class ABModel, NSMutableArray, ABBannerView;
@protocol ABMembersDataSourceDelegate, ABStyleProvider;

@interface ABMembersDataSource : NSObject <UITableViewDelegate, UITableViewDataSource> {
	id<ABMembersDataSourceDelegate> _delegate;	// 4 = 0x4
	id<ABStyleProvider> _styleProvider;	// 8 = 0x8
	void *_addressBook;	// 12 = 0xc
	ABModel *_model;	// 16 = 0x10
	NSMutableArray *_sectionIndexTitles;	// 20 = 0x14
	CFDictionaryRef _sectionHeaderToSortingIndex;	// 24 = 0x18
	CFDictionaryRef _displayableSectionHeaderToSectionHeader;	// 28 = 0x1c
	CFDictionaryRef _sectionHeaderToDisplayableSectionHeader;	// 32 = 0x20
	CFDictionaryRef _displayableSectionIndexToSectionIndex;	// 36 = 0x24
	CFDictionaryRef _sectionIndexToDisplayableSectionIndex;	// 40 = 0x28
	ABBannerView *_bannerView;	// 44 = 0x2c
}
@property(assign, nonatomic) void *addressBook;	// G=0x314928d9; S=0x31424071; @synthesize=_addressBook
@property(readonly, retain) ABBannerView *bannerView;	// G=0x314240d5; converted property
@property(assign, nonatomic) id<ABMembersDataSourceDelegate> delegate;	// G=0x3142a085; S=0x314240c5; @synthesize=_delegate
@property(retain, nonatomic) ABModel *model;	// G=0x31424ed1; S=0x314240a5; @synthesize=_model
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x31424ef1; S=0x314240b5; @synthesize=_styleProvider
// declared property getter: - (void *)addressBook;	// 0x314928d9
// converted property getter: - (id)bannerView;	// 0x314240d5
- (void)createAllDisplayableSectionIndexAndHeaderCaches;	// 0x31426f59
- (void)dealloc;	// 0x31492789
// declared property getter: - (id)delegate;	// 0x3142a085
- (id)displayableSectionHeaderFromSectionHeader:(id)sectionHeader;	// 0x314284b9
- (id)displayableSectionIndexFromSectionIndex:(id)sectionIndex;	// 0x31426f05
- (unsigned)displayedMemberIndexForIndexPath:(id)indexPath inTableView:(id)tableView;	// 0x3142745d
- (int)globalRowForBanner;	// 0x314274b9
- (int)globalRowForDisplayedMemberIndex:(unsigned)displayedMemberIndex;	// 0x31450115
- (id)indexPathForDisplayedMemberIndex:(unsigned)displayedMemberIndex inTableView:(id)tableView;	// 0x314500d9
// declared property getter: - (id)model;	// 0x31424ed1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x31424db1
- (void)scrollViewWillBeginDragging:(id)scrollView;	// 0x3142a021
- (CFDictionaryRef)sectionHeaderSortingIndices;	// 0x3142a5f5
- (id)sectionIndexFromDisplayableSectionIndex:(id)displayableSectionIndex;	// 0x3142a599
- (id)sectionIndexTitlesForTableView:(id)tableView;	// 0x31426db9
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x31424071
- (void)setBannerView:(id)view inTableView:(id)tableView;	// 0x3142412d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x314240c5
// declared property setter: - (void)setModel:(id)model;	// 0x314240a5
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x314240b5
- (BOOL)shouldShowGroups;	// 0x31425cc1
// declared property getter: - (id)styleProvider;	// 0x31424ef1
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3142720d
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3142aa0d
- (CGRect)tableView:(id)view frameForSectionIndexGivenProposedFrame:(CGRect)sectionIndexGivenProposedFrame;	// 0x31427141
- (float)tableView:(id)view heightForHeaderInSection:(int)section;	// 0x31424e01
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x31424fcd
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31424f45
- (int)tableView:(id)view sectionForSectionIndexTitle:(id)sectionIndexTitle atIndex:(int)index;	// 0x3142a3f9
- (id)tableView:(id)view viewForHeaderInSection:(int)section;	// 0x31428295
- (void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;	// 0x31428239
- (id)titleForHeaderInSection:(int)section;	// 0x31428441
@end

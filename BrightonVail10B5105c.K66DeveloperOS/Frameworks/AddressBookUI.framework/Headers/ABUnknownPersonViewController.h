/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "UIActionSheetDelegate.h"
#import "AddressBookUI-Structs.h"
#import <UIViewController.h> // Unknown library

@class ABPersonTableViewActionsDelegate, NSString, ABPersonTableViewSharingDelegate, ABPersonTableViewDataSource, UIView, ABPersonViewControllerHelper, NSArray;
@protocol ABStyleProvider, ABUnknownPersonViewControllerDelegate;

@interface ABUnknownPersonViewController : UIViewController <UIActionSheetDelegate> {
	id _helper;	// 196 = 0xc4
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;	// 200 = 0xc8
	id _reserved;	// 204 = 0xcc
	ABPersonTableViewDataSource *_dataSource;	// 208 = 0xd0
	ABPersonTableViewActionsDelegate *_actionsDelegate;	// 212 = 0xd4
	ABPersonTableViewSharingDelegate *_sharingDelegate;	// 216 = 0xd8
}
@property(readonly, assign, nonatomic) ABPersonTableViewActionsDelegate *actionsDelegate;	// G=0x3765eb1d; @synthesize=_actionsDelegate
@property(assign, nonatomic) void *addressBook;	// G=0x3763c879; S=0x3765ce21; 
@property(assign, nonatomic) BOOL allowsActions;	// G=0x3763e0a5; S=0x3763db9d; 
@property(assign, nonatomic) BOOL allowsAddingToAddressBook;	// G=0x3765d0cd; S=0x3763db6d; 
@property(assign, nonatomic) BOOL allowsConferencing;	// G=0x3765d171; S=0x3765d145; 
@property(assign, nonatomic) BOOL allowsSendingTextMessage;	// G=0x3765d11d; S=0x3765d0f1; 
@property(assign, nonatomic) BOOL allowsSharing;	// G=0x3765d079; S=0x3765d0a1; 
@property(copy, nonatomic) NSString *alternateName;	// G=0x3765cead; S=0x3765ce81; 
@property(copy, nonatomic) NSString *attribution;	// G=0x3765d349; S=0x3765d371; 
@property(assign) BOOL badgeEmailPropertiesForMailVIP;	// G=0x3765d86d; S=0x3765d895; converted property
@property(readonly, assign, nonatomic) BOOL canShareContact;	// G=0x3765d46d; 
@property(retain) id customFooterView;	// G=0x3765d5b1; S=0x3765d585; converted property
@property(retain) id customHeaderView;	// G=0x3765d55d; S=0x3765d531; converted property
@property(retain) id customMessageView;	// G=0x3765d025; S=0x3765d04d; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x3763c8a9; @synthesize=_dataSource
@property(assign, nonatomic) void *displayedPerson;	// G=0x3763e085; S=0x3763d665; 
@property(copy, nonatomic) NSArray *displayedProperties;	// G=0x3765d309; S=0x3765d329; 
@property(readonly, assign, nonatomic) ABPersonViewControllerHelper *helper;	// G=0x3763c899; 
@property(assign, nonatomic) BOOL isLocation;	// G=0x3765d495; S=0x3765d4b9; 
@property(readonly, assign, nonatomic) BOOL isShowingMultipleVCards;	// G=0x3763d685; 
@property(copy, nonatomic) NSString *message;	// G=0x3765cf01; S=0x3765ced5; 
@property(retain) id messageDetail;	// G=0x3765cfa9; S=0x3765cf7d; converted property
@property(retain) id messageDetailFont;	// G=0x3765cfd1; S=0x3765cff9; converted property
@property(retain) id messageFont;	// G=0x3765cf55; S=0x3765cf29; converted property
@property(retain, nonatomic) UIView *personHeaderView;	// G=0x3765d279; S=0x3763c8b9; 
@property(assign, nonatomic) BOOL savesNewContactOnSuspend;	// G=0x3765d5f9; S=0x3765d5d9; 
@property(retain) id shareLocationSnapshotImage;	// G=0x3765d771; S=0x3765d799; converted property
@property(retain) id shareLocationURL;	// G=0x3765d71d; S=0x3765d745; converted property
@property(retain) id shareMessageBody;	// G=0x3765d675; S=0x3765d69d; converted property
@property(assign) BOOL shareMessageBodyIsHTML;	// G=0x3765d621; S=0x3765d649; converted property
@property(retain) id shareMessageSubject;	// G=0x3765d6c9; S=0x3765d6f1; converted property
@property(readonly, assign, nonatomic) ABPersonTableViewSharingDelegate *sharingDelegate;	// G=0x3765eb2d; @synthesize=_sharingDelegate
@property(assign, nonatomic) BOOL shouldAlignPersonHeaderViewToImage;	// G=0x3765d2cd; S=0x3765d2a1; 
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x3765ce41; S=0x3765ce61; 
@property(assign, nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;	// G=0x3763db29; S=0x3763c999; @synthesize=_unknownPersonViewDelegate
@property(retain) id willTweetLocationCallback;	// G=0x3765d7c5; S=0x3765d7ed; converted property
@property(retain) id willWeiboLocationCallback;	// G=0x3765d819; S=0x3765d841; converted property
+ (id)defaultLabelsForProperty:(int)property person:(void *)person addressBook:(void *)book;	// 0x3763c9a9
- (id)init;	// 0x3765c839
- (id)initWithNibName:(id)nibName bundle:(id)bundle style:(int)style;	// 0x3763c5f1
- (id)initWithStyle:(int)style;	// 0x3763c5d1
- (id)initWithVCardData:(id)vcardData;	// 0x3765cabd
- (void)_addToExistingContacts;	// 0x3765e235
- (void)_addUnmergedRecords;	// 0x3765db21
- (id)_alertSheet;	// 0x3765cbf5
- (BOOL)_allowsAutorotation;	// 0x3765d8c1
- (void)_createNewContacts;	// 0x3765da9d
- (id)_findMatchingCardsForRecord:(void *)record;	// 0x3765de2d
- (id)_forwarder;	// 0x3765cc95
- (void)_getRotationContentSettings:(XXStruct_3uUjXA *)settings;	// 0x3765d985
- (BOOL)_isSupportedInterfaceOrientation:(int)orientation;	// 0x3765d905
- (void)_showCardViewerForIndex:(int)index;	// 0x3765e8c9
- (void)_showUnmergedContactsAlert;	// 0x3765dbcd
- (id)_unmergedAlertSheet;	// 0x3765cc1d
- (id)_unmergedRecords;	// 0x3765cc45
- (void)_unselectTable;	// 0x3765e885
- (id)_vCardProperties;	// 0x3765cbcd
- (id)_vCardTable;	// 0x3765cc6d
- (id)_vCards;	// 0x3763d6b5
- (id)_viewControllerForCardAtIndex:(int)index;	// 0x3765e4e5
- (int)abViewControllerType;	// 0x3765d61d
- (float)ab_heightToFitForViewInPopoverView;	// 0x3763e895
- (void)accessChanged;	// 0x3765e58d
- (void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;	// 0x3765e415
// declared property getter: - (id)actionsDelegate;	// 0x3765eb1d
- (void)addActionWithTitle:(id)title content:(id)content target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x37673ead
- (void)addActionWithTitle:(id)title shortTitle:(id)title2 target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x37673dad
- (void)addActionWithTitle:(id)title target:(id)target selector:(SEL)selector forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x37673ddd
// declared property getter: - (void *)addressBook;	// 0x3763c879
// declared property getter: - (BOOL)allowsActions;	// 0x3763e0a5
// declared property getter: - (BOOL)allowsAddingToAddressBook;	// 0x3765d0cd
// declared property getter: - (BOOL)allowsConferencing;	// 0x3765d171
// declared property getter: - (BOOL)allowsSendingTextMessage;	// 0x3765d11d
// declared property getter: - (BOOL)allowsSharing;	// 0x3765d079
// declared property getter: - (id)alternateName;	// 0x3765cead
- (void)applicationDidResume;	// 0x3765d9ad
// declared property getter: - (id)attribution;	// 0x3765d349
// converted property getter: - (BOOL)badgeEmailPropertiesForMailVIP;	// 0x3765d86d
// declared property getter: - (BOOL)canShareContact;	// 0x3765d46d
// converted property getter: - (id)customFooterView;	// 0x3765d5b1
// converted property getter: - (id)customHeaderView;	// 0x3765d55d
// converted property getter: - (id)customMessageView;	// 0x3765d025
// declared property getter: - (id)dataSource;	// 0x3763c8a9
- (void)dealloc;	// 0x3763f665
- (void)decodeRestorableStateWithCoder:(id)coder;	// 0x3765ca01
- (void)dismissAnimated:(BOOL)animated;	// 0x3765e1d9
// declared property getter: - (void *)displayedPerson;	// 0x3763e085
// declared property getter: - (id)displayedProperties;	// 0x3765d309
- (void)encodeRestorableStateWithCoder:(id)coder;	// 0x3765c8dd
- (BOOL)hasActionWithTitle:(id)title target:(id)target selector:(SEL)selector property:(int)property actionGrouping:(int)grouping ordering:(int)ordering;	// 0x37673d65
// declared property getter: - (id)helper;	// 0x3763c899
// declared property getter: - (BOOL)isLocation;	// 0x3765d495
// declared property getter: - (BOOL)isShowingMultipleVCards;	// 0x3763d685
- (void)loadView;	// 0x3763de4d
// declared property getter: - (id)message;	// 0x3765cf01
// converted property getter: - (id)messageDetail;	// 0x3765cfa9
// converted property getter: - (id)messageDetailFont;	// 0x3765cfd1
// converted property getter: - (id)messageFont;	// 0x3765cf55
- (id)newActionButton;	// 0x37673e85
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x3765e5d1
// declared property getter: - (id)personHeaderView;	// 0x3765d279
- (BOOL)personViewControllerHelper:(id)helper shouldContinueAfterSelectingPropertyAtIndex:(int)index inPropertyGroup:(id)propertyGroup;	// 0x3765d9f1
- (void)presentAddToContactsSheet;	// 0x3765d415
- (void)presentNewContactViewControllerForAddToContacts;	// 0x3765d4d9
- (void)presentPeoplePickerNavigationControllerForMergeToContact;	// 0x3765d505
- (void)presentShareContactSheet;	// 0x3765d441
- (void)reloadImageData;	// 0x3765d3ed
- (void)removeActionWithSelector:(SEL)selector target:(id)target forProperty:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x37673e29
// declared property getter: - (BOOL)savesNewContactOnSuspend;	// 0x3765d5f9
- (void)setActionShouldPickHighlightedItem:(BOOL)pickHighlightedItem;	// 0x37673e59
// declared property setter: - (void)setAddressBook:(void *)book;	// 0x3765ce21
// declared property setter: - (void)setAllowsActions:(BOOL)actions;	// 0x3763db9d
// declared property setter: - (void)setAllowsAddingToAddressBook:(BOOL)addressBook;	// 0x3763db6d
// declared property setter: - (void)setAllowsConferencing:(BOOL)conferencing;	// 0x3765d145
// declared property setter: - (void)setAllowsSendingTextMessage:(BOOL)message;	// 0x3765d0f1
// declared property setter: - (void)setAllowsSharing:(BOOL)sharing;	// 0x3765d0a1
// declared property setter: - (void)setAlternateName:(id)name;	// 0x3765ce81
// declared property setter: - (void)setAttribution:(id)attribution;	// 0x3765d371
- (void)setAttribution:(id)attribution target:(id)target selector:(SEL)selector;	// 0x3765d3b5
// converted property setter: - (void)setBadgeEmailPropertiesForMailVIP:(BOOL)mailVIP;	// 0x3765d895
- (void)setCardContentProvider:(id)provider;	// 0x3765d199
- (void)setCustomAppearanceProvider:(id)provider;	// 0x37687dc5
// converted property setter: - (void)setCustomFooterView:(id)view;	// 0x3765d585
// converted property setter: - (void)setCustomHeaderView:(id)view;	// 0x3765d531
// converted property setter: - (void)setCustomMessageView:(id)view;	// 0x3765d04d
// declared property setter: - (void)setDisplayedPerson:(void *)person;	// 0x3763d665
// declared property setter: - (void)setDisplayedProperties:(id)properties;	// 0x3765d329
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier;	// 0x3765d235
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier important:(BOOL)important;	// 0x3765d1f5
- (void)setHighlightedItemForProperty:(int)property withIdentifier:(int)identifier person:(void *)person important:(BOOL)important;	// 0x3765d1b9
// declared property setter: - (void)setIsLocation:(BOOL)location;	// 0x3765d4b9
// declared property setter: - (void)setMessage:(id)message;	// 0x3765ced5
// converted property setter: - (void)setMessageDetail:(id)detail;	// 0x3765cf7d
// converted property setter: - (void)setMessageDetailFont:(id)font;	// 0x3765cff9
// converted property setter: - (void)setMessageFont:(id)font;	// 0x3765cf29
// declared property setter: - (void)setPersonHeaderView:(id)view;	// 0x3763c8b9
- (void)setPrimaryProperty:(int)property;	// 0x3765d2f5
- (void)setPrimaryProperty:(int)property countryCode:(id)code;	// 0x3763d6dd
// declared property setter: - (void)setSavesNewContactOnSuspend:(BOOL)suspend;	// 0x3765d5d9
// converted property setter: - (void)setShareLocationSnapshotImage:(id)image;	// 0x3765d799
// converted property setter: - (void)setShareLocationURL:(id)url;	// 0x3765d745
// converted property setter: - (void)setShareMessageBody:(id)body;	// 0x3765d69d
// converted property setter: - (void)setShareMessageBodyIsHTML:(BOOL)html;	// 0x3765d649
// converted property setter: - (void)setShareMessageSubject:(id)subject;	// 0x3765d6f1
// declared property setter: - (void)setShouldAlignPersonHeaderViewToImage:(BOOL)alignPersonHeaderViewToImage;	// 0x3765d2a1
- (void)setStringValue:(id)value forProperty:(int)property;	// 0x3765d259
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x3765ce61
// declared property setter: - (void)setUnknownPersonViewDelegate:(id)delegate;	// 0x3763c999
// converted property setter: - (void)setWillTweetLocationCallback:(id)tweetLocationCallback;	// 0x3765d7ed
// converted property setter: - (void)setWillWeiboLocationCallback:(id)weiboLocationCallback;	// 0x3765d841
// converted property getter: - (id)shareLocationSnapshotImage;	// 0x3765d771
// converted property getter: - (id)shareLocationURL;	// 0x3765d71d
// converted property getter: - (id)shareMessageBody;	// 0x3765d675
// converted property getter: - (BOOL)shareMessageBodyIsHTML;	// 0x3765d621
// converted property getter: - (id)shareMessageSubject;	// 0x3765d6c9
// declared property getter: - (id)sharingDelegate;	// 0x3765eb2d
// declared property getter: - (BOOL)shouldAlignPersonHeaderViewToImage;	// 0x3765d2cd
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;	// 0x3763e9a9
// declared property getter: - (id)styleProvider;	// 0x3765ce41
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x3765e605
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3765e94d
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x3765e5d5
- (id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;	// 0x3765e90d
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x3765cded
- (void)tellHelperToShow:(BOOL)show actionWithSelector:(SEL)selector target:(id)target localizableTitle:(id)title property:(int)property withActionGrouping:(int)actionGrouping ordering:(int)ordering;	// 0x3765cd2d
// declared property getter: - (id)unknownPersonViewDelegate;	// 0x3763db29
- (void)updateNavigationButtons;	// 0x3763e84d
- (void)viewDidAppear:(BOOL)view;	// 0x3763f5f1
- (void)viewDidLoad;	// 0x3763e851
- (void)viewDidUnload;	// 0x3765d98d
- (void)viewWillAppear:(BOOL)view;	// 0x3763e939
- (void)viewWillDisappear:(BOOL)view;	// 0x3763f61d
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;	// 0x3765d951
// converted property getter: - (id)willTweetLocationCallback;	// 0x3765d7c5
// converted property getter: - (id)willWeiboLocationCallback;	// 0x3765d819
@end


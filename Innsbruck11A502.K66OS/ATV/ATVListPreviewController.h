/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVFeedDocument, NSIndexPath, NSMutableDictionary, BRControl, NSString, BRMediaMenuView, ATVURLDocument;

__attribute__((visibility("hidden")))
@interface ATVListPreviewController : ATVFeedController {
	bool _forcePreviewRefresh;	// 104 = 0x68
	ATVURLDocument *_documentForPreviewChange;	// 108 = 0x6c
	NSString *_previousLoadPreviewURL;	// 112 = 0x70
	NSMutableDictionary *_headerCache;	// 116 = 0x74
	BOOL _shouldUseItmsPurchasePageBlueDots;	// 120 = 0x78
	BOOL _itmsPurchasePageBlueDots_doAnyItemsHaveBlueDots;	// 121 = 0x79
	BOOL _dimUnselectedOnFocusOut;	// 122 = 0x7a
	BOOL _isListDimmed;	// 123 = 0x7b
	BRMediaMenuView *_mediaMenuView;	// 124 = 0x7c
	BRControl *_sharedPreviewControl;	// 128 = 0x80
	NSIndexPath *_lastPreviewIndexPath;	// 132 = 0x84
	ATVFeedDocument *_lastPreviewFeedDocument;	// 136 = 0x88
	NSIndexPath *_selectedRowToHighlight;	// 140 = 0x8c
}
@property(assign, nonatomic) BOOL dimUnselectedOnFocusOut;	// G=0xe6069; S=0xe6079; @synthesize=_dimUnselectedOnFocusOut
@property(assign, nonatomic) BOOL isListDimmed;	// G=0xe60a9; S=0xe42e1; @synthesize=_isListDimmed
@property(retain, nonatomic) ATVFeedDocument *lastPreviewFeedDocument;	// G=0xe6049; S=0xe6059; @synthesize=_lastPreviewFeedDocument
@property(retain, nonatomic) NSIndexPath *lastPreviewIndexPath;	// G=0xe6029; S=0xe6039; @synthesize=_lastPreviewIndexPath
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0xe5ff1; @synthesize=_mediaMenuView
@property(retain, nonatomic) NSIndexPath *selectedRowToHighlight;	// G=0xe6089; S=0xe6099; @synthesize=_selectedRowToHighlight
@property(retain) BRControl *sharedPreviewControl;	// G=0xe6005; S=0xe6019; @synthesize=_sharedPreviewControl
- (id)initWithDictionary:(id)dictionary;	// 0xe374d
- (id)initWithFeedElement:(id)feedElement;	// 0xe3599
- (id)_blueDotParamsForMenuItems;	// 0xe6c4d
- (id)_blueDotParamsForSelectedItem;	// 0xe6ed1
- (void)_blueDotReloadNotification:(id)notification;	// 0xe788d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0xe416d
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0xe4045
- (void)_cancelAllDocumentRequests;	// 0xe6935
- (void)_cancelDocumentRequest:(id *)request;	// 0xe68fd
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0xe6955
- (id)_createMediaMenuView;	// 0xe69c5
- (id)_createView;	// 0xe6a4d
- (id)_elementAtIndexPath:(id)indexPath;	// 0xe5efd
- (void)_getBlueDotCount:(long *)count nonBlueDotCount:(long *)count2;	// 0xe6f29
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0xe420d
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0xe4119
- (id)_initialSelection;	// 0xe60b9
- (id)_itemAtIndexPath:(id)indexPath;	// 0xe5e49
- (void)_loadPreviewForURL:(id)url;	// 0xe571d
- (void)_manageDimming:(id)dimming;	// 0xe4251
- (void)_markAllTVEpisodesAsUnwatched;	// 0xe77b9
- (void)_markAllTVEpisodesAsWatched;	// 0xe7785
- (void)_markAsUnwatched;	// 0xe7729
- (void)_markAsWatched;	// 0xe76cd
- (void)_markAsWatched:(BOOL)watched blueDotParams:(id)params;	// 0xe74ad
- (void)_previewDocumentReady:(id)ready;	// 0xe5911
- (void)_reloadMediaMenuViewList;	// 0xe5f91
- (void)_setLastPreviewIndexPath:(id)path;	// 0xe69b5
- (void)_showInfoChanged:(id)changed;	// 0xe7829
- (void)_updateDoAnyItemsHaveBlueDotsFlag;	// 0xe77ed
- (void)_updateInternalWithLoadType:(int)loadType withPageID:(id)pageID;	// 0xe3e59
- (void)_updateListHeader;	// 0xe6a85
- (void)_updatePreviewWithElement:(id)element;	// 0xe5619
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0xe54cd
- (id)cancelProviderForContextMenu;	// 0xe7469
- (void)controlWasActivated;	// 0xe3cf1
- (void)controlWasDeactivated;	// 0xe3dd9
- (void)dealloc;	// 0xe3b11
// declared property getter: - (BOOL)dimUnselectedOnFocusOut;	// 0xe6069
// declared property getter: - (BOOL)isListDimmed;	// 0xe60a9
// declared property getter: - (id)lastPreviewFeedDocument;	// 0xe6049
// declared property getter: - (id)lastPreviewIndexPath;	// 0xe6029
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0xe50d5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0xe50c1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xe50d1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0xe502d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xe4ef9
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xe4e01
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xe47f5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xe46e9
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0xe44c9
- (void)listWasActivated:(id)activated;	// 0xe4fe9
// declared property getter: - (id)mediaMenuView;	// 0xe5ff1
- (long)numberOfSectionsInList:(id)list;	// 0xe4435
- (id)providersForContextMenu;	// 0xe7035
// declared property getter: - (id)selectedRowToHighlight;	// 0xe6089
// declared property setter: - (void)setDimUnselectedOnFocusOut:(BOOL)anOut;	// 0xe6079
// declared property setter: - (void)setIsListDimmed:(BOOL)dimmed;	// 0xe42e1
// declared property setter: - (void)setLastPreviewFeedDocument:(id)document;	// 0xe6059
// declared property setter: - (void)setLastPreviewIndexPath:(id)path;	// 0xe6039
// declared property setter: - (void)setSelectedRowToHighlight:(id)highlight;	// 0xe6099
// declared property setter: - (void)setSharedPreviewControl:(id)control;	// 0xe6019
// declared property getter: - (id)sharedPreviewControl;	// 0xe6005
- (void)wasPushed;	// 0xe3c55
@end


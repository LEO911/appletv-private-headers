/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVFeedDocument, BRControl, NSString, ATVURLDocument, NSMutableDictionary, BRMediaMenuView, NSIndexPath;

__attribute__((visibility("hidden")))
@interface ATVListPreviewController : ATVFeedController {
	bool _forcePreviewRefresh;	// 104 = 0x68
	ATVURLDocument *_documentForPreviewChange;	// 108 = 0x6c
	NSString *_previousLoadPreviewURL;	// 112 = 0x70
	NSMutableDictionary *_headerCache;	// 116 = 0x74
	BRMediaMenuView *_mediaMenuView;	// 120 = 0x78
	BRControl *_sharedPreviewControl;	// 124 = 0x7c
	NSIndexPath *_lastPreviewIndexPath;	// 128 = 0x80
	ATVFeedDocument *_lastPreviewFeedDocument;	// 132 = 0x84
	BOOL _dimUnselectedOnFocusOut;	// 136 = 0x88
	NSIndexPath *_selectedRowToHighlight;	// 140 = 0x8c
	BOOL _isListDimmed;	// 144 = 0x90
}
@property(assign, nonatomic) BOOL dimUnselectedOnFocusOut;	// G=0x126e19; S=0x126e29; @synthesize=_dimUnselectedOnFocusOut
@property(assign, nonatomic) BOOL isListDimmed;	// G=0x126e59; S=0x125f61; @synthesize=_isListDimmed
@property(retain, nonatomic) ATVFeedDocument *lastPreviewFeedDocument;	// G=0x126df9; S=0x126e09; @synthesize=_lastPreviewFeedDocument
@property(retain, nonatomic) NSIndexPath *lastPreviewIndexPath;	// G=0x126dd9; S=0x126de9; @synthesize=_lastPreviewIndexPath
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0x126da1; @synthesize=_mediaMenuView
@property(retain, nonatomic) NSIndexPath *selectedRowToHighlight;	// G=0x126e39; S=0x126e49; @synthesize=_selectedRowToHighlight
@property(retain) BRControl *sharedPreviewControl;	// G=0x126db5; S=0x126dc9; @synthesize=_sharedPreviewControl
- (id)initWithDictionary:(id)dictionary;	// 0x125665
- (id)initWithFeedElement:(id)feedElement;	// 0x12540d
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x125ded
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x125cc5
- (void)_cancelAllDocumentRequests;	// 0x1281a9
- (void)_cancelDocumentRequest:(id *)request;	// 0x128171
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0x1281c9
- (id)_createMediaMenuView;	// 0x128239
- (id)_createView;	// 0x1282c1
- (id)_elementAtIndexPath:(id)indexPath;	// 0x127895
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x125e8d
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x125d99
- (id)_initialSelection;	// 0x127929
- (id)_itemAtIndexPath:(id)indexPath;	// 0x1277e1
- (void)_loadPreviewForURL:(id)url;	// 0x1270b9
- (void)_manageDimming:(id)dimming;	// 0x125ed1
- (void)_previewDocumentReady:(id)ready;	// 0x1272a9
- (void)_setLastPreviewIndexPath:(id)path;	// 0x128229
- (void)_updateInternalWithLoadType:(int)loadType withPageID:(id)pageID;	// 0x125ad5
- (void)_updatePreviewWithElement:(id)element;	// 0x126fb5
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0x126e69
- (void)dealloc;	// 0x1258cd
// declared property getter: - (BOOL)dimUnselectedOnFocusOut;	// 0x126e19
// declared property getter: - (BOOL)isListDimmed;	// 0x126e59
// declared property getter: - (id)lastPreviewFeedDocument;	// 0x126df9
// declared property getter: - (id)lastPreviewIndexPath;	// 0x126dd9
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x1269b5
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x1269a1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x1269b1
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x12690d
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x1267d1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x1266dd
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x12647d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x126371
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x126151
- (void)listWasActivated:(id)activated;	// 0x1268c9
// declared property getter: - (id)mediaMenuView;	// 0x126da1
- (long)numberOfSectionsInList:(id)list;	// 0x1260c1
// declared property getter: - (id)selectedRowToHighlight;	// 0x126e39
// declared property setter: - (void)setDimUnselectedOnFocusOut:(BOOL)anOut;	// 0x126e29
// declared property setter: - (void)setIsListDimmed:(BOOL)dimmed;	// 0x125f61
// declared property setter: - (void)setLastPreviewFeedDocument:(id)document;	// 0x126e09
// declared property setter: - (void)setLastPreviewIndexPath:(id)path;	// 0x126de9
// declared property setter: - (void)setSelectedRowToHighlight:(id)highlight;	// 0x126e49
// declared property setter: - (void)setSharedPreviewControl:(id)control;	// 0x126dc9
// declared property getter: - (id)sharedPreviewControl;	// 0x126db5
- (void)wasPushed;	// 0x125a11
@end

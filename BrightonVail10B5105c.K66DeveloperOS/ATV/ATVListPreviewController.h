/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedController.h"

@class ATVFeedDocument, BRControl, ATVURLDocument, BRMediaMenuView, NSString, NSMutableDictionary, NSIndexPath;

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
@property(assign, nonatomic) BOOL dimUnselectedOnFocusOut;	// G=0x1285b9; S=0x1285c9; @synthesize=_dimUnselectedOnFocusOut
@property(assign, nonatomic) BOOL isListDimmed;	// G=0x1285f9; S=0x127695; @synthesize=_isListDimmed
@property(retain, nonatomic) ATVFeedDocument *lastPreviewFeedDocument;	// G=0x128599; S=0x1285a9; @synthesize=_lastPreviewFeedDocument
@property(retain, nonatomic) NSIndexPath *lastPreviewIndexPath;	// G=0x128579; S=0x128589; @synthesize=_lastPreviewIndexPath
@property(readonly, assign) BRMediaMenuView *mediaMenuView;	// G=0x128541; @synthesize=_mediaMenuView
@property(retain, nonatomic) NSIndexPath *selectedRowToHighlight;	// G=0x1285d9; S=0x1285e9; @synthesize=_selectedRowToHighlight
@property(retain) BRControl *sharedPreviewControl;	// G=0x128555; S=0x128569; @synthesize=_sharedPreviewControl
- (id)initWithDictionary:(id)dictionary;	// 0x126d99
- (id)initWithFeedElement:(id)feedElement;	// 0x126b41
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x127521
- (BOOL)_canHandleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x1273f9
- (void)_cancelAllDocumentRequests;	// 0x129949
- (void)_cancelDocumentRequest:(id *)request;	// 0x129911
- (void)_cancelPreviousLoadPreviewPerformSelector;	// 0x129969
- (id)_createMediaMenuView;	// 0x1299d9
- (id)_createView;	// 0x129a61
- (id)_elementAtIndexPath:(id)indexPath;	// 0x129035
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x1275c1
- (void)_handleUpdateWithPropertyList:(id)propertyList loadType:(int)type;	// 0x1274cd
- (id)_initialSelection;	// 0x1290c9
- (id)_itemAtIndexPath:(id)indexPath;	// 0x128f81
- (void)_loadPreviewForURL:(id)url;	// 0x128859
- (void)_manageDimming:(id)dimming;	// 0x127605
- (void)_previewDocumentReady:(id)ready;	// 0x128a49
- (void)_setLastPreviewIndexPath:(id)path;	// 0x1299c9
- (void)_updateInternalWithLoadType:(int)loadType withPageID:(id)pageID;	// 0x127209
- (void)_updatePreviewWithElement:(id)element;	// 0x128755
- (void)_updatePreviewWithPropertyList:(id)propertyList;	// 0x128609
- (void)dealloc;	// 0x127001
// declared property getter: - (BOOL)dimUnselectedOnFocusOut;	// 0x1285b9
// declared property getter: - (BOOL)isListDimmed;	// 0x1285f9
// declared property getter: - (id)lastPreviewFeedDocument;	// 0x128599
// declared property getter: - (id)lastPreviewIndexPath;	// 0x128579
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x128155
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x128141
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x128151
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x1280ad
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x127f71
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x127e7d
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x127bb1
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x127aa5
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x127885
- (void)listWasActivated:(id)activated;	// 0x128069
// declared property getter: - (id)mediaMenuView;	// 0x128541
- (long)numberOfSectionsInList:(id)list;	// 0x1277f5
// declared property getter: - (id)selectedRowToHighlight;	// 0x1285d9
// declared property setter: - (void)setDimUnselectedOnFocusOut:(BOOL)anOut;	// 0x1285c9
// declared property setter: - (void)setIsListDimmed:(BOOL)dimmed;	// 0x127695
// declared property setter: - (void)setLastPreviewFeedDocument:(id)document;	// 0x1285a9
// declared property setter: - (void)setLastPreviewIndexPath:(id)path;	// 0x128589
// declared property setter: - (void)setSelectedRowToHighlight:(id)highlight;	// 0x1285e9
// declared property setter: - (void)setSharedPreviewControl:(id)control;	// 0x128569
// declared property getter: - (id)sharedPreviewControl;	// 0x128555
- (void)wasPushed;	// 0x127145
@end


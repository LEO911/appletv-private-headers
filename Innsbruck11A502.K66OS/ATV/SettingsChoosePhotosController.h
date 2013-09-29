/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@class NSMutableDictionary, BRControl, NSArray, ATVDataQuery;

__attribute__((visibility("hidden")))
@interface SettingsChoosePhotosController : BRViewController {
	NSArray *_servers;	// 104 = 0x68
	BRControl *_cupidPreview;	// 108 = 0x6c
	ATVDataQuery *_cupidPreviewQuery;	// 112 = 0x70
	NSArray *_sections;	// 116 = 0x74
	NSMutableDictionary *_itmsCollectionPreviewResults;	// 120 = 0x78
	NSMutableDictionary *_itmsCollectionPreviewQueries;	// 124 = 0x7c
	id _ntITMSConnection;	// 128 = 0x80
}
@property(retain, nonatomic) NSMutableDictionary *itmsCollectionPreviewQueries;	// G=0x2f1ae5; S=0x2f1af5; @synthesize=_itmsCollectionPreviewQueries
@property(retain, nonatomic) NSMutableDictionary *itmsCollectionPreviewResults;	// G=0x2f1aad; S=0x2f1abd; @synthesize=_itmsCollectionPreviewResults
@property(retain, nonatomic) id ntITMSConnection;	// G=0x2f1b1d; S=0x2f0835; @synthesize=_ntITMSConnection
@property(copy, nonatomic) NSArray *sections;	// G=0x2f1a89; S=0x2f1a9d; @synthesize=_sections
- (id)init;	// 0x2f06b1
- (void).cxx_destruct;	// 0x2f1b2d
- (void)_cancelITMSQueries;	// 0x2f3141
- (id)_configureSections;	// 0x2f17d1
- (void)_configureView;	// 0x2f17d5
- (id)_cupidPreview;	// 0x2f2505
- (void)_dataServersChanged:(id)changed;	// 0x2f244d
- (id)_filterAdhocScreensaverDictionary:(id)dictionary;	// 0x2f1bc5
- (id)_filterAlbumArtScreensaverDictionary:(id)dictionary;	// 0x2f2115
- (void)_getPreviewForITMSCollectionID:(id)itmscollectionID completionHandler:(id)handler;	// 0x2f2961
- (void)_handleAdhocPhotosSelection;	// 0x2f1a6d
- (void)_handleAppleDefaultPhotosSelection;	// 0x2f1a71
- (void)_handleComputersPhotosSelectionForServer:(id)server;	// 0x2f1a79
- (void)_handleCupidSelection;	// 0x2f1a7d
- (void)_handleFeedMerchantSelectionForMerchant:(id)merchant;	// 0x2f1a85
- (void)_handleFlickrSelection;	// 0x2f1a81
- (void)_handleITMSMerchantSelectionWithCollectionID:(id)collectionID name:(id)name;	// 0x2f1a75
- (int)_indexOfServerWithID:(id)anId;	// 0x2f18d5
- (BOOL)_isComputersSection:(id)section;	// 0x2f17d9
- (BOOL)_isCupidSelected;	// 0x2f2205
- (id)_servers;	// 0x2f23d9
- (id)_titleForDictionary:(id)dictionary merchant:(id)merchant;	// 0x2f19b9
- (id)_titleForServerAtIndex:(int)index;	// 0x2f1851
- (void)dealloc;	// 0x2f07c9
// declared property getter: - (id)itmsCollectionPreviewQueries;	// 0x2f1ae5
// declared property getter: - (id)itmsCollectionPreviewResults;	// 0x2f1aad
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2f0bbd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2f13d5
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2f0bb9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2f0b05
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2f09d1
// declared property getter: - (id)ntITMSConnection;	// 0x2f1b1d
- (long)numberOfSectionsInList:(id)list;	// 0x2f0995
// declared property getter: - (id)sections;	// 0x2f1a89
// declared property setter: - (void)setItmsCollectionPreviewQueries:(id)queries;	// 0x2f1af5
// declared property setter: - (void)setItmsCollectionPreviewResults:(id)results;	// 0x2f1abd
// declared property setter: - (void)setNtITMSConnection:(id)connection;	// 0x2f0835
// declared property setter: - (void)setSections:(id)sections;	// 0x2f1a9d
- (void)wasPopped;	// 0x2f0935
- (void)wasPushed;	// 0x2f08ad
@end

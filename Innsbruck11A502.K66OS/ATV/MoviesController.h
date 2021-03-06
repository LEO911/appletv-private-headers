/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTabControlDelegate.h"
#import "VideoController.h"

@class NSMutableDictionary, NSArray, NSMutableArray, NSString, ATVDataType;

__attribute__((visibility("hidden")))
@interface MoviesController : VideoController <BRTabControlDelegate> {
	NSMutableArray *_unwatchedItems;	// 172 = 0xac
	NSMutableDictionary *_genreNameToMoviesDict;	// 176 = 0xb0
	NSArray *_movies;	// 180 = 0xb4
	NSArray *_genresSortedByName;	// 184 = 0xb8
	NSString *_genreName;	// 188 = 0xbc
	BOOL _showGenreList;	// 192 = 0xc0
	BOOL _showMoviesInSpecificGenre;	// 193 = 0xc1
	BOOL _showUnwatchedItemsOnly;	// 194 = 0xc2
	ATVDataType *_mediaType;	// 196 = 0xc4
	NSString *_tabControlItemPreferenceKey;	// 200 = 0xc8
	NSString *_listTitleLocalizationKey;	// 204 = 0xcc
	NSString *_numberOfMoviesInGenreLocalizationKey;	// 208 = 0xd0
	NSString *_oneMovieInGenreLocalizationKey;	// 212 = 0xd4
}
@property(retain, nonatomic) NSString *listTitleLocalizationKey;	// G=0x2b5ad1; S=0x2b5ae1; @synthesize=_listTitleLocalizationKey
@property(retain, nonatomic) ATVDataType *mediaType;	// G=0x2b5a61; S=0x2b5a71; @synthesize=_mediaType
@property(retain, nonatomic) NSString *numberOfMoviesInGenreLocalizationKey;	// G=0x2b5b09; S=0x2b5b19; @synthesize=_numberOfMoviesInGenreLocalizationKey
@property(retain, nonatomic) NSString *oneMovieInGenreLocalizationKey;	// G=0x2b5b41; S=0x2b5b51; @synthesize=_oneMovieInGenreLocalizationKey
@property(retain, nonatomic) NSString *tabControlItemPreferenceKey;	// G=0x2b5a99; S=0x2b5aa9; @synthesize=_tabControlItemPreferenceKey
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned)type playAllItems:(BOOL)items;	// 0x2b3d2d
+ (id)moviesControllerForCollection:(id)collection mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b3d8d
+ (id)moviesControllerForGenreName:(id)genreName mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b3f71
- (id)initWithCollection:(id)collection mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b3e09
- (id)initWithGenreName:(id)genreName mediaType:(id)type dataClient:(id)client dataClientType:(unsigned)type4;	// 0x2b3fed
- (id)initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned)type;	// 0x2b40ad
- (void).cxx_destruct;	// 0x2b5b79
- (int)_convertIdentifierToTabControlItemKind:(unsigned)tabControlItemKind;	// 0x2b6f35
- (id)_currentItems;	// 0x2b5ee9
- (int)_currentlySelectedTabControlItemKind;	// 0x2b6eb5
- (id)_genreData;	// 0x2b6039
- (id)_initWithMediaType:(id)mediaType dataClient:(id)client dataClientType:(unsigned)type;	// 0x2b5c4d
- (int)_lastSelectedTabControlItemKind;	// 0x2b6e1d
- (void)_mediaItemPropertySet:(id)set;	// 0x2b6441
- (id)_unwatchedItems;	// 0x2b5fcd
- (void)_updateDisplayPlaylists;	// 0x2b5e3d
- (void)_updatePreviewForMediaItem:(id)mediaItem inMediaItems:(id)mediaItems;	// 0x2b6561
- (id)currentItems;	// 0x2b4555
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x2b44b5
- (BOOL)dataQueryComplete:(id)complete;	// 0x2b4909
- (void)dealloc;	// 0x2b437d
- (id)errorForNoContent;	// 0x2b49b5
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x2b5091
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x2b5611
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x2b5255
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x2b5059
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x2b4ff9
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x2b4b49
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x2b4aa1
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x2b4af9
// declared property getter: - (id)listTitleLocalizationKey;	// 0x2b5ad1
// declared property getter: - (id)mediaType;	// 0x2b5a61
- (id)newDataQuery;	// 0x2b4565
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x2b49d5
// declared property getter: - (id)numberOfMoviesInGenreLocalizationKey;	// 0x2b5b09
- (long)numberOfSectionsInList:(id)list;	// 0x2b4a9d
// declared property getter: - (id)oneMovieInGenreLocalizationKey;	// 0x2b5b41
// declared property setter: - (void)setListTitleLocalizationKey:(id)key;	// 0x2b5ae1
// declared property setter: - (void)setMediaType:(id)type;	// 0x2b5a71
// declared property setter: - (void)setNumberOfMoviesInGenreLocalizationKey:(id)genreLocalizationKey;	// 0x2b5b19
// declared property setter: - (void)setOneMovieInGenreLocalizationKey:(id)genreLocalizationKey;	// 0x2b5b51
// declared property setter: - (void)setTabControlItemPreferenceKey:(id)key;	// 0x2b5aa9
- (void)tabControl:(id)control didSelectTabItem:(id)item;	// 0x2b57e5
- (void)tabControl:(id)control willSelectTabItem:(id)item;	// 0x2b5a05
- (void)tabControlDidChangeNumberOfTabItems:(id)tabControl;	// 0x2b5a5d
// declared property getter: - (id)tabControlItemPreferenceKey;	// 0x2b5a99
- (void)wasPopped;	// 0x2b43e9
@end


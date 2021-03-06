/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRController.h"
#import "AppleTV-Structs.h"

@class NSMutableDictionary, BRGridView, BRScrollControl, NSMutableArray, BRCursorControl, BRTextControl, NSTimer, BRWaitPromptControl;

@interface ATVFavoritesController : BRController {
@private
	int _itemType;	// 84 = 0x54
	NSMutableArray *_favorites;	// 88 = 0x58
	BRScrollControl *_scroller;	// 92 = 0x5c
	BRGridView *_grid;	// 96 = 0x60
	BRCursorControl *_cursor;	// 100 = 0x64
	BRTextControl *_rearrangeInstructions;	// 104 = 0x68
	BOOL _hasBeenActivated;	// 108 = 0x6c
	NSMutableDictionary *_redDotMap;	// 112 = 0x70
	NSTimer *_spinnerTimer;	// 116 = 0x74
	BRWaitPromptControl *_spinner;	// 120 = 0x78
	BOOL _showsSpinner;	// 124 = 0x7c
	BOOL _favoriteOrderChanged;	// 125 = 0x7d
}
- (id)initWithItemType:(int)itemType error:(id *)error;	// 0x30157349
- (void)_fadeOutAnimationCompleted:(id)completed finished:(BOOL)finished;	// 0x30158861
- (void)_favoriteChanged:(id)changed;	// 0x3015854d
- (void)_favoriteInsertedNotification:(id)notification;	// 0x301583c9
- (void)_favoriteRemovedNotification:(id)notification;	// 0x301584b1
- (void)_favoritesShowDataChangedNotification:(id)notification;	// 0x301587a9
- (void)_fetchEpisodesForCurrentSeason:(id)currentSeason;	// 0x30159535
- (void)_fetchFavorites:(id)favorites;	// 0x301594a9
- (void)_fetchShowInfo:(id)info;	// 0x30159755
- (void)_initiateNetworkFetches;	// 0x30157cc1
- (ATVMediaTypeRef)_mediaType;	// 0x30159235
- (id)_noFavoritesController;	// 0x301587d9
- (void)_rebuildRedDotMapWithFavoritesIfNecessary:(id)favoritesIfNecessary;	// 0x301593b5
- (int)_redDotCountForStoreFavorite:(id)storeFavorite;	// 0x30159349
- (void)_reload;	// 0x301581f1
- (void)_removeRedDotCountForStoreFavorite:(id)storeFavorite;	// 0x301592f1
- (void)_resort;	// 0x3015825d
- (void)_setRedDotCount:(int)count forStoreFavorite:(id)storeFavorite;	// 0x30159279
- (BOOL)_setupAfterFavoritesFetch;	// 0x30157ed9
- (BOOL)_shouldShowRedDots;	// 0x30158841
- (void)_showDataChangedNotification:(id)notification;	// 0x301586cd
- (void)_showGrid;	// 0x30158a61
- (void)_showSpinner:(BOOL)spinner;	// 0x301588a9
- (id)_sortedFavorites;	// 0x30158071
- (void)_spinnerTimerFired:(id)fired;	// 0x3015898d
- (id)accessibilityScreenContent;	// 0x301599f1
- (void)controlWasActivated;	// 0x301574f1
- (void)controlWasDeactivated;	// 0x30157599
- (void)dealloc;	// 0x301573fd
- (BOOL)grid:(id)grid canMoveItemAtIndex:(long)index;	// 0x30157b6d
- (float)grid:(id)grid heightForItemAtIndex:(long)index;	// 0x30157c89
- (long)grid:(id)grid indexForItemID:(id)itemID;	// 0x30157b65
- (id)grid:(id)grid itemAtIndex:(long)index;	// 0x30157845
- (id)grid:(id)grid itemIDAtIndex:(long)index;	// 0x30157b61
- (void)grid:(id)grid moveItemAtIndex:(long)index toIndex:(long)index3;	// 0x30157b71
- (long)grid:(id)grid targetIndexForMoveFromItemAtIndex:(long)index toProposedIndex:(long)proposedIndex;	// 0x30157c95
- (BOOL)isNetworkDependent;	// 0x3015767d
- (void)layoutSubcontrols;	// 0x30157681
- (long)numberOfColumnsInGrid:(id)grid;	// 0x3015782d
- (long)numberOfItemsInGrid:(id)grid;	// 0x3015780d
- (void)setRearrangeInstructionsHidden:(BOOL)hidden;	// 0x30159041
- (void)wasPushed;	// 0x30157629
@end


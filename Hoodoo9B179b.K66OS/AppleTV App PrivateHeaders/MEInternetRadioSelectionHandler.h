/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRSelectionHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MEInternetRadioSelectionHandler.h"

@class NSTimer;

__attribute__((visibility("hidden")))
@interface MEInternetRadioSelectionHandler : XXUnknownSuperclass <BRSelectionHandler> {
	NSTimer *_waitTimer;	// 4 = 0x4
}
+ (id)selectionHandler;	// 0x81e61
- (void).cxx_destruct;	// 0x821fd
- (BOOL)handleSelectionForControl:(id)control;	// 0x81ef1
- (void)handleSelectionForFavorite:(id)favorite;	// 0x81e8d
@end

@interface MEInternetRadioSelectionHandler (Private)
- (void)_checkForFavoriteToLoad:(id)load;	// 0x82211
- (void)_handleSyncedRadioSelection:(id)selection;	// 0x82495
- (long)_indexForFavorite:(id)favorite withFavoriteAssetsTrackList:(id *)favoriteAssetsTrackList;	// 0x82331
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRSelectionHandler.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVCatalogHandler : NSObject <BRSelectionHandler> {
@private
	NSDictionary *_item;	// 4 = 0x4
}
- (void)_confirmAction:(int)action withObject:(id)object;	// 0x328c8749
- (void)_confirmActionResponse:(id)response;	// 0x328c9315
- (void)_downloadItem:(id)item;	// 0x328c9399
- (BOOL)_handleFavoriteListItemSelection:(id)selection listItem:(id)item;	// 0x328c84ed
- (void)_parentalControlPasscodeSuccessful:(id)successful;	// 0x328c9569
- (void)_playOrPauseAsset:(id)asset;	// 0x328c8319
- (void)_podcastItemSelected:(id)selected;	// 0x328c8449
- (void)_previewItemSelected:(id)selected;	// 0x328c83a1
- (void)_transactionConfirmedForItem:(id)item;	// 0x328c8f99
- (void)_warningForAction:(int)action withObject:(id)object;	// 0x328c85e1
- (void)_warningForActionResponse:(id)actionResponse;	// 0x328c8675
- (void)dealloc;	// 0x328c77bd
- (BOOL)handlePlayForControl:(id)control;	// 0x328c7cf5
- (BOOL)handleSelectionForControl:(id)control;	// 0x328c7839
- (BOOL)handleStoreOfferItemSelection:(id)selection;	// 0x328c7ef5
@end


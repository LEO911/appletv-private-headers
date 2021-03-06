/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PhotoController.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PhotoQueryController : PhotoController {
	NSMutableDictionary *_previews;	// 164 = 0xa4
	BOOL _refreshData;	// 168 = 0xa8
}
- (id)init;	// 0x72e99
- (void).cxx_destruct;	// 0x73f19
- (id)_createItemsQueryForCollection:(id)collection;	// 0x73f2d
- (id)_previewKeyForIndexPath:(id)indexPath;	// 0x74161
- (BOOL)dataClientUpdated:(id)updated;	// 0x72ffd
- (BOOL)dataQueryComplete:(id)complete;	// 0x72f11
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x7318d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x731d9
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x7330d
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x73bbd
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x736f5
- (void)playQueryComplete:(id)complete;	// 0x73d2d
- (BOOL)previewQueryComplete:(id)complete;	// 0x73acd
@end


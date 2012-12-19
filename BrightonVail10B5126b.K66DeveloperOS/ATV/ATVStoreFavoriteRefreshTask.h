/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRBackgroundTask.h"

@class ATVURLDocument, ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVStoreFavoriteRefreshTask : BRBackgroundTask {
	ATVStoreFavorite *_favorite;	// 44 = 0x2c
	ATVURLDocument *_curDocumentBeingFetched;	// 48 = 0x30
}
- (id)initWithFavorite:(id)favorite;	// 0x14df55
- (void)_catalogControlRequestProcessed:(id)processed;	// 0x14e255
- (void)_finalizePageRefresh:(id)refresh;	// 0x14e6b9
- (void)dealloc;	// 0x14dfcd
- (void)disable:(id)disable;	// 0x14e1d9
- (BOOL)perform:(id)perform;	// 0x14e049
- (void)stop;	// 0x14e219
@end

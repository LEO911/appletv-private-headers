/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BROptionDialog.h"

@class ATVStoreFavorite;

__attribute__((visibility("hidden")))
@interface ATVFavoriteUnavailableController : BROptionDialog {
@private
	ATVStoreFavorite *_favorite;	// 148 = 0x94
}
- (id)initWithStoreFavorite:(id)storeFavorite;	// 0x340a5801
- (void)_optionSelected:(id)selected;	// 0x340a5a25
- (id)_textForFavoriteType:(int)favoriteType;	// 0x340a59e5
- (void)dealloc;	// 0x340a5999
@end


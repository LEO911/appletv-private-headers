/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreMoreInfoProvider : NSObject <BRProvider> {
@private
	NSDictionary *_catalogItem;	// 4 = 0x4
	NSMutableArray *_items;	// 8 = 0x8
}
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x33982d65
- (id)initWithCatalogItem:(id)catalogItem;	// 0x33982da1
- (id)_flattenMoreInfoSection:(id)section;	// 0x33983055
- (void)_loadMoreInfoData;	// 0x33982f81
- (void)_loadMoreInfoFromURL:(id)url;	// 0x3398315d
- (void)_supplementalResponseReceived:(id)received;	// 0x339832ad
- (id)controlFactory;	// 0x33982f21
- (id)dataAtIndex:(long)index;	// 0x33982f5d
- (long)dataCount;	// 0x33982f3d
- (void)dealloc;	// 0x33982e91
- (id)hashForDataAtIndex:(long)index;	// 0x33982f7d
@end


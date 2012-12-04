/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFavorite.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVInternetRadioFavorite : ATVFavorite {
	NSString *_stationID;	// 16 = 0x10
	NSString *_collectionTitle;	// 20 = 0x14
}
@property(retain) id category;	// G=0x146bfd; S=0x146c0d; converted property
@property(retain) NSString *stationID;	// G=0x146c85; S=0x146c49; converted property
+ (void)_stationFoundInCategory:(id)category;	// 0x14673d
+ (id)favoriteFromAsset:(id)asset;	// 0x146931
+ (id)favoriteFromMediaItem:(id)mediaItem;	// 0x1469bd
+ (void)initialize;	// 0x1466c5
- (id)initWithDictionary:(id)dictionary;	// 0x146a09
- (id)_initWithMediaItem:(id)mediaItem;	// 0x146df1
- (void)_setItemIdForTitle:(id)title genre:(id)genre;	// 0x146ef1
// converted property getter: - (id)category;	// 0x146bfd
- (void)dealloc;	// 0x146aad
- (id)description;	// 0x146b8d
- (void)encodeWithDictionary:(id)dictionary;	// 0x146b11
- (BOOL)isPlayingOrPaused;	// 0x146c95
// converted property setter: - (void)setCategory:(id)category;	// 0x146c0d
// converted property setter: - (void)setStationID:(id)anId;	// 0x146c49
// converted property getter: - (id)stationID;	// 0x146c85
@end

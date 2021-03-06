/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPMediaItem.h"


@interface MPNondurableMediaItem : MPMediaItem {
	unsigned long long _persistentID;	// 4 = 0x4
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x36ce174d; converted property
+ (BOOL)canFilterByProperty:(id)property;	// 0x36ce17b5
+ (id)defaultPropertyValues;	// 0x36ce17b9
- (id)initWithCoder:(id)coder;	// 0x36ce1a21
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x36ce1709
- (void)clearBookmarkTime;	// 0x36ce17b1
- (void)dealloc;	// 0x36ce1769
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x36ce1795
- (void)encodeWithCoder:(id)coder;	// 0x36ce1a85
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x36ce1ac5
- (BOOL)existsInLibrary;	// 0x36ce1765
- (void)incrementPlayCountForPlayingToEnd;	// 0x36ce17a5
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x36ce17a9
- (void)incrementSkipCount;	// 0x36ce17a1
- (BOOL)isUsableAsRepresentativeItem;	// 0x36ce1b91
- (void)markNominalAmountHasBeenPlayed;	// 0x36ce1799
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x36ce179d
// converted property getter: - (unsigned long long)persistentID;	// 0x36ce174d
- (void)setValue:(id)value forKey:(id)key;	// 0x36ce19a5
- (void)updateLastUsedDateToCurrentDate;	// 0x36ce17ad
- (id)valueForProperty:(id)property;	// 0x36ce18b1
- (id)valuesForProperties:(id)properties;	// 0x36ce17bd
@end


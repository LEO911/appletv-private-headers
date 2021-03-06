/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPMediaItem.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSObject, NSMutableDictionary, MPMediaLibrary;
@protocol OS_dispatch_queue;

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying> {
	MPMediaLibrary *_library;	// 4 = 0x4
	unsigned long long _persistentID;	// 8 = 0x8
	NSMutableDictionary *_properties;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_propertyQueue;	// 20 = 0x14
	BOOL _cachesProperties;	// 24 = 0x18
}
@property(readonly, assign) unsigned long long persistentID;	// G=0x35004175; converted property
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)persistentID;	// 0x3500350d
+ (id)concreteMediaItemWithPersistentID:(unsigned long long)persistentID library:(id)library;	// 0x3500355d
+ (void)persistentID:(unsigned long long)anId didChange:(BOOL)change;	// 0x35003c35
- (id)init;	// 0x350034c1
- (id)initWithCoder:(id)coder;	// 0x35003e9d
- (id)initWithPersistentID:(unsigned long long)persistentID;	// 0x35003971
- (id)initWithPersistentID:(unsigned long long)persistentID library:(id)library;	// 0x350039bd
- (id)_initWithPersistentID:(unsigned long long)persistentID library:(id)library cachesProperties:(BOOL)properties;	// 0x35003a11
- (id)_nonBatchableOrCachedValueForProperty:(id)property needsFetch:(BOOL *)fetch;	// 0x3500418d
- (void)clearBookmarkTime;	// 0x350058a9
- (id)copyWithZone:(NSZone *)zone;	// 0x35003e8d
- (void)dealloc;	// 0x35003af9
- (void)delete;	// 0x35003d05
- (id)description;	// 0x35003e31
- (BOOL)didSkipWithPlayedToTime:(double)time;	// 0x35005691
- (void)encodeWithCoder:(id)coder;	// 0x35004039
- (void)enumerateValuesForProperties:(id)properties usingBlock:(id)block;	// 0x35005001
- (BOOL)existsInLibrary;	// 0x35004129
- (void)incrementPlayCountForPlayingToEnd;	// 0x350058c9
- (BOOL)incrementPlayCountForStopTime:(double)stopTime;	// 0x350058f9
- (void)incrementSkipCount;	// 0x350057a5
- (void)invalidate;	// 0x35003da1
- (void)markNominalAmountHasBeenPlayed;	// 0x3500563d
- (id)mediaLibrary;	// 0x35004165
- (double)nominalHasBeenPlayedThreshold;	// 0x35005651
- (void)noteWasPlayedToTime:(double)time skipped:(BOOL)skipped;	// 0x35005729
// converted property getter: - (unsigned long long)persistentID;	// 0x35004175
- (void)reallyIncrementPlayCount;	// 0x35005539
- (void)setValue:(id)value forProperty:(id)property;	// 0x35004e7d
- (void)updateLastUsedDateToCurrentDate;	// 0x350059e9
- (id)valueForProperty:(id)property;	// 0x3500458d
- (id)valuesForProperties:(id)properties;	// 0x350048a1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

@interface SSItemMedia : NSObject {
@private
	int _duration;	// 4 = 0x4
	int _fullDuration;	// 8 = 0x8
	long long _mediaFileSize;	// 12 = 0xc
	NSString *_mediaKind;	// 20 = 0x14
	BOOL _protected;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x33c8851d; @synthesize=_url
@property(readonly, assign, nonatomic) int durationInMilliseconds;	// G=0x33c884a1; @synthesize=_duration
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;	// G=0x33c884b1; @synthesize=_fullDuration
@property(readonly, assign, nonatomic) long long mediaFileSize;	// G=0x33c884c1; @synthesize=_mediaFileSize
@property(copy, nonatomic) NSString *mediaKind;	// G=0x33c884d9; S=0x33c884e9; @synthesize=_mediaKind
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;	// G=0x33c8850d; @synthesize=_protected
- (id)init;	// 0x33c8809d
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary;	// 0x33c8824d
// declared property getter: - (id)URL;	// 0x33c8851d
- (void)dealloc;	// 0x33c880dd
- (id)description;	// 0x33c8813d
// declared property getter: - (int)durationInMilliseconds;	// 0x33c884a1
// declared property getter: - (int)fullDurationInMilliseconds;	// 0x33c884b1
- (unsigned)hash;	// 0x33c881b5
- (BOOL)isEqual:(id)equal;	// 0x33c881d5
// declared property getter: - (BOOL)isProtectedMedia;	// 0x33c8850d
// declared property getter: - (long long)mediaFileSize;	// 0x33c884c1
// declared property getter: - (id)mediaKind;	// 0x33c884d9
// declared property setter: - (void)setMediaKind:(id)kind;	// 0x33c884e9
@end

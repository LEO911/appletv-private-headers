/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSURL, NSString;

@interface SSItemMedia : NSObject {
	int _duration;	// 4 = 0x4
	int _fullDuration;	// 8 = 0x8
	long long _mediaFileSize;	// 12 = 0xc
	NSString *_mediaKind;	// 20 = 0x14
	BOOL _protected;	// 24 = 0x18
	NSURL *_url;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x354c485d; @synthesize=_url
@property(readonly, assign, nonatomic) int durationInMilliseconds;	// G=0x354c47f1; @synthesize=_duration
@property(readonly, assign, nonatomic) int fullDurationInMilliseconds;	// G=0x354c4801; @synthesize=_fullDuration
@property(readonly, assign, nonatomic) long long mediaFileSize;	// G=0x354c4811; @synthesize=_mediaFileSize
@property(copy, nonatomic) NSString *mediaKind;	// G=0x354c4829; S=0x354c483d; @synthesize=_mediaKind
@property(readonly, assign, nonatomic, getter=isProtectedMedia) BOOL protectedMedia;	// G=0x354c484d; @synthesize=_protected
- (id)init;	// 0x354c43f9
- (id)initWithStoreOfferDictionary:(id)storeOfferDictionary;	// 0x354c45ad
// declared property getter: - (id)URL;	// 0x354c485d
- (void)dealloc;	// 0x354c4439
- (id)description;	// 0x354c449d
// declared property getter: - (int)durationInMilliseconds;	// 0x354c47f1
// declared property getter: - (int)fullDurationInMilliseconds;	// 0x354c4801
- (unsigned)hash;	// 0x354c4515
- (BOOL)isEqual:(id)equal;	// 0x354c4535
// declared property getter: - (BOOL)isProtectedMedia;	// 0x354c484d
// declared property getter: - (long long)mediaFileSize;	// 0x354c4811
// declared property getter: - (id)mediaKind;	// 0x354c4829
// declared property setter: - (void)setMediaKind:(id)kind;	// 0x354c483d
@end

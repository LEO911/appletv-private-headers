/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "LTTrickPlayAsset.h"

@class NSString, NSArray, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface LTImageTrickPlayAsset : LTTrickPlayAsset {
	NSArray *_frames;	// 12 = 0xc
	double _frameTimeDifferenceInSeconds;	// 16 = 0x10
	NSString *_frameFileNameFormat;	// 24 = 0x18
	float _frameCountMultipler;	// 28 = 0x1c
	BOOL _isEncrypted;	// 32 = 0x20
	BOOL _isReady;	// 33 = 0x21
	int _preloadedFilesOnEitherEnd;	// 36 = 0x24
	NSMutableIndexSet *_mutableActiveRequestsIndexSet;	// 40 = 0x28
	opaque_pthread_mutex_t _activeImageRequestMutex;	// 44 = 0x2c
}
@property(readonly, assign) double frameTimeDifferenceInSeconds;	// G=0x457bd5; converted property
@property(readonly, assign) BOOL isReady;	// G=0x457235; converted property
- (id)initWithAsset:(id)asset;	// 0x457029
- (id)initWithAsset:(id)asset andMerchant:(id)merchant;	// 0x45703d
- (void).cxx_destruct;	// 0x457bed
- (id)URLForTime:(double)time;	// 0x457305
- (id)URLsForTime:(double)time;	// 0x45737d
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4573ed
- (id)URLsForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount atInterval:(int)interval;	// 0x457419
- (id)URLsForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4573bd
- (void)_fetchTrackConfigFileAtURL:(id)url forMerchant:(id)merchant;	// 0x457c35
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL;	// 0x458549
- (id)_loadImageURLsForCount:(unsigned)count forBaseURL:(id)baseURL isOneBasedNamingScheme:(BOOL)scheme;	// 0x45856d
- (void)_setTrackConfig:(id)config;	// 0x457f55
- (void)_trackConfigFileReady:(id)ready;	// 0x457db9
- (void)cancelPriorImageLoadsFromTime:(double)time direction:(int)direction;	// 0x457595
- (void)dealloc;	// 0x456f8d
- (id)firstImageFromURLs:(id)urls;	// 0x457839
// converted property getter: - (double)frameTimeDifferenceInSeconds;	// 0x457bd5
- (id)imageForTime:(double)time;	// 0x45773d
- (id)imageForTime:(double)time direction:(int)direction;	// 0x45779d
- (id)imageForTime:(double)time direction:(int)direction withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x4577dd
- (id)imageForTime:(double)time withPreloadedImageURLsCount:(unsigned)preloadedImageURLsCount;	// 0x45776d
- (unsigned)indexForTime:(double)time;	// 0x457245
// converted property getter: - (BOOL)isReady;	// 0x457235
@end


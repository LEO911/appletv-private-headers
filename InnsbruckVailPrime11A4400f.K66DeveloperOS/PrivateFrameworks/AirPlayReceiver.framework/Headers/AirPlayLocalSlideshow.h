/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import "AirPlayReceiver-Structs.h"
#import </libobjc.A.h>
#import "MPAssetKeyDelegate.h"

@class NSLock, CALayer, MPDocument, MRMarimbaLayer, NSDictionary, NSMutableDictionary, NSData, MediaControlServer;

__attribute__((visibility("hidden")))
@interface AirPlayLocalSlideshow : NSObject <MPAssetKeyDelegate> {
	NSLock *_lock;	// 4 = 0x4
	MediaControlServer *_server;	// 8 = 0x8
	unsigned _serverSessionID;	// 12 = 0xc
	CALayer *_presentationLayer;	// 16 = 0x10
	MPDocument *_marimbaDocument;	// 20 = 0x14
	MRMarimbaLayer *_marimbaLayer;	// 24 = 0x18
	unsigned char _sessionUUID[16];	// 28 = 0x1c
	NSDictionary *_settings;	// 44 = 0x2c
	int _state;	// 48 = 0x30
	NSMutableDictionary *_assets;	// 52 = 0x34
	unsigned _nextAssetIndex;	// 56 = 0x38
	BOOL _hasMoreAssets;	// 60 = 0x3c
	BOOL _endPending;	// 61 = 0x3d
	int _outstandingCount;	// 64 = 0x40
	double _startTime;	// 68 = 0x44
	double _lastRequestTime;	// 76 = 0x4c
	double _lastRemoveTime;	// 84 = 0x54
	NSData *_firstImageData;	// 92 = 0x5c
}
+ (id)slideshowFeaturesWithLanguage:(id)language;	// 0x2ff3a369
- (id)initWithServer:(id)server;	// 0x2ff3a185
- (id)_assetForAssetKey:(id)assetKey;	// 0x2ff3cc05
- (unsigned)_bufferedAssetCount;	// 0x2ff3cdb1
- (id)_copyImageForAssetKey:(id)assetKey decode:(BOOL)decode;	// 0x2ff3ccfd
- (id)_oldestAsset;	// 0x2ff3ce99
- (void)_playbackConsumedAssetKey:(id)key;	// 0x2ff3c929
- (void)_playbackEnded:(id)ended;	// 0x2ff3c9e9
- (void)_playbackPrefetch;	// 0x2ff3be69
- (void)_playbackPrefetchDone;	// 0x2ff3c2cd
- (void)_playbackProducedAssetData:(id)data withAssetInfo:(id)assetInfo;	// 0x2ff3c6d1
- (void)_playbackRunStateMachine;	// 0x2ff3bd9d
- (void)_playbackSlideChanged:(id)changed;	// 0x2ff3ca49
- (void)_playbackStart;	// 0x2ff3b4dd
- (void)_playbackStop;	// 0x2ff3b885
- (void)_playbackUserNext:(id)next;	// 0x2ff3d5f5
- (void)_playbackUserPlayPause:(id)pause;	// 0x2ff3d4c9
- (void)_playbackUserPrevious:(id)previous;	// 0x2ff3d615
- (void)_playbackUserStop:(id)stop;	// 0x2ff3d4e9
- (void)_postProgressEvent:(id)event;	// 0x2ff3d381
- (void)_pruneAssets;	// 0x2ff3cfd1
- (id)absolutePathForAssetKey:(id)assetKey;	// 0x2ff3b0d5
- (id)absolutePathForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x2ff3b129
- (id)absolutePathForStillAssetAtPath:(id)path andSize:(CGSize)size;	// 0x2ff3b199
- (void)dealloc;	// 0x2ff3a221
- (id)imageDataForAssetKey:(id)assetKey andSize:(CGSize)size;	// 0x2ff3b209
- (CGSize)resolutionForAssetKey:(id)assetKey;	// 0x2ff3b3ed
- (void)setPresentationLayer:(id)layer;	// 0x2ff3a31d
- (void)setServerSessionID:(unsigned)anId;	// 0x2ff3a359
- (id)slideshowInfo;	// 0x2ff3aec1
- (id)startSlideshowWithInfo:(id)info error:(id *)error;	// 0x2ff3af2d
- (id)stopSlideshowWithInfo:(id)info error:(id *)error;	// 0x2ff3b051
@end

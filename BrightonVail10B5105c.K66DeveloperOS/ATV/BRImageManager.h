/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableDictionary, NSString, NSObject, BRAsyncTaskContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRImageManager : XXUnknownSuperclass {
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSObject<OS_dispatch_queue> *_imagesAccessQueue;	// 52 = 0x34
	NSMutableDictionary *_images;	// 56 = 0x38
	NSMutableDictionary *_remoteImageRequests;	// 60 = 0x3c
	NSLock *_remoteImageLock;	// 64 = 0x40
	NSObject<OS_dispatch_queue> *_loadJobAccessQueue;	// 68 = 0x44
	NSMutableDictionary *_loadJobs;	// 72 = 0x48
	NSObject<OS_dispatch_queue> *_pendingImageWriteQueue;	// 76 = 0x4c
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 80 = 0x50
	BOOL _processJobs;	// 84 = 0x54
	BRAsyncTaskContext *_writeTaskContext;	// 88 = 0x58
	int _pruneCount;	// 92 = 0x5c
}
@property(assign, nonatomic) int pruneCount;	// G=0x39b825; S=0x39b835; @synthesize=_pruneCount
+ (id)fullScreenImageResizingOptions;	// 0x399099
+ (id)generalPurposeManager;	// 0x39988d
+ (id)screenSaverManager;	// 0x3999e5
+ (id)trickPlayManager;	// 0x399af5
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x399129
- (void)_ATVDataImageAvailable:(id)available;	// 0x39da49
- (void)_addLoadJobToQueue:(id)queue;	// 0x39beb9
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x39b985
- (id)_cachedCommonImagePathForImageIDKey:(id)imageIDKey extension:(id)extension;	// 0x39d835
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x39d7d9
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x39d73d
- (id)_cachedOriginalImagePathForImageID:(id)imageID extension:(id)extension;	// 0x39d6ed
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x39d77d
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x39d6fd
- (void)_checkCache;	// 0x39d499
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x39d449
- (id)_defaultResizingImageOptions;	// 0x39c781
- (id)_extensionForImageID:(id)imageID;	// 0x39d9c1
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x39d881
- (void)_imageLoadFailed:(id)failed;	// 0x39d091
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x39ce09
- (id)_imageRecordForName:(id)name;	// 0x39b845
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x39d3e5
- (void)_maintainImageCache;	// 0x39c989
- (void)_performWriteJob:(id)job;	// 0x39bd1d
- (void)_postUnavailableImageNotification:(id)notification;	// 0x39d239
- (void)_postUpdateNotification:(id)notification;	// 0x39d201
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x39d2a5
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x39dc31
- (void)_removeCacheFile:(id)file;	// 0x39c94d
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x39bfe9
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x39c811
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x39bc3d
- (void)_scheduleMaintainCache;	// 0x39d59d
- (void)_startWriteJob:(id)job;	// 0x39bba5
- (void)_terminateNotification:(id)notification;	// 0x39d611
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x39c0d9
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x39d679
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x39c25d
- (id)cachePath;	// 0x39b7f9
- (float)cacheSize;	// 0x39b809
- (id)cachedPathForImageID:(id)imageID;	// 0x39b68d
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x39a081
- (void)dealloc;	// 0x399761
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x39a8e1
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x39a915
- (BOOL)hasRemoteImageBeenRequestedForMediaID:(id)mediaID;	// 0x39b3fd
- (id)imageNameFromURL:(id)url;	// 0x399cd1
- (id)imageNamed:(id)named;	// 0x39a6cd
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x39a2b1
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x39a68d
- (BOOL)isImageAvailable:(id)available;	// 0x399bf9
- (BOOL)isImageAvailable:(id)available croppedToSize:(CGSize)size;	// 0x399c95
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x399c59
- (BOOL)isImageWritten:(id)written;	// 0x399c41
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x39a0d5
- (id)loadImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent writeToCache:(BOOL)cache;	// 0x399fdd
// declared property getter: - (int)pruneCount;	// 0x39b825
- (void)purge;	// 0x39b7e5
- (void)purgeAndRemoveDirectory;	// 0x39b7d1
- (void)purgeRemoteRequest;	// 0x39b555
- (id)reallyWriteImageFromURL:(id)url imageID:(id)anId;	// 0x399e45
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId;	// 0x39b0bd
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId withResizingOptions:(id)resizingOptions;	// 0x39b0f9
- (void)receivedRemoteITunesImage:(id)image forID:(id)anId;	// 0x39af55
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x39b295
- (void)remoteImageRequestForMediaID:(id)mediaID;	// 0x39adb5
// declared property setter: - (void)setPruneCount:(int)count;	// 0x39b835
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x39a249
- (id)writeEncryptedImageFromURL:(id)url;	// 0x399d99
- (void)writeImage:(id)image named:(id)named;	// 0x39a125
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x39a149
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x399d15
- (id)writeImageFromURL:(id)url;	// 0x399d7d
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x399ded
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x399e1d
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x39a1a5
@end

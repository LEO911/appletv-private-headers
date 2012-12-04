/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BRAsyncTaskContext, NSLock, NSString, NSMutableDictionary, NSObject;
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
@property(assign, nonatomic) int pruneCount;	// G=0x3a0ec1; S=0x3a0ed1; @synthesize=_pruneCount
+ (id)fullScreenImageResizingOptions;	// 0x39e599
+ (id)generalPurposeManager;	// 0x39ed8d
+ (id)screenSaverManager;	// 0x39eee5
+ (id)trickPlayManager;	// 0x39eff5
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x39e629
- (void)_ATVDataImageAvailable:(id)available;	// 0x3a31e1
- (void)_addLoadJobToQueue:(id)queue;	// 0x3a1555
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x3a1021
- (id)_cachedCommonImagePathForImageIDKey:(id)imageIDKey extension:(id)extension;	// 0x3a2fcd
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x3a2f71
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x3a2ed5
- (id)_cachedOriginalImagePathForImageID:(id)imageID extension:(id)extension;	// 0x3a2e85
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x3a2f15
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size extension:(id)extension;	// 0x3a2e95
- (void)_checkCache;	// 0x3a2c31
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x3a2be1
- (id)_defaultResizingImageOptions;	// 0x3a1f19
- (id)_extensionForImageID:(id)imageID;	// 0x3a3159
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x3a3019
- (void)_imageLoadFailed:(id)failed;	// 0x3a2829
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x3a25a1
- (id)_imageRecordForName:(id)name;	// 0x3a0ee1
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x3a2b7d
- (void)_maintainImageCache;	// 0x3a2121
- (void)_performWriteJob:(id)job;	// 0x3a13b9
- (void)_postUnavailableImageNotification:(id)notification;	// 0x3a29d1
- (void)_postUpdateNotification:(id)notification;	// 0x3a2999
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x3a2a3d
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x3a33c9
- (void)_removeCacheFile:(id)file;	// 0x3a20e5
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x3a1685
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x3a1fa9
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x3a12d9
- (void)_scheduleMaintainCache;	// 0x3a2d35
- (void)_startWriteJob:(id)job;	// 0x3a1241
- (void)_terminateNotification:(id)notification;	// 0x3a2da9
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x3a1775
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x3a2e11
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x3a18f9
- (id)cachePath;	// 0x3a0e95
- (float)cacheSize;	// 0x3a0ea5
- (id)cachedPathForImageID:(id)imageID;	// 0x3a0d29
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x39f581
- (void)dealloc;	// 0x39ec61
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x39ff7d
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x39ffb1
- (BOOL)hasRemoteImageBeenRequestedForMediaID:(id)mediaID;	// 0x3a0a99
- (id)imageNameFromURL:(id)url;	// 0x39f1d1
- (id)imageNamed:(id)named;	// 0x39fd69
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x39f94d
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x39fd29
- (BOOL)isImageAvailable:(id)available;	// 0x39f0f9
- (BOOL)isImageAvailable:(id)available croppedToSize:(CGSize)size;	// 0x39f195
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x39f159
- (BOOL)isImageWritten:(id)written;	// 0x39f141
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x39f5d5
- (id)loadImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent writeToCache:(BOOL)cache;	// 0x39f4dd
// declared property getter: - (int)pruneCount;	// 0x3a0ec1
- (void)purge;	// 0x3a0e81
- (void)purgeAndRemoveDirectory;	// 0x3a0e6d
- (void)purgeRemoteRequest;	// 0x3a0bf1
- (id)reallyWriteImageFromURL:(id)url imageID:(id)anId;	// 0x39f345
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId;	// 0x3a0759
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId withResizingOptions:(id)resizingOptions;	// 0x3a0795
- (void)receivedRemoteITunesImage:(id)image forID:(id)anId;	// 0x3a05f1
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x3a0931
- (void)remoteImageRequestForMediaID:(id)mediaID;	// 0x3a0451
// declared property setter: - (void)setPruneCount:(int)count;	// 0x3a0ed1
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x39f8e5
- (id)writeEncryptedImageFromURL:(id)url;	// 0x39f299
- (void)writeImage:(id)image named:(id)named;	// 0x39f625
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x39f649
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x39f215
- (id)writeImageFromURL:(id)url;	// 0x39f27d
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x39f2ed
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x39f31d
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x39f841
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSLock, NSMutableArray, NSString, NSMutableDictionary, BRAsyncTaskContext;

@interface BRImageManager : NSObject {
@private
	unsigned long long _maxCacheSize;	// 4 = 0x4
	unsigned long long _cacheSize;	// 12 = 0xc
	unsigned long long _maxCacheCount;	// 20 = 0x14
	unsigned long long _cacheCount;	// 28 = 0x1c
	unsigned long long _cacheSizePurgeThreshhold;	// 36 = 0x24
	BOOL _cachePurging;	// 44 = 0x2c
	BOOL _purgeCacheOnLoadAndQuit;	// 45 = 0x2d
	BOOL _disableAccessDateUpdates;	// 46 = 0x2e
	NSString *_imageCachePath;	// 48 = 0x30
	NSMutableDictionary *_images;	// 52 = 0x34
	NSMutableDictionary *_remoteImageRequests;	// 56 = 0x38
	NSLock *_remoteImageLock;	// 60 = 0x3c
	NSMutableArray *_jobQueue;	// 64 = 0x40
	NSMutableDictionary *_pendingCachedImagesToFlush;	// 68 = 0x44
	BOOL _processJobs;	// 72 = 0x48
	BRAsyncTaskContext *_loadTaskContext;	// 76 = 0x4c
	BRAsyncTaskContext *_writeTaskContext;	// 80 = 0x50
	NSMutableArray *_activeDelegates;	// 84 = 0x54
	int _pruneCount;	// 88 = 0x58
}
+ (id)fullScreenImageResizingOptions;	// 0x35ec2ee5
+ (id)generalPurposeManager;	// 0x35ec36c9
+ (id)screenSaverManager;	// 0x35ec3825
+ (id)trickPlayManager;	// 0x35ec3935
- (id)initWithCachePath:(id)cachePath purgeCacheOnLoadAndQuit:(BOOL)quit maxCacheSizeInMB:(unsigned long long)mb maxCacheCount:(unsigned long long)count cacheSizePurgeThreshholdInMB:(unsigned long long)mb5 pruneCount:(int)count6 disableAccessDateUpdates:(BOOL)updates;	// 0x35ec2f75
- (void)_ATVDataImageAvailable:(id)available;	// 0x35ec8241
- (void)_addLoadJobToQueue:(id)queue;	// 0x35ec5f7d
- (void)_addWriteJobToQueue:(id)queue withImageID:(id)imageID height:(int)height width:(int)width cropped:(BOOL)cropped;	// 0x35ec5a31
- (id)_cachedCroppedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x35ec8065
- (id)_cachedCroppedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x35ec7f49
- (id)_cachedOriginalImagePathForImageID:(id)imageID;	// 0x35ec7df1
- (id)_cachedResizedImageKeyForImageID:(id)imageID forSize:(CGSize)size;	// 0x35ec8005
- (id)_cachedResizedImagePathForImageID:(id)imageID forSize:(CGSize)size;	// 0x35ec7e8d
- (void)_checkCache;	// 0x35ec7999
- (void)_decrementCacheSize:(unsigned long long)size;	// 0x35ec7951
- (id)_defaultResizingImageOptions;	// 0x35ec6d81
- (id)_extensionForImageID:(id)imageID;	// 0x35ec81ad
- (id)_imageFromWriteQueue:(id)writeQueue;	// 0x35ec80c5
- (void)_imageLoadFailed:(id)failed;	// 0x35ec760d
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x35ec72a1
- (void)_incrementCacheSize:(unsigned long long)size;	// 0x35ec78f5
- (BOOL)_isLoadJobQueued:(id)queued;	// 0x35ec7b11
- (void)_maintainImageCache;	// 0x35ec6f99
- (void)_performLoadJob:(id)job;	// 0x35ec6261
- (void)_performWriteJob:(id)job;	// 0x35ec5dd9
- (void)_postUnavailableImageNotification:(id)notification;	// 0x35ec7755
- (void)_postUpdateNotification:(id)notification;	// 0x35ec771d
- (void)_postWriteCompletedNotification:(id)notification size:(CGSize)size cropped:(BOOL)cropped;	// 0x35ec77c1
- (void)_purgeRemoveDirectory:(BOOL)directory;	// 0x35ec8421
- (id)_queuedLoadJobWithName:(id)name;	// 0x35ec7bb9
- (void)_removeCacheFile:(id)file;	// 0x35ec6f5d
- (void)_removeLoadJobFromQueue:(id)queue;	// 0x35ec613d
- (void)_removeRemoteImageRequestNamed:(id)named;	// 0x35ec6e11
- (void)_removeWriteJobFromQueue:(id)queue;	// 0x35ec5cf5
- (void)_scheduleMaintainCache;	// 0x35ec7a9d
- (void)_startLoadJob:(id)job;	// 0x35ec60ad
- (void)_startWriteJob:(id)job;	// 0x35ec5c5d
- (void)_terminateNotification:(id)notification;	// 0x35ec7d15
- (BOOL)_updateExistingImageRecord:(id)record;	// 0x35ec668d
- (id)_writeIDForImageID:(id)imageID cropped:(BOOL)cropped size:(CGSize)size;	// 0x35ec7d7d
- (void)_writeImage:(id)image named:(id)named forSize:(CGSize)size cropped:(BOOL)cropped;	// 0x35ec67b1
- (id)absolutePathForImageID:(id)imageID;	// 0x35ec59cd
- (id)cachePath;	// 0x35ec5a05
- (float)cacheSize;	// 0x35ec5a15
- (void)cancelWriteForImageWithURL:(id)url imageID:(id)anId;	// 0x35ec3e51
- (void)dealloc;	// 0x35ec35ad
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk;	// 0x35ec4c9d
- (id)downSampleImage:(id)image name:(id)name scaledToSize:(CGSize)size writeToDisk:(BOOL)disk original:(BOOL)original rotate:(BOOL)rotate;	// 0x35ec4cd1
- (BOOL)hasRemoteImageBeenRequestedForMediaID:(id)mediaID;	// 0x35ec5721
- (id)imageNameFromURL:(id)url;	// 0x35ec3bb5
- (id)imageNamed:(id)named;	// 0x35ec4a55
- (id)imageNamed:(id)named croppedToSize:(CGSize)size create:(BOOL)create;	// 0x35ec4521
- (id)imageNamed:(id)named scaledToSize:(CGSize)size;	// 0x35ec4a19
- (BOOL)isImageAvailable:(id)available;	// 0x35ec3a39
- (BOOL)isImageAvailable:(id)available croppedToSize:(CGSize)size;	// 0x35ec3b79
- (BOOL)isImageAvailable:(id)available scaledToSize:(CGSize)size;	// 0x35ec3b3d
- (BOOL)isImageWritten:(id)written;	// 0x35ec3b25
- (id)loadImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x35ec3eb9
- (void)moveImageFromPath:(id)path imageID:(id)anId;	// 0x35ec418d
- (void)purge;	// 0x35ec59f1
- (void)purgeAndRemoveDirectory;	// 0x35ec59dd
- (void)purgeRemoteRequest;	// 0x35ec5885
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId;	// 0x35ec53e1
- (BOOL)receiveRemoteImageURL:(id)url forID:(id)anId withResizingOptions:(id)resizingOptions;	// 0x35ec541d
- (void)receivedRemoteITunesImage:(id)image forID:(id)anId;	// 0x35ec5289
- (void)receivedRemoteImage:(id)image forID:(id)anId;	// 0x35ec55c1
- (void)remoteImageRequestForMediaID:(id)mediaID;	// 0x35ec50d5
- (void)writeCroppedImage:(id)image named:(id)named;	// 0x35ec4119
- (id)writeEncryptedImageFromURL:(id)url;	// 0x35ec3c6d
- (void)writeImage:(id)image named:(id)named;	// 0x35ec3ff1
- (void)writeImage:(id)image named:(id)named asynchronous:(BOOL)asynchronous;	// 0x35ec4015
- (id)writeImageFromImageProxy:(id)imageProxy;	// 0x35ec3be5
- (id)writeImageFromURL:(id)url;	// 0x35ec3c4d
- (id)writeImageFromURL:(id)url decryptionAgent:(id)agent;	// 0x35ec3cc1
- (id)writeImageFromURL:(id)url headerFields:(id)fields decryptionAgent:(id)agent;	// 0x35ec3ce5
- (id)writeImageFromURL:(id)url imageID:(id)anId headerFields:(id)fields decryptionAgent:(id)agent;	// 0x35ec3d09
- (void)writeScaledImage:(id)image named:(id)named withSize:(CGSize)size;	// 0x35ec406d
@end


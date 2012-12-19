/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/YouTubeATV.framework/YouTubeATV
 */

#import "YouTubeATV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSNotificationCenter, NSTimer, NSLock, NSMutableArray, NSMutableSet;

@interface YTImageLoader : NSObject {
	NSLock *_queueLock;	// 4 = 0x4
	NSMutableArray *_loadQueue;	// 8 = 0x8
	NSMutableSet *_loadsInProgress;	// 12 = 0xc
	NSLock *_cacheLock;	// 16 = 0x10
	NSMutableDictionary *_imageCache;	// 20 = 0x14
	NSMutableDictionary *_roundedThumbnailImageCache;	// 24 = 0x18
	NSMutableDictionary *_largeThumbnailImageCache;	// 28 = 0x1c
	NSMutableDictionary *_pluginImageCache;	// 32 = 0x20
	NSMutableArray *_imageCacheLRU;	// 36 = 0x24
	CFRunLoopRef _loaderRunLoop;	// 40 = 0x28
	CFRunLoopSourceRef _loaderSource;	// 44 = 0x2c
	NSNotificationCenter *_notificationCenter;	// 48 = 0x30
	NSTimer *_loadStatusNotificationTimer;	// 52 = 0x34
	opaque_pthread_mutex_t _startupLock;	// 56 = 0x38
	opaque_pthread_cond_t _startupCondition;	// 100 = 0x64
}
@property(readonly, retain) NSNotificationCenter *notificationCenter;	// G=0x3670333d; converted property
+ (id)sharedImageLoader;	// 0x36702835
- (id)init;	// 0x3670287d
- (void)_imageLoadFinished:(id)finished;	// 0x36704161
- (CGImageRef)_largeThumbnailOverlay;	// 0x36702d4d
- (void)_loadImageURL:(id)url videoID:(id)anId;	// 0x36703b8d
- (void)_loadingStatusChanged;	// 0x36703779
- (BOOL)_locked_URLIsLoading:(id)loading;	// 0x36703a1d
- (void)_locked_imageLoadStarted:(id)started;	// 0x36704141
- (id)_locked_loadImageCache:(id)cache;	// 0x36704339
- (void)_locked_loadImageForURL:(id)url videoID:(id)anId;	// 0x36703add
- (id)_locked_saveImageCache:(id)cache;	// 0x367041d1
- (void)_mainThread_postLoadingStatusChanged;	// 0x367036cd
- (void)_postImageLoadedNotification:(id)notification;	// 0x367040dd
- (void)_postLoadingStatusChanged;	// 0x36703711
- (void)_setImageData:(id)data videoID:(id)anId forURL:(id)url cacheLocked:(BOOL)locked;	// 0x36703c41
- (void)_startLoader;	// 0x367037f9
- (CGImageRef)createRoundedThumbnailWithImage:(CGImageRef)image;	// 0x36702c11
- (CGImageRef)createSheenedThumbnailWithImage:(CGImageRef)image overlay:(CGImageRef)overlay width:(int)width height:(int)height;	// 0x36702dd1
- (CGImageRef)imageForURL:(id)url rounded:(BOOL)rounded videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x36702ebd
- (BOOL)isLoadingImages;	// 0x36702a5d
- (CGImageRef)largeImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x3670306d
- (void)loadCache:(id)cache;	// 0x367034dd
// converted property getter: - (id)notificationCenter;	// 0x3670333d
- (CGImageRef)pluginImageForURL:(id)url videoID:(id)anId loadIfAbsent:(BOOL)absent;	// 0x3670320d
- (void)saveCache:(id)cache;	// 0x3670338d
@end

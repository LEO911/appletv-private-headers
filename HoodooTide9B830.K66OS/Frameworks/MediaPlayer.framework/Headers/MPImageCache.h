/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library
#import "MediaPlayer-Structs.h"
#import "MPImageRequestDelegate.h"

@class NSOperationQueue, CPLRUDictionary;
@protocol MPImageCacheDelegate;

@interface MPImageCache : NSObject <MPImageRequestDelegate> {
@private
	CPLRUDictionary *_cachedImages;	// 4 = 0x4
	dispatch_queue_s *_cachedImagesQueue;	// 8 = 0x8
	unsigned _cacheSize;	// 12 = 0xc
	id<MPImageCacheDelegate> _delegate;	// 16 = 0x10
	NSOperationQueue *_operationQueue;	// 20 = 0x14
	int _retainCount;	// 24 = 0x18
}
@property(assign, nonatomic) unsigned cacheSize;	// G=0x346d3f2d; S=0x346d34f1; @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// G=0x346d3f3d; S=0x346d3f4d; @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x346d35e1; S=0x346d3605; 
+ (id)sharedImageCache;	// 0x346d3161
- (id)init;	// 0x346d2d49
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x346d381d
- (id)_cachedImageForKey:(id)key;	// 0x346d3949
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x346d37bd
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x346d380d
- (void)_enqueueRequest:(id)request;	// 0x346d3b99
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x346d3241
- (BOOL)_isDeallocating;	// 0x346d2d1d
- (BOOL)_tryRetain;	// 0x346d2cc1
- (void)_zapCache;	// 0x346d3d75
- (void)_zapCachedPlaceholders;	// 0x346d3c25
// declared property getter: - (unsigned)cacheSize;	// 0x346d3f2d
- (id)cachedImageForRequest:(id)request;	// 0x346d3211
- (void)cancelAllImageRequests;	// 0x346d3631
- (void)dealloc;	// 0x346d2f99
// declared property getter: - (id)delegate;	// 0x346d3f3d
- (id)imageForRequest:(id)request error:(id *)error;	// 0x346d3355
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;	// 0x346d3e01
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;	// 0x346d3e25
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x346d3651
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x346d36f1
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x346d35e1
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x346d342d
- (oneway void)release;	// 0x346d2c0d
- (id)retain;	// 0x346d2bd5
- (unsigned)retainCount;	// 0x346d2cad
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x346d34f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x346d3f4d
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x346d3605
@end


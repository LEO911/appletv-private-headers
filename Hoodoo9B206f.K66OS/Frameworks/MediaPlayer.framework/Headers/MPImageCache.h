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
@property(assign, nonatomic) unsigned cacheSize;	// G=0x303dcf2d; S=0x303dc4f1; @synthesize=_cacheSize
@property(assign, nonatomic) id<MPImageCacheDelegate> delegate;	// G=0x303dcf3d; S=0x303dcf4d; @synthesize=_delegate
@property(assign, nonatomic) BOOL imageRequestsSuspended;	// G=0x303dc5e1; S=0x303dc605; 
+ (id)sharedImageCache;	// 0x303dc161
- (id)init;	// 0x303dbd49
- (void)_cacheImage:(id)image forKey:(id)key;	// 0x303dc81d
- (id)_cachedImageForKey:(id)key;	// 0x303dc949
- (void)_didEnterBackgroundNotification:(id)notification;	// 0x303dc7bd
- (void)_didReceiveMemoryWarningNotification:(id)notification;	// 0x303dc80d
- (void)_enqueueRequest:(id)request;	// 0x303dcb99
- (id)_imageByApplyingModificationsForCachedImageForRequest:(id)request;	// 0x303dc241
- (BOOL)_isDeallocating;	// 0x303dbd1d
- (BOOL)_tryRetain;	// 0x303dbcc1
- (void)_zapCache;	// 0x303dcd75
- (void)_zapCachedPlaceholders;	// 0x303dcc25
// declared property getter: - (unsigned)cacheSize;	// 0x303dcf2d
- (id)cachedImageForRequest:(id)request;	// 0x303dc211
- (void)cancelAllImageRequests;	// 0x303dc631
- (void)dealloc;	// 0x303dbf99
// declared property getter: - (id)delegate;	// 0x303dcf3d
- (id)imageForRequest:(id)request error:(id *)error;	// 0x303dc355
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary;	// 0x303dce01
- (id)imageForRequest:(id)request fetchIfNecessary:(BOOL)necessary waitUntilFetched:(BOOL)fetched;	// 0x303dce25
- (void)imageRequest:(id)request failedWithError:(id)error;	// 0x303dc651
- (void)imageRequest:(id)request loadedImage:(id)image;	// 0x303dc6f1
// declared property getter: - (BOOL)imageRequestsSuspended;	// 0x303dc5e1
- (void)loadImageForRequest:(id)request asynchronously:(BOOL)asynchronously completionHandler:(id)handler;	// 0x303dc42d
- (oneway void)release;	// 0x303dbc0d
- (id)retain;	// 0x303dbbd5
- (unsigned)retainCount;	// 0x303dbcad
// declared property setter: - (void)setCacheSize:(unsigned)size;	// 0x303dc4f1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x303dcf4d
// declared property setter: - (void)setImageRequestsSuspended:(BOOL)suspended;	// 0x303dc605
@end

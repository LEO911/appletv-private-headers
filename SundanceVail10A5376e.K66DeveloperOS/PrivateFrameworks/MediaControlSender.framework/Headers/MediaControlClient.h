/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MediaControlSender.framework/MediaControlSender
 */

#import "MediaControlSender-Structs.h"
#import <NSObject.h> // Unknown library

@protocol OS_dispatch_queue;

@interface MediaControlClient : NSObject {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	MediaControlClientImp *_client;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_eventHandlerQueue;	// 12 = 0xc
	id _eventHandlerBlock;	// 16 = 0x10
}
- (id)init;	// 0x335b4299
- (void)activateResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;	// 0x335b5ce9
- (void)addResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;	// 0x335b5921
- (void)addResourceData:(id)data mimeType:(id)type uuid:(id)uuid completionQueue:(id)queue completionBlock:(id)block;	// 0x335b5381
- (void)addResourceFile:(id)file mimeType:(id)type uuid:(id)uuid completionQueue:(id)queue completionBlock:(id)block;	// 0x335b56c1
- (void)authorizeWithPICRequest:(id)picrequest completionQueue:(id)queue completionBlock:(id)block;	// 0x335b6555
- (void)checkAuthentication;	// 0x335b4439
- (void)dealloc;	// 0x335b4315
- (void)ensureConnected;	// 0x335b45f5
- (void)ensureDisconnected;	// 0x335b4671
- (void)getPlaybackInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b73f5
- (void)getPositionWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b75e1
- (void)getProperty:(id)property qualifier:(id)qualifier completionQueue:(id)queue completionBlock:(id)block;	// 0x335b4f7d
- (void)getSlideshowFeaturesWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b5ee1
- (void)getSlideshowInfoWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b6151
- (void)getVolumeWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b7b19
- (MediaControlClientImp *)internalClient;	// 0x3359831d
- (void)invalidate;	// 0x335b43a9
- (void)performRemoteAction:(id)action withParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x335b46f1
- (void)playRemoteWithParams:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x335b6d1d
- (void)playWithLocalFilePath:(id)localFilePath params:(id)params completionQueue:(id)queue completionBlock:(id)block;	// 0x335b687d
- (void)playWithLocalFilePath:(id)localFilePath startPosition:(float)position playInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x335b6a79
- (void)playWithRemoteURL:(id)remoteURL startPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x335b6eed
- (void)removeResource:(id)resource completionQueue:(id)queue completionBlock:(id)block;	// 0x335b5af1
- (void)sendPhotoData:(id)data completionQueue:(id)queue completionBlock:(id)block;	// 0x335b4d49
- (void)sendPhotoData:(id)data options:(id)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b4d6d
- (void)setEventHandlerQueue:(id)queue eventHandlerBlock:(id)block;	// 0x335b4965
- (void)setHost:(id)host;	// 0x335b445d
- (void)setPassword:(id)password;	// 0x335b4529
- (void)setPosition:(float)position completionQueue:(id)queue completionBlock:(id)block;	// 0x335b7799
- (void)setProperty:(id)property qualifier:(id)qualifier value:(id)value completionQueue:(id)queue completionBlock:(id)block;	// 0x335b5179
- (void)setRate:(float)rate completionQueue:(id)queue completionBlock:(id)block;	// 0x335b7959
- (void)setSlideshowInfo:(id)info completionQueue:(id)queue completionBlock:(id)block;	// 0x335b6341
- (void)setVolume:(float)volume completionQueue:(id)queue completionBlock:(id)block;	// 0x335b7cc5
- (void)startPresentation:(id)presentation completionQueue:(id)queue completionBlock:(id)block;	// 0x335b4b25
- (void)stopWithOptions:(unsigned)options completionQueue:(id)queue completionBlock:(id)block;	// 0x335b713d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class MPMusicPlayerControllerServerInternal, MPAVController;

@interface MPMusicPlayerControllerServer : NSObject {
@private
	MPMusicPlayerControllerServerInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) MPAVController *player;	// G=0x3039e255; 
+ (void)initialize;	// 0x3039dfdd
+ (BOOL)isMusicPlayerControllerServerRunning;	// 0x3039e115
+ (id)sharedInstance;	// 0x3039e12d
+ (void)startMusicPlayerControllerServerWithDelegate:(id)delegate;	// 0x3039e049
- (id)initWithDelegate:(id)delegate;	// 0x3039e13d
- (void)_runMigServer;	// 0x303a1499
- (void)dealloc;	// 0x3039e1c5
- (void)forwardInvocation:(id)invocation;	// 0x3039e211
- (id)methodSignatureForSelector:(SEL)selector;	// 0x3039e235
// declared property getter: - (id)player;	// 0x3039e255
@end


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
@property(readonly, assign, nonatomic) MPAVController *player;	// G=0x35b9bc41; 
+ (void)initialize;	// 0x35b9b9c9
+ (BOOL)isMusicPlayerControllerServerRunning;	// 0x35b9bb01
+ (id)sharedInstance;	// 0x35b9bb19
+ (void)startMusicPlayerControllerServerWithDelegate:(id)delegate;	// 0x35b9ba35
- (id)initWithDelegate:(id)delegate;	// 0x35b9bb29
- (void)_runMigServer;	// 0x35b9ee79
- (void)dealloc;	// 0x35b9bbb1
- (void)forwardInvocation:(id)invocation;	// 0x35b9bbfd
- (id)methodSignatureForSelector:(SEL)selector;	// 0x35b9bc21
// declared property getter: - (id)player;	// 0x35b9bc41
@end


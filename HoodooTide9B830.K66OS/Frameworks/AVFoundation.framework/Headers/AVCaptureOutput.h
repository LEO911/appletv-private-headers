/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class NSArray, AVCaptureOutputInternal;

@interface AVCaptureOutput : NSObject {
@private
	AVCaptureOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *connections;	// G=0x35e57b65; 
@property(retain) id session;	// G=0x35e57b21; S=0x35e57b41; converted property
- (id)init;	// 0x35e579d5
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x35e57da9
- (id)addConnection:(id)connection error:(id *)error;	// 0x35e57d2d
- (void)bumpChangeSeed;	// 0x35e581f5
- (BOOL)canAddConnectionForMediaType:(id)mediaType;	// 0x35e57b61
- (int)changeSeed;	// 0x35e581d5
- (id)connectionWithMediaType:(id)mediaType;	// 0x35e57ba1
// declared property getter: - (id)connections;	// 0x35e57b65
- (void)dealloc;	// 0x35e57ad5
- (void)didStartForSession:(id)session;	// 0x35e57d99
- (void)didStopForSession:(id)session error:(id)error;	// 0x35e57d9d
- (id)firstEnabledConnectionForMediaType:(id)mediaType;	// 0x35e57f69
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x35e57da5
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x35e57da1
- (id)liveConnections;	// 0x35e580dd
- (id)notReadyError;	// 0x35e57f65
- (void)removeConnection:(id)connection;	// 0x35e57d6d
// converted property getter: - (id)session;	// 0x35e57b21
// converted property setter: - (void)setSession:(id)session;	// 0x35e57b41
@end


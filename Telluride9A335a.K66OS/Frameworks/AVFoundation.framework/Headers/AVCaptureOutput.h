/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVCaptureOutputInternal, NSArray;

@interface AVCaptureOutput : NSObject {
@private
	AVCaptureOutputInternal *_outputInternal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSArray *connections;	// G=0x32340c71; 
@property(retain) id session;	// G=0x32340311; S=0x32340331; converted property
- (id)init;	// 0x32340cb9
- (id)_applyOverridesToCaptureOptions:(id)captureOptions;	// 0x32340795
- (id)addConnection:(id)connection error:(id *)error;	// 0x32340a85
- (void)bumpChangeSeed;	// 0x323404a1
- (BOOL)canAddConnectionForMediaType:(id)mediaType;	// 0x32340351
- (int)changeSeed;	// 0x32340369
- (id)connectionWithMediaType:(id)mediaType;	// 0x32340ac5
// declared property getter: - (id)connections;	// 0x32340c71
- (void)dealloc;	// 0x32340455
- (void)didStartForSession:(id)session;	// 0x32340355
- (void)didStopForSession:(id)session error:(id)error;	// 0x32340359
- (id)firstEnabledConnectionForMediaType:(id)mediaType;	// 0x323405fd
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x32340361
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x3234035d
- (id)liveConnections;	// 0x323404fd
- (id)notReadyError;	// 0x32340365
- (void)removeConnection:(id)connection;	// 0x32340a55
// converted property getter: - (id)session;	// 0x32340311
// converted property setter: - (void)setSession:(id)session;	// 0x32340331
@end

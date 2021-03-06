/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h"
#import "AVAssetWriterFinishWritingHelperDelegate.h"

@class AVAssetWriterFigAssetWriterNotificationHandler, AVWeakReference;

@interface AVAssetWriterAsynchronousFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {
	id _handler;	// 4 = 0x4
	int _handlerCalled;	// 8 = 0x8
	AVAssetWriterFigAssetWriterNotificationHandler *_notificationHandler;	// 12 = 0xc
	AVWeakReference *_weakReferenceToHelper;	// 16 = 0x10
	AVWeakReference *_weakReferenceToSelf;	// 20 = 0x14
}
- (id)initWithHandler:(id)handler;	// 0x368bbf41
- (void)_callHandlerIfNotCalled;	// 0x368bc229
- (void)dealloc;	// 0x368bbfe5
- (void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)success error:(id)error;	// 0x368bc071
- (void)finishWritingHelper:(id)helper didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriter *)figAssetWriter;	// 0x368bc0c5
- (void)finishWritingHelperDidCancelFinishWriting:(id)finishWritingHelper;	// 0x368bc209
- (void)finishWritingHelperDidFail:(id)finishWritingHelper;	// 0x368bc219
- (BOOL)shouldHelperPrepareInputs;	// 0x368bc261
@end


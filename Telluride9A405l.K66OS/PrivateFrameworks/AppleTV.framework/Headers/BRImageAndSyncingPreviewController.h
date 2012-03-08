/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRImageControl, BRSyncProgressControl, BRReflectionControl, BRTextControl;

@interface BRImageAndSyncingPreviewController : BRControl {
@private
	BRImageControl *_imageControl;	// 48 = 0x30
	BRReflectionControl *_reflectionControl;	// 52 = 0x34
	BRSyncProgressControl *_syncProgressControl;	// 56 = 0x38
	BRTextControl *_statusTextControl;	// 60 = 0x3c
	BOOL _hasProgress;	// 64 = 0x40
}
@property(readonly, retain) BRImageControl *imageControl;	// G=0x35e4d9ed; converted property
- (id)init;	// 0x35e4d659
- (void)_startSyncingProgress:(id)progress;	// 0x35e4dc1d
- (void)_stopSyncingProgress:(id)progress;	// 0x35e4dda1
- (void)_updateProgress:(id)progress;	// 0x35e4dcb5
- (void)controlWasActivated;	// 0x35e4d9fd
- (void)dealloc;	// 0x35e4d711
// converted property getter: - (id)imageControl;	// 0x35e4d9ed
- (void)layoutSubcontrols;	// 0x35e4d7b5
- (void)setHasSyncProgress:(BOOL)progress;	// 0x35e4da71
- (void)setImage:(id)image;	// 0x35e4d9a9
- (void)setReflectionAmount:(float)amount;	// 0x35e4dbfd
- (void)setReflectionOffset:(float)offset;	// 0x35e4dba9
- (void)setStatusMessage:(id)message;	// 0x35e4db41
@end

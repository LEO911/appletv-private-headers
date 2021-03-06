/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIGestureRecognizer.h> // Unknown library


@interface MPActivityGestureRecognizer : UIGestureRecognizer {
}
- (id)initWithTarget:(id)target action:(SEL)action;	// 0x3467a175
- (void)_reportOngoingActivity;	// 0x3467a351
- (void)_stopReportingOngoingActivity;	// 0x3467a39d
- (void)_touchesTerminated:(id)terminated withEvent:(id)event;	// 0x3467a255
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x3467a1d1
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x3467a225
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x3467a215
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x3467a201
@end


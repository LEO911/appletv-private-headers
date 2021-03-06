/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"

@class BRTextControl, BRImageControl, NSArray, NSMutableDictionary;

@interface ATVPlayerEventDisplayControl : BRControl {
@private
	NSMutableDictionary *_textAttrs;	// 48 = 0x30
	BRImageControl *_background;	// 52 = 0x34
	BRTextControl *_displayText;	// 56 = 0x38
	NSArray *_eventLogs;	// 60 = 0x3c
}
+ (void)hidePlaybackEventPopup;	// 0x331ad0dd
+ (void)showPlaybackEventPopup:(id)popup;	// 0x331acfcd
- (id)init;	// 0x331ad11d
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBitsPerSecond:(double)bitsPerSecond;	// 0x331ad6f1
- (void)_readableBitRate:(double *)rate andUnitsString:(id *)string forBytes:(double)bytes andDuration:(double)duration;	// 0x331ad6bd
- (void)dealloc;	// 0x331ad2a9
- (void)layoutSubcontrols;	// 0x331ad331
- (void)setEventLogs:(id)logs;	// 0x331ad679
@end


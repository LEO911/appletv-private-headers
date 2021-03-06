/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"

@class WebGeolocationPositionInternal;

@interface WebGeolocationPosition : NSObject {
	WebGeolocationPositionInternal *_internal;	// 4 = 0x4
}
- (id)initWithGeolocationPosition:(PassRefPtr<WebCore::GeolocationPosition>)geolocationPosition;	// 0x365dcac9
- (id)initWithTimestamp:(double)timestamp latitude:(double)latitude longitude:(double)longitude accuracy:(double)accuracy;	// 0x365dc941
- (void)dealloc;	// 0x365dcc15
@end


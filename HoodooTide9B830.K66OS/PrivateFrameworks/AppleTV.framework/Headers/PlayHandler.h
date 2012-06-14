/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


@interface PlayHandler : NSObject {
@private
	void *_mediaObject;	// 4 = 0x4
	ATVMediaQueryRef _query;	// 8 = 0x8
	BOOL _playbackStarted;	// 12 = 0xc
}
- (id)initWithObject:(void *)object;	// 0x32b08bf5
- (void)_queryComplete:(ATVMediaQueryRef)complete;	// 0x32b08fa1
- (void)cancelPlayIfNotStarted;	// 0x32b08f65
- (void)dealloc;	// 0x32b08c45
- (BOOL)play;	// 0x32b08ca5
@end

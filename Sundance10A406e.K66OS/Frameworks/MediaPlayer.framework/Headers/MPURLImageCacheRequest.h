/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPImageCacheRequest.h"
#import "MediaPlayer-Structs.h"

@class NSURL;

@interface MPURLImageCacheRequest : MPImageCacheRequest {
	NSURL *_url;	// 60 = 0x3c
	BOOL _usePlaceholderAsFallback;	// 64 = 0x40
}
@property(assign, nonatomic) BOOL usePlaceholderAsFallback;	// G=0x35d8f5e9; S=0x35d8f5f9; @synthesize=_usePlaceholderAsFallback
- (id)initWithURL:(id)url;	// 0x35d8f2bd
- (id)copyRawImageReturningError:(id *)error;	// 0x35d8f3a9
- (void)dealloc;	// 0x35d8f35d
- (id)placeholderImage;	// 0x35d8f579
// declared property setter: - (void)setUsePlaceholderAsFallback:(BOOL)fallback;	// 0x35d8f5f9
- (id)uniqueKey;	// 0x35d8f5c9
// declared property getter: - (BOOL)usePlaceholderAsFallback;	// 0x35d8f5e9
@end


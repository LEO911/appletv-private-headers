/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class ATVFeedVideoElement;

__attribute__((visibility("hidden")))
@interface ATVFeedVideoPlayerElement : ATVFeedRootElement {
@private
	ATVFeedVideoElement *_video;	// 44 = 0x2c
}
@property(retain, nonatomic) ATVFeedVideoElement *video;	// G=0x33baf0f5; S=0x33baf105; @synthesize=_video
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33baf011
- (void)dealloc;	// 0x33baf0a9
// declared property setter: - (void)setVideo:(id)video;	// 0x33baf105
// declared property getter: - (id)video;	// 0x33baf0f5
@end


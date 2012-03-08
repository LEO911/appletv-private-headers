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
@property(retain, nonatomic) ATVFeedVideoElement *video;	// G=0x35f210cd; S=0x35f210dd; @synthesize=_video
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x35f20fe9
- (void)dealloc;	// 0x35f21081
// declared property setter: - (void)setVideo:(id)video;	// 0x35f210dd
// declared property getter: - (id)video;	// 0x35f210cd
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCPlug;

@interface MCPlugProxy : MCObject {
	MCPlug *_plug;	// 12 = 0xc
}
@property(retain) MCPlug *plug;	// G=0x332615e1; S=0x332615f5; @synthesize=_plug
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x332615b9
- (void)dealloc;	// 0x332614dd
- (id)forwardingTargetForSelector:(SEL)selector;	// 0x3326152d
- (BOOL)isKindOfClass:(Class)aClass;	// 0x3326153d
// declared property getter: - (id)plug;	// 0x332615e1
- (void)setContainer:(id)container;	// 0x332615b5
// declared property setter: - (void)setPlug:(id)plug;	// 0x332615f5
- (int)zIndex;	// 0x33261595
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MCAction, NSMutableDictionary;

@interface MRAction : NSObject {
	MCAction *mMCAction;	// 4 = 0x4
	id mSender;	// 8 = 0x8
	NSMutableDictionary *mStates;	// 12 = 0xc
	double mTime;	// 16 = 0x10
}
@property(readonly, assign) MCAction *action;	// G=0x33d85339; @synthesize=mMCAction
@property(retain) id sender;	// G=0x33d85349; S=0x33d85361; @synthesize=mSender
@property(retain) NSMutableDictionary *states;	// G=0x33d85389; S=0x33d853a1; @synthesize=mStates
@property(assign) double time;	// G=0x33d853c9; S=0x33d853e1; @synthesize=mTime
- (id)initWithAction:(id)action;	// 0x33d8524d
// declared property getter: - (id)action;	// 0x33d85339
- (void)dealloc;	// 0x33d852a5
// declared property getter: - (id)sender;	// 0x33d85349
// declared property setter: - (void)setSender:(id)sender;	// 0x33d85361
// declared property setter: - (void)setStates:(id)states;	// 0x33d853a1
// declared property setter: - (void)setTime:(double)time;	// 0x33d853e1
// declared property getter: - (id)states;	// 0x33d85389
// declared property getter: - (double)time;	// 0x33d853c9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MRTransition.h"


@interface MRTransitionPageFlip : MRTransition {
	XXStruct_mi4pgC *mMesh;	// 60 = 0x3c
}
- (id)initWithTransitionID:(id)transitionID;	// 0x2fcaa101
- (void)buildMesh;	// 0x2fcaa1d5
- (void)cleanup;	// 0x2fcaa141
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fcaa2dd
- (void)releaseByTransitioner:(id)transitioner;	// 0x2fcaa189
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fcaa349
- (void)setAttributes:(id)attributes;	// 0x2fcaa281
@end


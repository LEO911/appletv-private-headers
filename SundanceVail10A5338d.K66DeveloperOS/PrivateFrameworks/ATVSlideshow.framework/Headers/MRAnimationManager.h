/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

@interface MRAnimationManager : NSObject {
	NSMutableDictionary *mAnimations;	// 4 = 0x4
}
+ (void)initialize;	// 0x333f8d05
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x333f8d81
+ (id)sharedManager;	// 0x333f8d71
- (id)initWithPaths:(id)paths;	// 0x333f8ddd
- (void)cleanup;	// 0x333f905d
- (void)dealloc;	// 0x333f901d
@end


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
+ (void)initialize;	// 0x3350df91
+ (void)loadAnimationManagerWithPaths:(id)paths;	// 0x3350e00d
+ (id)sharedManager;	// 0x3350dffd
- (id)initWithPaths:(id)paths;	// 0x3350e069
- (void)cleanup;	// 0x3350e2c1
- (void)dealloc;	// 0x3350e281
@end


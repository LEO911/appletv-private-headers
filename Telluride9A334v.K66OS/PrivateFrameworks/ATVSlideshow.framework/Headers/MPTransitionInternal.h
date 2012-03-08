/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MPTransitionInternal : NSObject {
	NSString *transitionID;	// 4 = 0x4
	NSString *presetID;	// 8 = 0x8
	double duration;	// 12 = 0xc
	BOOL isRandom;	// 20 = 0x14
}
@property(assign, nonatomic) double duration;	// G=0x32ed9251; S=0x32ed9269; @synthesize
@property(assign, nonatomic) BOOL isRandom;	// G=0x32ed927d; S=0x32ed928d; @synthesize
@property(retain, nonatomic) NSString *presetID;	// G=0x32ed921d; S=0x32ed922d; @synthesize
@property(retain, nonatomic) NSString *transitionID;	// G=0x32ed91e9; S=0x32ed91f9; @synthesize
- (void)dealloc;	// 0x32ed9171
// declared property getter: - (double)duration;	// 0x32ed9251
// declared property getter: - (BOOL)isRandom;	// 0x32ed927d
// declared property getter: - (id)presetID;	// 0x32ed921d
// declared property setter: - (void)setDuration:(double)duration;	// 0x32ed9269
// declared property setter: - (void)setIsRandom:(BOOL)random;	// 0x32ed928d
// declared property setter: - (void)setPresetID:(id)anId;	// 0x32ed922d
// declared property setter: - (void)setTransitionID:(id)anId;	// 0x32ed91f9
// declared property getter: - (id)transitionID;	// 0x32ed91e9
@end

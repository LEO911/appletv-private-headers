/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "MREffect.h"
#import "MZEffectTiming.h"

@class MRImageProvider, NSString, NSMutableDictionary, NSMutableArray;

@interface MREffectHangingPictures : MREffect <MZEffectTiming> {
	MRImageProvider *mRopeImageProvider;	// 116 = 0x74
	MRImageProvider *mPhotoFrameImageProviders[4];	// 120 = 0x78
	NSMutableDictionary *mSprites;	// 136 = 0x88
	NSMutableDictionary *mMatrices;	// 140 = 0x8c
	NSString *mCurrentMainSlideKey;	// 144 = 0x90
	unsigned mCountOfSlides;	// 148 = 0x94
	double mBaseStillDuration;	// 152 = 0x98
	NSMutableArray *mSmallSlideProviders;	// 160 = 0xa0
	struct {
		double startTime;
		double mainStartTime;
		double displayTime;
		double mainEndTime;
		double endTime;
		unsigned countOfSegments;
	} mSlideTimings[10];	// 164 = 0xa4
	BOOL mScenario[9];	// 604 = 0x25c
	unsigned char mNumberOfRopes;	// 613 = 0x265
	unsigned short mFrameIndices;	// 614 = 0x266
}
@property(readonly, assign, nonatomic) double mainDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseInDuration;	// @dynamic
@property(readonly, assign, nonatomic) double phaseOutDuration;	// @dynamic
+ (id)customTimingWithEffectID:(id)effectID effectAttributes:(id)attributes slideInformation:(id)information textInformation:(id)information4 inAspectRatio:(float)aspectRatio;	// 0x2fbf9ea5
+ (BOOL)hasCustomTiming;	// 0x2fbf9ea1
+ (void)initialize;	// 0x2fbf98c9
- (id)initWithEffectID:(id)effectID;	// 0x2fbf9a21
- (void)_applyTimingToSlideProviders;	// 0x2fbfa0c9
- (void)_applyTimingToSmallSlideProviders;	// 0x2fbfa1b1
- (double)_buildScenarioWithCountOfSlides:(unsigned)slides aspectRatios:(float *)ratios;	// 0x2fbfa5c9
- (void)_cleanup;	// 0x2fbf9d99
- (void)_unload;	// 0x2fc00461
- (double)_updateSlideTimings;	// 0x2fbfaa49
- (double)displayTimeForSlideAtIndex:(unsigned)index;	// 0x2fbfa075
- (double)displayTimeForTextAtIndex:(unsigned)index;	// 0x2fbfa099
- (id)elementHitAtPoint:(CGPoint)point withInverseMatrix:(float [16])inverseMatrix localPoint:(CGPoint *)point3;	// 0x2fc00145
- (BOOL)getVerticesCoordinates:(CGPoint (*)[4])coordinates withMatrix:(float [16])matrix forElement:(id)element;	// 0x2fc003ad
- (BOOL)isLoadedForTime:(double)time;	// 0x2fbfaeb9
- (double)lowestDisplayTime;	// 0x2fbfa0b1
- (BOOL)prerenderForTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fbfb0c1
- (void)renderAtTime:(double)time inContext:(id)context withArguments:(id)arguments;	// 0x2fbfee81
- (void)setPhaseInDuration:(double)duration mainDuration:(double)duration2 phaseOutDuration:(double)duration3;	// 0x2fbfa2f5
- (void)setPixelSize:(CGSize)size;	// 0x2fbfa379
- (double)showDurationForSlideAtIndex:(unsigned)index;	// 0x2fbfa04d
- (double)showTimeForSlideAtIndex:(unsigned)index;	// 0x2fbfa02d
@end


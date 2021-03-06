/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "ATVSlideshow-Structs.h"

@class NSString, NSMutableDictionary, NSMutableArray, NSDate;

@interface MPClusterSlide : NSObject <NSCopying> {
	NSDate *mCaptureDate;	// 4 = 0x4
	NSString *mPath;	// 8 = 0x8
	int mReferenceCounter;	// 12 = 0xc
	NSMutableDictionary *mUsageCounterPerLayer;	// 16 = 0x10
	NSMutableArray *mUsableSlideClusters;	// 20 = 0x14
	int mIndex;	// 24 = 0x18
}
@property(copy) NSDate *captureDate;	// G=0x323dcf71; S=0x323dcf85; @synthesize=mCaptureDate
@property(assign) int index;	// G=0x323dcfc1; S=0x323dcfd5; @synthesize=mIndex
@property(copy) NSString *path;	// G=0x323dcf4d; S=0x323dcf61; @synthesize=mPath
@property(assign) int referenceCounter;	// G=0x323dcf95; S=0x323dcfa9; @synthesize=mReferenceCounter
@property(retain) NSMutableArray *usableSlideClusters;	// G=0x323dd011; S=0x323dd025; @synthesize=mUsableSlideClusters
@property(retain) NSMutableDictionary *usageCounterPerLayer;	// G=0x323dcfed; S=0x323dd001; @synthesize=mUsageCounterPerLayer
- (id)init;	// 0x323dc785
// declared property getter: - (id)captureDate;	// 0x323dcf71
- (id)copyWithZone:(NSZone *)zone;	// 0x323dc8bd
- (void)dealloc;	// 0x323dc815
- (id)description;	// 0x323dcee5
- (void)increaseUsageCounterForLayer:(id)layer;	// 0x323dc995
// declared property getter: - (int)index;	// 0x323dcfc1
- (int)overallUsageCounter;	// 0x323dcbdd
// declared property getter: - (id)path;	// 0x323dcf4d
// declared property getter: - (int)referenceCounter;	// 0x323dcf95
- (void)resetAllUsageCounters;	// 0x323dccb9
// declared property setter: - (void)setCaptureDate:(id)date;	// 0x323dcf85
// declared property setter: - (void)setIndex:(int)index;	// 0x323dcfd5
// declared property setter: - (void)setPath:(id)path;	// 0x323dcf61
// declared property setter: - (void)setReferenceCounter:(int)counter;	// 0x323dcfa9
// declared property setter: - (void)setUsableSlideClusters:(id)clusters;	// 0x323dd025
- (void)setUsageCounterForLayer:(id)layer to:(int)to;	// 0x323dcaa1
// declared property setter: - (void)setUsageCounterPerLayer:(id)layer;	// 0x323dd001
// declared property getter: - (id)usableSlideClusters;	// 0x323dd011
- (id)usageCountDescription;	// 0x323dcd81
- (int)usageCounterForLayer:(id)layer;	// 0x323dca69
// declared property getter: - (id)usageCounterPerLayer;	// 0x323dcfed
@end


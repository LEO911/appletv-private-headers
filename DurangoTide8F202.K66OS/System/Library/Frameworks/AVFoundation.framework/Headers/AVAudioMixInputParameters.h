/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "NSMutableCopying.h"
#import "NSCopying.h"
#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVAudioMixInputParametersInternal;

@interface AVAudioMixInputParameters : NSObject <NSCopying, NSMutableCopying> {
@private
	AVAudioMixInputParametersInternal *_inputParameters;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) int trackID;	// G=0x30415dd5; 
- (id)init;	// 0x304162f5
- (id)_audioVolumeCurve;	// 0x30417041
- (void)_setRamps:(id)ramps;	// 0x30416009
- (void)_setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x304167cd
- (id)_volumeCurveAsString;	// 0x304174f1
- (id)copyWithZone:(NSZone *)zone;	// 0x304160b9
- (void)dealloc;	// 0x30416461
- (id)description;	// 0x30416571
- (void)finalize;	// 0x30416421
- (BOOL)getVolumeRampForTime:(XXStruct_pwHToB)time startVolume:(float *)volume endVolume:(float *)volume3 timeRange:(XXStruct_yD8eWC *)range;	// 0x30416c25
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3041605d
- (void)setTrackID:(int)anId;	// 0x30415df1
- (void)setVolume:(float)volume atTime:(XXStruct_pwHToB)time;	// 0x30416b49
- (void)setVolumeRampFromStartVolume:(float)startVolume toEndVolume:(float)endVolume timeRange:(XXStruct_yD8eWC)range;	// 0x3041672d
// declared property getter: - (int)trackID;	// 0x30415dd5
@end


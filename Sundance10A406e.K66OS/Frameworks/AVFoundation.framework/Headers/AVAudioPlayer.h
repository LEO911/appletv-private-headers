/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSURL, NSData, NSArray, NSDictionary;
@protocol AVAudioPlayerDelegate;

@interface AVAudioPlayer : NSObject {
	void *_impl;	// 4 = 0x4
}
@property(copy, nonatomic) NSArray *channelAssignments;	// G=0x302a0b75; S=0x302a0b89; 
@property(assign) double currentTime;	// G=0x302a0961; S=0x302a09d9; 
@property(readonly, assign) NSData *data;	// G=0x302a06d9; 
@property(assign) id<AVAudioPlayerDelegate> delegate;	// G=0x302a06ed; S=0x302a0701; 
@property(readonly, assign) double deviceCurrentTime;	// G=0x302a099d; 
@property(readonly, assign) double duration;	// G=0x302a072d; 
@property(assign) BOOL enableRate;	// G=0x302a0811; S=0x302a07e5; 
@property(assign, getter=isMeteringEnabled) BOOL meteringEnabled;	// G=0x302a0a65; S=0x302a0a91; 
@property(readonly, assign) unsigned numberOfChannels;	// G=0x302a0935; 
@property(assign) int numberOfLoops;	// G=0x302a0a3d; S=0x302a0a11; 
@property(assign) float pan;	// G=0x302a08f9; S=0x302a08b9; 
@property(readonly, assign, getter=isPlaying) BOOL playing;	// G=0x302a0691; 
@property(assign) float rate;	// G=0x302a087d; S=0x302a083d; 
@property(readonly, assign) NSDictionary *settings;	// G=0x302a0719; 
@property(readonly, assign) NSURL *url;	// G=0x302a06c5; 
@property(assign) float volume;	// G=0x302a07a9; S=0x302a0769; 
- (id)initWithContentsOfURL:(id)url error:(id *)error;	// 0x3029fd65
- (id)initWithData:(id)data error:(id *)error;	// 0x302a0409
- (float)averagePowerForChannel:(unsigned)channel;	// 0x302a0b29
- (id)baseInit;	// 0x3029f951
- (void)beginInterruption;	// 0x3029fadd
// declared property getter: - (id)channelAssignments;	// 0x302a0b75
// declared property getter: - (double)currentTime;	// 0x302a0961
// declared property getter: - (id)data;	// 0x302a06d9
- (void)dealloc;	// 0x3029fcdd
- (void)decodeError:(id)error;	// 0x3029fa0d
// declared property getter: - (id)delegate;	// 0x302a06ed
// declared property getter: - (double)deviceCurrentTime;	// 0x302a099d
// declared property getter: - (double)duration;	// 0x302a072d
// declared property getter: - (BOOL)enableRate;	// 0x302a0811
- (void)endInterruption;	// 0x3029fba1
- (void)endInterruptionWithFlags:(id)flags;	// 0x3029fb01
- (void)finalize;	// 0x3029fc89
- (void)finishedPlaying:(id)playing;	// 0x3029f989
- (AudioPlayerImpl *)impl;	// 0x3029f941
// declared property getter: - (BOOL)isMeteringEnabled;	// 0x302a0a65
// declared property getter: - (BOOL)isPlaying;	// 0x302a0691
// declared property getter: - (unsigned)numberOfChannels;	// 0x302a0935
// declared property getter: - (int)numberOfLoops;	// 0x302a0a3d
// declared property getter: - (float)pan;	// 0x302a08f9
- (void)pause;	// 0x302a0651
- (float)peakPowerForChannel:(unsigned)channel;	// 0x302a0add
- (BOOL)play;	// 0x302a05dd
- (BOOL)playAtTime:(double)time;	// 0x302a060d
- (BOOL)prepareToPlay;	// 0x302a05ad
- (void)privCommonCleanup;	// 0x3029fbc5
// declared property getter: - (float)rate;	// 0x302a087d
// declared property setter: - (void)setChannelAssignments:(id)assignments;	// 0x302a0b89
// declared property setter: - (void)setCurrentTime:(double)time;	// 0x302a09d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x302a0701
// declared property setter: - (void)setEnableRate:(BOOL)rate;	// 0x302a07e5
// declared property setter: - (void)setMeteringEnabled:(BOOL)enabled;	// 0x302a0a91
// declared property setter: - (void)setNumberOfLoops:(int)loops;	// 0x302a0a11
// declared property setter: - (void)setPan:(float)pan;	// 0x302a08b9
// declared property setter: - (void)setRate:(float)rate;	// 0x302a083d
// declared property setter: - (void)setVolume:(float)volume;	// 0x302a0769
// declared property getter: - (id)settings;	// 0x302a0719
- (void)stop;	// 0x302a0671
- (void)updateMeters;	// 0x302a0abd
// declared property getter: - (id)url;	// 0x302a06c5
// declared property getter: - (float)volume;	// 0x302a07a9
@end

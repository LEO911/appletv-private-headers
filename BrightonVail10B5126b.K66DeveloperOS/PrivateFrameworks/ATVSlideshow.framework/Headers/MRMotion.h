/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MRMotion : NSObject {
	NSString *_key;	// 4 = 0x4
	float _startValue;	// 8 = 0x8
	float _value;	// 12 = 0xc
	double _startTime;	// 16 = 0x10
	double _duration;	// 24 = 0x18
	float _easeIn;	// 32 = 0x20
	float _easeOut;	// 36 = 0x24
}
@property(readonly, assign) double duration;	// G=0x332feaa5; @synthesize=_duration
@property(readonly, assign) float easeIn;	// G=0x332fead9; @synthesize=_easeIn
@property(readonly, assign) float easeOut;	// G=0x332feaed; @synthesize=_easeOut
@property(readonly, assign) NSString *key;	// G=0x332fea31; @synthesize=_key
@property(assign, nonatomic) double startTime;	// G=0x332fea79; S=0x332fea91; @synthesize=_startTime
@property(assign, nonatomic) float startValue;	// G=0x332fea45; S=0x332fea55; @synthesize=_startValue
@property(readonly, assign) float value;	// G=0x332fea65; @synthesize=_value
- (id)initWithKey:(id)key value:(float)value duration:(double)duration easeIn:(float)anIn easeOut:(float)anOut;	// 0x332fe7cd
- (void)dealloc;	// 0x332fe8b5
// declared property getter: - (double)duration;	// 0x332feaa5
// declared property getter: - (float)easeIn;	// 0x332fead9
// declared property getter: - (float)easeOut;	// 0x332feaed
// declared property getter: - (id)key;	// 0x332fea31
// declared property setter: - (void)setStartTime:(double)time;	// 0x332fea91
// declared property setter: - (void)setStartValue:(float)value;	// 0x332fea55
// declared property getter: - (double)startTime;	// 0x332fea79
// declared property getter: - (float)startValue;	// 0x332fea45
// declared property getter: - (float)value;	// 0x332fea65
- (float)valueAtTime:(double)time;	// 0x332fe909
@end


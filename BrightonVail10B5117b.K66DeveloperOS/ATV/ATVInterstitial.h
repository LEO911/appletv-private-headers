/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVInterstitial : XXUnknownSuperclass {
	double _startTime;	// 4 = 0x4
	double _endTime;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) double endTime;	// G=0x197115; @synthesize=_endTime
@property(readonly, assign, nonatomic) double startTime;	// G=0x1970fd; @synthesize=_startTime
- (id)_initWithFeedDictionary:(id)feedDictionary;	// 0x196fa9
- (id)_initWithStartTime:(double)startTime endTime:(double)time;	// 0x197029
- (BOOL)containsTime:(double)time;	// 0x1970b5
- (void)dealloc;	// 0x197089
// declared property getter: - (double)endTime;	// 0x197115
// declared property getter: - (double)startTime;	// 0x1970fd
@end

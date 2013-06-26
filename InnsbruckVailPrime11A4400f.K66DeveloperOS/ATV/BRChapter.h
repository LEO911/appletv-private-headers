/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface BRChapter : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	NSString *_description;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
	NSDate *_startDate;	// 16 = 0x10
	NSDate *_endDate;	// 20 = 0x14
	double _startTime;	// 24 = 0x18
	double _endTime;	// 32 = 0x20
}
@property(retain, nonatomic) NSString *description;	// G=0x3eebf1; S=0x3eec01; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x3eeca9; S=0x3eecb9; @synthesize=_endDate
@property(assign, nonatomic) double endTime;	// G=0x3eec5d; S=0x3eec75; @synthesize=_endTime
@property(retain, nonatomic) NSString *identifier;	// G=0x3eec11; S=0x3eec21; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x3eebd1; S=0x3eebe1; @synthesize=_name
@property(retain, nonatomic) NSDate *startDate;	// G=0x3eec89; S=0x3eec99; @synthesize=_startDate
@property(assign, nonatomic) double startTime;	// G=0x3eec31; S=0x3eec49; @synthesize=_startTime
+ (id)chapterWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x3ee7c1
+ (id)chapterWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x3ee771
- (id)initWithAssetID:(id)assetID startDate:(id)date endDate:(id)date3;	// 0x3ee8e9
- (id)initWithAssetID:(id)assetID startTime:(double)time endTime:(double)time3;	// 0x3ee809
- (BOOL)containsDate:(id)date;	// 0x3eeb39
- (BOOL)containsTime:(double)time;	// 0x3eea51
- (void)dealloc;	// 0x3ee9b5
// declared property getter: - (id)description;	// 0x3eebf1
// declared property getter: - (id)endDate;	// 0x3eeca9
// declared property getter: - (double)endTime;	// 0x3eec5d
// declared property getter: - (id)identifier;	// 0x3eec11
- (id)imageProxy;	// 0x3eebcd
- (void)invalidate;	// 0x3eea49
// declared property getter: - (id)name;	// 0x3eebd1
// declared property setter: - (void)setDescription:(id)description;	// 0x3eec01
// declared property setter: - (void)setEndDate:(id)date;	// 0x3eecb9
// declared property setter: - (void)setEndTime:(double)time;	// 0x3eec75
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x3eec21
// declared property setter: - (void)setName:(id)name;	// 0x3eebe1
// declared property setter: - (void)setStartDate:(id)date;	// 0x3eec99
// declared property setter: - (void)setStartTime:(double)time;	// 0x3eec49
// declared property getter: - (id)startDate;	// 0x3eec89
// declared property getter: - (double)startTime;	// 0x3eec31
@end

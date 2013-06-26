/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PowerlogLoggerSupport.framework/PowerlogLoggerSupport
 */

#import </libobjc.A.h>


@interface PLRange : NSObject {
	double _location;	// 4 = 0x4
	double _length;	// 12 = 0xc
}
@property(readonly, assign) double endLocation;	// G=0x3244d305; 
@property(assign) double length;	// G=0x3244d761; S=0x3244d795; @synthesize=_length
@property(assign) double location;	// G=0x3244d6f9; S=0x3244d72d; @synthesize=_location
- (id)initWithLocation:(double)location length:(double)length;	// 0x3244d28d
- (id)description;	// 0x3244d34d
// declared property getter: - (double)endLocation;	// 0x3244d305
- (BOOL)equalRange:(id)range;	// 0x3244d421
- (id)intersectionRange:(id)range;	// 0x3244d5a5
- (BOOL)intersectsRange:(id)range;	// 0x3244d695
// declared property getter: - (double)length;	// 0x3244d761
// declared property getter: - (double)location;	// 0x3244d6f9
- (BOOL)locationInRange:(double)range;	// 0x3244d3c1
// declared property setter: - (void)setLength:(double)length;	// 0x3244d795
// declared property setter: - (void)setLocation:(double)location;	// 0x3244d72d
- (id)unionRange:(id)range;	// 0x3244d4ad
@end

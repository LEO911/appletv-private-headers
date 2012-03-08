/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHDDataValuesCollection : NSObject {
@private
	CFDataRef mPackedValues;	// 4 = 0x4
	unsigned mDataValueCount;	// 8 = 0x8
	CFDictionaryRef mIndexToDataValueMap;	// 12 = 0xc
	bool mContainsStringValue;	// 16 = 0x10
}
- (id)init;	// 0x328a19b1
- (id)initWithDataPointCount:(unsigned)dataPointCount;	// 0x328a1c2d
- (bool)addDataPoint:(CHDDataPoint *)point;	// 0x328a1db1
- (bool)addDataValue:(id)value;	// 0x32918241
- (void)cleanup;	// 0x328a50b9
- (bool)containsStringValue;	// 0x328aaa55
- (unsigned)count;	// 0x328a1b1d
- (CHDDataPoint *)dataPointAtIndex:(unsigned)index;	// 0x328a20bd
- (CHDDataPoint *)dataPointWithIndex:(unsigned)index;	// 0x32920abd
- (id)dataValueAtIndex:(unsigned)index;	// 0x328a5e49
- (id)dataValueWithIndex:(unsigned)index;	// 0x32920a69
- (void)dealloc;	// 0x328a5079
- (void)finishReading;	// 0x328a2031
- (void)resetWithDataPointCount:(unsigned)dataPointCount;	// 0x32937605
- (void)setupBufferForValues:(unsigned)values;	// 0x328a1a15
@end

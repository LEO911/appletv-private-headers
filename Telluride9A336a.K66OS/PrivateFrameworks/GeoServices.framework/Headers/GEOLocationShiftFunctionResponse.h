/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library
#import "GeoServices-Structs.h"


@interface GEOLocationShiftFunctionResponse : NSObject {
	XXStruct_zYrK5D _originalCoordinate;	// 4 = 0x4
	XXStruct_zYrK5D _shiftedCoordinate;	// 20 = 0x14
	double _creationTime;	// 36 = 0x24
}
@property(assign, nonatomic) XXStruct_zYrK5D originalCoordinate;	// G=0x3672c151; S=0x3672c175; @synthesize=_originalCoordinate
- (id)initWithLocationShiftResponse:(id)locationShiftResponse originalCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3672becd
- (BOOL)needsNewFunctionForCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3672c019
// declared property getter: - (XXStruct_zYrK5D)originalCoordinate;	// 0x3672c151
// declared property setter: - (void)setOriginalCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3672c175
- (XXStruct_zYrK5D)shiftedCoordinateForCoordinate:(XXStruct_zYrK5D)coordinate accuracy:(double *)accuracy;	// 0x3672bf69
- (BOOL)wantsNewFunctionForCoordinate:(XXStruct_zYrK5D)coordinate;	// 0x3672bff5
@end

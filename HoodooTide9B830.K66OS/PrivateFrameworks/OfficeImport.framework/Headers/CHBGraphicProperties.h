/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface CHBGraphicProperties : NSObject {
}
+ (int)lineWeightEnumFromWidth:(float)width;	// 0x31342125
+ (id)mapAssociatedEscherObjectstate:(id)objectstate;	// 0x312ed9b5
+ (id)mapFillStyle:(const XlChartFillStyle *)style xlPictureFormat:(const XlChartPicF *)format state:(id)state;	// 0x31247885
+ (id)mapFillStyleForMarker:(const XlChartMarkerStyle *)marker complex:(bool)complex state:(id)state;	// 0x31255d01
+ (id)mapPresetDashFromPattern:(int)pattern;	// 0x31247e41
+ (int)oaPresetDashTypeFromLinePatternEnum:(int)linePatternEnum;	// 0x31247ec9
+ (id)oadGraphicPropertiesFromState:(id)state xlLineStyle:(const XlChartLineStyle *)style xlFillStyle:(const XlChartFillStyle *)style3;	// 0x3124f065
+ (id)oadGraphicPropertiesFromXlChartFrameType:(XlChartFrameType *)xlChartFrameType state:(id)state;	// 0x31247745
+ (id)oadGraphicPropertiesFromXlChartSeriesFormat:(const XlChartSeriesFormat *)xlChartSeriesFormat state:(id)state;	// 0x31252571
+ (id)oadGraphicPropertiesFromXlMarkerStyle:(const XlChartMarkerStyle *)xlMarkerStyle complex:(bool)complex state:(id)state;	// 0x31251225
+ (id)oadStrokeFrom:(const XlChartLineStyle *)from;	// 0x31247c19
+ (int)presetLinePatternEnumFromDash:(id)dash;	// 0x31342161
+ (float)widthFromLineWeightEnum:(int)lineWeightEnum;	// 0x31247e09
@end

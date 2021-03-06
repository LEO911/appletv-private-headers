/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface PXAnimation : NSObject {
}
+ (void)readAnimAudioElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33b14a99
+ (void)readAnimCmdElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33b0d63d
+ (void)readAnimEffectElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33ade105
+ (void)readAnimElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33ae52d1
+ (void)readAnimMotionElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33a960d1
+ (void)readAnimParallelElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33a95c65
+ (void)readAnimRotationElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33b161a1
+ (void)readAnimScaleElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33b09ef9
+ (void)readAnimSequentialElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33a95bbd
+ (void)readAnimSetElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33addf1d
+ (id)readAnimVariant:(xmlNode *)variant;	// 0x33ade031
+ (void)readAnimVideoElement:(xmlNode *)element timeNode:(id)node drawingState:(id)state;	// 0x33b1fc9d
+ (void)readAnimationFromTimingXmlNode:(xmlNode *)timingXmlNode tgtAnimation:(id)animation drawingState:(id)state;	// 0x33a8de61
+ (int)readChartBuildType:(id)type;	// 0x33bdb245
+ (void)readChartType:(id)type oleChartTarget:(id)target;	// 0x33bdb1a5
+ (void)readChildTimeNodeList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x33a95a75
+ (void)readCommonBehaviorData:(xmlNode *)data tgtCommonBehaviorData:(id)data2 drawingState:(id)state;	// 0x33a96361
+ (void)readCommonMediaNodeData:(xmlNode *)data commonMediaData:(id)data2 drawingState:(id)state;	// 0x33b14bd1
+ (void)readCommonTimeNodeData:(xmlNode *)data commonTimeNodeData:(id)data2 drawingState:(id)state;	// 0x33a9212d
+ (void)readCondition:(xmlNode *)condition timeCondition:(id)condition2 drawingState:(id)state;	// 0x33a95e61
+ (id)readGraphicBuild:(xmlNode *)build;	// 0x33afabb5
+ (void)readIterate:(xmlNode *)iterate commonTimeNodeData:(id)data drawingState:(id)state;	// 0x33afad4d
+ (id)readOleChartBuild:(xmlNode *)build;	// 0x33bdb2c9
+ (id)readParagraphBuild:(xmlNode *)build;	// 0x33ade359
+ (void)readPointFromNode:(xmlNode *)node tgtPoint:(CGPoint *)point;	// 0x33a96d55
+ (void)readPresetClass:(id)aClass commonTimeNodeData:(id)data;	// 0x33a95fd9
+ (void)readRestartType:(id)type commonTimeNodeData:(id)data;	// 0x33a92565
+ (id)readShapeTarget:(xmlNode *)target drawingState:(id)state;	// 0x33a96619
+ (void)readStConditionList:(xmlNode *)list commonTimeNodeData:(id)data drawingState:(id)state;	// 0x33a95d0d
+ (id)readTgtElement:(xmlNode *)element drawingState:(id)state;	// 0x33a96461
+ (void)readTimeNodeType:(id)type commonTimeNodeData:(id)data;	// 0x33a924b5
+ (void)readTriggerEvent:(id)event timeCondition:(id)condition;	// 0x33ae81dd
@end


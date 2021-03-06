/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDTrendlineLabel, OADGraphicProperties, EDString;

__attribute__((visibility("hidden")))
@interface CHDTrendline : NSObject {
@private
	bool mDisplayEquation;	// 4 = 0x4
	bool mDisplayRSquaredValue;	// 5 = 0x5
	double mBackward;	// 8 = 0x8
	double mForward;	// 16 = 0x10
	double mInterceptYAxis;	// 24 = 0x18
	int mPolynomialOrder;	// 32 = 0x20
	int mMovingAveragePeriod;	// 36 = 0x24
	int mType;	// 40 = 0x28
	OADGraphicProperties *mGraphicProperties;	// 44 = 0x2c
	CHDTrendlineLabel *mLabel;	// 48 = 0x30
	EDString *mName;	// 52 = 0x34
}
@property(assign) double backward;	// G=0x34de44dd; S=0x34d6b97d; converted property
@property(assign, getter=isDisplayEquation) bool displayEquation;	// G=0x34de44bd; S=0x34d6b95d; converted property
@property(assign, getter=isDisplayRSquaredValue) bool displayRSquaredValue;	// G=0x34de44cd; S=0x34d6b96d; converted property
@property(assign) double forward;	// G=0x34de44f5; S=0x34d6b991; converted property
@property(retain) id graphicProperties;	// G=0x34de4575; S=0x34d6ba65; converted property
@property(assign) double interceptYAxis;	// G=0x34de450d; S=0x34d6b9a5; converted property
@property(retain) id label;	// G=0x34de4565; S=0x34d6b915; converted property
@property(assign) int movingAveragePeriod;	// G=0x34de4545; S=0x34d8effd; converted property
@property(retain) id name;	// G=0x34de4585; S=0x34de46f5; converted property
@property(assign) int polynomialOrder;	// G=0x34de4525; S=0x34de4535; converted property
@property(assign) int type;	// G=0x34de4555; S=0x34d6b639; converted property
+ (id)trendline;	// 0x34de4595
- (id)init;	// 0x34d6b559
// converted property getter: - (double)backward;	// 0x34de44dd
- (void)dealloc;	// 0x34d6bd7d
- (id)defaultNameWithSeriesName:(id)seriesName;	// 0x34de45dd
// converted property getter: - (double)forward;	// 0x34de44f5
// converted property getter: - (id)graphicProperties;	// 0x34de4575
// converted property getter: - (double)interceptYAxis;	// 0x34de450d
// converted property getter: - (bool)isDisplayEquation;	// 0x34de44bd
// converted property getter: - (bool)isDisplayRSquaredValue;	// 0x34de44cd
// converted property getter: - (id)label;	// 0x34de4565
// converted property getter: - (int)movingAveragePeriod;	// 0x34de4545
// converted property getter: - (id)name;	// 0x34de4585
// converted property getter: - (int)polynomialOrder;	// 0x34de4525
// converted property setter: - (void)setBackward:(double)backward;	// 0x34d6b97d
// converted property setter: - (void)setDisplayEquation:(bool)equation;	// 0x34d6b95d
// converted property setter: - (void)setDisplayRSquaredValue:(bool)value;	// 0x34d6b96d
// converted property setter: - (void)setForward:(double)forward;	// 0x34d6b991
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x34d6ba65
// converted property setter: - (void)setInterceptYAxis:(double)axis;	// 0x34d6b9a5
// converted property setter: - (void)setLabel:(id)label;	// 0x34d6b915
// converted property setter: - (void)setMovingAveragePeriod:(int)period;	// 0x34d8effd
// converted property setter: - (void)setName:(id)name;	// 0x34de46f5
// converted property setter: - (void)setPolynomialOrder:(int)order;	// 0x34de4535
// converted property setter: - (void)setType:(int)type;	// 0x34d6b639
// converted property getter: - (int)type;	// 0x34de4555
@end


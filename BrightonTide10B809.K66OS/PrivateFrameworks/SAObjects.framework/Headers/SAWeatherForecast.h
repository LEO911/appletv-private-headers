/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAAceSerializable.h"
#import "AceObject.h"

@class SAWeatherCondition, NSNumber;

@interface SAWeatherForecast : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSNumber *chanceOfPrecipitation;	// G=0x353dc8b5; S=0x353dc8d1; 
@property(retain, nonatomic) SAWeatherCondition *condition;	// G=0x353dc921; S=0x353dc975; 
@property(copy, nonatomic) NSNumber *isUserRequested;	// G=0x353dc9b1; S=0x353dc9cd; 
@property(copy, nonatomic) NSNumber *timeIndex;	// G=0x353dca1d; S=0x353dca39; 
+ (id)forecast;	// 0x353dc825
+ (id)forecastWithDictionary:(id)dictionary context:(id)context;	// 0x353dc869
// declared property getter: - (id)chanceOfPrecipitation;	// 0x353dc8b5
// declared property getter: - (id)condition;	// 0x353dc921
- (id)encodedClassName;	// 0x353dc819
- (id)groupIdentifier;	// 0x353dc809
// declared property getter: - (id)isUserRequested;	// 0x353dc9b1
// declared property setter: - (void)setChanceOfPrecipitation:(id)precipitation;	// 0x353dc8d1
// declared property setter: - (void)setCondition:(id)condition;	// 0x353dc975
// declared property setter: - (void)setIsUserRequested:(id)requested;	// 0x353dc9cd
// declared property setter: - (void)setTimeIndex:(id)index;	// 0x353dca39
// declared property getter: - (id)timeIndex;	// 0x353dca1d
@end


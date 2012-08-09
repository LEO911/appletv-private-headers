/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import "AFSpeakableUtteranceParser.h"
#import "AFSpeakableNamespaceProvider.h"
#import "AssistantServices-Structs.h"

@class NSDateFormatter;

@interface AFSUPFunctionProvider : AFSpeakableUtteranceParser <AFSpeakableNamespaceProvider> {
	NSDateFormatter *_ourFormatter;	// 12 = 0xc
	BOOL _useSpeechMode;	// 16 = 0x10
}
+ (BOOL)_shouldAutomaticallyProvideFunctions;	// 0x33f7c811
- (id)init;	// 0x33f7c815
- (void).cxx_destruct;	// 0x33f7d2f5
- (id)_callFunction:(id)function withArguments:(id)arguments;	// 0x33f7cdcd
- (id)_currentLongDate:(id)date;	// 0x33f7cb19
- (id)_currentShortDate:(id)date;	// 0x33f7cbad
- (id)_currentTime:(id)time;	// 0x33f7ca9d
- (id)_currentWeekday:(id)weekday;	// 0x33f7cc29
- (id)_dateFormattedWithFormatter:(id)formatter arguments:(id)arguments;	// 0x33f7c951
- (id)_deviceModel;	// 0x33f7cdb1
- (id)_tempInWeatherUnits:(id)weatherUnits;	// 0x33f7cca1
- (id)stringForExpression:(id)expression;	// 0x33f7cfb1
- (void)useSpeechMode:(BOOL)mode;	// 0x33f7c88d
@end

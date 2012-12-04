/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class NSArray, NSDictionary;

@interface PSInternationalController : PSListController {
	CFLocaleRef _locale;	// 288 = 0x120
	double _sampleTime;	// 292 = 0x124
	NSArray *_voiceControlTitles;	// 300 = 0x12c
	NSDictionary *_voiceControlShortTitles;	// 304 = 0x130
	NSArray *_voiceControlValues;	// 308 = 0x134
}
@property(readonly, retain) NSDictionary *voiceControlShortTitles;	// G=0x354daba9; converted property
+ (id)capitalizeFirstPartOfCountry:(id)country;	// 0x354dabf9
+ (void)setLanguage:(id)language;	// 0x354da2d1
+ (void)setLocale:(id)locale;	// 0x354da399
+ (id)voiceControlLanguageData;	// 0x354dad1d
- (id)init;	// 0x354d9411
- (void)_initVoiceControlData;	// 0x354da9f5
- (void)_loadLocaleIfNeeded;	// 0x354d9dd9
- (id)calendar:(id)calendar;	// 0x354da62d
- (void)dealloc;	// 0x354d96c9
- (id)defaultCalendarForLocale:(id)locale;	// 0x354da93d
- (id)formattedDate:(id)date;	// 0x354da70d
- (id)formattedPhoneNumber:(id)number;	// 0x354da849
- (id)formattedTime:(id)time;	// 0x354da7a1
- (id)language:(id)language;	// 0x354da0f9
- (id)locale:(id)locale;	// 0x354da475
- (void)localeChangedAction;	// 0x354d9401
- (id)localizedComponent:(id)component forDictionary:(id)dictionary;	// 0x354d97c5
- (id)localizedLanguage:(id)language;	// 0x354da13d
- (void)reloadLocale;	// 0x354d98a1
- (void)reloadSpecifiers;	// 0x354d9859
- (void)setCalendar:(id)calendar specifier:(id)specifier;	// 0x354da4fd
- (void)setLanguage:(id)language specifier:(id)specifier;	// 0x354da2a5
- (void)setLocale:(id)locale specifier:(id)specifier;	// 0x354da36d
- (void)setVoiceControlLanguage:(id)language specifier:(id)specifier;	// 0x354da1dd
- (void)showLanguageSheet:(id)sheet;	// 0x354da061
- (id)specifiers;	// 0x354d9dfd
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x354d9601
- (void)viewWillAppear:(BOOL)view;	// 0x354d9771
- (id)voiceControlLanguage:(id)language;	// 0x354da20d
// converted property getter: - (id)voiceControlShortTitles;	// 0x354daba9
- (id)voiceControlTitles:(id)titles;	// 0x354dab81
- (id)voiceControlValues:(id)values;	// 0x354dabd1
@end

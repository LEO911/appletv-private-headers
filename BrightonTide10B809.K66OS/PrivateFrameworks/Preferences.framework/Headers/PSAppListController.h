/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"


@interface PSAppListController : PSListController {
}
- (id)_localizedTitlesFromUnlocalizedTitles:(id)unlocalizedTitles stringsTable:(id)table;	// 0x352f909d
- (id)_readToggleSwitchSpecifierValue:(id)value;	// 0x352f8e25
- (void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;	// 0x352f8fb9
- (id)_uiValueFromValue:(id)value specifier:(id)specifier;	// 0x352f8d3d
- (id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;	// 0x352f8da1
- (id)bundle;	// 0x352fad95
- (id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352fa609
- (id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f9215
- (id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352fa345
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)postThirdPartySetting;	// 0x352f9171
- (id)radioGroupSpecifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f93fd
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x352f91d1
- (id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f9e35
- (id)specifiers;	// 0x352faa49
- (id)specifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352fa739
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x352facb1
- (id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f97c9
- (id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352fa121
- (id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x352f9c2d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "BulletinBoard-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSData, NSString, NSArray;

@interface BBSectionInfo : NSObject <NSCopying, NSCoding> {
	NSString *_sectionID;	// 4 = 0x4
	NSString *_subsectionID;	// 8 = 0x8
	unsigned _sectionType;	// 12 = 0xc
	BOOL _showsInNotificationCenter;	// 16 = 0x10
	unsigned _suppressedSettings;	// 20 = 0x14
	unsigned _pushSettings;	// 24 = 0x18
	unsigned _alertType;	// 28 = 0x1c
	unsigned _notificationCenterLimit;	// 32 = 0x20
	BOOL _showsInLockScreen;	// 36 = 0x24
	BOOL _showsOnBluetoothDevices;	// 37 = 0x25
	NSString *_pathToWeeAppPluginBundle;	// 40 = 0x28
	NSString *_displayName;	// 44 = 0x2c
	NSData *_iconData;	// 48 = 0x30
	NSArray *_subsections;	// 52 = 0x34
	BBSectionInfo *_parentSection;	// 56 = 0x38
	NSString *_factorySectionID;	// 60 = 0x3c
	NSArray *_dataProviderIDs;	// 64 = 0x40
	BOOL _suppressFromSettings;	// 68 = 0x44
	BOOL _displaysCriticalBulletins;	// 69 = 0x45
	int _subsectionPriority;	// 72 = 0x48
	BOOL _hideWeeApp;	// 76 = 0x4c
	unsigned _version;	// 80 = 0x50
	BOOL _showsMessagePreview;	// 84 = 0x54
}
@property(assign, nonatomic) unsigned alertType;	// G=0x370d6b19; S=0x370d6b29; @synthesize=_alertType
@property(assign, nonatomic) unsigned bulletinCount;	// G=0x370d5cd1; S=0x370d5cc1; 
@property(copy, nonatomic) NSArray *dataProviderIDs;	// G=0x370d6c8d; S=0x370d6ca1; @synthesize=_dataProviderIDs
@property(copy, nonatomic) NSString *displayName;	// G=0x370d6b5d; S=0x370d6b71; @synthesize=_displayName
@property(assign, nonatomic) BOOL displaysCriticalBulletins;	// G=0x370d6ba5; S=0x370d6bb5; @synthesize=_displaysCriticalBulletins
@property(assign, nonatomic) BOOL enabled;	// G=0x370d5ca9; S=0x370d5c99; 
@property(copy, nonatomic) NSString *factorySectionID;	// G=0x370d6c69; S=0x370d6c7d; @synthesize=_factorySectionID
@property(assign, nonatomic) BOOL hideWeeApp;	// G=0x370d6c49; S=0x370d6c59; @synthesize=_hideWeeApp
@property(copy, nonatomic) NSData *iconData;	// G=0x370d6b81; S=0x370d6b95; @synthesize=_iconData
@property(assign, nonatomic) unsigned notificationCenterLimit;	// G=0x370d6ad9; S=0x370d6ae9; @synthesize=_notificationCenterLimit
@property(assign, nonatomic) BBSectionInfo *parentSection;	// G=0x370d6be9; S=0x370d6bf9; @synthesize=_parentSection
@property(copy, nonatomic) NSString *pathToWeeAppPluginBundle;	// G=0x370d6b39; S=0x370d6b4d; @synthesize=_pathToWeeAppPluginBundle
@property(assign, nonatomic) unsigned pushSettings;	// G=0x370d6af9; S=0x370d6b09; @synthesize=_pushSettings
@property(copy, nonatomic) NSString *sectionID;	// G=0x370d69f1; S=0x370d6a05; @synthesize=_sectionID
@property(assign, nonatomic) unsigned sectionType;	// G=0x370d6a39; S=0x370d6a49; @synthesize=_sectionType
@property(assign, nonatomic) BOOL showsInLockScreen;	// G=0x370d6a99; S=0x370d6aa9; @synthesize=_showsInLockScreen
@property(assign, nonatomic) BOOL showsInNotificationCenter;	// G=0x370d6a79; S=0x370d6a89; @synthesize=_showsInNotificationCenter
@property(assign, nonatomic) BOOL showsMessagePreview;	// G=0x370d6cd1; S=0x370d6ce1; @synthesize=_showsMessagePreview
@property(assign, nonatomic) BOOL showsOnBluetoothDevices;	// G=0x370d6ab9; S=0x370d6ac9; @synthesize=_showsOnBluetoothDevices
@property(copy, nonatomic) NSString *subsectionID;	// G=0x370d6a15; S=0x370d6a29; @synthesize=_subsectionID
@property(assign, nonatomic) int subsectionPriority;	// G=0x370d6c09; S=0x370d6c19; @synthesize=_subsectionPriority
@property(copy, nonatomic) NSArray *subsections;	// G=0x370d6bc5; S=0x370d6bd9; @synthesize=_subsections
@property(assign, nonatomic) BOOL suppressFromSettings;	// G=0x370d6a59; S=0x370d6a69; @synthesize=_suppressFromSettings
@property(assign, nonatomic) unsigned suppressedSettings;	// G=0x370d6c29; S=0x370d6c39; @synthesize=_suppressedSettings
@property(assign, nonatomic) unsigned version;	// G=0x370d6cb1; S=0x370d6cc1; @synthesize=_version
+ (id)defaultSectionInfoForType:(unsigned)type;	// 0x370d4ed5
+ (BOOL)defaultStateForSetting:(unsigned)setting inSectionType:(unsigned)sectionType;	// 0x370d4ead
- (id)init;	// 0x370d4f35
- (id)initWithCoder:(id)coder;	// 0x370d6165
- (void)_addSubsection:(id)subsection;	// 0x370d573d
- (void)_associateDataProviderSectionInfo:(id)info;	// 0x370d5af9
- (void)_configureWithDefaultsForSectionType:(unsigned)sectionType;	// 0x370d5111
- (void)_dissociateDataProviderSectionInfo:(id)info;	// 0x370d5bc1
- (id)_pushSettingsDescription;	// 0x370d5245
- (void)_replaceSubsection:(id)subsection;	// 0x370d5869
- (id)_subsectionForID:(id)anId;	// 0x370d59ed
// declared property getter: - (unsigned)alertType;	// 0x370d6b19
// declared property getter: - (unsigned)bulletinCount;	// 0x370d5cd1
- (id)copyWithZone:(NSZone *)zone;	// 0x370d5ce1
// declared property getter: - (id)dataProviderIDs;	// 0x370d6c8d
- (void)dealloc;	// 0x370d4f7d
- (id)description;	// 0x370d530d
// declared property getter: - (id)displayName;	// 0x370d6b5d
// declared property getter: - (BOOL)displaysCriticalBulletins;	// 0x370d6ba5
- (id)effectiveSectionInfo;	// 0x370d6cf1
- (id)effectiveSectionInfoWithFactoryInfo:(id)factoryInfo;	// 0x370d7289
// declared property getter: - (BOOL)enabled;	// 0x370d5ca9
- (void)encodeWithCoder:(id)coder;	// 0x370d6629
// declared property getter: - (id)factorySectionID;	// 0x370d6c69
// declared property getter: - (BOOL)hideWeeApp;	// 0x370d6c49
// declared property getter: - (id)iconData;	// 0x370d6b81
// declared property getter: - (unsigned)notificationCenterLimit;	// 0x370d6ad9
// declared property getter: - (id)parentSection;	// 0x370d6be9
// declared property getter: - (id)pathToWeeAppPluginBundle;	// 0x370d6b39
// declared property getter: - (unsigned)pushSettings;	// 0x370d6af9
// declared property getter: - (id)sectionID;	// 0x370d69f1
// declared property getter: - (unsigned)sectionType;	// 0x370d6a39
// declared property setter: - (void)setAlertType:(unsigned)type;	// 0x370d6b29
// declared property setter: - (void)setBulletinCount:(unsigned)count;	// 0x370d5cc1
// declared property setter: - (void)setDataProviderIDs:(id)ids;	// 0x370d6ca1
// declared property setter: - (void)setDisplayName:(id)name;	// 0x370d6b71
// declared property setter: - (void)setDisplaysCriticalBulletins:(BOOL)bulletins;	// 0x370d6bb5
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x370d5c99
// declared property setter: - (void)setFactorySectionID:(id)anId;	// 0x370d6c7d
// declared property setter: - (void)setHideWeeApp:(BOOL)app;	// 0x370d6c59
// declared property setter: - (void)setIconData:(id)data;	// 0x370d6b95
// declared property setter: - (void)setNotificationCenterLimit:(unsigned)limit;	// 0x370d6ae9
// declared property setter: - (void)setParentSection:(id)section;	// 0x370d6bf9
// declared property setter: - (void)setPathToWeeAppPluginBundle:(id)weeAppPluginBundle;	// 0x370d6b4d
// declared property setter: - (void)setPushSettings:(unsigned)settings;	// 0x370d6b09
// declared property setter: - (void)setSectionID:(id)anId;	// 0x370d6a05
// declared property setter: - (void)setSectionType:(unsigned)type;	// 0x370d6a49
// declared property setter: - (void)setShowsInLockScreen:(BOOL)lockScreen;	// 0x370d6aa9
// declared property setter: - (void)setShowsInNotificationCenter:(BOOL)notificationCenter;	// 0x370d6a89
// declared property setter: - (void)setShowsMessagePreview:(BOOL)preview;	// 0x370d6ce1
// declared property setter: - (void)setShowsOnBluetoothDevices:(BOOL)devices;	// 0x370d6ac9
// declared property setter: - (void)setSubsectionID:(id)anId;	// 0x370d6a29
// declared property setter: - (void)setSubsectionPriority:(int)priority;	// 0x370d6c19
// declared property setter: - (void)setSubsections:(id)subsections;	// 0x370d6bd9
// declared property setter: - (void)setSuppressFromSettings:(BOOL)settings;	// 0x370d6a69
// declared property setter: - (void)setSuppressedSettings:(unsigned)settings;	// 0x370d6c39
// declared property setter: - (void)setVersion:(unsigned)version;	// 0x370d6cc1
// declared property getter: - (BOOL)showsInLockScreen;	// 0x370d6a99
// declared property getter: - (BOOL)showsInNotificationCenter;	// 0x370d6a79
// declared property getter: - (BOOL)showsMessagePreview;	// 0x370d6cd1
// declared property getter: - (BOOL)showsOnBluetoothDevices;	// 0x370d6ab9
// declared property getter: - (id)subsectionID;	// 0x370d6a15
// declared property getter: - (int)subsectionPriority;	// 0x370d6c09
// declared property getter: - (id)subsections;	// 0x370d6bc5
// declared property getter: - (BOOL)suppressFromSettings;	// 0x370d6a59
// declared property getter: - (unsigned)suppressedSettings;	// 0x370d6c29
// declared property getter: - (unsigned)version;	// 0x370d6cb1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "TLVibrationPickerViewControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "ToneLibrary-Structs.h"
#import "UITableViewDelegate.h"
#import <NSObject.h> // Unknown library

@class NSMutableArray, NSIndexPath, UITableView, TLVibrationPickerViewController, NSString, TLToneManager;

@interface TLToneTableController : NSObject <TLVibrationPickerViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
@private
	id _delegate;	// 4 = 0x4
	NSMutableArray *_ringtoneGroupLists;	// 8 = 0x8
	NSMutableArray *_ringtoneGroupNames;	// 12 = 0xc
	NSIndexPath *_selectedRingtoneIndexPath;	// 16 = 0x10
	BOOL _showsNone;	// 20 = 0x14
	BOOL _showsDefault;	// 21 = 0x15
	NSString *_noneString;	// 24 = 0x18
	NSString *_noneIdentifier;	// 28 = 0x1c
	NSString *_defaultIdentifier;	// 32 = 0x20
	BOOL _showsNothingSelected;	// 36 = 0x24
	BOOL _showsRingtonesStore;	// 37 = 0x25
	BOOL _noneAtTop;	// 38 = 0x26
	UITableView *_tableView;	// 40 = 0x28
	BOOL _showsVibrations;	// 44 = 0x2c
	BOOL _showsVibrationsAlongsideTones;	// 45 = 0x2d
	BOOL _showsDefaultVibration;	// 46 = 0x2e
	BOOL _showsUserGeneratedVibrations;	// 47 = 0x2f
	BOOL _showsNoneVibration;	// 48 = 0x30
	BOOL _showsNoVibrationSelected;	// 49 = 0x31
	NSString *_selectedVibrationIdentifier;	// 52 = 0x34
	TLVibrationPickerViewController *_vibrationPickerViewController;	// 56 = 0x38
	TLToneManager *_ringtoneManager;	// 60 = 0x3c
	id _avController;	// 64 = 0x40
	BOOL _startedInteruption;	// 68 = 0x44
	BOOL _customAVController;	// 69 = 0x45
	BOOL _tonePicker;	// 70 = 0x46
	unsigned _filter;	// 72 = 0x48
	unsigned _systemRingtoneStartIndex;	// 76 = 0x4c
}
@property(readonly, retain) id avController;	// G=0x31f0f7d9; converted property
@property(retain, nonatomic, setter=setDefaultIdentifier:) id defaultIdentifier;	// G=0x31f0ffb5; S=0x31f0ffc5; @synthesize=_defaultIdentifier
@property(readonly, retain) TLToneManager *ringtoneManager;	// G=0x31f0d6f1; converted property
@property(retain) id selectedRingtoneIdentifier;	// G=0x31f0d6d1; S=0x31f0d539; converted property
@property(retain) NSString *selectedVibrationIdentifier;	// G=0x31f0dced; S=0x31f0ddb1; converted property
- (id)init;	// 0x31f0bc45
- (id)initWithAVController:(id)avcontroller;	// 0x31f0bc59
- (id)initWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x31f0bc79
- (void)_setRingtoneManager:(id)manager;	// 0x31f0ff75
- (void)_setSelectedVibrationIdentifierTableViewUpdateDidComplete:(id)_setSelectedVibrationIdentifierTableViewUpdate;	// 0x31f0dcfd
- (BOOL)_showsDefaultVibration;	// 0x31f0e235
- (BOOL)_showsNoneVibration;	// 0x31f0e255
- (BOOL)_showsUserGeneratedVibrations;	// 0x31f0e245
- (BOOL)_showsVibrations;	// 0x31f0e181
- (BOOL)_showsVibrationsSwitchIsOn;	// 0x31f0e1d1
- (void)_stopPlayingButKeepVibrating:(BOOL)vibrating;	// 0x31f0fd91
- (void)_stopPlayingWithFadeOut:(BOOL)fadeOut shouldKeepVibrating:(BOOL)vibrating;	// 0x31f0fc51
- (void)_switchValueDidChange:(id)_switchValue;	// 0x31f0feb9
- (id)_vibrationPickerViewController;	// 0x31f0e281
- (void)addRingtonesInDirectory:(id)directory toArray:(id)array fileExtension:(id)extension;	// 0x31f0bfe1
// converted property getter: - (id)avController;	// 0x31f0f7d9
- (int)compareRingtoneWithIdentifier:(id)identifier toRingtoneWithIdentifier:(id)identifier2;	// 0x31f0c111
- (id)copyCurrentPhoneRingtoneIdentifier;	// 0x31f0e4d5
- (id)copyCurrentPhoneRingtoneName;	// 0x31f0e4b5
- (id)copyCurrentPhoneTextToneIdentifier;	// 0x31f0e515
- (id)copyCurrentPhoneTextToneName;	// 0x31f0e4f5
- (void)dealloc;	// 0x31f0be69
// declared property getter: - (id)defaultIdentifier;	// 0x31f0ffb5
- (void)finishedWithPicker;	// 0x31f0fdb9
- (id)identifierOfRingtoneAtIndexPath:(id)indexPath;	// 0x31f0c4bd
- (id)indexPathForDefaultGroup;	// 0x31f0c751
- (id)indexPathForFirstRingtoneGroup;	// 0x31f0c7d1
- (id)indexPathForNoneGroup;	// 0x31f0c87d
- (id)indexPathForRingtoneWithIdentifier:(id)identifier;	// 0x31f0c619
- (id)indexPathForRingtonesStoreGroup;	// 0x31f0c715
- (id)indexPathForSelectedRingtone;	// 0x31f0c9d1
- (id)indexPathForVibrationGroup;	// 0x31f0c91d
- (BOOL)isDefaultGroupAtIndexPath:(id)indexPath;	// 0x31f0c1e5
- (BOOL)isDividerAtIndexPath:(id)indexPath;	// 0x31f0c48d
- (BOOL)isNoneGroupAtIndexPath:(id)indexPath;	// 0x31f0c279
- (BOOL)isOtherVibrationGroupWithSection:(int)section;	// 0x31f0c411
- (BOOL)isRingtonesStoreGroupAtIndexPath:(id)indexPath;	// 0x31f0c195
- (BOOL)isVibrationGroupAtIndexPath:(id)indexPath;	// 0x31f0c33d
- (id)loadTextTonesFromPlist;	// 0x31f0c9e1
- (int)numberOfSectionsInTableView:(id)tableView;	// 0x31f0ec95
- (void)playRingtoneWithIdentifier:(id)identifier;	// 0x31f0f9c5
- (void)processNewRingtoneSelected:(id)selected;	// 0x31f0e43d
- (void)reloadRingtones;	// 0x31f0cbb5
// converted property getter: - (id)ringtoneManager;	// 0x31f0d6f1
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x31f0d6d1
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x31f0dced
- (void)setAVController:(id)controller;	// 0x31f0f6c5
// declared property setter: - (void)setDefaultIdentifier:(id)identifier;	// 0x31f0ffc5
- (void)setDelegate:(id)delegate;	// 0x31f0d4e5
- (void)setNoneAtTop:(BOOL)top;	// 0x31f0d9fd
- (void)setNoneString:(id)string;	// 0x31f0daa9
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x31f0d539
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x31f0ddb1
- (void)setShowsDefault:(BOOL)aDefault;	// 0x31f0d7c5
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x31f0db1d
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x31f0dc89
- (void)setShowsNone:(BOOL)none;	// 0x31f0d955
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x31f0dc79
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x31f0daed
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x31f0d701
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x31f0db2d
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x31f0dafd
- (void)setShowsVibrationsAlongsideTones:(BOOL)tones;	// 0x31f0db0d
- (void)setTableView:(id)view;	// 0x31f0d4f5
- (void)stopPlaying;	// 0x31f0fda5
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x31f0fd7d
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x31f0e535
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x31f0efb1
- (float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;	// 0x31f0ef55
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x31f0ed81
- (id)tableView:(id)view titleForHeaderInSection:(int)section;	// 0x31f0f465
- (void)togglePlayWithRingtoneWithIdentifier:(id)identifier;	// 0x31f0f961
- (void)vibrationPickerViewController:(id)controller selectedVibrationWithIdentifier:(id)identifier;	// 0x31f0fe41
@end


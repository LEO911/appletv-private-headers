/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <UIView.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class TLToneTableController, UITableView;

@interface TLTonePicker : UIView {
@private
	UITableView *_table;	// 48 = 0x30
	TLToneTableController *_tableController;	// 52 = 0x34
	id _delegate;	// 56 = 0x38
}
@property(assign, nonatomic) id delegate;	// G=0x34f1fcb5; S=0x34f1f731; @synthesize=_delegate
@property(retain) id selectedRingtoneIdentifier;	// G=0x34f1f985; S=0x34f1f949; converted property
@property(retain) id selectedVibrationIdentifier;	// G=0x34f1fa9d; S=0x34f1fabd; converted property
+ (id)ringtonePickerWithFrame:(CGRect)frame;	// 0x34f1f329
+ (id)texttonePickerWithFrame:(CGRect)frame;	// 0x34f1f391
+ (id)tonePickerWithFrame:(CGRect)frame;	// 0x34f1f3fd
- (id)initWithFrame:(CGRect)frame;	// 0x34f1f26d
- (id)initWithFrame:(CGRect)frame avController:(id)controller;	// 0x34f1f299
- (id)initWithFrame:(CGRect)frame avController:(id)controller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x34f1f2cd
- (void)_reloadData;	// 0x34f1f521
- (void)buildUIWithAVController:(id)avcontroller filter:(unsigned)filter tonePicker:(BOOL)picker;	// 0x34f1f775
- (float)contentHeight;	// 0x34f1fbb5
- (void)dealloc;	// 0x34f1f469
// declared property getter: - (id)delegate;	// 0x34f1fcb5
- (void)didMoveToWindow;	// 0x34f1fadd
- (void)displayScrollerIndicators;	// 0x34f1fb35
- (void)finishedWithPicker;	// 0x34f1fb95
- (void)ringtoneManagerContentsChanged:(id)changed;	// 0x34f1f8f9
- (void)ringtoneTableController:(id)controller selectedRingtoneWithIdentifier:(id)identifier;	// 0x34f1fc05
- (void)ringtoneTableController:(id)controller willPlayRingtoneWithIdentifier:(id)identifier;	// 0x34f1fc5d
// converted property getter: - (id)selectedRingtoneIdentifier;	// 0x34f1f985
// converted property getter: - (id)selectedVibrationIdentifier;	// 0x34f1fa9d
- (void)setAVController:(id)controller;	// 0x34f1f589
- (void)setDefaultIdentifier:(id)identifier;	// 0x34f1f67d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x34f1f731
- (void)setNoneAtTop:(BOOL)top;	// 0x34f1f641
- (void)setNoneString:(id)string;	// 0x34f1f6b9
// converted property setter: - (void)setSelectedRingtoneIdentifier:(id)identifier;	// 0x34f1f949
// converted property setter: - (void)setSelectedVibrationIdentifier:(id)identifier;	// 0x34f1fabd
- (void)setShowsDefault:(BOOL)aDefault;	// 0x34f1f5e5
- (void)setShowsDefaultVibration:(BOOL)vibration;	// 0x34f1fa1d
- (void)setShowsNoVibrationSelected:(BOOL)selected;	// 0x34f1fa7d
- (void)setShowsNone:(BOOL)none;	// 0x34f1f621
- (void)setShowsNoneVibration:(BOOL)vibration;	// 0x34f1fa5d
- (void)setShowsNothingSelected:(BOOL)selected;	// 0x34f1f6f5
- (void)setShowsRingtonesStore:(BOOL)store;	// 0x34f1f5a9
- (void)setShowsUserGeneratedVibrations:(BOOL)vibrations;	// 0x34f1fa3d
- (void)setShowsVibrations:(BOOL)vibrations;	// 0x34f1f9a5
- (void)setShowsVibrationsAlongsideTones:(BOOL)tones;	// 0x34f1f9e1
- (void)stopPlaying;	// 0x34f1fb55
- (void)stopPlayingWithFadeOut:(BOOL)fadeOut;	// 0x34f1fb75
@end


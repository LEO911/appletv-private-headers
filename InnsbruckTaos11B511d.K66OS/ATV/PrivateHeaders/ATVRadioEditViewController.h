/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"
#import "ATVRadioStationsChangeObserver.h"

@class BRMediaMenuView, NSTimer, ATVImage, ATVRadioStationsDataSource;

__attribute__((visibility("hidden")))
@interface ATVRadioEditViewController : BRViewController <ATVRadioStationsChangeObserver> {
	BOOL _lastExplicitContentSetting;	// 104 = 0x68
	ATVRadioStationsDataSource *_dataSource;	// 108 = 0x6c
	NSTimer *_spinnerTimer;	// 112 = 0x70
	BRMediaMenuView *_mediaMenuView;	// 116 = 0x74
	ATVImage *_trashCanImage;	// 120 = 0x78
	ATVImage *_menuDefaultImage;	// 124 = 0x7c
	NSTimer *_explicitSettingChangedTimer;	// 128 = 0x80
}
@property(retain, nonatomic) ATVRadioStationsDataSource *dataSource;	// G=0x21e215; S=0x21e225; @synthesize=_dataSource
@property(assign, nonatomic) __weak NSTimer *explicitSettingChangedTimer;	// G=0x21e329; S=0x21e349; @synthesize=_explicitSettingChangedTimer
@property(assign, nonatomic) BOOL lastExplicitContentSetting;	// G=0x21e35d; S=0x21e36d; @synthesize=_lastExplicitContentSetting
@property(retain, nonatomic) BRMediaMenuView *mediaMenuView;	// G=0x21e281; S=0x21e291; @synthesize=_mediaMenuView
@property(retain, nonatomic) ATVImage *menuDefaultImage;	// G=0x21e2f1; S=0x21e301; @synthesize=_menuDefaultImage
@property(assign, nonatomic) __weak NSTimer *spinnerTimer;	// G=0x21e24d; S=0x21e26d; @synthesize=_spinnerTimer
@property(retain, nonatomic) ATVImage *trashCanImage;	// G=0x21e2b9; S=0x21e2c9; @synthesize=_trashCanImage
- (id)init;	// 0x21c1e9
- (void).cxx_destruct;	// 0x21e37d
- (void)_explicitSettingChangedTimerFired:(id)fired;	// 0x21e0f1
- (id)_indexPathForStationWithIdentifier:(id)identifier;	// 0x21ca05
- (id)_menuItemForStation:(id)station;	// 0x21ccc5
- (unsigned)_numberOfStations;	// 0x21c94d
- (void)_showSpinner;	// 0x21c7e9
- (id)_stationForRowAtIndexPath:(id)indexPath;	// 0x21c989
- (id)_stations;	// 0x21c905
- (id)_stringValueForCurrentExplicitnessOption;	// 0x21cf29
- (id)_titleForSectionAtIndex:(unsigned)index;	// 0x21cca1
- (void)_toggleExplicitContentAllowed;	// 0x21cfa1
- (void)_updateExplicitSetting;	// 0x21e121
- (void)_updatePreviewForItemAtIndexPath:(id)indexPath;	// 0x21d121
- (void)controlWasActivated;	// 0x21c635
- (void)controlWasDeactivated;	// 0x21c761
// declared property getter: - (id)dataSource;	// 0x21e215
// declared property getter: - (id)explicitSettingChangedTimer;	// 0x21e329
// declared property getter: - (BOOL)lastExplicitContentSetting;	// 0x21e35d
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x21dc39
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x21e0c1
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0x21df21
- (float)list:(id)list heightForItemAtIndexPath:(id)indexPath;	// 0x21db05
- (float)list:(id)list heightForSectionHeader:(long)sectionHeader;	// 0x21dabd
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0x21d9e1
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0x21d929
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x21d6e9
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x21d811
- (id)list:(id)list sectionHeaderForSection:(long)section;	// 0x21d8bd
- (id)list:(id)list willFocusItemAtIndexPath:(id)indexPath;	// 0x21db11
- (void)listWasActivated:(id)activated;	// 0x21da61
// declared property getter: - (id)mediaMenuView;	// 0x21e281
// declared property getter: - (id)menuDefaultImage;	// 0x21e2f1
- (long)numberOfSectionsInList:(id)list;	// 0x21d7f1
- (void)radioStationsDataSourceDidChangeStations:(id)radioStationsDataSource;	// 0x21d4f1
- (void)radioStationsDataSourceDidChangeStatus:(id)radioStationsDataSource;	// 0x21d55d
- (void)radioStationsDataSourceWillChangeStations:(id)radioStationsDataSource;	// 0x21d499
// declared property setter: - (void)setDataSource:(id)source;	// 0x21e225
// declared property setter: - (void)setExplicitSettingChangedTimer:(id)timer;	// 0x21e349
// declared property setter: - (void)setLastExplicitContentSetting:(BOOL)setting;	// 0x21e36d
// declared property setter: - (void)setMediaMenuView:(id)view;	// 0x21e291
// declared property setter: - (void)setMenuDefaultImage:(id)image;	// 0x21e301
// declared property setter: - (void)setSpinnerTimer:(id)timer;	// 0x21e26d
// declared property setter: - (void)setTrashCanImage:(id)image;	// 0x21e2c9
// declared property getter: - (id)spinnerTimer;	// 0x21e24d
// declared property getter: - (id)trashCanImage;	// 0x21e2b9
- (void)wasPushed;	// 0x21c361
- (void)windowMaxBoundsChanged;	// 0x21d349
@end


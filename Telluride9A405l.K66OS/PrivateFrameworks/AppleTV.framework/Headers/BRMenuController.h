/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRController.h"

@class BRListControl, BRTextControl, BRHeaderControl, BRListControlMonitor;

@interface BRMenuController : BRController {
@private
	BRListControl *_list;	// 80 = 0x50
	BRHeaderControl *_header;	// 84 = 0x54
	id _selectedObject;	// 88 = 0x58
	BOOL _clearSavedSelection;	// 92 = 0x5c
	BRListControlMonitor *_listControlMonitor;	// 96 = 0x60
	float _menuWidthFactor;	// 100 = 0x64
	float _headerWidthFactor;	// 104 = 0x68
	BOOL _useCenteredLayout;	// 108 = 0x6c
	BRTextControl *_primaryTextControl;	// 112 = 0x70
	BRTextControl *_secondaryTextControl;	// 116 = 0x74
	BRTextControl *_labelControl;	// 120 = 0x78
}
@property(readonly, retain) BRHeaderControl *header;	// G=0x35dc0ae1; converted property
@property(assign) float headerWidthFactor;	// G=0x35dc0b2d; S=0x35dc0af1; converted property
@property(readonly, retain) BRListControl *list;	// G=0x35dc0a29; converted property
@property(retain) id listIcon;	// G=0x35dc196d; S=0x35dc1905; converted property
@property(assign) float listIconHorizontalOffset;	// G=0x35dc19ad; S=0x35dc198d; converted property
@property(assign) float listIconKerningFactor;	// G=0x35dc19ed; S=0x35dc19cd; converted property
@property(retain) id listTitle;	// G=0x35dc18c5; S=0x35dc1841; converted property
@property(assign) float menuWidthFactor;	// G=0x35dc0ad1; S=0x35dc0a39; converted property
@property(assign) long selectedItem;	// G=0x35dc1b81; S=0x35dc1b61; converted property
@property(retain) id selectedObject;	// G=0x35dc0ced; S=0x35dc0cad; converted property
- (id)init;	// 0x35dc0591
- (BOOL)_itemSelected:(id)selected;	// 0x35dc1be5
- (id)accessibilityLabel;	// 0x35dc1ad9
- (id)accessibilitySecondaryLabel;	// 0x35dc1af9
- (void)cancelCurrentListMonitorLoads;	// 0x35dc0e9d
- (void)clearSavedSelection;	// 0x35dc0b41
- (int)contextMenuDimOption;	// 0x35dc1ad5
- (id)controlForContextMenuPositioning;	// 0x35dc1a0d
- (id)controlForContextMenuStart;	// 0x35dc1a1d
- (id)controlToDim;	// 0x35dc1a45
- (void)controlWasActivated;	// 0x35dc0b8d
- (void)dealloc;	// 0x35dc06f1
- (long)defaultIndex;	// 0x35dc1bdd
// converted property getter: - (id)header;	// 0x35dc0ae1
// converted property getter: - (float)headerWidthFactor;	// 0x35dc0b2d
- (BOOL)isCurrentSelectionValidForModelData:(id)modelData;	// 0x35dc0d59
- (BOOL)isValidAfterDataUpdate;	// 0x35dc0df1
- (BOOL)isVolatile;	// 0x35dc1c59
- (long)itemCount;	// 0x35dc1ba1
- (void)itemSelected:(long)selected;	// 0x35dc1bd9
- (void)layoutSubcontrols;	// 0x35dc07e5
- (void)layoutSubcontrolsUsingCenteredLayout;	// 0x35dc0f11
// converted property getter: - (id)list;	// 0x35dc0a29
// converted property getter: - (id)listIcon;	// 0x35dc196d
// converted property getter: - (float)listIconHorizontalOffset;	// 0x35dc19ad
// converted property getter: - (float)listIconKerningFactor;	// 0x35dc19ed
// converted property getter: - (id)listTitle;	// 0x35dc18c5
- (float)listVerticalOffset;	// 0x35dc0b3d
- (id)loadModelData;	// 0x35dc0cfd
// converted property getter: - (float)menuWidthFactor;	// 0x35dc0ad1
- (id)primaryInfoTextControl;	// 0x35dc1515
- (void)refreshControllerForModelUpdate;	// 0x35dc0d01
- (void)refreshControllerForModelUpdateToObject:(id)object;	// 0x35dc0d05
- (id)secondaryInfoTextControl;	// 0x35dc1665
// converted property getter: - (long)selectedItem;	// 0x35dc1b81
// converted property getter: - (id)selectedObject;	// 0x35dc0ced
// converted property setter: - (void)setHeaderWidthFactor:(float)factor;	// 0x35dc0af1
- (void)setIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x35dc137d
- (void)setLabel:(id)label;	// 0x35dc1675
- (void)setLabel:(id)label withAttributes:(id)attributes;	// 0x35dc16b1
// converted property setter: - (void)setListIcon:(id)icon;	// 0x35dc1905
- (void)setListIcon:(id)icon horizontalOffset:(float)offset kerningFactor:(float)factor;	// 0x35dc18e5
// converted property setter: - (void)setListIconHorizontalOffset:(float)offset;	// 0x35dc198d
// converted property setter: - (void)setListIconKerningFactor:(float)factor;	// 0x35dc19cd
// converted property setter: - (void)setListTitle:(id)title;	// 0x35dc1841
- (void)setListTitle:(id)title withAttributes:(id)attributes;	// 0x35dc17b9
// converted property setter: - (void)setMenuWidthFactor:(float)factor;	// 0x35dc0a39
- (void)setPrimaryInfoText:(id)text;	// 0x35dc13d5
- (void)setPrimaryInfoText:(id)text withAttributes:(id)attributes;	// 0x35dc13e9
- (void)setSecondaryInfoText:(id)text;	// 0x35dc1525
- (void)setSecondaryInfoText:(id)text withAttributes:(id)attributes;	// 0x35dc1539
// converted property setter: - (void)setSelectedItem:(long)item;	// 0x35dc1b61
// converted property setter: - (void)setSelectedObject:(id)object;	// 0x35dc0cad
- (void)setTitle:(id)title;	// 0x35dc1339
- (void)setUseCenteredLayout:(BOOL)layout;	// 0x35dc0ebd
- (BOOL)shouldRefreshForUpdateToObject:(id)object;	// 0x35dc0ded
- (int)soundForSelectingItem:(long)selectingItem;	// 0x35dc1be1
- (void)wasPushed;	// 0x35dc0bf1
@end

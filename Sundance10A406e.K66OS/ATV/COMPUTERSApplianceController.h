/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface COMPUTERSApplianceController : BRViewController {
	id<BRAppliance> _appliance;	// 104 = 0x68
	BOOL _computersListed;	// 108 = 0x6c
	BOOL _viewSelectedOnce;	// 109 = 0x6d
}
@property(assign, nonatomic) BOOL _computersListed;	// G=0xc086d; S=0xc087d; @synthesize
@property(assign, nonatomic) BOOL _viewSelectedOnce;	// G=0xc088d; S=0xc089d; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xc0849; S=0xc0859; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xbfef1
- (void).cxx_destruct;	// 0xc08ad
// declared property getter: - (BOOL)_computersListed;	// 0xc086d
- (void)_homeShareServersChanged:(id)changed;	// 0xc113d
- (void)_selectView;	// 0xc08c1
// declared property getter: - (BOOL)_viewSelectedOnce;	// 0xc088d
// declared property getter: - (id)appliance;	// 0xc0849
- (void)dealloc;	// 0xbffdd
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc0719
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xc0631
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xc0481
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc02e5
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc0425
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xc0859
// declared property setter: - (void)set_computersListed:(BOOL)listed;	// 0xc087d
// declared property setter: - (void)set_viewSelectedOnce:(BOOL)once;	// 0xc089d
- (void)wasExhumed;	// 0xc017d
- (void)wasPushed;	// 0xc0049
@end


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
@property(assign, nonatomic) BOOL _computersListed;	// G=0xc9c01; S=0xc9c11; @synthesize
@property(assign, nonatomic) BOOL _viewSelectedOnce;	// G=0xc9c21; S=0xc9c31; @synthesize
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xc9bdd; S=0xc9bed; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xc9285
- (void).cxx_destruct;	// 0xc9c41
// declared property getter: - (BOOL)_computersListed;	// 0xc9c01
- (void)_homeShareServersChanged:(id)changed;	// 0xca4d1
- (void)_selectView;	// 0xc9c55
// declared property getter: - (BOOL)_viewSelectedOnce;	// 0xc9c21
// declared property getter: - (id)appliance;	// 0xc9bdd
- (void)dealloc;	// 0xc9371
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc9aad
- (id)list:(id)list indexPathForItemID:(id)itemID;	// 0xc99c5
- (id)list:(id)list itemIDForIndexPath:(id)indexPath;	// 0xc9815
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc9679
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc97b9
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xc9bed
// declared property setter: - (void)set_computersListed:(BOOL)listed;	// 0xc9c11
// declared property setter: - (void)set_viewSelectedOnce:(BOOL)once;	// 0xc9c31
- (void)wasExhumed;	// 0xc9511
- (void)wasPushed;	// 0xc93dd
@end


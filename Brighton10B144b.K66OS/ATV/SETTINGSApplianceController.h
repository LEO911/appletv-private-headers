/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRViewController.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface SETTINGSApplianceController : BRViewController {
	id<BRAppliance> _appliance;	// 104 = 0x68
}
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xc924d; S=0xc925d; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xc8bf9
- (void).cxx_destruct;	// 0xc9271
- (void)_applianceCategoriesChanged:(id)changed;	// 0xc91f5
// declared property getter: - (id)appliance;	// 0xc924d
- (void)dealloc;	// 0xc8e11
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xc9059
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xc8e7d
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xc8ffd
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xc925d
@end


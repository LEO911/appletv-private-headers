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
	id<BRAppliance> _appliance;	// 100 = 0x64
}
@property(retain, nonatomic) id<BRAppliance> appliance;	// G=0xb9975; S=0xb9985; @synthesize=_appliance
- (id)initWithAppliance:(id)appliance;	// 0xb946d
- (void).cxx_destruct;	// 0xb9999
// declared property getter: - (id)appliance;	// 0xb9975
- (void)list:(id)list didSelectItemAtIndexPath:(id)indexPath;	// 0xb9801
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0xb9625
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0xb97a5
// declared property setter: - (void)setAppliance:(id)appliance;	// 0xb9985
@end

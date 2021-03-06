/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSString, NSDictionary, NSArray, NetflixNrdObjectCallback;

@interface NetflixRegistration : NetflixNrdObject <NetflixNrdObjectProtocol> {
	NetflixNrdObjectCallback *createDeviceAccountCallback_;	// 4 = 0x4
	NetflixNrdObjectCallback *selectDeviceAccountCallback_;	// 8 = 0x8
	NetflixNrdObjectCallback *unselectDeviceAccountCallback_;	// 12 = 0xc
	NetflixNrdObjectCallback *deactivateCallback_;	// 16 = 0x10
	NetflixNrdObjectCallback *deactivateAllCallback_;	// 20 = 0x14
}
@property(copy) NSDictionary *activationTokens;	// G=0x515559; S=0x515799; 
@property(retain) NetflixNrdObjectCallback *createDeviceAccountCallback;	// G=0x516bb5; S=0x516bc9; @synthesize=createDeviceAccountCallback_
@property(readonly, assign) NSString *currentDeviceAccount;	// G=0x515479; 
@property(retain) NetflixNrdObjectCallback *deactivateAllCallback;	// G=0x516c45; S=0x516c59; @synthesize=deactivateAllCallback_
@property(retain) NetflixNrdObjectCallback *deactivateCallback;	// G=0x516c21; S=0x516c35; @synthesize=deactivateCallback_
@property(readonly, assign) NSArray *deviceAccounts;	// G=0x515401; 
@property(readonly, assign) BOOL registered;	// G=0x5154f1; 
@property(retain) NetflixNrdObjectCallback *selectDeviceAccountCallback;	// G=0x516bd9; S=0x516bed; @synthesize=selectDeviceAccountCallback_
@property(retain) NetflixNrdObjectCallback *unselectDeviceAccountCallback;	// G=0x516bfd; S=0x516c11; @synthesize=unselectDeviceAccountCallback_
+ (id)sharedInstance;	// 0x515255
- (void)activate:(id)activate params:(id)params;	// 0x515e79
// declared property getter: - (id)activationTokens;	// 0x515559
- (void)addEventListener:(id)listener name:(id)name;	// 0x516b25
- (void)cancelRendezvous;	// 0x515aa9
- (void)createDeviceAccount:(id)account;	// 0x515ae1
// declared property getter: - (id)createDeviceAccountCallback;	// 0x516bb5
// declared property getter: - (id)currentDeviceAccount;	// 0x515479
- (void)deactivate:(id)deactivate callback:(id)callback;	// 0x515d39
- (void)deactivateAll:(id)all;	// 0x515e01
// declared property getter: - (id)deactivateAllCallback;	// 0x516c45
// declared property getter: - (id)deactivateCallback;	// 0x516c21
- (void)dealloc;	// 0x515341
// declared property getter: - (id)deviceAccounts;	// 0x515401
- (void)emailActivate:(id)activate password:(id)password;	// 0x515c75
- (void)getDeviceTokens;	// 0x515c21
- (BOOL)handleEvent:(id)event;	// 0x515ff5
- (void)massDeactivationCheck;	// 0x515d01
// declared property getter: - (BOOL)registered;	// 0x5154f1
- (void)removeEventListener:(id)listener name:(id)name;	// 0x516b6d
- (void)selectDeviceAccount:(id)account callback:(id)callback;	// 0x515b29
// declared property getter: - (id)selectDeviceAccountCallback;	// 0x516bd9
// declared property setter: - (void)setActivationTokens:(id)tokens;	// 0x515799
// declared property setter: - (void)setCreateDeviceAccountCallback:(id)callback;	// 0x516bc9
// declared property setter: - (void)setDeactivateAllCallback:(id)callback;	// 0x516c59
// declared property setter: - (void)setDeactivateCallback:(id)callback;	// 0x516c35
// declared property setter: - (void)setSelectDeviceAccountCallback:(id)callback;	// 0x516bed
// declared property setter: - (void)setUnselectDeviceAccountCallback:(id)callback;	// 0x516c11
- (void)startRendezvous;	// 0x515a45
- (void)tokenActivate:(id)activate;	// 0x515c59
- (void)unselectDeviceAccount:(id)account;	// 0x515bd9
// declared property getter: - (id)unselectDeviceAccountCallback;	// 0x516bfd
- (BOOL)validateDak:(id)dak;	// 0x515efd
@end


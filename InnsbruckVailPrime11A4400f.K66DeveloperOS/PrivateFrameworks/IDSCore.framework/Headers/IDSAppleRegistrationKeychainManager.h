/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
 */

#import </libobjc.A.h>

@class IMTimer, NSRecursiveLock, NSMutableDictionary, NSMutableArray, NSArray;

@interface IDSAppleRegistrationKeychainManager : NSObject {
	NSMutableDictionary *_authenticationCerts;	// 4 = 0x4
	NSMutableArray *_registrationData;	// 8 = 0x8
	IMTimer *_purgeTimer;	// 12 = 0xc
	NSRecursiveLock *_lock;	// 16 = 0x10
	id _purgeCancelBlock;	// 20 = 0x14
	id _purgeEnqueueBlock;	// 24 = 0x18
	BOOL _loaded;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSArray *registrations;	// G=0x311962c1; @dynamic
+ (id)keychainAccessGroupForVersion:(unsigned)version;	// 0x31194c01
+ (id)keychainAccountForVersion:(unsigned)version;	// 0x31194bad
+ (id)keychainServiceForVersion:(unsigned)version;	// 0x31194b8d
+ (id)sharedInstance;	// 0x31194769
- (id)init;	// 0x3119481d
- (BOOL)__saveToKeychain;	// 0x31194c11
- (void)_flush;	// 0x311953fd
- (void)_loadIfNeeded;	// 0x31195691
- (void)_reloadFromDictionary:(id)dictionary;	// 0x31195705
- (BOOL)_saveToKeychain;	// 0x31195309
- (void)_setPurgeTimer;	// 0x311955f9
- (BOOL)addRegistration:(id)registration;	// 0x3119636d
- (id)authenticationCertForID:(id)anId;	// 0x31196ae9
- (void)dealloc;	// 0x31194a8d
- (id)registrationWithServiceType:(id)serviceType registrationType:(int)type value:(id)value;	// 0x311960b5
// declared property getter: - (id)registrations;	// 0x311962c1
- (void)reloadFromKeychain;	// 0x31195a61
- (BOOL)removeAllRegistrations;	// 0x31196745
- (BOOL)removeRegistration:(id)registration;	// 0x311965a5
- (BOOL)saveToKeychain;	// 0x311953e5
- (void)setAuthenticationCert:(id)cert forID:(id)anId;	// 0x31196b95
- (void)systemDidFinishMigration;	// 0x31194b1d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CertUI.framework/CertUI
 */

#import <NSObject.h> // Unknown library
#import "CertUI-Structs.h"


@interface CertUITrustManager : NSObject {
}
+ (id)defaultServiceForProtocol:(id)protocol;	// 0x310b8505
+ (id)defaultTrustManager;	// 0x310b8631
- (void)_migrateVersionZeroFromAccessGroup:(id)accessGroup toGroup:(id)group;	// 0x310b8b25
- (int)actionForTrust:(SecTrust *)trust forHost:(id)host andService:(id)service;	// 0x310b8859
- (void)allowTrust:(SecTrust *)trust forHost:(id)host service:(id)service;	// 0x310b896d
- (void)clearAllTrustSettings;	// 0x310b84e5
- (void)clearSavedTrustSettingsForTrust:(SecTrust *)trust host:(id)host service:(id)service;	// 0x310b8aa5
- (void)migrateFromVersionOne;	// 0x310b8d71
- (void)migrateFromVersionZero;	// 0x310b84ad
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <NSObject.h> // Unknown library
#import "DataAccess-Structs.h"


@interface DAKeychain : NSObject {
}
+ (id)sharedKeychain;	// 0x3355f679
- (CFDictionaryRef)_DACopyMutableAttributesForAccountWithPersistentUUID:(id)persistentUUID accessibility:(int)accessibility;	// 0x3355f7e1
- (CFDictionaryRef)_DACopyMutableQueryForAccountWithPersistentUUID:(id)persistentUUID;	// 0x3355f75d
- (int)_daKeychainAccessibilityForSecAccessibility:(void *)secAccessibility;	// 0x3355f6f9
- (void)_removePersistentCredentialsForAccount:(id)account;	// 0x3355fb09
- (void *)_secAccessibilityForDAKeychainAccessibility:(int)dakeychainAccessibility;	// 0x3355f6c1
- (id)guessPasswordForURL:(id)url;	// 0x335617d5
- (id)loadKeychainInformationsForURL:(id)url;	// 0x33560f15
- (void)migratePasswordForAccount:(id)account persistentUUID:(id)uuid passwordExpected:(BOOL)expected;	// 0x3356005d
- (id)passwordForAccountWithPersistentUUID:(id)persistentUUID expectedAccessibility:(int)accessibility shouldSetAccessibility:(BOOL)accessibility3 passwordExpected:(BOOL)expected;	// 0x3355f835
- (void)removeKeychainInformationsForURL:(id)url;	// 0x3356139d
- (BOOL)removePasswordForAccount:(id)account withPersistentUUID:(id)persistentUUID;	// 0x3355ff81
- (BOOL)saveKeychainInformationsForURL:(id)url andPassword:(id)password withAccessibility:(int)accessibility;	// 0x3356090d
- (BOOL)setPassword:(id)password forAccount:(id)account withPersistentUUID:(id)persistentUUID withAccessibility:(int)accessibility;	// 0x3355fdc5
@end


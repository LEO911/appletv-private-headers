/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import "AccountsDaemon-Structs.h"
#import </libobjc.A.h>


@interface ACDTCCUtilities : NSObject {
}
+ (int)TCCStateForClient:(id)client accountType:(id)type;	// 0x2fea66c5
+ (CFStringRef)_TCCServiceForAccountTypeID:(id)accountTypeID;	// 0x2fea6e25
+ (id)allTCCStatesForAccountType:(id)accountType;	// 0x2fea6b55
+ (BOOL)clearAllTCCStatesForAccountType:(id)accountType;	// 0x2fea6d99
+ (BOOL)clearTCCStateForClient:(id)client accountType:(id)type;	// 0x2fea6a4d
+ (BOOL)setTCCStateForClient:(id)client accountType:(id)type toGranted:(BOOL)granted;	// 0x2fea68dd
@end


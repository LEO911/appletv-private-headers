/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSaveEmail : MSMailDefaultService {
}
+ (void)saveEmail:(id)email completionBlock:(id)block;	// 0x3447af25
+ (void)saveMessageData:(id)data forAccountWithID:(id)anId autosaveIdentifier:(id)identifier completionBlock:(id)block;	// 0x3447aeb5
- (void)_saveEmail:(id)email completionBlock:(id)block;	// 0x3447af89
- (void)_saveMessageData:(id)data forAccountWithID:(id)anId autosaveIdentifier:(id)identifier completionBlock:(id)block;	// 0x3447b0fd
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x3447b2a9
@end


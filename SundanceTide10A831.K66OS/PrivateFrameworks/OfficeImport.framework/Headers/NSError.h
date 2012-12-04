/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSError.h> // Unknown library


@interface NSError (TSUAdditions)
+ (id)errorWithDomain:(id)domain code:(int)code alertTitle:(id)title alertMessage:(id)message;	// 0x36c8996d
+ (id)errorWithDomain:(id)domain code:(int)code alertTitle:(id)title alertMessage:(id)message underlyingError:(id)error;	// 0x36c89a21
+ (id)errorWithDomain:(id)domain code:(int)code description:(id)description recoverySuggestion:(id)suggestion;	// 0x36c89829
+ (id)tsuErrorWithCode:(int)code;	// 0x36c898c1
- (BOOL)isOutOfSpaceError;	// 0x36c89b5d
- (id)localizedAlertMessage;	// 0x36c89b29
- (id)localizedAlertTitle;	// 0x36c89af5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSError.h> // Unknown library


@interface NSError (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description;	// 0x338902a5
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description suggestion:(id)suggestion;	// 0x338902c9
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error;	// 0x3389034d
- (BOOL)MSCanBeIgnored;	// 0x33890951
- (BOOL)MSContainsErrorWithDomain:(id)domain code:(int)code;	// 0x33890e6d
- (id)MSFindErrorWithDomain:(id)domain;	// 0x338907a5
- (id)MSFindPrimaryError;	// 0x338906bd
- (BOOL)MSIsAuthError;	// 0x33890c61
- (BOOL)MSIsBadTokenError;	// 0x33890d6d
- (BOOL)MSIsCounted;	// 0x33890a8d
- (BOOL)MSIsFatal;	// 0x33890b91
- (BOOL)MSIsQuotaError;	// 0x33890f15
- (BOOL)MSIsTemporaryNetworkError;	// 0x33890831
- (id)MSMMCSRetryAfterDate;	// 0x33890f59
- (id)MSMakePrimaryError;	// 0x338905e5
- (BOOL)MSNeedsBackoff;	// 0x33890979
- (id)MSVerboseDescription;	// 0x338905d1
- (id)_MSVerboseDescriptionRecursionCount:(int)count;	// 0x33890415
@end


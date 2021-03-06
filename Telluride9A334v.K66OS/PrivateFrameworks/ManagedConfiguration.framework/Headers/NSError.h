/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSError.h> // Unknown library


@interface NSError (MCExtension)
+ (id)MCErrorWithDomain:(id)domain code:(int)code description:(id)description errorType:(id)type;	// 0x3472c86d
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array errorType:(id)type;	// 0x3472c8cd
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array suggestion:(id)suggestion USEnglishSuggestion:(id)suggestion5 underlyingError:(id)error errorType:(id)type;	// 0x3472d085
+ (id)MCErrorWithDomain:(id)domain code:(int)code descriptionArray:(id)array underlyingError:(id)error errorType:(id)type;	// 0x3472c901
- (BOOL)MCContainsErrorDomain:(id)domain code:(int)code;	// 0x3472c735
- (id)MCErrorType;	// 0x3472c835
- (id)MCFindPrimaryError;	// 0x3472c599
- (id)MCMakePrimaryError;	// 0x3472c65d
- (id)MCUSEnglishDescription;	// 0x3472c7cd
- (id)MCUSEnglishSuggestion;	// 0x3472c801
- (id)MCVerboseDescription;	// 0x3472c9d5
@end


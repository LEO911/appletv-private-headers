/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class NSCondition, NSMutableArray;

@interface TSUDateParserLibrary : NSObject {
	unsigned mMaxPermittedParsers;	// 4 = 0x4
	unsigned mNumberOfUses;	// 8 = 0x8
	unsigned mParsersCreated;	// 12 = 0xc
	NSMutableArray *mAvailableDateParsers;	// 16 = 0x10
	NSCondition *mParserLibraryConditionVariable;	// 20 = 0x14
}
+ (id)_singletonAlloc;	// 0x33c29c69
+ (id)allocWithZone:(NSZone *)zone;	// 0x33c29e1d
+ (id)sharedDateParserLibrary;	// 0x33c29c99
- (id)init;	// 0x33c29eb1
- (id)autorelease;	// 0x33c29ea9
- (id)checkoutDateParser;	// 0x33c29f71
- (id)copyWithZone:(NSZone *)zone;	// 0x33c29ead
- (oneway void)release;	// 0x33c29ea5
- (id)retain;	// 0x33c29e99
- (unsigned)retainCount;	// 0x33c29e9d
- (void)returnDateParser:(id)parser;	// 0x33c2a201
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import </libobjc.A.h>

@class NSArray;

@interface TSUSharedLocale : NSObject {
	CFLocaleRef mCurrentLocale;	// 4 = 0x4
	NSArray *mObserverObjects;	// 8 = 0x8
}
+ (id)_singletonAlloc;	// 0x319735fd
+ (id)allocWithZone:(NSZone *)zone;	// 0x319737b1
+ (id)sharedLocale;	// 0x3197362d
- (id)init;	// 0x31973845
- (id)autorelease;	// 0x3197383d
- (id)copyWithZone:(NSZone *)zone;	// 0x31973841
- (CFLocaleRef)currentLocale;	// 0x31973a0d
- (void)datePreferencesChanged:(id)changed;	// 0x31973ab5
- (void)dealloc;	// 0x319739a9
- (oneway void)release;	// 0x31973839
- (id)retain;	// 0x3197382d
- (unsigned)retainCount;	// 0x31973831
@end

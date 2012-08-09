/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "NSLocking.h"
#import "Foundation-Structs.h"


@interface NSMultiReadUniWriteLock : NSObject <NSLocking> {
	void *_priv;	// 4 = 0x4
}
@property(retain) id name;	// G=0x37394b55; S=0x37394b15; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x37394821
- (id)init;	// 0x37394829
- (void)dealloc;	// 0x37394875
- (id)description;	// 0x37394a49
- (void)finalize;	// 0x37394911
- (void)lock;	// 0x37394a01
- (void)lockForReading;	// 0x37394995
- (BOOL)lockForReadingBeforeDate:(id)readingBeforeDate;	// 0x373949bd
- (void)lockForWriting;	// 0x373949c1
- (BOOL)lockForWritingBeforeDate:(id)writingBeforeDate;	// 0x373949fd
// converted property getter: - (id)name;	// 0x37394b55
// converted property setter: - (void)setName:(id)name;	// 0x37394b15
- (BOOL)tryLockForReading;	// 0x373949a5
- (BOOL)tryLockForWriting;	// 0x373949d9
- (void)unlock;	// 0x37394a19
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "CoreData-Structs.h"
#import </libobjc.A.h>
#import "NSLocking.h"


@interface _PFLock : NSObject <NSLocking> {
	int _cd_rc;	// 4 = 0x4
	opaque_pthread_mutex_t _lock;	// 8 = 0x8
	opaque_pthread_t *_owner;	// 52 = 0x34
	unsigned _count;	// 56 = 0x38
}
+ (void)initialize;	// 0x2d04d511
- (id)init;	// 0x2d04d575
- (void)dealloc;	// 0x2d088471
- (void)finalize;	// 0x2d0884b1
- (void)lock;	// 0x2d050489
- (BOOL)tryLock;	// 0x2d0884f1
- (void)unlock;	// 0x2d05e0d5
@end


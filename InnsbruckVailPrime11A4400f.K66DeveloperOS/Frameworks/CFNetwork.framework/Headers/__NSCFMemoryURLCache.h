/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

#import </libobjc.A.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface __NSCFMemoryURLCache : NSObject {
	unsigned _memoryCapacity;	// 4 = 0x4
	unsigned _currentLength;	// 8 = 0x8
	NSMutableDictionary *_memoryStorage;	// 12 = 0xc
	NSMutableArray *_memoryStorageLRU;	// 16 = 0x10
	NSObject<OS_dispatch_queue> *_memoryQueue;	// 20 = 0x14
}
@property(assign) unsigned diskCapacity;	// G=0x2cf8791d; S=0x2cf879a9; converted property
@property(assign) unsigned memoryCapacity;	// G=0x2cf8790d; S=0x2cf87921; converted property
+ (void)initialize;	// 0x2cf870f9
- (id)initEmptyCache;	// 0x2cf872ad
- (id)initMemoryCache;	// 0x2cf872d1
- (id)initWithMemoryCapacity:(unsigned)memoryCapacity diskCapacity:(unsigned)capacity diskPath:(id)path;	// 0x2cf87191
- (id)cachedResponseForRequest:(id)request;	// 0x2cf87379
- (unsigned)currentDiskUsage;	// 0x2cf87a85
- (unsigned)currentMemoryUsage;	// 0x2cf879ad
- (void)dealloc;	// 0x2cf87235
- (id)description;	// 0x2cf872f5
// converted property getter: - (unsigned)diskCapacity;	// 0x2cf8791d
// converted property getter: - (unsigned)memoryCapacity;	// 0x2cf8790d
- (void)removeAllCachedResponses;	// 0x2cf8785d
- (void)removeCachedResponseForRequest:(id)request;	// 0x2cf87719
// converted property setter: - (void)setDiskCapacity:(unsigned)capacity;	// 0x2cf879a9
// converted property setter: - (void)setMemoryCapacity:(unsigned)capacity;	// 0x2cf87921
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x2cf87501
@end

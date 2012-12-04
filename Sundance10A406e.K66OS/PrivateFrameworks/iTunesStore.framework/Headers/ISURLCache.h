/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class ISURLCacheConfiguration, NSString, NSURLCache;

@interface ISURLCache : NSObject {
	NSURLCache *_cache;	// 4 = 0x4
	ISURLCacheConfiguration *_configuration;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned currentDiskUsage;	// G=0x369463a9; 
@property(readonly, assign, nonatomic) unsigned currentMemoryUsage;	// G=0x369463c9; 
@property(readonly, assign, nonatomic) unsigned diskCapacity;	// G=0x369463e9; 
@property(readonly, assign, nonatomic) unsigned memoryCapacity;	// G=0x36946409; 
@property(readonly, assign) NSString *persistentIdentifier;	// G=0x36946155; 
+ (id)cacheDirectoryPath;	// 0x36946065
- (id)init;	// 0x36945f6d
- (id)initWithCacheConfiguration:(id)cacheConfiguration;	// 0x36945f81
- (id)cachedResponseForRequest:(id)request;	// 0x36946389
// declared property getter: - (unsigned)currentDiskUsage;	// 0x369463a9
// declared property getter: - (unsigned)currentMemoryUsage;	// 0x369463c9
- (void)dealloc;	// 0x36946001
// declared property getter: - (unsigned)diskCapacity;	// 0x369463e9
// declared property getter: - (unsigned)memoryCapacity;	// 0x36946409
// declared property getter: - (id)persistentIdentifier;	// 0x36946155
- (void)purgeMemoryCache;	// 0x36946429
- (void)reloadWithCacheConfiguration:(id)cacheConfiguration;	// 0x36946175
- (void)removeAllCachedResponses;	// 0x36946471
- (void)removeCachedResponseForRequest:(id)request;	// 0x36946491
- (void)saveMemoryCacheToDisk;	// 0x369464b1
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x369464f9
@end

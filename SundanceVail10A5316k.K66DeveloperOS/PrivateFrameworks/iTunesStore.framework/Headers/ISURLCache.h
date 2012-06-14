/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library

@class NSString, ISURLCacheConfiguration, NSURLCache;

@interface ISURLCache : NSObject {
@private
	NSURLCache *_cache;	// 4 = 0x4
	ISURLCacheConfiguration *_configuration;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned currentDiskUsage;	// G=0x3353cc7d; 
@property(readonly, assign, nonatomic) unsigned currentMemoryUsage;	// G=0x3353cc9d; 
@property(readonly, assign, nonatomic) unsigned diskCapacity;	// G=0x3353ccbd; 
@property(readonly, assign, nonatomic) unsigned memoryCapacity;	// G=0x3353ccdd; 
@property(readonly, assign) NSString *persistentIdentifier;	// G=0x3353ca29; 
+ (id)cacheDirectoryPath;	// 0x3353c939
- (id)init;	// 0x3353c841
- (id)initWithCacheConfiguration:(id)cacheConfiguration;	// 0x3353c855
- (id)cachedResponseForRequest:(id)request;	// 0x3353cc5d
// declared property getter: - (unsigned)currentDiskUsage;	// 0x3353cc7d
// declared property getter: - (unsigned)currentMemoryUsage;	// 0x3353cc9d
- (void)dealloc;	// 0x3353c8d5
// declared property getter: - (unsigned)diskCapacity;	// 0x3353ccbd
// declared property getter: - (unsigned)memoryCapacity;	// 0x3353ccdd
// declared property getter: - (id)persistentIdentifier;	// 0x3353ca29
- (void)purgeMemoryCache;	// 0x3353ccfd
- (void)reloadWithCacheConfiguration:(id)cacheConfiguration;	// 0x3353ca49
- (void)removeAllCachedResponses;	// 0x3353cd45
- (void)removeCachedResponseForRequest:(id)request;	// 0x3353cd65
- (void)saveMemoryCacheToDisk;	// 0x3353cd85
- (void)storeCachedResponse:(id)response forRequest:(id)request;	// 0x3353cdcd
@end

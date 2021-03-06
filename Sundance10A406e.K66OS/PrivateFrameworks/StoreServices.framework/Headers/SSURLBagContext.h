/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSXPCCoding.h"
#import "StoreServices-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSString, NSDictionary, NSMutableDictionary, NSNumber;

@interface SSURLBagContext : NSObject <SSXPCCoding, NSCopying> {
	int _allowedRetryCount;	// 4 = 0x4
	BOOL _allowsExpiredBags;	// 8 = 0x8
	int _bagType;	// 12 = 0xc
	NSMutableDictionary *_httpHeaders;	// 16 = 0x10
	BOOL _ignoresDiskCache;	// 20 = 0x14
	NSNumber *_userIdentifier;	// 24 = 0x18
	BOOL _usesCachedBagsOnly;	// 28 = 0x1c
}
@property(copy, nonatomic) NSDictionary *allHTTPHeaders;	// G=0x312c8c9d; S=0x312c8d55; 
@property(assign, nonatomic) int allowedRetryCount;	// G=0x312c95e9; S=0x312c95f9; @synthesize=_allowedRetryCount
@property(assign, nonatomic) BOOL allowsExpiredBags;	// G=0x312c9609; S=0x312c9619; @synthesize=_allowsExpiredBags
@property(assign, nonatomic) int bagType;	// G=0x312c9629; S=0x312c9639; @synthesize=_bagType
@property(readonly, assign, nonatomic) NSString *cacheKey;	// G=0x312c8cd5; 
@property(readonly, assign, nonatomic) CFStringRef diskCacheExpirationTimeKey;	// G=0x312c9059; 
@property(readonly, assign, nonatomic) NSString *diskCacheKey;	// G=0x312c90a1; 
@property(readonly, assign, nonatomic) NSString *diskCachePath;	// G=0x312c9129; 
@property(assign, nonatomic) BOOL ignoresDiskCache;	// G=0x312c9649; S=0x312c9659; @synthesize=_ignoresDiskCache
@property(retain, nonatomic) NSNumber *userIdentifier;	// G=0x312c9669; S=0x312c9679; @synthesize=_userIdentifier
@property(assign, nonatomic) BOOL usesCachedBagsOnly;	// G=0x312c9689; S=0x312c9699; @synthesize=_usesCachedBagsOnly
+ (id)contextWithBagType:(int)bagType;	// 0x312c8c49
- (id)init;	// 0x312c8ba5
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x312c9355
// declared property getter: - (id)allHTTPHeaders;	// 0x312c8c9d
// declared property getter: - (int)allowedRetryCount;	// 0x312c95e9
// declared property getter: - (BOOL)allowsExpiredBags;	// 0x312c9609
// declared property getter: - (int)bagType;	// 0x312c9629
// declared property getter: - (id)cacheKey;	// 0x312c8cd5
- (id)copyWithZone:(NSZone *)zone;	// 0x312c9275
- (id)copyXPCEncoding;	// 0x312c94e9
- (void)dealloc;	// 0x312c8be5
- (id)description;	// 0x312c8e71
// declared property getter: - (CFStringRef)diskCacheExpirationTimeKey;	// 0x312c9059
// declared property getter: - (id)diskCacheKey;	// 0x312c90a1
// declared property getter: - (id)diskCachePath;	// 0x312c9129
- (unsigned)hash;	// 0x312c8f05
// declared property getter: - (BOOL)ignoresDiskCache;	// 0x312c9649
- (BOOL)isEqual:(id)equal;	// 0x312c8f55
// declared property setter: - (void)setAllHTTPHeaders:(id)headers;	// 0x312c8d55
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x312c95f9
// declared property setter: - (void)setAllowsExpiredBags:(BOOL)bags;	// 0x312c9619
// declared property setter: - (void)setBagType:(int)type;	// 0x312c9639
// declared property setter: - (void)setIgnoresDiskCache:(BOOL)cache;	// 0x312c9659
// declared property setter: - (void)setUserIdentifier:(id)identifier;	// 0x312c9679
// declared property setter: - (void)setUsesCachedBagsOnly:(BOOL)only;	// 0x312c9699
- (void)setValue:(id)value forHTTPHeaderField:(id)httpheaderField;	// 0x312c8d99
// declared property getter: - (id)userIdentifier;	// 0x312c9669
// declared property getter: - (BOOL)usesCachedBagsOnly;	// 0x312c9689
- (id)valueForHTTPHeaderField:(id)httpheaderField;	// 0x312c8e29
@end


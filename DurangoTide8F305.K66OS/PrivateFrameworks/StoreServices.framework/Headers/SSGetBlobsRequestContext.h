/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "NSCopying.h"
#import "SSBlobsRequestContext.h"
#import "SSCoding.h"

@class NSArray;

@interface SSGetBlobsRequestContext : SSBlobsRequestContext <NSCopying, SSCoding> {
@private
	NSArray *_blobIdentifiers;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *blobIdentifiers;	// G=0x324df7b9; S=0x324dfae5; @synthesize=_blobIdentifiers
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324dfc8d
// declared property getter: - (id)blobIdentifiers;	// 0x324df7b9
- (id)copyPropertyListEncoding;	// 0x324dfba9
- (id)copyWithZone:(NSZone *)zone;	// 0x324df955
- (void)dealloc;	// 0x324df9a1
// declared property setter: - (void)setBlobIdentifiers:(id)identifiers;	// 0x324dfae5
@end

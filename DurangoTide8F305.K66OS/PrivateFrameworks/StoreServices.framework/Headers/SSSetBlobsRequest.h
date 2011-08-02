/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSCoding.h"
#import "SSBlobsRequest.h"

@class SSSetBlobsRequestContext;

@interface SSSetBlobsRequest : SSBlobsRequest <SSCoding> {
}
@property(readonly, assign) SSSetBlobsRequestContext *blobsRequestContext;	// @dynamic
- (id)initWithBlobsRequestContext:(id)blobsRequestContext;	// 0x324e00a9
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x324dfd05
- (id)copyPropertyListEncoding;	// 0x324dfd8d
- (BOOL)issueRequestForIdentifier:(id)identifier error:(id *)error;	// 0x324e0365
@end

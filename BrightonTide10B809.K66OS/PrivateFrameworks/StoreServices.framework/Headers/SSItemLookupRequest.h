/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "SSRequest.h"
#import "SSXPCCoding.h"

@class NSDictionary, NSMutableDictionary;
@protocol SSItemLookupRequestDelegate;

@interface SSItemLookupRequest : SSRequest <SSXPCCoding> {
	NSMutableDictionary *_parameters;	// 28 = 0x1c
}
@property(assign, nonatomic) id<SSItemLookupRequestDelegate> delegate;	// @dynamic
@property(readonly, assign) NSDictionary *parameters;	// G=0x354c492d; 
- (id)init;	// 0x354c3c11
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c469d
- (id)_convertedValueForValue:(id)value;	// 0x354c4c35
- (id)_copyItemsFromResponse:(id)response expirationDate:(id)date;	// 0x354c4a31
- (id)_errorForStatusCode:(int)statusCode;	// 0x354c4e95
- (id)copyQueryStringParameters;	// 0x354c476d
- (id)copyXPCEncoding;	// 0x354c45d5
- (void)dealloc;	// 0x354c3c59
// declared property getter: - (id)parameters;	// 0x354c492d
- (void)setValue:(id)value forParameter:(id)parameter;	// 0x354c3ca5
- (BOOL)start;	// 0x354c42a5
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354c447d
- (void)startWithItemLookupBlock:(id)itemLookupBlock;	// 0x354c3e91
- (id)valueForParameter:(id)parameter;	// 0x354c4161
@end

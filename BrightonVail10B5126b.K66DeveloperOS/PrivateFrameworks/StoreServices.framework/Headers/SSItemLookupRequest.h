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
@property(readonly, assign) NSDictionary *parameters;	// G=0x354c1955; 
- (id)init;	// 0x354c0c39
- (id)initWithXPCEncoding:(id)xpcencoding;	// 0x354c16c5
- (id)_convertedValueForValue:(id)value;	// 0x354c1c5d
- (id)_copyItemsFromResponse:(id)response expirationDate:(id)date;	// 0x354c1a59
- (id)_errorForStatusCode:(int)statusCode;	// 0x354c1ebd
- (id)copyQueryStringParameters;	// 0x354c1795
- (id)copyXPCEncoding;	// 0x354c15fd
- (void)dealloc;	// 0x354c0c81
// declared property getter: - (id)parameters;	// 0x354c1955
- (void)setValue:(id)value forParameter:(id)parameter;	// 0x354c0ccd
- (BOOL)start;	// 0x354c12cd
- (void)startWithCompletionBlock:(id)completionBlock;	// 0x354c14a5
- (void)startWithItemLookupBlock:(id)itemLookupBlock;	// 0x354c0eb9
- (id)valueForParameter:(id)parameter;	// 0x354c1189
@end

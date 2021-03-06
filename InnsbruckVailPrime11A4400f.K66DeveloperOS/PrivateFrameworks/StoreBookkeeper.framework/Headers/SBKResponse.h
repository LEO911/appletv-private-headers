/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import </libobjc.A.h>

@class NSDictionary, SBKResponseStatus, NSError, NSString;

@interface SBKResponse : NSObject {
	NSDictionary *_responseDictionary;	// 4 = 0x4
	unsigned _responseCode;	// 8 = 0x8
	NSDictionary *_responseHeaderFields;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
	NSString *_MIMEType;	// 20 = 0x14
	SBKResponseStatus *_responseStatus;	// 24 = 0x18
	double _retrySeconds;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSString *MIMEType;	// G=0x327c492d; @synthesize=_MIMEType
@property(readonly, assign) NSString *consoleDescription;	// G=0x327c4735; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x327c48e9; @synthesize=_error
@property(readonly, assign) BOOL isAuthenticationError;	// G=0x327c484d; 
@property(readonly, assign) BOOL isError;	// G=0x327c47bd; 
@property(readonly, assign) BOOL isGenericError;	// G=0x327c4805; 
@property(readonly, assign) BOOL isPuntedError;	// G=0x327c4895; 
@property(readonly, assign) BOOL isRecoverable;	// G=0x327c4799; 
@property(readonly, assign) BOOL isSuccess;	// G=0x327c4775; 
@property(readonly, assign) BOOL isUnsupportedClient;	// G=0x327c4829; 
@property(readonly, assign) BOOL isValidationError;	// G=0x327c4871; 
@property(readonly, assign) NSError *requestError;	// G=0x327c4755; 
@property(readonly, assign, nonatomic) unsigned responseCode;	// G=0x327c48c9; @synthesize=_responseCode
@property(readonly, assign, nonatomic) NSDictionary *responseDictionary;	// G=0x327c48b9; @synthesize=_responseDictionary
@property(readonly, assign, nonatomic) NSDictionary *responseHeaderFields;	// G=0x327c48d9; @synthesize=_responseHeaderFields
@property(readonly, assign, nonatomic) SBKResponseStatus *responseStatus;	// G=0x327c493d; @synthesize=_responseStatus
@property(readonly, assign) double retrySeconds;	// G=0x327c48f9; @synthesize=_retrySeconds
@property(readonly, assign) BOOL shouldFileRadar;	// G=0x327c47e1; 
@property(readonly, assign) int statusCode;	// G=0x327c4715; 
+ (id)responseWithCode:(unsigned)code headerFields:(id)fields responseDictionary:(id)dictionary MIMEType:(id)type error:(id)error;	// 0x327c44b1
+ (id)responseWithResponse:(id)response;	// 0x327c4549
+ (id)responseWithURLResponse:(id)urlresponse responseDictionary:(id)dictionary;	// 0x327c4451
- (id)initWithCode:(unsigned)code headerFields:(id)fields responseDictionary:(id)dictionary MIMEType:(id)type error:(id)error;	// 0x327c4205
- (id)initWithURLResponse:(id)urlresponse responseDictionary:(id)dictionary;	// 0x327c4135
- (void).cxx_destruct;	// 0x327c494d
// declared property getter: - (id)MIMEType;	// 0x327c492d
// declared property getter: - (id)consoleDescription;	// 0x327c4735
- (id)description;	// 0x327c4651
// declared property getter: - (id)error;	// 0x327c48e9
// declared property getter: - (BOOL)isAuthenticationError;	// 0x327c484d
// declared property getter: - (BOOL)isError;	// 0x327c47bd
// declared property getter: - (BOOL)isGenericError;	// 0x327c4805
// declared property getter: - (BOOL)isPuntedError;	// 0x327c4895
// declared property getter: - (BOOL)isRecoverable;	// 0x327c4799
// declared property getter: - (BOOL)isSuccess;	// 0x327c4775
// declared property getter: - (BOOL)isUnsupportedClient;	// 0x327c4829
// declared property getter: - (BOOL)isValidationError;	// 0x327c4871
// declared property getter: - (id)requestError;	// 0x327c4755
// declared property getter: - (unsigned)responseCode;	// 0x327c48c9
// declared property getter: - (id)responseDictionary;	// 0x327c48b9
// declared property getter: - (id)responseHeaderFields;	// 0x327c48d9
// declared property getter: - (id)responseStatus;	// 0x327c493d
// declared property getter: - (double)retrySeconds;	// 0x327c48f9
// declared property getter: - (BOOL)shouldFileRadar;	// 0x327c47e1
// declared property getter: - (int)statusCode;	// 0x327c4715
@end


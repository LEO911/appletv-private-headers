/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library
#import "Foundation-Structs.h"
#import "NSCopying.h"
#import "NSCoding.h"

@class NSString, NSDictionary;

@interface NSError : NSObject <NSCopying, NSCoding> {
@private
	void *_reserved;	// 4 = 0x4
	int _code;	// 8 = 0x8
	NSString *_domain;	// 12 = 0xc
	NSDictionary *_userInfo;	// 16 = 0x10
}
@property(readonly, assign) int code;	// G=0x3101c115; converted property
@property(readonly, retain) NSString *domain;	// G=0x3103bcd1; converted property
@property(readonly, retain) NSDictionary *userInfo;	// G=0x31048369; converted property
+ (void)_registerBuiltInFormatters;	// 0x31069669
+ (void)_registerFormatter:(/*function-pointer*/ void *)formatter forErrorKey:(id)errorKey parameters:(const char *)parameters;	// 0x31069ac5
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)codesAndDescriptions inDomain:(id)domain;	// 0x310b16fd
+ (id)_web_errorWithDomain:(id)domain code:(int)code URL:(id)url;	// 0x3104cdd1
+ (id)_web_errorWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x310b1795
+ (id)errorWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x31002e61
- (id)initWithCoder:(id)coder;	// 0x31069265
- (id)initWithDomain:(id)domain code:(int)code userInfo:(id)info;	// 0x31002ea9
- (unsigned long)_cfTypeID;	// 0x31069395
- (id)_cocoaErrorString:(id)string;	// 0x31069fc5
- (id)_cocoaErrorString:(id)string fromBundle:(id)bundle tableName:(id)name;	// 0x31069d3d
- (id)_cocoaErrorStringWithKind:(id)kind;	// 0x31068d69
- (id)_cocoaErrorStringWithKind:(id)kind variant:(id)variant;	// 0x31068c99
- (int)_collectApplicableUserInfoFormatters:(timespec **)formatters max:(int)max;	// 0x31069b99
- (id)_formatCocoaErrorString:(id)string parameters:(const char *)parameters applicableFormatters:(timespec **)formatters count:(int)count;	// 0x31069c41
- (CFStringRef)_retainedUserInfoCallBackForKey:(id)key;	// 0x31068eb1
- (BOOL)_web_errorIsInDomain:(id)domain;	// 0x31048379
- (id)_web_failingURL;	// 0x310b19fd
- (id)_web_initWithDomain:(id)domain code:(int)code failingURL:(id)url;	// 0x310b17dd
- (id)_web_initWithDomain_nowarn:(id)domain_nowarn code:(int)code URL:(id)url;	// 0x3104ce19
- (id)_web_localizedDescription;	// 0x310b195d
// converted property getter: - (int)code;	// 0x3101c115
- (id)copyWithZone:(NSZone *)zone;	// 0x3104d099
- (void)dealloc;	// 0x31004cb1
- (id)description;	// 0x3106913d
// converted property getter: - (id)domain;	// 0x3103bcd1
- (void)encodeWithCoder:(id)coder;	// 0x31069169
- (void)finalize;	// 0x31068c6d
- (id)helpAnchor;	// 0x31069109
- (id)localizedDescription;	// 0x31048cd9
- (id)localizedFailureReason;	// 0x31068f91
- (id)localizedRecoveryOptions;	// 0x31069081
- (id)localizedRecoverySuggestion;	// 0x31069009
- (id)recoveryAttempter;	// 0x310690d5
// converted property getter: - (id)userInfo;	// 0x31048369
@end

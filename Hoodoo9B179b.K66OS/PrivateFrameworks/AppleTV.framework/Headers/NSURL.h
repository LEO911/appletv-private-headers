/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSURL.h> // Unknown library


@interface NSURL (BRURLAdditions)
+ (id)URLWithString:(id)string queryParameters:(id)parameters;	// 0x30376db5
+ (id)queryParametersFromDictionary:(id)dictionary;	// 0x30376f09
- (id)URLWithQueryParameter:(id)queryParameter value:(id)value;	// 0x30376bad
- (id)_queryParameters;	// 0x30376949
- (id)decodedQueryParameters;	// 0x30376a85
- (BOOL)isHTTPFamilyURL;	// 0x30376905
- (BOOL)isHTTPSURL;	// 0x303768c5
- (BOOL)isHTTPURL;	// 0x30376885
- (id)queryParameters;	// 0x30376a75
- (id)valueForParam:(id)param;	// 0x30376e25
@end

@interface NSURL (ISURLBagAdditions)
- (id)sanitizedURL;	// 0x3042ac59
@end

@interface NSURL (ISAdditions)
+ (id)copyDictionaryForQueryString:(id)queryString unescapedValues:(BOOL)values;	// 0x30430275
+ (id)escapedStringForString:(id)string;	// 0x304303dd
+ (id)queryStringForDictionary:(id)dictionary escapedValues:(BOOL)values;	// 0x3043041d
+ (id)unescapedStringForString:(id)string;	// 0x30430519
- (id)copyQueryStringDictionaryWithUnescapedValues:(BOOL)unescapedValues;	// 0x30430565
- (void)enumerateQueryWithBlock:(id)block;	// 0x30430ccd
- (BOOL)isSafeExternalURL;	// 0x304308a1
- (id)schemeSwizzledURL;	// 0x30430a49
- (id)urlByReplacingSchemeWithScheme:(id)scheme;	// 0x30430c41
- (id)urlBySettingQueryStringDictionary:(id)dictionary;	// 0x304305a1
@end

@interface NSURL (AOSURLAdditions)
@end


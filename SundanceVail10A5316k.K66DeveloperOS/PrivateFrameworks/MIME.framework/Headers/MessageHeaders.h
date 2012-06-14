/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MIME-Structs.h"

@class NSData;

@interface MessageHeaders : NSObject <NSCopying> {
	NSData *_data;	// 4 = 0x4
	unsigned long _preferredEncoding;	// 8 = 0x8
}
@property(assign) unsigned long preferredEncoding;	// G=0x366c1bb5; S=0x366c1bc5; converted property
+ (id)addressListFromEncodedString:(id)encodedString;	// 0x366c28ed
+ (id)basicHeaders;	// 0x366c1831
+ (id)copyAddressListFromEncodedData:(id)encodedData encoding:(unsigned long)encoding;	// 0x366c2729
+ (id)encodedDataForAddressList:(id)addressList splittingAtLength:(unsigned)length firstLineBuffer:(unsigned)buffer;	// 0x366c2935
+ (BOOL)isStructuredHeaderKey:(id)key;	// 0x366c18e1
+ (BOOL)shouldDecodeHeaderForKey:(id)key;	// 0x366c19d1
+ (id)uniqueHeaderKeyStringForString:(id)string;	// 0x366c3e89
- (id)init;	// 0x366c19f5
- (id)initWithHeaderData:(id)headerData encoding:(unsigned long)encoding;	// 0x366c1a35
- (id)_capitalizedKeyForKey:(id)key;	// 0x366c1c99
- (unsigned long)_contentTypeEncoding;	// 0x366c1cfd
- (id)_copyAddressListForKey:(id)key;	// 0x366c30fd
- (id)_copyHeaderValueForKey:(id)key;	// 0x366c25a1
- (id)_copyHeaderValueForKey:(id)key offset:(unsigned *)offset decoded:(BOOL)decoded;	// 0x366c222d
- (id)_decodeHeaderKeysFromData:(id)data;	// 0x366c35ad
- (id)_headerValueForKey:(id)key;	// 0x366c2655
- (id)_headerValueForKey:(id)key offset:(unsigned *)offset;	// 0x366c256d
- (BOOL)_isStructuredHeaderKey:(id)key;	// 0x366c1bd5
- (void)_setCapitalizedKey:(id)key forKey:(id)key2;	// 0x366c1c01
- (id)allHeaderKeys;	// 0x366c1be1
- (void)appendHeaderData:(id)data andRecipients:(id)recipients;	// 0x366c38b5
- (id)copyAddressListForBcc;	// 0x366c3265
- (id)copyAddressListForCc;	// 0x366c3249
- (id)copyAddressListForReplyTo;	// 0x366c329d
- (id)copyAddressListForResentFrom;	// 0x366c3281
- (id)copyAddressListForSender;	// 0x366c318d
- (id)copyAddressListForTo;	// 0x366c322d
- (id)copyDecodedStringFromHeaderData:(id)headerData withRange:(NSRange)range;	// 0x366c2199
- (id)copyFirstHeaderForKey:(id)key;	// 0x366c3455
- (id)copyFirstNonDecodedHeaderForKey:(id)key;	// 0x366c3479
- (id)copyFirstStringValueForKey:(id)key;	// 0x366c34fd
- (id)copyHeadersForKey:(id)key;	// 0x366c26bd
- (id)copyWithZone:(NSZone *)zone;	// 0x366c1a89
- (void)dealloc;	// 0x366c1add
- (id)description;	// 0x366c3ed5
- (id)encodedHeaders;	// 0x366c387d
- (id)firstHeaderForKey:(id)key;	// 0x366c3435
- (id)firstSenderAddress;	// 0x366c31a9
- (BOOL)hasHeaderForKey:(id)key;	// 0x366c267d
- (id)headerData;	// 0x366c1b7d
- (id)headersForKey:(id)key;	// 0x366c2701
- (BOOL)messageIsFromEntourage;	// 0x366c37e9
- (id)mutableCopy;	// 0x366c1b29
// converted property getter: - (unsigned long)preferredEncoding;	// 0x366c1bb5
- (id)references;	// 0x366c32b9
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x366c1bc5
@end

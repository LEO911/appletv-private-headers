/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSData.h> // Unknown library


@interface NSData (BRDataUtilities)
- (id)AES256DecryptWithKey:(id)key;	// 0x33b4b44d
- (id)AES256EncryptWithKey:(id)key;	// 0x33b4b389
@end

@interface NSData (MimeDataEncoding)
+ (unsigned)quotedPrintableLengthOfHeaderBytes:(const char *)headerBytes length:(unsigned)length;	// 0x33b6ea71
- (id)decodeBase64;	// 0x33b6de15
- (id)decodeModifiedBase64;	// 0x33b6ea51
- (id)decodeQuotedPrintableForText:(BOOL)text;	// 0x33b6d7ad
- (id)encodeBase64;	// 0x33b6ea39
- (id)encodeBase64AllowCancel:(BOOL)cancel;	// 0x33b6ea45
- (id)encodeBase64HeaderData;	// 0x33b6ea65
- (id)encodeBase64WithoutLineBreaks;	// 0x33b6e441
- (id)encodeBase64WithoutLineBreaksOrPadding;	// 0x33b6ea2d
- (id)encodeModifiedBase64;	// 0x33b6ea59
- (id)encodeQuotedPrintableForText:(BOOL)text;	// 0x33b6dae5
- (id)encodeQuotedPrintableForText:(BOOL)text allowCancel:(BOOL)cancel;	// 0x33b6daf9
- (BOOL)isValidBase64Data;	// 0x33b6e391
@end


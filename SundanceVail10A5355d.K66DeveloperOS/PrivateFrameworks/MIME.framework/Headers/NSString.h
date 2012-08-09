/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSString.h> // Unknown library
#import "MIME-Structs.h"


@interface NSString (NSEmailAddressString)
+ (id)mf_formattedAddressWithName:(id)name email:(id)email useQuotes:(BOOL)quotes;	// 0x373bfc49
+ (id)mf_nameExtensions;	// 0x373c0c1d
+ (id)mf_partialSurnames;	// 0x373c0d85
- (id)mf_addressComment;	// 0x373bfb49
- (void)mf_addressCommentFirstName:(id *)name middleName:(id *)name2 lastName:(id *)name3 extension:(id *)extension;	// 0x373c0389
- (id)mf_addressDomain;	// 0x373c024d
- (BOOL)mf_appearsToBeAnInitial;	// 0x373c0e61
- (id)mf_copyAddressComment;	// 0x373bfc21
- (id)mf_copyIDNADecodedEmailAddress;	// 0x373c0309
- (id)mf_copyIDNAEncodedEmailAddress;	// 0x373c0349
- (id)mf_copyUncommentedAddress;	// 0x373bf541
- (void)mf_firstName:(id *)name middleName:(id *)name2 lastName:(id *)name3 extension:(id *)extension;	// 0x373c03fd
- (BOOL)mf_hasSameNamesAs:(id)as;	// 0x373c0b3d
- (BOOL)mf_isEqualToAddress:(id)address;	// 0x373c02e9
- (BOOL)mf_isLegalCommentedEmailAddress;	// 0x373bfe3d
- (BOOL)mf_isLegalEmailAddress;	// 0x373bfe65
- (NSRange)mf_rangeOfAddressDomain;	// 0x373bfff5
- (id)mf_trimCommasSpacesQuotes;	// 0x373c0eb9
- (id)mf_uncommentedAddress;	// 0x373bf7c9
- (id)mf_uncommentedAddressRespectingGroups;	// 0x373bf7f1
@end

@interface NSString (MimeCharsetSupport)
- (id)_mf_bestMimeCharset:(id)charset;	// 0x373c2ded
- (id)mf_bestMimeCharset;	// 0x373c2dd9
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)messageDeliveryUsingSubtype;	// 0x373c31c9
- (id)mf_bestMimeCharsetUsingHint:(unsigned long)hint;	// 0x373c2f1d
@end

@interface NSString (MimeHeaderEncoding)
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)charsetHint;	// 0x373c471d
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned long)encodingHint;	// 0x373c4295
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned long)encodingHint;	// 0x373c38d9
@end

@interface NSString (MFStringUtils)
+ (id)mf_stringWithData:(id)data encoding:(unsigned)encoding;	// 0x373cb1dd
- (id)mf_MD5Digest;	// 0x373cb651
- (int)mf_caseInsensitiveCompareExcludingXDash:(id)dash;	// 0x373cb395
- (id)mf_copyStringByDecodingIDNA;	// 0x373cba6d
- (id)mf_copyStringByDecodingIDNAInRange:(NSRange)range;	// 0x373cb789
- (id)mf_copyStringByEncodingIDNA;	// 0x373cbaa1
- (id)mf_copyStringByEncodingIDNAInRange:(NSRange)range;	// 0x373cb9c5
- (id)mf_dataUsingEncoding:(unsigned)encoding;	// 0x373cb4c9
- (id)mf_dataUsingEncoding:(unsigned)encoding allowLossyConversion:(BOOL)conversion;	// 0x373cb4dd
- (const void *)mf_lossyDefaultCStringBytes;	// 0x373cb231
- (id)mf_messageIDSubstring;	// 0x373cb6e1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSData.h> // Unknown library


@interface NSData (NSDataExtensions)
- (BOOL)mf_immutable;	// 0x345e61b1
- (id)mf_subdataWithRange:(NSRange)range;	// 0x345e60c1
@end

@interface NSData (MimeDataEncoding)
- (id)mf_decodeBase64;	// 0x345ee54d
- (id)mf_decodeBase64InRange:(NSRange *)range;	// 0x345ee6bd
- (id)mf_decodeModifiedBase64;	// 0x345ee6c5
- (id)mf_decodeQuotedPrintableForText:(BOOL)text;	// 0x345ee3d1
- (id)mf_decodeUuencoded;	// 0x345ee4bd
- (id)mf_encodeBase64;	// 0x345ee7b9
- (id)mf_encodeBase64HeaderData;	// 0x345ee7d1
- (id)mf_encodeBase64WithoutLineBreaks;	// 0x345ee6cd
- (id)mf_encodeModifiedBase64;	// 0x345ee7c5
@end

@interface NSData (NSDataUtils)
- (id)mf_copyHexString;	// 0x345f0b55
- (id)mf_dataByConvertingUnixNewlinesToNetwork;	// 0x345f09c5
- (id)mf_locationsOfUnixNewlinesNeedingConversion;	// 0x345f0909
- (NSRange)mf_rangeOfByteFromSet:(id)set;	// 0x345f07fd
- (NSRange)mf_rangeOfByteFromSet:(id)set range:(NSRange)range;	// 0x345f0775
- (NSRange)mf_rangeOfCString:(const char *)cstring;	// 0x345f0849
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options;	// 0x345f0891
- (NSRange)mf_rangeOfCString:(const char *)cstring options:(unsigned)options range:(NSRange)range;	// 0x345f08d9
- (NSRange)mf_rangeOfData:(id)data options:(unsigned)options range:(NSRange)range;	// 0x345f071d
- (NSRange)mf_rangeOfRFC822HeaderData;	// 0x345f04c5
- (id)mf_subdataFromIndex:(unsigned)index;	// 0x345f06e9
- (id)mf_subdataToIndex:(unsigned)index;	// 0x345f06d5
@end

@interface NSData (DigestUtilities)
- (id)mf_MD5Digest;	// 0x3460ece5
@end

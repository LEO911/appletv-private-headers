/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MFMimeCharset : NSObject {
	unsigned long _encoding;	// 4 = 0x4
	NSString *_primaryLanguage;	// 8 = 0x8
	NSString *_charsetName;	// 12 = 0xc
	unsigned _coversLargeUnicodeSubset : 1;	// 16 = 0x10
	unsigned _useBase64InHeaders : 1;	// 16 = 0x10
	unsigned _canBeUsedForOutgoingMessages : 1;	// 16 = 0x10
}
@property(readonly, retain) NSString *charsetName;	// G=0x366bd469; converted property
@property(readonly, assign) unsigned long encoding;	// G=0x366bd459; converted property
@property(readonly, retain) NSString *primaryLanguage;	// G=0x366bd53d; converted property
+ (id)allMimeCharsets;	// 0x366bcfcd
+ (id)allMimeCharsets:(BOOL)charsets;	// 0x366bc919
+ (id)charsetForEncoding:(unsigned long)encoding;	// 0x366bcfe1
+ (id)preferredMimeCharset;	// 0x366bd03d
- (id)initWithEncoding:(unsigned long)encoding;	// 0x366bd085
- (void)_setPrimaryLanguage:(id)language;	// 0x366bd3b1
- (BOOL)canBeUsedForOutgoingMessages;	// 0x366bd4bd
// converted property getter: - (id)charsetName;	// 0x366bd469
- (BOOL)coversLargeUnicodeSubset;	// 0x366bd4d1
- (void)dealloc;	// 0x366bd3f5
- (id)description;	// 0x366bd54d
- (id)displayName;	// 0x366bd4f9
// converted property getter: - (unsigned long)encoding;	// 0x366bd459
// converted property getter: - (id)primaryLanguage;	// 0x366bd53d
- (BOOL)useBase64InHeaders;	// 0x366bd4e5
@end

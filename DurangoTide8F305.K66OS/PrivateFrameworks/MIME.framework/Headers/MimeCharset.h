/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MimeCharset : NSObject {
	unsigned _encoding;	// 4 = 0x4
	NSString *_primaryLanguage;	// 8 = 0x8
	NSString *_charsetName;	// 12 = 0xc
	unsigned _coversLargeUnicodeSubset : 1;	// 16 = 0x10
	unsigned _useBase64InHeaders : 1;	// 16 = 0x10
	unsigned _canBeUsedForOutgoingMessages : 1;	// 16 = 0x10
}
@property(readonly, retain) NSString *charsetName;	// G=0x304a48c5; converted property
@property(readonly, retain) NSString *primaryLanguage;	// G=0x304a40f5; converted property
+ (id)allMimeCharsets;	// 0x304a4495
+ (id)allMimeCharsets:(BOOL)charsets;	// 0x304a49c9
+ (id)charsetForEncoding:(unsigned long)encoding;	// 0x304a49ad
+ (id)preferredMimeCharset;	// 0x304a4455
- (id)initWithEncoding:(unsigned long)encoding;	// 0x304a44f5
- (void)_setPrimaryLanguage:(id)language;	// 0x304a4419
- (BOOL)canBeUsedForOutgoingMessages;	// 0x304a40b9
// converted property getter: - (id)charsetName;	// 0x304a48c5
- (BOOL)coversLargeUnicodeSubset;	// 0x304a40cd
- (void)dealloc;	// 0x304a43bd
- (id)description;	// 0x304a432d
- (id)displayName;	// 0x304a491d
- (unsigned long)encoding;	// 0x304a40a9
// converted property getter: - (id)primaryLanguage;	// 0x304a40f5
- (BOOL)useBase64InHeaders;	// 0x304a40e1
@end


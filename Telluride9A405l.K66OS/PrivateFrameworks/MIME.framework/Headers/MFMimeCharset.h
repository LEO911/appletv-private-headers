/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface MFMimeCharset : NSObject {
	unsigned _encoding;	// 4 = 0x4
	NSString *_primaryLanguage;	// 8 = 0x8
	NSString *_charsetName;	// 12 = 0xc
	unsigned _coversLargeUnicodeSubset : 1;	// 16 = 0x10
	unsigned _useBase64InHeaders : 1;	// 16 = 0x10
	unsigned _canBeUsedForOutgoingMessages : 1;	// 16 = 0x10
}
@property(readonly, retain) NSString *charsetName;	// G=0x311e2429; converted property
@property(readonly, retain) NSString *primaryLanguage;	// G=0x311e1b09; converted property
+ (id)allMimeCharsets;	// 0x311e1c69
+ (id)allMimeCharsets:(BOOL)charsets;	// 0x311e1c7d
+ (id)charsetForEncoding:(unsigned long)encoding;	// 0x311e1c09
+ (id)preferredMimeCharset;	// 0x311e1bc1
- (id)initWithEncoding:(unsigned long)encoding;	// 0x311e248d
- (void)_setPrimaryLanguage:(id)language;	// 0x311e1b19
- (BOOL)canBeUsedForOutgoingMessages;	// 0x311e1acd
// converted property getter: - (id)charsetName;	// 0x311e2429
- (BOOL)coversLargeUnicodeSubset;	// 0x311e1ae1
- (void)dealloc;	// 0x311e1b61
- (id)description;	// 0x311e2349
- (id)displayName;	// 0x311e23e5
- (unsigned long)encoding;	// 0x311e1abd
// converted property getter: - (id)primaryLanguage;	// 0x311e1b09
- (BOOL)useBase64InHeaders;	// 0x311e1af5
@end

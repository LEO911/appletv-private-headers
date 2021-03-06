/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSError;

@interface _NSJSONReader : NSObject {
	id input;	// 4 = 0x4
	int kind;	// 8 = 0x8
	char *buf;	// 12 = 0xc
	unsigned options;	// 16 = 0x10
	NSError *error;	// 20 = 0x14
	unsigned bufLength;	// 24 = 0x18
	unsigned idx;	// 28 = 0x1c
	struct {
		char *location;
		unsigned length;
		id value;
		unsigned hash;
	} cache[256];	// 32 = 0x20
}
@property(retain) NSError *error;	// G=0x310f4a0d; S=0x310f4a1d; converted property
+ (BOOL)validForJSON:(id)json depth:(unsigned)depth allowFragments:(BOOL)fragments;	// 0x310f4ac9
- (id)init;	// 0x310f4961
- (void)dealloc;	// 0x310f49bd
// converted property getter: - (id)error;	// 0x310f4a0d
- (unsigned)findEncodingFromData:(id)data withBOMSkipLength:(unsigned *)bomskipLength;	// 0x310f6f75
- (id)newJSONArray;	// 0x310f62e9
- (id)newJSONBooleanOrNull;	// 0x310f5f7d
- (id)newJSONNumber;	// 0x310f5029
- (id)newJSONNumberAtPosition:(unsigned)position;	// 0x310f4ec9
- (id)newJSONObject;	// 0x310f6729
- (id)newJSONString;	// 0x310f5745
- (id)newJSONValue;	// 0x310f620d
- (id)parseData:(id)data options:(unsigned)options;	// 0x310f70d1
- (unsigned short)parseJSONUnicodePointAtLocation:(unsigned)location end:(unsigned)end;	// 0x310f5655
- (id)parseStream:(id)stream options:(unsigned)options;	// 0x310f71e9
- (id)parseUTF8JSONData:(id)data skipBytes:(unsigned)bytes;	// 0x310f6df5
// converted property setter: - (void)setError:(id)error;	// 0x310f4a1d
- (BOOL)skipJSONWhitespace;	// 0x310f619d
@end


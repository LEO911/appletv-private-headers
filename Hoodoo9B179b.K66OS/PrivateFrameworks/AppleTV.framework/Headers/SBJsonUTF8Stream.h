/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBJsonUTF8Stream : NSObject {
@private
	const char *_bytes;	// 4 = 0x4
	NSMutableData *_data;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
}
@property(assign) unsigned index;	// G=0x30503b4d; S=0x30503b5d; @synthesize=_index
- (id)init;	// 0x30503711
- (void)appendData:(id)data;	// 0x305037cd
- (void)dealloc;	// 0x30503781
- (BOOL)getNextUnichar:(unsigned short *)unichar;	// 0x305038d1
- (BOOL)getSimpleString:(id *)string;	// 0x30503921
- (BOOL)getUnichar:(unsigned short *)unichar;	// 0x30503891
- (BOOL)haveRemainingCharacters:(unsigned)characters;	// 0x30503a4d
// declared property getter: - (unsigned)index;	// 0x30503b4d
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x30503b5d
- (void)skip;	// 0x305039dd
- (BOOL)skipCharacters:(const char *)characters length:(unsigned)length;	// 0x30503a8d
- (void)skipWhitespace;	// 0x305039f1
- (id)stringWithRange:(NSRange)range;	// 0x30503ae9
@end

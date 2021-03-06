/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBJsonUTF8Stream;

@interface SBJsonTokeniser : XXUnknownSuperclass {
	SBJsonUTF8Stream *_stream;	// 4 = 0x4
	NSString *_error;	// 8 = 0x8
}
@property(copy) NSString *error;	// G=0x49dfd5; S=0x49dfe9; @synthesize=_error
- (id)init;	// 0x49d3f1
- (void)appendData:(id)data;	// 0x49d4a1
- (void)dealloc;	// 0x49d455
- (BOOL)decodeEscape:(unsigned short)escape into:(unsigned short *)into;	// 0x49d569
- (BOOL)decodeHexQuad:(unsigned short *)quad;	// 0x49d5dd
// declared property getter: - (id)error;	// 0x49dfd5
- (int)getNumberToken:(id *)token;	// 0x49d985
- (int)getStringToken:(id *)token;	// 0x49d671
- (int)getToken:(id *)token;	// 0x49dd9d
- (int)match:(const char *)match length:(unsigned)length retval:(int)retval;	// 0x49d4c1
// declared property setter: - (void)setError:(id)error;	// 0x49dfe9
@end


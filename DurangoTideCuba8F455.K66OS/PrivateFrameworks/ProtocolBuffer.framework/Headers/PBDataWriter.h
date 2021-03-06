/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface PBDataWriter : NSObject {
	NSMutableData *_data;	// 4 = 0x4
}
@property(readonly, retain) NSMutableData *data;	// G=0x31570831; converted property
- (id)init;	// 0x31570e01
// converted property getter: - (id)data;	// 0x31570831
- (void)dealloc;	// 0x31570db9
- (int)write:(const char *)write maxLength:(unsigned)length;	// 0x31570841
- (void)writeBOOL:(BOOL)aBool forTag:(unsigned short)tag;	// 0x31570949
- (void)writeBareVarint:(long long)varint;	// 0x31570c4d
- (void)writeBigEndianFixed16:(unsigned short)a16;	// 0x31570e5d
- (void)writeBigEndianFixed32:(unsigned)a32;	// 0x31570e85
- (void)writeBigEndianShortThenString:(id)string;	// 0x31570d3d
- (BOOL)writeData:(id)data;	// 0x31570869
- (void)writeData:(id)data forTag:(unsigned short)tag;	// 0x315708bd
- (void)writeDouble:(double)aDouble forTag:(unsigned short)tag;	// 0x31570be9
- (void)writeFixed32:(unsigned)a32 forTag:(unsigned short)tag;	// 0x31570a2d
- (void)writeFixed64:(unsigned long long)a64 forTag:(unsigned short)tag;	// 0x315709f1
- (void)writeFloat:(float)aFloat forTag:(unsigned short)tag;	// 0x31570bb1
- (void)writeInt32:(int)a32 forTag:(unsigned short)tag;	// 0x31570b7d
- (void)writeInt64:(long long)a64 forTag:(unsigned short)tag;	// 0x31570b49
- (void)writeInt8:(BOOL)a8;	// 0x31570ca9
- (void)writeProtoBuffer:(id)buffer;	// 0x31570ccd
- (void)writeSfixed32:(int)a32 forTag:(unsigned short)tag;	// 0x315709b9
- (void)writeSfixed64:(long long)a64 forTag:(unsigned short)tag;	// 0x3157097d
- (void)writeSint32:(int)a32 forTag:(unsigned short)tag;	// 0x31570aa5
- (void)writeSint64:(long long)a64 forTag:(unsigned short)tag;	// 0x31570a65
- (void)writeString:(id)string forTag:(unsigned short)tag;	// 0x31570919
- (void)writeTag:(unsigned short)tag andType:(unsigned char)type;	// 0x31570c25
- (void)writeUint32:(unsigned)a32 forTag:(unsigned)tag;	// 0x31570b15
- (void)writeUint64:(unsigned long long)a64 forTag:(unsigned long long)tag;	// 0x31570ae1
@end


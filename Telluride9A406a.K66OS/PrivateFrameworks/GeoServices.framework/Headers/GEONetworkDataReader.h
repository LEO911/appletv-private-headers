/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableData;

@interface GEONetworkDataReader : NSObject {
	NSMutableData *_data;	// 4 = 0x4
	unsigned _dataLength;	// 8 = 0x8
	const void *_bytes;	// 12 = 0xc
	unsigned _bookmarkOffset;	// 16 = 0x10
	unsigned _offset;	// 20 = 0x14
}
- (id)initWithData:(id)data;	// 0x34bff785
- (void)appendNetworkData:(id)data;	// 0x34bff8a9
- (void)dealloc;	// 0x34bff819
- (BOOL)hasUnreadData;	// 0x34bffab9
- (void)markOffset;	// 0x34bffa79
- (id)readData:(unsigned short)data;	// 0x34bffa1d
- (id)readString;	// 0x34bff919
- (unsigned short)readUnsignedShort;	// 0x34bff9d1
- (void)seekToMarkedOffset;	// 0x34bffa99
@end


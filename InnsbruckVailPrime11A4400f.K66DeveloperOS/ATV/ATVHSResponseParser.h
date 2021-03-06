/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ATVDataClient, NSData;

__attribute__((visibility("hidden")))
@interface ATVHSResponseParser : XXUnknownSuperclass {
	char *_bytePtr;	// 4 = 0x4
	unsigned long _byteOffset;	// 8 = 0x8
	unsigned long _dataLength;	// 12 = 0xc
	NSData *_responseData;	// 16 = 0x10
	ATVDataClient *_dataClient;	// 20 = 0x14
}
@property(assign, nonatomic) ATVDataClient *dataClient;	// G=0x3d165; S=0x3d175; @synthesize=_dataClient
@property(retain, nonatomic) NSData *responseData;	// G=0x3d12d; S=0x3d13d; @synthesize=_responseData
- (id)initWithResponse:(id)response dataClient:(id)client;	// 0x3c0f5
- (void).cxx_destruct;	// 0x3d185
// declared property getter: - (id)dataClient;	// 0x3d165
- (unsigned long)intValueForCode:(unsigned long)code;	// 0x3d0a9
- (id)parseDAAPResponseWithQuery:(id)query;	// 0x3c289
- (id)parseDPAPResponseWithQuery:(id)query;	// 0x3cdb5
- (id)parseWithQuery:(id)query;	// 0x3c171
// declared property getter: - (id)responseData;	// 0x3d12d
// declared property setter: - (void)setDataClient:(id)client;	// 0x3d175
// declared property setter: - (void)setResponseData:(id)data;	// 0x3d13d
- (unsigned long)unsignedIntValue;	// 0x3d081
@end


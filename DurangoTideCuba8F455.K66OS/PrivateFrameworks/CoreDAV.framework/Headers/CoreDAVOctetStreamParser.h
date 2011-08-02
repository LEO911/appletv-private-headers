/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVResponseBodyParser.h"

@class NSError, NSMutableData;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
	NSMutableData *_octetStreamData;	// 4 = 0x4
	NSError *_parserError;	// 8 = 0x8
}
@property(retain) NSMutableData *octetStreamData;	// G=0x3318e685; S=0x3318e6c9; @synthesize=_octetStreamData
@property(readonly, assign) NSError *parserError;	// G=0x3318e515; 
- (id)init;	// 0x3318e5f9
- (void)dealloc;	// 0x3318e59d
- (id)description;	// 0x3318e411
// declared property getter: - (id)octetStreamData;	// 0x3318e685
// declared property getter: - (id)parserError;	// 0x3318e515
- (BOOL)processData:(id)data;	// 0x3318e545
// declared property setter: - (void)setOctetStreamData:(id)data;	// 0x3318e6c9
- (BOOL)task:(id)task receivedData:(id)data;	// 0x3318e571
@end

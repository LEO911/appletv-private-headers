/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

#import "AssetsLibraryServices-Structs.h"
#import <NSData.h> // Unknown library

@class NSObject;
@protocol OS_xpc_object;

@interface PLXPCData : NSData {
	NSObject<OS_xpc_object> *_data;	// 4 = 0x4
}
- (id)initWithXPCData:(id)xpcdata;	// 0x3368fe59
- (const void *)bytes;	// 0x3368ff51
- (void)dealloc;	// 0x3368febd
- (id)debugDescription;	// 0x3368ff01
- (void)getBytes:(void *)bytes length:(unsigned)length;	// 0x3368ff65
- (void)getBytes:(void *)bytes range:(NSRange)range;	// 0x3368ff7d
- (unsigned)length;	// 0x3368ff99
@end

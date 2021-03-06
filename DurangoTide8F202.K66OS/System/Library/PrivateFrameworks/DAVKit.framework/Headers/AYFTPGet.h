/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "AYOperation.h"

@class NSURL, NSMutableData, NSString;

@interface AYFTPGet : AYOperation {
	NSURL *_url;	// 64 = 0x40
	CFReadStreamRef _readStream;	// 68 = 0x44
	CFHostClientContext _clientContext;	// 72 = 0x48
	NSString *_username;	// 92 = 0x5c
	NSString *_password;	// 96 = 0x60
	long long _ressourceSize;	// 100 = 0x64
	long long _readSize;	// 108 = 0x6c
	NSMutableData *_readData;	// 116 = 0x74
}
+ (id)getRequestWithURL:(id)url username:(id)username password:(id)password;	// 0x32db1a89
- (id)initGetRequestWithURL:(id)url username:(id)username password:(id)password;	// 0x32db1995
- (void)_readStreamEvent:(unsigned long)event;	// 0x32db1f25
- (id)data;	// 0x32db1961
- (void)dealloc;	// 0x32db1bb5
- (void)dispatch;	// 0x32db1c4d
- (void)endOperationWithError:(id)error;	// 0x32db1ead
- (void)finalize;	// 0x32db1b71
- (BOOL)isRunLoopBased;	// 0x32db1971
- (long long)operationProgress;	// 0x32db1975
- (long long)operationTotal;	// 0x32db1985
- (void)resetOperation;	// 0x32db1ae9
@end


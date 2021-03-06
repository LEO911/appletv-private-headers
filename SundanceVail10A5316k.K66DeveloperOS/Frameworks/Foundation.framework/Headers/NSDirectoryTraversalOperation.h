/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOperation.h"
#import "Foundation-Structs.h"

@class NSString, NSError;

__attribute__((visibility("hidden")))
@interface NSDirectoryTraversalOperation : NSOperation {
@private
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_stream;	// 24 = 0x18
	int _optionsFlags;	// 28 = 0x1c
	int _lastDeviceInode;	// 32 = 0x20
	BOOL _shouldFilterUnderbars;	// 36 = 0x24
	BOOL _stopped;	// 37 = 0x25
}
@property(assign) id delegate;	// G=0x31a54c99; S=0x31a54ca9; converted property
@property(readonly, retain) NSError *error;	// G=0x31a54dc5; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x31a54bf1
+ (id)directoryTraversalOperationAtPath:(id)path;	// 0x31a54c49
- (id)initWithPath:(id)path;	// 0x31a54bfd
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x31a54e9d
- (void)_setError:(id)error;	// 0x31a54dfd
- (BOOL)_shouldFilterEntry:(ftsent *)entry;	// 0x31a54d15
- (BOOL)_validatePaths:(id *)paths;	// 0x31a54fe1
- (void)dealloc;	// 0x31a551d1
// converted property getter: - (id)delegate;	// 0x31a54c99
// converted property getter: - (id)error;	// 0x31a54dc5
- (void)handlePathname:(id)pathname;	// 0x31a54cb9
- (void)main;	// 0x31a54fe5
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31a54ca9
- (BOOL)shouldProceedAfterError:(id)error;	// 0x31a54e41
@end


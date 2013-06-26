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
	id _delegate;	// 12 = 0xc
	NSString *_sourcePath;	// 16 = 0x10
	NSError *_error;	// 20 = 0x14
	void *_stream;	// 24 = 0x18
	int _optionsFlags;	// 28 = 0x1c
	int _lastDeviceInode;	// 32 = 0x20
	BOOL _shouldFilterUnderbars;	// 36 = 0x24
	BOOL _stopped;	// 37 = 0x25
}
@property(assign) id delegate;	// G=0x31921009; S=0x31921019; converted property
@property(readonly, retain) NSError *error;	// G=0x31921135; converted property
+ (id)_errorWithErrno:(int)errno atPath:(id)path;	// 0x31920f61
+ (id)directoryTraversalOperationAtPath:(id)path;	// 0x31920fb9
- (id)initWithPath:(id)path;	// 0x31920f6d
- (void)_handleFTSEntry:(ftsent *)entry;	// 0x3192120d
- (void)_setError:(id)error;	// 0x3192116d
- (BOOL)_shouldFilterEntry:(ftsent *)entry;	// 0x31921085
- (BOOL)_validatePaths:(id *)paths;	// 0x31921351
- (void)dealloc;	// 0x31921541
// converted property getter: - (id)delegate;	// 0x31921009
// converted property getter: - (id)error;	// 0x31921135
- (void)handlePathname:(id)pathname;	// 0x31921029
- (void)main;	// 0x31921355
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x31921019
- (BOOL)shouldProceedAfterError:(id)error;	// 0x319211b1
@end

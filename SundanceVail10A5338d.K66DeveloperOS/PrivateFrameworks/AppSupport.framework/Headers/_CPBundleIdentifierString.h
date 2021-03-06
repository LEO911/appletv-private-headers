/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import <NSString.h> // Unknown library
#import "AppSupport-Structs.h"


@interface _CPBundleIdentifierString : NSString {
	NSString *_executablePath;	// 4 = 0x4
	NSString *_bundleIdentifierOrProcessName;	// 8 = 0x8
	BOOL _isProcessName;	// 12 = 0xc
}
- (id)_initWithExecutablePath:(id)executablePath;	// 0x34560b91
- (BOOL)_isProcessName;	// 0x34560e3d
- (void)_loadBundleIdentifierOrProcessName;	// 0x34560c49
- (unsigned short)characterAtIndex:(unsigned)index;	// 0x34560ea1
- (void)dealloc;	// 0x34560be5
- (void)getCharacters:(unsigned short *)characters range:(NSRange)range;	// 0x34560edd
- (unsigned)length;	// 0x34560e65
@end


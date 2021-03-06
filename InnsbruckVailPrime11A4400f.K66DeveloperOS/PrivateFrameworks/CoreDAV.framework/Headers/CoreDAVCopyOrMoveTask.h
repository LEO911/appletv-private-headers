/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVTask.h"

@class NSURL;

@interface CoreDAVCopyOrMoveTask : CoreDAVTask {
	int _overwrite;	// 140 = 0x8c
	NSURL *_destinationURL;	// 144 = 0x90
}
@property(retain) NSURL *destinationURL;	// G=0x30494d45; S=0x30494d59; @synthesize=_destinationURL
@property(assign) int overwrite;	// G=0x30494d19; S=0x30494d2d; @synthesize=_overwrite
+ (id)stringFromOverwriteValue:(int)overwriteValue;	// 0x30494cdd
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url;	// 0x304946fd
- (id)initWithSourceURL:(id)sourceURL destinationURL:(id)url andOverwrite:(int)overwrite;	// 0x30494721
- (id)initWithURL:(id)url;	// 0x304946f9
- (void)_callBackToDelegateWithResponses:(id)responses error:(id)error;	// 0x30494cd9
- (id)additionalHeaderValues;	// 0x30494a3d
- (void)dealloc;	// 0x30494891
- (id)description;	// 0x304948dd
// declared property getter: - (id)destinationURL;	// 0x30494d45
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x30494b6d
// declared property getter: - (int)overwrite;	// 0x30494d19
- (id)requestBody;	// 0x30494a39
// declared property setter: - (void)setDestinationURL:(id)url;	// 0x30494d59
// declared property setter: - (void)setOverwrite:(int)overwrite;	// 0x30494d2d
@end


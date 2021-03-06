/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetTask.h"

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {
	NSFileHandle *_destinationFile;	// 140 = 0x8c
}
@property(retain) NSFileHandle *destinationFile;	// G=0x30cb6499; S=0x30cb64ad; @synthesize=_destinationFile
- (id)initWithURL:(id)url destinationFile:(id)file;	// 0x30cb63f1
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30cb6445
- (void)dealloc;	// 0x30cb63a5
// declared property getter: - (id)destinationFile;	// 0x30cb6499
// declared property setter: - (void)setDestinationFile:(id)file;	// 0x30cb64ad
- (BOOL)shouldLogResponseBody;	// 0x30cb6495
@end


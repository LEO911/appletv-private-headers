/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVGetTask.h"

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask {
	NSFileHandle *_destinationFile;	// 128 = 0x80
}
@property(retain) NSFileHandle *destinationFile;	// G=0x30ffed89; S=0x30ffed9d; @synthesize=_destinationFile
- (id)initWithURL:(id)url destinationFile:(id)file;	// 0x30ffece1
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x30ffed35
- (void)dealloc;	// 0x30ffec95
// declared property getter: - (id)destinationFile;	// 0x30ffed89
// declared property setter: - (void)setDestinationFile:(id)file;	// 0x30ffed9d
- (BOOL)shouldLogResponseBody;	// 0x30ffed85
@end

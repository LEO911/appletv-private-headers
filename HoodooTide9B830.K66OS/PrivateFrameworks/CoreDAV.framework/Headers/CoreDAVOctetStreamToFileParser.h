/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVOctetStreamParser.h"

@class NSFileHandle;

@interface CoreDAVOctetStreamToFileParser : CoreDAVOctetStreamParser {
	NSFileHandle *_fileHandle;	// 12 = 0xc
}
@property(retain) NSFileHandle *fileHandle;	// G=0x35dd60b1; S=0x35dd60c5; @synthesize=_fileHandle
- (id)initWithFileHandle:(id)fileHandle;	// 0x35dd5fed
- (void)dealloc;	// 0x35dd6035
// declared property getter: - (id)fileHandle;	// 0x35dd60b1
- (BOOL)processData:(id)data forTask:(id)task;	// 0x35dd6081
// declared property setter: - (void)setFileHandle:(id)handle;	// 0x35dd60c5
@end


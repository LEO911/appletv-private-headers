/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CPTracing.h"


__attribute__((visibility("hidden")))
@interface CPImportTracing : CPTracing {
@private
	long mReadingOpstat;	// 8 = 0x8
	long mProcessorOpstat;	// 12 = 0xc
	long mImportingOpstat;	// 16 = 0x10
}
- (id)initWithFilename:(id)filename;	// 0x34642d39
- (void)dealloc;	// 0x34642e29
- (void)startImporting;	// 0x34642d89
- (void)startProcessors;	// 0x34642dc9
- (void)startReading;	// 0x34642e09
- (void)stopImporting;	// 0x34642d69
- (void)stopProcessors;	// 0x34642da9
- (void)stopReading;	// 0x34642de9
@end

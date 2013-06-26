/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSFileHandle, SSLogFileOptions;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SSRollableLog : NSObject {
	NSObject<OS_dispatch_queue> *_dispatchQueue;	// 4 = 0x4
	double _lastFileStatTime;	// 8 = 0x8
	NSFileHandle *_fileHandle;	// 16 = 0x10
	NSObject<OS_dispatch_source> *_fileObserverSource;	// 20 = 0x14
	SSLogFileOptions *_options;	// 24 = 0x18
}
@property(readonly, assign) SSLogFileOptions *logOptions;	// G=0x354fb6d9; 
- (id)initWithLogOptions:(id)logOptions;	// 0x354fb5a9
- (id)_activeLogFilePath;	// 0x354fb951
- (void)_checkLogFileSize;	// 0x354fb969
- (void)_closeLogFile;	// 0x354fba41
- (id)_logFilePathWithIndex:(int)index;	// 0x354fba89
- (void)_openLogFile;	// 0x354fbbcd
- (void)_rollLogFiles;	// 0x354fbdd1
- (void)dealloc;	// 0x354fb649
// declared property getter: - (id)logOptions;	// 0x354fb6d9
- (void)writeString:(id)string;	// 0x354fb711
@end

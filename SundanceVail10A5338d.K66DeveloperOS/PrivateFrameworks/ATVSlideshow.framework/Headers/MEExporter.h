/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSCondition, MEExporterManager, MPDocument;

@interface MEExporter : NSObject {
	MEExporterManager *_manager;	// 4 = 0x4
	MPDocument *_document;	// 8 = 0x8
	SEL _progressSelector;	// 12 = 0xc
	id _progressTarget;	// 16 = 0x10
	id _progressObject;	// 20 = 0x14
	BOOL _progressEnableImage;	// 24 = 0x18
	BOOL _cancelled;	// 25 = 0x19
	BOOL _paused;	// 26 = 0x1a
	BOOL _enablePause;	// 27 = 0x1b
	NSCondition *_pauseCondition;	// 28 = 0x1c
	BOOL _useSubprocess;	// 32 = 0x20
	NSString *_tmpDirectory;	// 36 = 0x24
	void *_daFunc;	// 40 = 0x28
}
@property(readonly, assign, nonatomic) BOOL isCancelled;	// G=0x3351d831; @synthesize=_cancelled
@property(readonly, assign, nonatomic) BOOL isPauseEnabled;	// G=0x3351d841; @synthesize=_enablePause
@property(readonly, assign, nonatomic) BOOL isPaused;	// G=0x3351d851; @synthesize=_paused
@property(readonly, assign, nonatomic) BOOL isProgressImageEnabled;	// G=0x3351d861; @synthesize=_progressEnableImage
@property(readonly, assign, nonatomic) NSString *tmpDirectory;	// G=0x3351d871; @synthesize=_tmpDirectory
+ (BOOL)createErrorWithCode:(int)code andDescription:(id)description andSuggestion:(id)suggestion andUnderlyingError:(id)error outError:(id *)error5;	// 0x3351da6d
+ (BOOL)createErrorWithCode:(int)code andDescription:(id)description outError:(id *)error;	// 0x3351db71
+ (BOOL)createNotEnoughSpaceErrorForFreeSpace:(unsigned long long)freeSpace andNeededSpace:(unsigned long long)space outError:(id *)error;	// 0x3351dbad
+ (id)createTemporaryDirectoryForPath:(id)path error:(id *)error;	// 0x3351d96d
+ (id)localizedString:(id)string;	// 0x3351dc79
- (id)initWithDocument:(id)document;	// 0x3351cf75
- (id)initWithDocument:(id)document andManager:(id)manager;	// 0x3351ce39
- (id)_bookmarkDataForPath:(id)path;	// 0x3351d7ed
- (BOOL)_exportToFile:(id)file withOptions:(id)options error:(id *)error;	// 0x3351d0d1
- (id)archiver:(id)archiver willEncodeObject:(id)object;	// 0x3351dce9
- (void)cancelExport;	// 0x3351d709
- (void)checkPaused;	// 0x3351d881
- (void)dealloc;	// 0x3351cfb5
- (BOOL)exportToFile:(id)file withOptions:(id)options error:(id *)error;	// 0x3351d075
// declared property getter: - (BOOL)isCancelled;	// 0x3351d831
// declared property getter: - (BOOL)isPauseEnabled;	// 0x3351d841
// declared property getter: - (BOOL)isPaused;	// 0x3351d851
// declared property getter: - (BOOL)isProgressImageEnabled;	// 0x3351d861
- (void)pauseExport;	// 0x3351d769
- (id)preferences;	// 0x3351d7b9
- (void)resumeExport;	// 0x3351d791
- (void)setCancelled;	// 0x3351d8f5
- (void)setPaused:(BOOL)paused;	// 0x3351d909
- (void)setProgressSelector:(SEL)selector withTarget:(id)target andObject:(id)object;	// 0x3351d045
// declared property getter: - (id)tmpDirectory;	// 0x3351d871
@end


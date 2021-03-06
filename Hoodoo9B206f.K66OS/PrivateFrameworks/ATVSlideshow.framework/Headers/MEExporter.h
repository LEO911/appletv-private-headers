/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class MEExporter_Legacy, MEExporterManager, MPDocument, NSCondition, NSString, METask;

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
	METask *_task;	// 44 = 0x2c
	MEExporter_Legacy *_legacyExporter;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) BOOL isCancelled;	// G=0x30b3273d; @synthesize=_cancelled
@property(readonly, assign, nonatomic) BOOL isPauseEnabled;	// G=0x30b3274d; @synthesize=_enablePause
@property(readonly, assign, nonatomic) BOOL isProgressImageEnabled;	// G=0x30b3275d; @synthesize=_progressEnableImage
@property(readonly, assign, nonatomic) NSString *tmpDirectory;	// G=0x30b3276d; @synthesize=_tmpDirectory
+ (BOOL)createErrorWithCode:(int)code andDescription:(id)description andSuggestion:(id)suggestion andUnderlyingError:(id)error outError:(id *)error5;	// 0x30b32871
+ (BOOL)createErrorWithCode:(int)code andDescription:(id)description outError:(id *)error;	// 0x30b32971
+ (BOOL)createNotEnoughSpaceErrorForFreeSpace:(unsigned long long)freeSpace andNeededSpace:(unsigned long long)space outError:(id *)error;	// 0x30b329a9
+ (id)localizedString:(id)string;	// 0x30b32a75
- (id)initWithDocument:(id)document;	// 0x30b31ba5
- (id)initWithDocument:(id)document andManager:(id)manager;	// 0x30b31a4d
- (void)cancelExport;	// 0x30b323bd
- (void)checkPaused;	// 0x30b3277d
- (void)dealloc;	// 0x30b31be5
- (BOOL)exportToFile:(id)file withOptions:(id)options error:(id *)error;	// 0x30b31cc1
// declared property getter: - (BOOL)isCancelled;	// 0x30b3273d
// declared property getter: - (BOOL)isPauseEnabled;	// 0x30b3274d
// declared property getter: - (BOOL)isProgressImageEnabled;	// 0x30b3275d
- (void)pauseExport;	// 0x30b324e1
- (id)preferences;	// 0x30b32709
- (void)resumeExport;	// 0x30b325f5
- (void)setCancelled;	// 0x30b327f5
- (void)setPaused:(BOOL)paused;	// 0x30b32809
- (void)setProgressSelector:(SEL)selector withTarget:(id)target andObject:(id)object;	// 0x30b31c91
// declared property getter: - (id)tmpDirectory;	// 0x30b3276d
@end


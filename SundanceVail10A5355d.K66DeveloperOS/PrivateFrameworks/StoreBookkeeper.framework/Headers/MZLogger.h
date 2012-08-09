/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, NSFileHandle, NSRegularExpression, NSLock;

@interface MZLogger : NSObject {
	NSString *_auxPath;	// 4 = 0x4
	NSFileHandle *_fileHandle;	// 8 = 0x8
	NSString *_filter;	// 12 = 0xc
	NSString *_runtimeOverride;	// 16 = 0x10
	int _pid;	// 20 = 0x14
	NSString *_procName;	// 24 = 0x18
	NSRegularExpression *_runtimeOverrideRegex;	// 28 = 0x1c
	NSLock *_lock;	// 32 = 0x20
}
@property(retain) NSString *auxPath;	// G=0x34236c45; S=0x34236b35; converted property
@property(copy, nonatomic) NSString *filter;	// G=0x342372ad; S=0x342372c1; @synthesize=_filter
@property(copy) NSString *runtimeOverride;	// G=0x342372d1; S=0x342372e5; @synthesize=_runtimeOverride
+ (id)sharedLogger;	// 0x34236451
- (id)init;	// 0x34236489
- (void)_updateSettingsFromPreferences:(id)preferences;	// 0x342368ad
- (void)addRuntimeOverride:(id)override;	// 0x342371b9
// converted property getter: - (id)auxPath;	// 0x34236c45
- (void)dealloc;	// 0x34236a55
// declared property getter: - (id)filter;	// 0x342372ad
- (void)logFile:(const char *)file lineNumber:(int)number format:(id)format;	// 0x34236e29
- (void)logFunction:(const char *)function format:(id)format;	// 0x34236f25
- (void)logString:(id)string;	// 0x34237001
- (void)performLoggingBlock:(id)block;	// 0x34236de5
- (void)removeRuntimeOverride:(id)override;	// 0x3423725d
// declared property getter: - (id)runtimeOverride;	// 0x342372d1
// converted property setter: - (void)setAuxPath:(id)path;	// 0x34236b35
// declared property setter: - (void)setFilter:(id)filter;	// 0x342372c1
// declared property setter: - (void)setRuntimeOverride:(id)override;	// 0x342372e5
- (BOOL)shouldOverrideCondition:(id)condition file:(id)file;	// 0x34236c55
@end

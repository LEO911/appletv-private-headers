/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : NSObject {
@private
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x3301187d; S=0x3301188d; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x3301185d; S=0x33012495; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x3301186d; S=0x3301246d; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x330118bd; S=0x33012445; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x3301189d; S=0x330118ad; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x330118cd; S=0x33012419; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x33012239
// declared property getter: - (BOOL)cannotInterrupt;	// 0x3301187d
// declared property getter: - (id)completionCallback;	// 0x3301185d
- (void)dealloc;	// 0x3301236d
- (id)description;	// 0x330121e9
// declared property getter: - (id)language;	// 0x3301186d
// declared property getter: - (id)pitch;	// 0x330118bd
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x3301188d
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x33012495
// declared property setter: - (void)setLanguage:(id)language;	// 0x3301246d
// declared property setter: - (void)setPitch:(id)pitch;	// 0x33012445
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x330118ad
// declared property setter: - (void)setString:(id)string;	// 0x33012419
// declared property getter: - (BOOL)shouldQueue;	// 0x3301189d
// declared property getter: - (id)string;	// 0x330118cd
@end


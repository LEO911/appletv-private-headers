/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRVOSpeechAction : XXUnknownSuperclass {
	NSString *_string;	// 4 = 0x4
	NSString *_pitch;	// 8 = 0x8
	NSString *_language;	// 12 = 0xc
	BOOL _shouldQueue;	// 16 = 0x10
	BOOL _cannotInterrupt;	// 17 = 0x11
	id _completionCallback;	// 20 = 0x14
}
@property(assign, nonatomic) BOOL cannotInterrupt;	// G=0x28c3b1; S=0x28c3c1; @synthesize=_cannotInterrupt
@property(copy, nonatomic) id completionCallback;	// G=0x28c3f1; S=0x28c405; @synthesize=_completionCallback
@property(retain, nonatomic) NSString *language;	// G=0x28c3d1; S=0x28c3e1; @synthesize=_language
@property(retain, nonatomic) NSString *pitch;	// G=0x28c371; S=0x28c381; @synthesize=_pitch
@property(assign, nonatomic) BOOL shouldQueue;	// G=0x28c391; S=0x28c3a1; @synthesize=_shouldQueue
@property(copy, nonatomic) NSString *string;	// G=0x28c34d; S=0x28c361; @synthesize=_string
+ (id)actionWithString:(id)string shouldQueue:(BOOL)queue;	// 0x28c1f9
// declared property getter: - (BOOL)cannotInterrupt;	// 0x28c3b1
// declared property getter: - (id)completionCallback;	// 0x28c3f1
- (void)dealloc;	// 0x28c26d
- (id)description;	// 0x28c2f9
// declared property getter: - (id)language;	// 0x28c3d1
// declared property getter: - (id)pitch;	// 0x28c371
// declared property setter: - (void)setCannotInterrupt:(BOOL)interrupt;	// 0x28c3c1
// declared property setter: - (void)setCompletionCallback:(id)callback;	// 0x28c405
// declared property setter: - (void)setLanguage:(id)language;	// 0x28c3e1
// declared property setter: - (void)setPitch:(id)pitch;	// 0x28c381
// declared property setter: - (void)setShouldQueue:(BOOL)queue;	// 0x28c3a1
// declared property setter: - (void)setString:(id)string;	// 0x28c361
// declared property getter: - (BOOL)shouldQueue;	// 0x28c391
// declared property getter: - (id)string;	// 0x28c34d
@end

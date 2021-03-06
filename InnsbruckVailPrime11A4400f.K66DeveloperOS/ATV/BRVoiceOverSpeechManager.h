/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "VSSpeechSynthesizerDelegate.h"
#import "AppleTV-Structs.h"

@class NSThread, NSMutableArray, NSString, BRVOSpeechAction, NSDictionary, VSSpeechSynthesizer;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : XXUnknownSuperclass <VSSpeechSynthesizerDelegate> {
	NSMutableArray *_pendingSpeechQueue;	// 4 = 0x4
	BRVOSpeechAction *_currentSpeechAction;	// 8 = 0x8
	VSSpeechSynthesizer *_synthesizer;	// 12 = 0xc
	NSThread *_runThread;	// 16 = 0x10
	NSDictionary *_pronunciationGuide;	// 20 = 0x14
	NSString *_systemLanguage;	// 24 = 0x18
	BOOL _runLoopEnabled;	// 28 = 0x1c
	BOOL _didInitialize;	// 29 = 0x1d
	BOOL _isSpeaking;	// 30 = 0x1e
	BOOL _speechEnabled;	// 31 = 0x1f
	BOOL _isPitchChangeEnabled;	// 32 = 0x20
}
@property(assign, nonatomic) BOOL isPitchChangeEnabled;	// G=0x2d5e0d; S=0x2d5e1d; @synthesize=_isPitchChangeEnabled
@property(readonly, assign) BOOL isSpeaking;	// G=0x2d5b6d; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x2d5dd9; S=0x2d566d; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x2d5be9; S=0x2d5ca1; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x2d5de9; S=0x2d5dfd; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x2d4a5d
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x2d4ac5
- (id)init;	// 0x2d4691
- (void)_clearPendingSpeechQueue;	// 0x2d57f5
- (void)_continueSpeaking;	// 0x2d59c1
- (void)_dispatchSpeechAction:(id)action;	// 0x2d5695
- (void)_initialize;	// 0x2d4909
- (void)_isSpeaking:(id)speaking;	// 0x2d5b15
- (void)_pauseSpeaking;	// 0x2d5919
- (id)_preprocessString:(id)string language:(id)language;	// 0x2d5481
- (id)_processDurationStrings:(id)strings;	// 0x2d5091
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x2d5319
- (void)_setSpeechRate:(id)rate;	// 0x2d5c31
- (void)_speechJobFinished:(id)finished;	// 0x2d4be9
- (void)_startNextSpeechJob;	// 0x2d4dd5
- (void)_stopSpeaking;	// 0x2d5a69
- (void)clearPendingSpeechQueue;	// 0x2d5815
- (void)continueSpeaking;	// 0x2d5a25
- (void)dealloc;	// 0x2d4819
- (void)dispatchSpeechAction:(id)action;	// 0x2d5879
// declared property getter: - (BOOL)isPitchChangeEnabled;	// 0x2d5e0d
// converted property getter: - (BOOL)isSpeaking;	// 0x2d5b6d
- (void)pauseSpeaking;	// 0x2d597d
// declared property setter: - (void)setIsPitchChangeEnabled:(BOOL)enabled;	// 0x2d5e1d
- (void)setMaintainConnection:(BOOL)connection;	// 0x2d4bc9
- (void)setPitch:(id)pitch;	// 0x2d4cfd
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x2d566d
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x2d5ca1
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x2d5dfd
// declared property getter: - (BOOL)speechEnabled;	// 0x2d5dd9
// declared property getter: - (float)speechRate;	// 0x2d5be9
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x2d5d59
- (void)stopSpeaking;	// 0x2d5ad1
// declared property getter: - (id)systemLanguage;	// 0x2d5de9
- (void)terminate;	// 0x2d5859
@end


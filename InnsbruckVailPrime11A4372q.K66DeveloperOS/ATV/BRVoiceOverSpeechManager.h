/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "VSSpeechSynthesizerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, VSSpeechSynthesizer, NSThread, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : XXUnknownSuperclass <VSSpeechSynthesizerDelegate> {
	NSMutableArray *_speechQueue;	// 4 = 0x4
	VSSpeechSynthesizer *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	NSDictionary *_pronunciationGuide;	// 16 = 0x10
	NSString *_systemLanguage;	// 20 = 0x14
	BOOL _runLoopEnabled;	// 24 = 0x18
	BOOL _didInitialize;	// 25 = 0x19
	BOOL _isSpeaking;	// 26 = 0x1a
	BOOL _speechEnabled;	// 27 = 0x1b
	BOOL _isPitchChangeEnabled;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL isPitchChangeEnabled;	// G=0x2e7ab5; S=0x2e7ac5; @synthesize=_isPitchChangeEnabled
@property(readonly, assign) BOOL isSpeaking;	// G=0x2e7815; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x2e7a81; S=0x2e72bd; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x2e7891; S=0x2e7949; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x2e7a91; S=0x2e7aa5; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x2e66c5
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x2e672d
- (id)init;	// 0x2e6321
- (void)_clearSpeechQueue;	// 0x2e746d
- (void)_continueSpeaking;	// 0x2e766d
- (void)_dispatchSpeechAction:(id)action;	// 0x2e72e5
- (void)_initialize;	// 0x2e6571
- (void)_isSpeaking:(id)speaking;	// 0x2e77bd
- (void)_pauseSpeaking;	// 0x2e75c5
- (id)_preprocessString:(id)string language:(id)language;	// 0x2e70d1
- (id)_processDurationStrings:(id)strings;	// 0x2e6ce1
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x2e6f69
- (void)_setSpeechRate:(id)rate;	// 0x2e78d9
- (void)_speechJobFinished:(id)finished;	// 0x2e6851
- (void)_startNextSpeechJob;	// 0x2e6a89
- (void)_stopSpeaking;	// 0x2e7715
- (void)clearSpeechQueue;	// 0x2e748d
- (void)continueSpeaking;	// 0x2e76d1
- (void)dealloc;	// 0x2e6499
- (void)dispatchSpeechAction:(id)action;	// 0x2e7525
// declared property getter: - (BOOL)isPitchChangeEnabled;	// 0x2e7ab5
// converted property getter: - (BOOL)isSpeaking;	// 0x2e7815
- (void)pauseSpeaking;	// 0x2e7629
// declared property setter: - (void)setIsPitchChangeEnabled:(BOOL)enabled;	// 0x2e7ac5
- (void)setMaintainConnection:(BOOL)connection;	// 0x2e6831
- (void)setPitch:(id)pitch;	// 0x2e69b1
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x2e72bd
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x2e7949
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x2e7aa5
// declared property getter: - (BOOL)speechEnabled;	// 0x2e7a81
// declared property getter: - (float)speechRate;	// 0x2e7891
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x2e7a01
- (void)stopSpeaking;	// 0x2e7779
// declared property getter: - (id)systemLanguage;	// 0x2e7a91
- (void)terminate;	// 0x2e74d1
@end


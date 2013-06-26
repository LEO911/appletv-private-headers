/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSObject, NSThread, NSMutableArray, NSDictionary, NSString;
@protocol VSSpeechHiddenProtocol;

__attribute__((visibility("hidden")))
@interface BRVoiceOverSpeechManager : XXUnknownSuperclass {
	NSMutableArray *_speechQueue;	// 4 = 0x4
	NSObject<VSSpeechHiddenProtocol> *_synthesizer;	// 8 = 0x8
	NSThread *_runThread;	// 12 = 0xc
	NSDictionary *_pronunciationGuide;	// 16 = 0x10
	NSString *_systemLanguage;	// 20 = 0x14
	BOOL _runLoopEnabled;	// 24 = 0x18
	BOOL _didInitialize;	// 25 = 0x19
	BOOL _isSpeaking;	// 26 = 0x1a
	BOOL _speechEnabled;	// 27 = 0x1b
	BOOL _isPitchChangeEnabled;	// 28 = 0x1c
}
@property(assign, nonatomic) BOOL isPitchChangeEnabled;	// G=0x29209d; S=0x2920ad; @synthesize=_isPitchChangeEnabled
@property(readonly, assign) BOOL isSpeaking;	// G=0x291e5d; converted property
@property(assign, nonatomic) BOOL speechEnabled;	// G=0x292069; S=0x291a19; @synthesize=_speechEnabled
@property(assign, nonatomic) float speechRate;	// G=0x291ecd; S=0x291f81; @dynamic
@property(copy, nonatomic) NSString *systemLanguage;	// G=0x292079; S=0x29208d; @synthesize=_systemLanguage
+ (URegularExpression *)createRegularExpressionFromString:(id)string;	// 0x290f65
+ (id)matchedRangesForString:(id)string withRegularExpression:(URegularExpression *)regularExpression;	// 0x290fcd
- (id)init;	// 0x290bb5
- (void)_clearSpeechQueue;	// 0x291b95
- (void)_continueSpeaking;	// 0x291d45
- (void)_dispatchSpeechAction:(id)action;	// 0x291a41
- (void)_initialize;	// 0x290e05
- (void)_isSpeaking:(id)speaking;	// 0x291e05
- (void)_pauseSpeaking;	// 0x291ce5
- (id)_preprocessString:(id)string language:(id)language;	// 0x29182d
- (id)_processDurationStrings:(id)strings;	// 0x291441
- (id)_processPronunciationChanges:(id)changes language:(id)language;	// 0x2916c1
- (void)_setSpeechRate:(id)rate;	// 0x291f11
- (void)_speechJobFinished:(BOOL)finished;	// 0x2910f1
- (void)_startNextSpeechJob;	// 0x29128d
- (void)_stopSpeaking;	// 0x291da5
- (void)clearSpeechQueue;	// 0x291bb5
- (void)continueSpeaking;	// 0x291d65
- (void)dealloc;	// 0x290d2d
- (void)dispatchSpeechAction:(id)action;	// 0x291c49
// declared property getter: - (BOOL)isPitchChangeEnabled;	// 0x29209d
// converted property getter: - (BOOL)isSpeaking;	// 0x291e5d
- (void)pauseSpeaking;	// 0x291d05
// declared property setter: - (void)setIsPitchChangeEnabled:(BOOL)enabled;	// 0x2920ad
- (void)setMaintainConnection:(BOOL)connection;	// 0x2910d1
- (void)setPitch:(id)pitch;	// 0x2911b5
// declared property setter: - (void)setSpeechEnabled:(BOOL)enabled;	// 0x291a19
// declared property setter: - (void)setSpeechRate:(float)rate;	// 0x291f81
// declared property setter: - (void)setSystemLanguage:(id)language;	// 0x29208d
// declared property getter: - (BOOL)speechEnabled;	// 0x292069
// declared property getter: - (float)speechRate;	// 0x291ecd
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x292039
- (void)stopSpeaking;	// 0x291dc5
// declared property getter: - (id)systemLanguage;	// 0x292079
- (void)terminate;	// 0x291bf5
@end

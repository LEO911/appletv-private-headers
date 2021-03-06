/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library
#import "VoiceServices-Structs.h"

@class NSString, VSSpeechSynthesizer, NSArray, VSRecognitionAction;
@protocol VSRecognitionSessionDelegate;

@interface VSRecognitionSession : NSObject {
	NSString *_modelIdentifier;	// 4 = 0x4
	void *_keepAlive;	// 8 = 0x8
	id<VSRecognitionSessionDelegate> _delegate;	// 12 = 0xc
	VSRecognitionAction *_currentAction;	// 16 = 0x10
	NSArray *_topLevelKeywords;	// 20 = 0x14
	id _handlingThread;	// 24 = 0x18
	VSSpeechSynthesizer *_synthesizer;	// 28 = 0x1c
	NSString *_languageID;	// 32 = 0x20
	NSString *_debugDumpPath;	// 36 = 0x24
	NSString *_audioInputPath;	// 40 = 0x28
	double _levelInterval;	// 44 = 0x2c
	unsigned _keywordPhase;	// 52 = 0x34
	struct {
		unsigned delegateWillBegin : 1;
		unsigned delegateBegin : 1;
		unsigned delegateOpenURL : 1;
		unsigned delegateFinishedSpeaking : 1;
		unsigned delegateComplete : 1;
		unsigned debugDumpEnabled : 1;
		unsigned preferredEngine : 2;
		unsigned performHandlerActions : 1;
		unsigned allowSensitiveActions : 1;
		unsigned bluetoothAllowed : 1;
		unsigned resetNextAction : 1;
		unsigned isSpeaking : 1;
		unsigned actionBegan : 1;
		unsigned actionBeginning : 1;
		unsigned actionBeginDeferred : 1;
		unsigned invalid : 1;
		unsigned observeKeywordChange : 1;
	} _sessionFlags;	// 56 = 0x38
}
@property(readonly, retain) NSString *debugDumpPath;	// G=0x305d819d; converted property
@property(assign) BOOL sensitiveActionsEnabled;	// G=0x305d8185; S=0x305d8165; converted property
- (id)init;	// 0x305d9071
- (id)initWithModelIdentifier:(id)modelIdentifier;	// 0x305d9c41
- (void)_actionCompleted:(id)completed nextAction:(id)action error:(id)error;	// 0x305d8449
- (BOOL)_actionStarted:(id)started;	// 0x305d8675
- (id)_beginSpeakingAttributedString:(id)string;	// 0x305d8d29
- (id)_beginSpeakingString:(id)string attributedString:(id)string2;	// 0x305d90b9
- (CFDictionaryRef)_createKeywordIndex;	// 0x305d9601
- (id)_createPhaseSortedKeywordsFromArray:(id)array;	// 0x305d93b5
- (id)_currentRecognizeAction;	// 0x305d8995
- (void)_init;	// 0x305d901d
- (void)_keywordIndexChanged;	// 0x305d8c45
- (id)_keywordsForModelIdentifier:(id)modelIdentifier;	// 0x305d926d
- (void)_notifyDelegateActionStarted;	// 0x305d870d
- (void)_notifyDelegateFinishedSpeakingWithError:(id)error;	// 0x305d8d75
- (id)_notifyDelegateOpenURL:(id)url;	// 0x305d8749
- (id)_recognitionResultHandlingThread;	// 0x305d89f5
- (void)_setAction:(id)action;	// 0x305d878d
- (id)_topLevelKeywords;	// 0x305d92fd
- (id)beginNextAction;	// 0x305d98b5
- (id)beginSpeakingFeedbackString;	// 0x305d91a9
- (id)beginSpeakingString:(id)string;	// 0x305d8cdd
- (id)cancel;	// 0x305d8435
- (id)cancelMaintainingKeepAlive:(BOOL)alive;	// 0x305d96c5
- (void)dealloc;	// 0x305d9af5
// converted property getter: - (id)debugDumpPath;	// 0x305d819d
- (id)displayResultString;	// 0x305d8ac5
- (id)displayStatusString;	// 0x305d8ae5
- (BOOL)hasDeferredAction;	// 0x305d811d
- (float)inputLevel;	// 0x305d8b5d
- (BOOL)isActivelyRecognizing;	// 0x305d8329
- (BOOL)isBusy;	// 0x305d8131
- (BOOL)isFinished;	// 0x305d80e9
- (BOOL)isRecognizing;	// 0x305d82f1
- (BOOL)isValid;	// 0x305d8101
- (id)keywordAtIndex:(int)index;	// 0x305d8bdd
- (int)keywordCount;	// 0x305d8c09
- (BOOL)nextActionWillRecognize;	// 0x305d8391
- (BOOL)nextActionWillTerminateSession;	// 0x305d8361
- (void)recognitionResultHandlingThread:(id)thread didHandleResults:(id)results nextAction:(id)action;	// 0x305d8a55
- (id)reset;	// 0x305d97dd
// converted property getter: - (BOOL)sensitiveActionsEnabled;	// 0x305d8185
- (BOOL)setBluetoothInputAllowed:(BOOL)allowed;	// 0x305d83cd
- (BOOL)setDebugDumpEnabled:(BOOL)enabled;	// 0x305d8e05
- (void)setDelegate:(id)delegate;	// 0x305d81cd
- (void)setInputLevelUpdateInterval:(double)interval;	// 0x305d8b05
- (void)setKeywordPhase:(unsigned)phase;	// 0x305d8b99
- (BOOL)setNextRecognitionAudioInputPath:(id)path;	// 0x305d8ed9
- (BOOL)setNextRecognitionRequiresReset:(BOOL)reset;	// 0x305d8f4d
- (void)setPerformRecognitionHandlerActions:(BOOL)actions;	// 0x305d81ad
- (BOOL)setPreferredEngine:(int)engine;	// 0x305d8fb9
// converted property setter: - (void)setSensitiveActionsEnabled:(BOOL)enabled;	// 0x305d8165
- (void)speechSynthesizer:(id)synthesizer didFinishSpeaking:(BOOL)speaking withError:(id)error;	// 0x305d8db5
- (id)spokenFeedbackAttributedString;	// 0x305d8aa5
- (id)spokenFeedbackString;	// 0x305d8a85
@end


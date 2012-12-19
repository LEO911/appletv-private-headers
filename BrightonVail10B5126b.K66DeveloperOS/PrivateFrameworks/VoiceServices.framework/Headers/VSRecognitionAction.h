/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library

@class NSAttributedString, VSRecognitionSession, NSString;

@interface VSRecognitionAction : NSObject {
	NSString *_resultString;	// 4 = 0x4
	NSString *_statusString;	// 8 = 0x8
	union {
		NSString *stringValue;
		NSAttributedString *attributedStringValue;
	} _spokenString;	// 12 = 0xc
	VSRecognitionSession *_session;	// 16 = 0x10
	unsigned _spokenStringIsAttributed : 1;	// 20 = 0x14
}
@property(retain) id resultDisplayString;	// G=0x35c20849; S=0x35c20859; converted property
@property(retain) id spokenFeedbackAttributedString;	// G=0x35c209a9; S=0x35c209d1; converted property
@property(retain) id spokenFeedbackString;	// G=0x35c208f1; S=0x35c20929; converted property
@property(retain) id statusDisplayString;	// G=0x35c2089d; S=0x35c208ad; converted property
- (void)_continueAfterDeferredStart;	// 0x35c20afd
- (BOOL)_hasDeferredStartCallback;	// 0x35c20ad5
- (id)_session;	// 0x35c207a1
- (void)_setSession:(id)session;	// 0x35c207b1
- (id)cancel;	// 0x35c20aa1
- (void)completeWithNextAction:(id)nextAction error:(id)error;	// 0x35c20aa5
- (int)completionType;	// 0x35c20a51
- (void)dealloc;	// 0x35c207c1
- (id)perform;	// 0x35c20a55
// converted property getter: - (id)resultDisplayString;	// 0x35c20849
- (BOOL)sensitiveActionsEnabled;	// 0x35c20ad9
// converted property setter: - (void)setResultDisplayString:(id)string;	// 0x35c20859
// converted property setter: - (void)setSpokenFeedbackAttributedString:(id)string;	// 0x35c209d1
// converted property setter: - (void)setSpokenFeedbackString:(id)string;	// 0x35c20929
// converted property setter: - (void)setStatusDisplayString:(id)string;	// 0x35c208ad
// converted property getter: - (id)spokenFeedbackAttributedString;	// 0x35c209a9
// converted property getter: - (id)spokenFeedbackString;	// 0x35c208f1
// converted property getter: - (id)statusDisplayString;	// 0x35c2089d
@end

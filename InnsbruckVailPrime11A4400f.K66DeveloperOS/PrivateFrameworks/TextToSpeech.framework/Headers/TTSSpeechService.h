/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

#import "NSObject.h"


@protocol TTSSpeechService <NSObject>
- (oneway void)continueSpeechRequest;
- (oneway void)getFootprintsForVoiceName:(id)voiceName languageCode:(id)code reply:(id)reply;
- (oneway void)getSpeechIsActiveForConnectionReply:(id)connectionReply;
- (oneway void)getSpeechIsActiveReply:(id)reply;
- (oneway void)getVoiceNamesForLanguage:(id)language reply:(id)reply;
- (oneway void)pauseSpeechRequestAtMark:(int)mark reply:(id)reply;
- (oneway void)startSpeechRequest:(id)request;
- (oneway void)stopSpeechRequestAtMark:(int)mark reply:(id)reply;
@end

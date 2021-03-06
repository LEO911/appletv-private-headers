/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString;
@protocol DOMEventTarget;

@interface DOMEvent : DOMObject {
}
@property(readonly, assign) BOOL bubbles;	// G=0x31ad8db9; 
@property(assign) BOOL cancelBubble;	// G=0x31ad900d; S=0x31ad903d; 
@property(readonly, assign) BOOL cancelable;	// G=0x31ad8de9; 
@property(readonly, assign) id<DOMEventTarget> currentTarget;	// G=0x31ad8c89; 
@property(readonly, assign) unsigned short eventPhase;	// G=0x31ad8d8d; 
@property(assign) BOOL returnValue;	// G=0x31ad8f7d; S=0x31ad8fb1; 
@property(readonly, assign) id<DOMEventTarget> srcElement;	// G=0x31ad8e79; 
@property(readonly, assign) id<DOMEventTarget> target;	// G=0x319dbd11; 
@property(readonly, assign) unsigned long long timeStamp;	// G=0x31ad8e19; 
@property(readonly, assign) NSString *type;	// G=0x31ad8b79; 
- (void)initEvent:(id)event :(BOOL)arg2 :(BOOL)arg3;	// 0x31ad92d1
- (void)initEvent:(id)event canBubbleArg:(BOOL)arg cancelableArg:(BOOL)arg3;	// 0x31ad9115
// declared property getter: - (BOOL)bubbles;	// 0x31ad8db9
// declared property getter: - (BOOL)cancelBubble;	// 0x31ad900d
// declared property getter: - (BOOL)cancelable;	// 0x31ad8de9
// declared property getter: - (id)currentTarget;	// 0x31ad8c89
- (void)dealloc;	// 0x319dbff9
- (BOOL)defaultPrevented;	// 0x31ad8e49
// declared property getter: - (unsigned short)eventPhase;	// 0x31ad8d8d
- (void)finalize;	// 0x31ad8b25
- (void)preventDefault;	// 0x31ad90cd
// declared property getter: - (BOOL)returnValue;	// 0x31ad8f7d
// declared property setter: - (void)setCancelBubble:(BOOL)bubble;	// 0x31ad903d
// declared property setter: - (void)setReturnValue:(BOOL)value;	// 0x31ad8fb1
// declared property getter: - (id)srcElement;	// 0x31ad8e79
- (void)stopImmediatePropagation;	// 0x31ad948d
- (void)stopPropagation;	// 0x31ad908d
// declared property getter: - (id)target;	// 0x319dbd11
// declared property getter: - (unsigned long long)timeStamp;	// 0x31ad8e19
// declared property getter: - (id)type;	// 0x31ad8b79
@end


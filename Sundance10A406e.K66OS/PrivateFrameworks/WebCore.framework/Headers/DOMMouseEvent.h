/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class DOMNode;
@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x31e5ece1; 
@property(readonly, assign) unsigned short button;	// G=0x31e5ed49; 
@property(readonly, assign) int clientX;	// G=0x31e5ec21; 
@property(readonly, assign) int clientY;	// G=0x31e5ec4d; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x31e5ec79; 
@property(readonly, assign) DOMNode *fromElement;	// G=0x31e5f27d; 
@property(readonly, assign) BOOL metaKey;	// G=0x31e5ed15; 
@property(readonly, assign) int offsetX;	// G=0x31e5ee7d; 
@property(readonly, assign) int offsetY;	// G=0x31e5ef7d; 
@property(readonly, assign) id<DOMEventTarget> relatedTarget;	// G=0x31e5ed79; 
@property(readonly, assign) int screenX;	// G=0x31e5ebc9; 
@property(readonly, assign) int screenY;	// G=0x31e5ebf5; 
@property(readonly, assign) BOOL shiftKey;	// G=0x31e5ecad; 
@property(readonly, assign) DOMNode *toElement;	// G=0x31e5f389; 
@property(readonly, assign) int x;	// G=0x31e5f07d; 
@property(readonly, assign) int y;	// G=0x31e5f17d; 
- (void)initMouseEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(BOOL)arg10 :(BOOL)arg11 :(BOOL)arg12 :(BOOL)arg13 :(unsigned short)arg14 :(id)arg15;	// 0x31e5f779
- (void)initMouseEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 button:(unsigned short)button relatedTarget:(id)target;	// 0x31e5f495
// declared property getter: - (BOOL)altKey;	// 0x31e5ece1
// declared property getter: - (unsigned short)button;	// 0x31e5ed49
// declared property getter: - (int)clientX;	// 0x31e5ec21
// declared property getter: - (int)clientY;	// 0x31e5ec4d
// declared property getter: - (BOOL)ctrlKey;	// 0x31e5ec79
// declared property getter: - (id)fromElement;	// 0x31e5f27d
// declared property getter: - (BOOL)metaKey;	// 0x31e5ed15
// declared property getter: - (int)offsetX;	// 0x31e5ee7d
// declared property getter: - (int)offsetY;	// 0x31e5ef7d
// declared property getter: - (id)relatedTarget;	// 0x31e5ed79
// declared property getter: - (int)screenX;	// 0x31e5ebc9
// declared property getter: - (int)screenY;	// 0x31e5ebf5
// declared property getter: - (BOOL)shiftKey;	// 0x31e5ecad
// declared property getter: - (id)toElement;	// 0x31e5f389
// declared property getter: - (int)x;	// 0x31e5f07d
// declared property getter: - (int)y;	// 0x31e5f17d
@end

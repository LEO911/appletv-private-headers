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
@property(readonly, assign) BOOL altKey;	// G=0x36011729; 
@property(readonly, assign) unsigned short button;	// G=0x36011791; 
@property(readonly, assign) int clientX;	// G=0x36011669; 
@property(readonly, assign) int clientY;	// G=0x36011695; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x360116c1; 
@property(readonly, assign) DOMNode *fromElement;	// G=0x36011cc5; 
@property(readonly, assign) BOOL metaKey;	// G=0x3601175d; 
@property(readonly, assign) int offsetX;	// G=0x360118c5; 
@property(readonly, assign) int offsetY;	// G=0x360119c5; 
@property(readonly, assign) id<DOMEventTarget> relatedTarget;	// G=0x360117c1; 
@property(readonly, assign) int screenX;	// G=0x36011611; 
@property(readonly, assign) int screenY;	// G=0x3601163d; 
@property(readonly, assign) BOOL shiftKey;	// G=0x360116f5; 
@property(readonly, assign) DOMNode *toElement;	// G=0x36011dd1; 
@property(readonly, assign) int x;	// G=0x36011ac5; 
@property(readonly, assign) int y;	// G=0x36011bc5; 
- (void)initMouseEvent:(id)event :(BOOL)arg2 :(BOOL)arg3 :(id)arg4 :(int)arg5 :(int)arg6 :(int)arg7 :(int)arg8 :(int)arg9 :(BOOL)arg10 :(BOOL)arg11 :(BOOL)arg12 :(BOOL)arg13 :(unsigned short)arg14 :(id)arg15;	// 0x360121c1
- (void)initMouseEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view detail:(int)detail screenX:(int)x screenY:(int)y clientX:(int)x8 clientY:(int)y9 ctrlKey:(BOOL)key altKey:(BOOL)key11 shiftKey:(BOOL)key12 metaKey:(BOOL)key13 button:(unsigned short)button relatedTarget:(id)target;	// 0x36011edd
// declared property getter: - (BOOL)altKey;	// 0x36011729
// declared property getter: - (unsigned short)button;	// 0x36011791
// declared property getter: - (int)clientX;	// 0x36011669
// declared property getter: - (int)clientY;	// 0x36011695
// declared property getter: - (BOOL)ctrlKey;	// 0x360116c1
// declared property getter: - (id)fromElement;	// 0x36011cc5
// declared property getter: - (BOOL)metaKey;	// 0x3601175d
// declared property getter: - (int)offsetX;	// 0x360118c5
// declared property getter: - (int)offsetY;	// 0x360119c5
// declared property getter: - (id)relatedTarget;	// 0x360117c1
// declared property getter: - (int)screenX;	// 0x36011611
// declared property getter: - (int)screenY;	// 0x3601163d
// declared property getter: - (BOOL)shiftKey;	// 0x360116f5
// declared property getter: - (id)toElement;	// 0x36011dd1
// declared property getter: - (int)x;	// 0x36011ac5
// declared property getter: - (int)y;	// 0x36011bc5
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"


@interface DOMWheelEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altKey;	// G=0x35868135; 
@property(readonly, assign) int clientX;	// G=0x35868075; 
@property(readonly, assign) int clientY;	// G=0x358680a1; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x358680cd; 
@property(readonly, assign) BOOL isHorizontal;	// G=0x3586865d; 
@property(readonly, assign) BOOL metaKey;	// G=0x35868169; 
@property(readonly, assign) int offsetX;	// G=0x35868229; 
@property(readonly, assign) int offsetY;	// G=0x35868329; 
@property(readonly, assign) int screenX;	// G=0x3586801d; 
@property(readonly, assign) int screenY;	// G=0x35868049; 
@property(readonly, assign) BOOL shiftKey;	// G=0x35868101; 
@property(readonly, assign) int wheelDelta;	// G=0x3586819d; 
@property(readonly, assign) int wheelDeltaX;	// G=0x358681d1; 
@property(readonly, assign) int wheelDeltaY;	// G=0x358681fd; 
@property(readonly, assign) int x;	// G=0x35868429; 
@property(readonly, assign) int y;	// G=0x35868529; 
- (void)initWheelEvent:(int)event wheelDeltaY:(int)y view:(id)view screenX:(int)x screenY:(int)y5 clientX:(int)x6 clientY:(int)y7 ctrlKey:(BOOL)key altKey:(BOOL)key9 shiftKey:(BOOL)key10 metaKey:(BOOL)key11;	// 0x35868691
// declared property getter: - (BOOL)altKey;	// 0x35868135
// declared property getter: - (int)clientX;	// 0x35868075
// declared property getter: - (int)clientY;	// 0x358680a1
// declared property getter: - (BOOL)ctrlKey;	// 0x358680cd
// declared property getter: - (BOOL)isHorizontal;	// 0x3586865d
// declared property getter: - (BOOL)metaKey;	// 0x35868169
// declared property getter: - (int)offsetX;	// 0x35868229
// declared property getter: - (int)offsetY;	// 0x35868329
// declared property getter: - (int)screenX;	// 0x3586801d
// declared property getter: - (int)screenY;	// 0x35868049
// declared property getter: - (BOOL)shiftKey;	// 0x35868101
- (BOOL)webkitDirectionInvertedFromDevice;	// 0x35868629
// declared property getter: - (int)wheelDelta;	// 0x3586819d
// declared property getter: - (int)wheelDeltaX;	// 0x358681d1
// declared property getter: - (int)wheelDeltaY;	// 0x358681fd
// declared property getter: - (int)x;	// 0x35868429
// declared property getter: - (int)y;	// 0x35868529
@end


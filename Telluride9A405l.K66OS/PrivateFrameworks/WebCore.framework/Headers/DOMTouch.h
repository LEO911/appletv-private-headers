/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@protocol DOMEventTarget;

__attribute__((visibility("hidden")))
@interface DOMTouch : DOMObject {
}
@property(readonly, assign) int clientX;	// G=0x30738509; 
@property(readonly, assign) int clientY;	// G=0x30738535; 
@property(readonly, assign) unsigned identifier;	// G=0x307384dd; 
@property(readonly, assign) int pageX;	// G=0x30738561; 
@property(readonly, assign) int pageY;	// G=0x3073858d; 
@property(readonly, assign) int screenX;	// G=0x307385b9; 
@property(readonly, assign) int screenY;	// G=0x307385e5; 
@property(readonly, retain) id<DOMEventTarget> target;	// G=0x3073868d; 
// declared property getter: - (int)clientX;	// 0x30738509
// declared property getter: - (int)clientY;	// 0x30738535
- (void)dealloc;	// 0x30738611
- (void)finalize;	// 0x30738749
// declared property getter: - (unsigned)identifier;	// 0x307384dd
// declared property getter: - (int)pageX;	// 0x30738561
// declared property getter: - (int)pageY;	// 0x3073858d
// declared property getter: - (int)screenX;	// 0x307385b9
// declared property getter: - (int)screenY;	// 0x307385e5
// declared property getter: - (id)target;	// 0x3073868d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMUIEvent.h"

@class NSString;

@interface DOMKeyboardEvent : DOMUIEvent {
}
@property(readonly, assign) BOOL altGraphKey;	// G=0x3686925d; 
@property(readonly, assign) BOOL altKey;	// G=0x368691f5; 
@property(readonly, assign) int charCode;	// G=0x3686934d; 
@property(readonly, assign) BOOL ctrlKey;	// G=0x3686918d; 
@property(readonly, assign) int keyCode;	// G=0x3686928d; 
@property(readonly, copy) NSString *keyIdentifier;	// G=0x3686940d; 
@property(readonly, assign) unsigned keyLocation;	// G=0x36869161; 
@property(readonly, assign) BOOL metaKey;	// G=0x36869229; 
@property(readonly, assign) BOOL shiftKey;	// G=0x368691c1; 
- (void)initKeyboardEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view keyIdentifier:(id)identifier keyLocation:(unsigned)location ctrlKey:(BOOL)key altKey:(BOOL)key8 shiftKey:(BOOL)key9 metaKey:(BOOL)key10;	// 0x3686986d
- (void)initKeyboardEvent:(id)event canBubble:(BOOL)bubble cancelable:(BOOL)cancelable view:(id)view keyIdentifier:(id)identifier keyLocation:(unsigned)location ctrlKey:(BOOL)key altKey:(BOOL)key8 shiftKey:(BOOL)key9 metaKey:(BOOL)key10 altGraphKey:(BOOL)key11;	// 0x36869611
// declared property getter: - (BOOL)altGraphKey;	// 0x3686925d
// declared property getter: - (BOOL)altKey;	// 0x368691f5
// declared property getter: - (int)charCode;	// 0x3686934d
// declared property getter: - (BOOL)ctrlKey;	// 0x3686918d
- (BOOL)getModifierState:(id)state;	// 0x368694d5
// declared property getter: - (int)keyCode;	// 0x3686928d
// declared property getter: - (id)keyIdentifier;	// 0x3686940d
// declared property getter: - (unsigned)keyLocation;	// 0x36869161
// declared property getter: - (BOOL)metaKey;	// 0x36869229
// declared property getter: - (BOOL)shiftKey;	// 0x368691c1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSMutableArray;

@interface AXSettingsObjectDestructionHelper : NSObject {
	void *_listenerAddress;	// 4 = 0x4
	NSMutableArray *_selectorKeys;	// 8 = 0x8
}
- (id)initWithListenerAddress:(void *)listenerAddress;	// 0x2fe5b819
- (void)addSelectorKey:(SEL)key;	// 0x2fe5b85d
- (void)dealloc;	// 0x2fe5b8d1
@end


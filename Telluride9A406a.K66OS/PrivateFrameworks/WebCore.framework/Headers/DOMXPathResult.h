/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode, NSString;

__attribute__((visibility("hidden")))
@interface DOMXPathResult : DOMObject {
}
@property(readonly, assign) BOOL booleanValue;	// G=0x36a85269; 
@property(readonly, assign) BOOL invalidIteratorState;	// G=0x36a850d9; 
@property(readonly, assign) double numberValue;	// G=0x36a85491; 
@property(readonly, assign) unsigned short resultType;	// G=0x36a85565; 
@property(readonly, retain) DOMNode *singleNodeValue;	// G=0x36a85195; 
@property(readonly, assign) unsigned snapshotLength;	// G=0x36a8500d; 
@property(readonly, copy) NSString *stringValue;	// G=0x36a85335; 
// declared property getter: - (BOOL)booleanValue;	// 0x36a85269
- (void)dealloc;	// 0x36a84de5
- (void)finalize;	// 0x36a85621
// declared property getter: - (BOOL)invalidIteratorState;	// 0x36a850d9
- (id)iterateNext;	// 0x36a84f39
// declared property getter: - (double)numberValue;	// 0x36a85491
// declared property getter: - (unsigned short)resultType;	// 0x36a85565
// declared property getter: - (id)singleNodeValue;	// 0x36a85195
- (id)snapshotItem:(unsigned)item;	// 0x36a84e61
// declared property getter: - (unsigned)snapshotLength;	// 0x36a8500d
// declared property getter: - (id)stringValue;	// 0x36a85335
@end


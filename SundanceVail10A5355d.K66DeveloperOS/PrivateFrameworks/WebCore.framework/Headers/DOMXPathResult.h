/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject {
}
@property(readonly, assign) BOOL booleanValue;	// G=0x30d8c869; 
@property(readonly, assign) BOOL invalidIteratorState;	// G=0x30d8ca99; 
@property(readonly, assign) double numberValue;	// G=0x30d8c57d; 
@property(readonly, assign) unsigned short resultType;	// G=0x30d8c47d; 
@property(readonly, assign) DOMNode *singleNodeValue;	// G=0x30d8c97d; 
@property(readonly, assign) unsigned snapshotLength;	// G=0x30d8cb99; 
@property(readonly, assign) NSString *stringValue;	// G=0x30d8c69d; 
// declared property getter: - (BOOL)booleanValue;	// 0x30d8c869
- (void)dealloc;	// 0x30d8c24d
- (void)finalize;	// 0x30d8c379
// declared property getter: - (BOOL)invalidIteratorState;	// 0x30d8ca99
- (id)iterateNext;	// 0x30d8ccad
// declared property getter: - (double)numberValue;	// 0x30d8c57d
// declared property getter: - (unsigned short)resultType;	// 0x30d8c47d
// declared property getter: - (id)singleNodeValue;	// 0x30d8c97d
- (id)snapshotItem:(unsigned)item;	// 0x30d8cdc9
// declared property getter: - (unsigned)snapshotLength;	// 0x30d8cb99
// declared property getter: - (id)stringValue;	// 0x30d8c69d
@end

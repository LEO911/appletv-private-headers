/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"


@interface DOMNamedNodeMap : DOMObject {
}
@property(readonly, assign) unsigned length;	// G=0x354cd919; 
- (void)dealloc;	// 0x354cd865
- (void)finalize;	// 0x354cd8d1
- (id)getNamedItem:(id)item;	// 0x354cda19
- (id)getNamedItemNS:(id)ns :(id)arg2;	// 0x354ce3c5
- (id)getNamedItemNS:(id)ns localName:(id)name;	// 0x354ce125
- (id)item:(unsigned)item;	// 0x354cdfbd
// declared property getter: - (unsigned)length;	// 0x354cd919
- (id)removeNamedItem:(id)item;	// 0x354cdda5
- (id)removeNamedItemNS:(id)ns :(id)arg2;	// 0x354cea9d
- (id)removeNamedItemNS:(id)ns localName:(id)name;	// 0x354ce7e9
- (id)setNamedItem:(id)item;	// 0x354cdc21
- (id)setNamedItemNS:(id)ns;	// 0x354ce665
@end


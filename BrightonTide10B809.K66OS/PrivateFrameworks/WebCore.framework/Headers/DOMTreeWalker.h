/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMObject.h"

@class DOMNode;
@protocol DOMNodeFilter;

@interface DOMTreeWalker : DOMObject {
}
@property(retain) DOMNode *currentNode;	// G=0x360281f5; S=0x360282f9; 
@property(readonly, assign) BOOL expandEntityReferences;	// G=0x360281c5; 
@property(readonly, assign) id<DOMNodeFilter> filter;	// G=0x360280c1; 
@property(readonly, assign) DOMNode *root;	// G=0x36027f91; 
@property(readonly, assign) unsigned whatToShow;	// G=0x36028095; 
// declared property getter: - (id)currentNode;	// 0x360281f5
- (void)dealloc;	// 0x36027edd
// declared property getter: - (BOOL)expandEntityReferences;	// 0x360281c5
// declared property getter: - (id)filter;	// 0x360280c1
- (void)finalize;	// 0x36027f49
- (id)firstChild;	// 0x3602859d
- (id)lastChild;	// 0x360286c1
- (id)nextNode;	// 0x36028b51
- (id)nextSibling;	// 0x36028909
- (id)parentNode;	// 0x36028479
- (id)previousNode;	// 0x36028a2d
- (id)previousSibling;	// 0x360287e5
// declared property getter: - (id)root;	// 0x36027f91
// declared property setter: - (void)setCurrentNode:(id)node;	// 0x360282f9
// declared property getter: - (unsigned)whatToShow;	// 0x36028095
@end


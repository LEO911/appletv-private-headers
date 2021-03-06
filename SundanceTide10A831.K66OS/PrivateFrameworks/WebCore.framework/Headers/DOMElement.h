/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "WebCore-Structs.h"
#import "DOMNode.h"

@class NSString, DOMCSSStyleDeclaration;

@interface DOMElement : DOMNode {
}
@property(readonly, assign) unsigned childElementCount;	// G=0x3547af05; 
@property(readonly, assign) int clientHeight;	// G=0x3547a7d5; 
@property(readonly, assign) int clientLeft;	// G=0x3547a4d5; 
@property(readonly, assign) int clientTop;	// G=0x3547a5d5; 
@property(readonly, assign) int clientWidth;	// G=0x3547a6d5; 
@property(readonly, assign) DOMElement *firstElementChild;	// G=0x353be7b1; 
@property(readonly, assign) NSString *innerText;	// G=0x3547b005; 
@property(readonly, assign) DOMElement *lastElementChild;	// G=0x3547ace5; 
@property(readonly, assign) DOMElement *nextElementSibling;	// G=0x353be8bd; 
@property(readonly, assign) int offsetHeight;	// G=0x353b48d9; 
@property(readonly, assign) int offsetLeft;	// G=0x3547a1c9; 
@property(readonly, assign) DOMElement *offsetParent;	// G=0x3547a3c9; 
@property(readonly, assign) int offsetTop;	// G=0x3547a2c9; 
@property(readonly, assign) int offsetWidth;	// G=0x353b47d9; 
@property(readonly, assign) DOMElement *previousElementSibling;	// G=0x3547adf1; 
@property(readonly, assign) int scrollHeight;	// G=0x353beb69; 
@property(assign) int scrollLeft;	// G=0x3547a8d5; S=0x3547a9d9; 
@property(assign) int scrollTop;	// G=0x3547aadd; S=0x3547abe1; 
@property(readonly, assign) int scrollWidth;	// G=0x353bea2d; 
@property(readonly, assign) DOMCSSStyleDeclaration *style;	// G=0x3537a775; 
@property(readonly, assign) NSString *tagName;	// G=0x352ada69; 
- (GSFontRef)_font;	// 0x35461429
- (id)_getURLAttribute:(id)attribute;	// 0x353a2359
- (void)blur;	// 0x353ba811
// declared property getter: - (unsigned)childElementCount;	// 0x3547af05
// declared property getter: - (int)clientHeight;	// 0x3547a7d5
// declared property getter: - (int)clientLeft;	// 0x3547a4d5
// declared property getter: - (int)clientTop;	// 0x3547a5d5
// declared property getter: - (int)clientWidth;	// 0x3547a6d5
// declared property getter: - (id)firstElementChild;	// 0x353be7b1
- (void)focus;	// 0x3547dd9d
- (id)getAttribute:(id)attribute;	// 0x35265c85
- (id)getAttributeNS:(id)ns :(id)arg2;	// 0x3547bea1
- (id)getAttributeNS:(id)ns localName:(id)name;	// 0x3547bc45
- (id)getAttributeNode:(id)node;	// 0x3547b529
- (id)getAttributeNodeNS:(id)ns :(id)arg2;	// 0x3547d345
- (id)getAttributeNodeNS:(id)ns localName:(id)name;	// 0x3547d0a5
- (id)getElementsByClassName:(id)name;	// 0x3547e2b1
- (id)getElementsByTagName:(id)name;	// 0x3547ba39
- (id)getElementsByTagNameNS:(id)ns :(id)arg2;	// 0x3547ce01
- (id)getElementsByTagNameNS:(id)ns localName:(id)name;	// 0x3547cb5d
- (BOOL)hasAttribute:(id)attribute;	// 0x3547d769
- (BOOL)hasAttributeNS:(id)ns :(id)arg2;	// 0x3547db59
- (BOOL)hasAttributeNS:(id)ns localName:(id)name;	// 0x3547d915
// declared property getter: - (id)innerText;	// 0x3547b005
- (BOOL)isFocused;	// 0x353baba9
// declared property getter: - (id)lastElementChild;	// 0x3547ace5
// declared property getter: - (id)nextElementSibling;	// 0x353be8bd
// declared property getter: - (int)offsetHeight;	// 0x353b48d9
// declared property getter: - (int)offsetLeft;	// 0x3547a1c9
// declared property getter: - (id)offsetParent;	// 0x3547a3c9
// declared property getter: - (int)offsetTop;	// 0x3547a2c9
// declared property getter: - (int)offsetWidth;	// 0x353b47d9
// declared property getter: - (id)previousElementSibling;	// 0x3547adf1
- (id)querySelector:(id)selector;	// 0x3547e4bd
- (id)querySelectorAll:(id)all;	// 0x3547e6d5
- (void)removeAttribute:(id)attribute;	// 0x353411a9
- (void)removeAttributeNS:(id)ns :(id)arg2;	// 0x3547c91d
- (void)removeAttributeNS:(id)ns localName:(id)name;	// 0x3547c6dd
- (id)removeAttributeNode:(id)node;	// 0x3547b8b5
- (void)scrollByLines:(int)lines;	// 0x3547e0b1
- (void)scrollByPages:(int)pages;	// 0x3547e1b1
// declared property getter: - (int)scrollHeight;	// 0x353beb69
- (void)scrollIntoView:(BOOL)view;	// 0x3547dea1
- (void)scrollIntoViewIfNeeded:(BOOL)needed;	// 0x3547dfa9
// declared property getter: - (int)scrollLeft;	// 0x3547a8d5
// declared property getter: - (int)scrollTop;	// 0x3547aadd
// declared property getter: - (int)scrollWidth;	// 0x353bea2d
- (void)setAttribute:(id)attribute :(id)arg2;	// 0x3547b2d9
- (void)setAttribute:(id)attribute value:(id)value;	// 0x35344305
- (void)setAttributeNS:(id)ns :(id)arg2 :(id)arg3;	// 0x3547c3ed
- (void)setAttributeNS:(id)ns qualifiedName:(id)name value:(id)value;	// 0x3547c0fd
- (id)setAttributeNode:(id)node;	// 0x3547b731
- (id)setAttributeNodeNS:(id)ns;	// 0x3547d5e5
// declared property setter: - (void)setScrollLeft:(int)left;	// 0x3547a9d9
// declared property setter: - (void)setScrollTop:(int)top;	// 0x3547abe1
- (int)structuralComplexityContribution;	// 0x354e310d
// declared property getter: - (id)style;	// 0x3537a775
// declared property getter: - (id)tagName;	// 0x352ada69
- (BOOL)webkitMatchesSelector:(id)selector;	// 0x3547e8f1
- (id)webkitRegionOverflow;	// 0x3547b1c1
@end


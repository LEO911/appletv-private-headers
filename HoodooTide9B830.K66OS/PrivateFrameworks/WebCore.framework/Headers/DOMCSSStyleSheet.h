/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMStyleSheet.h"

@class DOMCSSRule, DOMCSSRuleList;

__attribute__((visibility("hidden")))
@interface DOMCSSStyleSheet : DOMStyleSheet {
}
@property(readonly, retain) DOMCSSRuleList *cssRules;	// G=0x358e4c8d; 
@property(readonly, retain) DOMCSSRule *ownerRule;	// G=0x358e4bc9; 
@property(readonly, retain) DOMCSSRuleList *rules;	// G=0x358e4dd1; 
- (int)addRule:(id)rule style:(id)style index:(unsigned)index;	// 0x358e5349
// declared property getter: - (id)cssRules;	// 0x358e4c8d
- (void)deleteRule:(unsigned)rule;	// 0x358e51b1
- (unsigned)insertRule:(id)rule :(unsigned)arg2;	// 0x358e5061
- (unsigned)insertRule:(id)rule index:(unsigned)index;	// 0x358e4f11
// declared property getter: - (id)ownerRule;	// 0x358e4bc9
- (void)removeRule:(unsigned)rule;	// 0x358e527d
// declared property getter: - (id)rules;	// 0x358e4dd1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMElement.h"

@class DOMHTMLCollection, NSString;

@interface DOMHTMLElement : DOMElement {
}
@property(readonly, retain) DOMHTMLCollection *children;	// G=0x36840d75; 
@property(copy) NSString *className;	// G=0x3683fbe5; S=0x368401d5; 
@property(copy) NSString *contentEditable;	// G=0x36840ebd; S=0x36780c15; 
@property(copy) NSString *dir;	// G=0x3683fb05; S=0x36840091; 
@property(assign) BOOL draggable;	// G=0x3683f7a5; S=0x36840499; converted property
@property(assign) BOOL hidden;	// G=0x36840565; S=0x3684062d; converted property
@property(copy) NSString *idName;	// G=0x3683f865; S=0x3683fcc5; 
@property(copy) NSString *innerHTML;	// G=0x36789f69; S=0x3678f8e1; 
@property(copy) NSString *innerText;	// G=0x3676a009; S=0x36840705; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x36841009; 
@property(copy) NSString *lang;	// G=0x3683fa25; S=0x3683ff4d; 
@property(copy) NSString *outerHTML;	// G=0x3684084d; S=0x36840999; 
@property(copy) NSString *outerText;	// G=0x36840ae1; S=0x36840c2d; 
@property(assign) BOOL spellcheck;	// G=0x368410c5; S=0x36841181; converted property
@property(assign) int tabIndex;	// G=0x3683f6e5; S=0x368403dd; 
@property(copy) NSString *title;	// G=0x3683f945; S=0x3683fe09; 
@property(readonly, copy) NSString *titleDisplayString;	// G=0x3684124d; 
- (void)absolutePosition:(int *)position :(int *)arg2 :(int *)arg3 :(int *)arg4;	// 0x36832e65
// declared property getter: - (id)children;	// 0x36840d75
- (id)classList;	// 0x36840319
// declared property getter: - (id)className;	// 0x3683fbe5
// declared property getter: - (id)contentEditable;	// 0x36840ebd
// declared property getter: - (id)dir;	// 0x3683fb05
// converted property getter: - (BOOL)draggable;	// 0x3683f7a5
// converted property getter: - (BOOL)hidden;	// 0x36840565
// declared property getter: - (id)idName;	// 0x3683f865
// declared property getter: - (id)innerHTML;	// 0x36789f69
// declared property getter: - (id)innerText;	// 0x3676a009
- (id)insertAdjacentElement:(id)element element:(id)element2;	// 0x36841441
- (void)insertAdjacentHTML:(id)html html:(id)html2;	// 0x368415a9
- (void)insertAdjacentText:(id)text text:(id)text2;	// 0x36841789
// declared property getter: - (BOOL)isContentEditable;	// 0x36841009
// declared property getter: - (id)lang;	// 0x3683fa25
// declared property getter: - (id)outerHTML;	// 0x3684084d
// declared property getter: - (id)outerText;	// 0x36840ae1
- (int)scrollXOffset;	// 0x36760d29
- (int)scrollYOffset;	// 0x36760d7d
// declared property setter: - (void)setClassName:(id)name;	// 0x368401d5
// declared property setter: - (void)setContentEditable:(id)editable;	// 0x36780c15
// declared property setter: - (void)setDir:(id)dir;	// 0x36840091
// converted property setter: - (void)setDraggable:(BOOL)draggable;	// 0x36840499
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3684062d
// declared property setter: - (void)setIdName:(id)name;	// 0x3683fcc5
// declared property setter: - (void)setInnerHTML:(id)html;	// 0x3678f8e1
// declared property setter: - (void)setInnerText:(id)text;	// 0x36840705
// declared property setter: - (void)setLang:(id)lang;	// 0x3683ff4d
// declared property setter: - (void)setOuterHTML:(id)html;	// 0x36840999
// declared property setter: - (void)setOuterText:(id)text;	// 0x36840c2d
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x36832e31
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x36779f81
// converted property setter: - (void)setSpellcheck:(BOOL)spellcheck;	// 0x36841181
// declared property setter: - (void)setTabIndex:(int)index;	// 0x368403dd
// declared property setter: - (void)setTitle:(id)title;	// 0x3683fe09
// converted property getter: - (BOOL)spellcheck;	// 0x368410c5
- (int)structuralComplexityContribution;	// 0x3687be01
// declared property getter: - (int)tabIndex;	// 0x3683f6e5
// declared property getter: - (id)title;	// 0x3683f945
// declared property getter: - (id)titleDisplayString;	// 0x3684124d
@end


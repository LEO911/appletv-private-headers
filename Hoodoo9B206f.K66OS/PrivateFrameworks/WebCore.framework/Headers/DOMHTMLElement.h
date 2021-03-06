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
@property(readonly, retain) DOMHTMLCollection *children;	// G=0x3348c37d; 
@property(copy) NSString *className;	// G=0x3348b1ed; S=0x3348b7dd; 
@property(copy) NSString *contentEditable;	// G=0x3348c4c5; S=0x333c8ef5; 
@property(copy) NSString *dir;	// G=0x3348b10d; S=0x3348b699; 
@property(assign) BOOL draggable;	// G=0x3348adad; S=0x3348baa1; converted property
@property(assign) BOOL hidden;	// G=0x3348bb6d; S=0x3348bc35; converted property
@property(copy) NSString *idName;	// G=0x3348ae6d; S=0x3348b2cd; 
@property(copy) NSString *innerHTML;	// G=0x333d2249; S=0x333d7bc1; 
@property(copy) NSString *innerText;	// G=0x333b20a5; S=0x3348bd0d; 
@property(readonly, assign) BOOL isContentEditable;	// G=0x3348c611; 
@property(copy) NSString *lang;	// G=0x3348b02d; S=0x3348b555; 
@property(copy) NSString *outerHTML;	// G=0x3348be55; S=0x3348bfa1; 
@property(copy) NSString *outerText;	// G=0x3348c0e9; S=0x3348c235; 
@property(assign) BOOL spellcheck;	// G=0x3348c6cd; S=0x3348c789; converted property
@property(assign) int tabIndex;	// G=0x3348aced; S=0x3348b9e5; 
@property(copy) NSString *title;	// G=0x3348af4d; S=0x3348b411; 
@property(readonly, copy) NSString *titleDisplayString;	// G=0x3348c855; 
- (void)absolutePosition:(int *)position :(int *)arg2 :(int *)arg3 :(int *)arg4;	// 0x3347e46d
// declared property getter: - (id)children;	// 0x3348c37d
- (id)classList;	// 0x3348b921
// declared property getter: - (id)className;	// 0x3348b1ed
// declared property getter: - (id)contentEditable;	// 0x3348c4c5
// declared property getter: - (id)dir;	// 0x3348b10d
// converted property getter: - (BOOL)draggable;	// 0x3348adad
// converted property getter: - (BOOL)hidden;	// 0x3348bb6d
// declared property getter: - (id)idName;	// 0x3348ae6d
// declared property getter: - (id)innerHTML;	// 0x333d2249
// declared property getter: - (id)innerText;	// 0x333b20a5
- (id)insertAdjacentElement:(id)element element:(id)element2;	// 0x3348ca49
- (void)insertAdjacentHTML:(id)html html:(id)html2;	// 0x3348cbb1
- (void)insertAdjacentText:(id)text text:(id)text2;	// 0x3348cd91
// declared property getter: - (BOOL)isContentEditable;	// 0x3348c611
// declared property getter: - (id)lang;	// 0x3348b02d
// declared property getter: - (id)outerHTML;	// 0x3348be55
// declared property getter: - (id)outerText;	// 0x3348c0e9
- (int)scrollXOffset;	// 0x333a8d9d
- (int)scrollYOffset;	// 0x333a8df1
// declared property setter: - (void)setClassName:(id)name;	// 0x3348b7dd
// declared property setter: - (void)setContentEditable:(id)editable;	// 0x333c8ef5
// declared property setter: - (void)setDir:(id)dir;	// 0x3348b699
// converted property setter: - (void)setDraggable:(BOOL)draggable;	// 0x3348baa1
// converted property setter: - (void)setHidden:(BOOL)hidden;	// 0x3348bc35
// declared property setter: - (void)setIdName:(id)name;	// 0x3348b2cd
// declared property setter: - (void)setInnerHTML:(id)html;	// 0x333d7bc1
// declared property setter: - (void)setInnerText:(id)text;	// 0x3348bd0d
// declared property setter: - (void)setLang:(id)lang;	// 0x3348b555
// declared property setter: - (void)setOuterHTML:(id)html;	// 0x3348bfa1
// declared property setter: - (void)setOuterText:(id)text;	// 0x3348c235
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2;	// 0x3347e439
- (void)setScrollXOffset:(int)offset scrollYOffset:(int)offset2 adjustForPurpleCaret:(BOOL)purpleCaret;	// 0x333c2141
// converted property setter: - (void)setSpellcheck:(BOOL)spellcheck;	// 0x3348c789
// declared property setter: - (void)setTabIndex:(int)index;	// 0x3348b9e5
// declared property setter: - (void)setTitle:(id)title;	// 0x3348b411
// converted property getter: - (BOOL)spellcheck;	// 0x3348c6cd
- (int)structuralComplexityContribution;	// 0x334c7649
// declared property getter: - (int)tabIndex;	// 0x3348aced
// declared property getter: - (id)title;	// 0x3348af4d
// declared property getter: - (id)titleDisplayString;	// 0x3348c855
@end


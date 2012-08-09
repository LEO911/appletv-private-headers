/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMNodeList, DOMHTMLFormElement, DOMValidityState;

@interface DOMHTMLKeygenElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x30d46115; S=0x30d46221; 
@property(copy) NSString *challenge;	// G=0x30d46335; S=0x30d46459; 
@property(assign) BOOL disabled;	// G=0x30d4660d; S=0x30d46719; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x30d4682d; 
@property(copy) NSString *keytype;	// G=0x30d46931; S=0x30d46a55; 
@property(readonly, assign) DOMNodeList *labels;	// G=0x30d473b5; 
@property(copy) NSString *name;	// G=0x30d46c09; S=0x30d46d25; 
@property(readonly, assign) NSString *type;	// G=0x30d46ecd; 
@property(readonly, assign) NSString *validationMessage;	// G=0x30d471f9; 
@property(readonly, assign) DOMValidityState *validity;	// G=0x30d470ed; 
@property(readonly, assign) BOOL willValidate;	// G=0x30d46fe9; 
// declared property getter: - (BOOL)autofocus;	// 0x30d46115
// declared property getter: - (id)challenge;	// 0x30d46335
- (BOOL)checkValidity;	// 0x30d4751d
// declared property getter: - (BOOL)disabled;	// 0x30d4660d
// declared property getter: - (id)form;	// 0x30d4682d
// declared property getter: - (id)keytype;	// 0x30d46931
// declared property getter: - (id)labels;	// 0x30d473b5
// declared property getter: - (id)name;	// 0x30d46c09
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x30d46221
// declared property setter: - (void)setChallenge:(id)challenge;	// 0x30d46459
- (void)setCustomValidity:(id)validity;	// 0x30d47621
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x30d46719
// declared property setter: - (void)setKeytype:(id)keytype;	// 0x30d46a55
// declared property setter: - (void)setName:(id)name;	// 0x30d46d25
// declared property getter: - (id)type;	// 0x30d46ecd
// declared property getter: - (id)validationMessage;	// 0x30d471f9
// declared property getter: - (id)validity;	// 0x30d470ed
// declared property getter: - (BOOL)willValidate;	// 0x30d46fe9
@end

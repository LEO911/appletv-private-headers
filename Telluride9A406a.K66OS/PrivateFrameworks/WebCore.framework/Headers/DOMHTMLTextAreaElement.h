/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLFormElement, NSString;

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x36a68225; S=0x36a683e5; 
@property(retain) id autocapitalize;	// G=0x36a698ad; S=0x36a69981; converted property
@property(assign) BOOL autocorrect;	// G=0x36a69725; S=0x36a697e1; converted property
@property(assign) BOOL autofocus;	// G=0x36a687f1; S=0x36a68b21; 
@property(assign) int cols;	// G=0x36a6785d; S=0x36a6866d; 
@property(copy) NSString *defaultValue;	// G=0x36a67be1; S=0x36a67f65; 
@property(assign) BOOL disabled;	// G=0x36a68729; S=0x36a68a49; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x36a6809d; 
@property(assign) int maxLength;	// G=0x36a67889; S=0x36a68da9; converted property
@property(copy) NSString *name;	// G=0x36a67a35; S=0x36a68e75; 
@property(retain) id placeholder;	// G=0x36a68305; S=0x36a68529; converted property
@property(assign) BOOL readOnly;	// G=0x36a688b9; S=0x36a68bf9; 
@property(assign) BOOL required;	// G=0x36a68981; S=0x36a68cd1; converted property
@property(assign) int rows;	// G=0x36a67949; S=0x36a68fad; 
@property(assign) int selectionEnd;	// G=0x36a69465; S=0x36a69521; 
@property(assign) int selectionStart;	// G=0x36a692ed; S=0x36a693a9; 
@property(readonly, copy) NSString *type;	// G=0x36a67b09; 
@property(copy) NSString *value;	// G=0x36a67d2d; S=0x36a69069; 
@property(readonly, assign) BOOL willValidate;	// G=0x36a67975; 
- (int)_autocapitalizeType;	// 0x36a35589
- (BOOL)_isEdited;	// 0x36a35569
// declared property getter: - (id)accessKey;	// 0x36a68225
// converted property getter: - (id)autocapitalize;	// 0x36a698ad
// converted property getter: - (BOOL)autocorrect;	// 0x36a69725
// declared property getter: - (BOOL)autofocus;	// 0x36a687f1
- (BOOL)checkValidity;	// 0x36a69b71
// declared property getter: - (int)cols;	// 0x36a6785d
// declared property getter: - (id)defaultValue;	// 0x36a67be1
// declared property getter: - (BOOL)disabled;	// 0x36a68729
// declared property getter: - (id)form;	// 0x36a6809d
- (id)labels;	// 0x36a695dd
// converted property getter: - (int)maxLength;	// 0x36a67889
// declared property getter: - (id)name;	// 0x36a67a35
// converted property getter: - (id)placeholder;	// 0x36a68305
// declared property getter: - (BOOL)readOnly;	// 0x36a688b9
// converted property getter: - (BOOL)required;	// 0x36a68981
// declared property getter: - (int)rows;	// 0x36a67949
- (void)select;	// 0x36a69ab9
// declared property getter: - (int)selectionEnd;	// 0x36a69465
// declared property getter: - (int)selectionStart;	// 0x36a692ed
// declared property setter: - (void)setAccessKey:(id)key;	// 0x36a683e5
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x36a69981
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x36a697e1
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x36a68b21
// declared property setter: - (void)setCols:(int)cols;	// 0x36a6866d
- (void)setCustomValidity:(id)validity;	// 0x36a69c31
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x36a67f65
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x36a68a49
// converted property setter: - (void)setMaxLength:(int)length;	// 0x36a68da9
// declared property setter: - (void)setName:(id)name;	// 0x36a68e75
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x36a68529
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x36a68bf9
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x36a68cd1
// declared property setter: - (void)setRows:(int)rows;	// 0x36a68fad
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x36a69521
- (void)setSelectionRange:(int)range end:(int)end;	// 0x36a69d69
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x36a693a9
// declared property setter: - (void)setValue:(id)value;	// 0x36a69069
- (int)structuralComplexityContribution;	// 0x36a7c5a5
- (unsigned)textLength;	// 0x36a67e7d
// declared property getter: - (id)type;	// 0x36a67b09
- (id)validationMessage;	// 0x36a691a1
- (id)validity;	// 0x36a68159
// declared property getter: - (id)value;	// 0x36a67d2d
// declared property getter: - (BOOL)willValidate;	// 0x36a67975
@end


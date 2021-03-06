/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLFormElement;

@interface DOMHTMLTextAreaElement : DOMHTMLElement {
}
@property(copy) NSString *accessKey;	// G=0x3600f73d; S=0x3600f861; 
@property(retain) id autocapitalize;	// G=0x3600f47d; S=0x3600f595; converted property
@property(assign) BOOL autocorrect;	// G=0x3600f275; S=0x3600f375; converted property
@property(assign) BOOL autofocus;	// G=0x3600c405; S=0x3600c511; 
@property(assign) int cols;	// G=0x3600c625; S=0x3600c651; 
@property(copy) NSString *defaultValue;	// G=0x3600de61; S=0x3600e01d; 
@property(retain) id dirName;	// G=0x3600c751; S=0x3600c875; converted property
@property(assign) BOOL disabled;	// G=0x3600ca29; S=0x3600cb35; 
@property(readonly, assign) DOMHTMLFormElement *form;	// G=0x3600cc49; 
@property(assign) int maxLength;	// G=0x3600cd4d; S=0x3600ce51; converted property
@property(copy) NSString *name;	// G=0x3600cf65; S=0x3600d081; 
@property(retain) id placeholder;	// G=0x3600d229; S=0x3600d34d; converted property
@property(assign) BOOL readOnly;	// G=0x3600d501; S=0x3600d60d; 
@property(assign) BOOL required;	// G=0x3600d721; S=0x3600d82d; converted property
@property(assign) int rows;	// G=0x3600d941; S=0x3600d96d; 
@property(retain) id selectionDirection;	// G=0x3600efb5; S=0x3600f0cd; converted property
@property(assign) int selectionEnd;	// G=0x3600edb5; S=0x3600eeb5; 
@property(assign) int selectionStart;	// G=0x3600ebb5; S=0x3600ecb5; 
@property(readonly, assign) NSString *type;	// G=0x3600dd45; 
@property(copy) NSString *value;	// G=0x3600e1c5; S=0x3600e385; 
@property(readonly, assign) BOOL willValidate;	// G=0x3600e681; 
@property(retain) id wrap;	// G=0x3600da6d; S=0x3600db91; converted property
- (int)_autocapitalizeType;	// 0x35fc8515
- (BOOL)_isEdited;	// 0x35fc8505
// declared property getter: - (id)accessKey;	// 0x3600f73d
// converted property getter: - (id)autocapitalize;	// 0x3600f47d
// converted property getter: - (BOOL)autocorrect;	// 0x3600f275
// declared property getter: - (BOOL)autofocus;	// 0x3600c405
- (BOOL)checkValidity;	// 0x3600fa15
// declared property getter: - (int)cols;	// 0x3600c625
// declared property getter: - (id)defaultValue;	// 0x3600de61
// converted property getter: - (id)dirName;	// 0x3600c751
// declared property getter: - (BOOL)disabled;	// 0x3600ca29
// declared property getter: - (id)form;	// 0x3600cc49
- (id)labels;	// 0x3600ea4d
// converted property getter: - (int)maxLength;	// 0x3600cd4d
// declared property getter: - (id)name;	// 0x3600cf65
// converted property getter: - (id)placeholder;	// 0x3600d229
// declared property getter: - (BOOL)readOnly;	// 0x3600d501
// converted property getter: - (BOOL)required;	// 0x3600d721
// declared property getter: - (int)rows;	// 0x3600d941
- (void)select;	// 0x3600fcc1
// converted property getter: - (id)selectionDirection;	// 0x3600efb5
// declared property getter: - (int)selectionEnd;	// 0x3600edb5
// declared property getter: - (int)selectionStart;	// 0x3600ebb5
// declared property setter: - (void)setAccessKey:(id)key;	// 0x3600f861
// converted property setter: - (void)setAutocapitalize:(id)autocapitalize;	// 0x3600f595
// converted property setter: - (void)setAutocorrect:(BOOL)autocorrect;	// 0x3600f375
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x3600c511
// declared property setter: - (void)setCols:(int)cols;	// 0x3600c651
- (void)setCustomValidity:(id)validity;	// 0x3600fb19
// declared property setter: - (void)setDefaultValue:(id)value;	// 0x3600e01d
// converted property setter: - (void)setDirName:(id)name;	// 0x3600c875
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3600cb35
// converted property setter: - (void)setMaxLength:(int)length;	// 0x3600ce51
// declared property setter: - (void)setName:(id)name;	// 0x3600d081
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3600d34d
// declared property setter: - (void)setReadOnly:(BOOL)only;	// 0x3600d60d
// converted property setter: - (void)setRequired:(BOOL)required;	// 0x3600d82d
// declared property setter: - (void)setRows:(int)rows;	// 0x3600d96d
// converted property setter: - (void)setSelectionDirection:(id)direction;	// 0x3600f0cd
// declared property setter: - (void)setSelectionEnd:(int)end;	// 0x3600eeb5
- (void)setSelectionRange:(int)range end:(int)end;	// 0x3600fdbd
// declared property setter: - (void)setSelectionStart:(int)start;	// 0x3600ecb5
// declared property setter: - (void)setValue:(id)value;	// 0x3600e385
// converted property setter: - (void)setWrap:(id)wrap;	// 0x3600db91
- (int)structuralComplexityContribution;	// 0x3602ac5d
- (unsigned)textLength;	// 0x3600e52d
// declared property getter: - (id)type;	// 0x3600dd45
- (id)validationMessage;	// 0x3600e891
- (id)validity;	// 0x3600e785
// declared property getter: - (id)value;	// 0x3600e1c5
// declared property getter: - (BOOL)willValidate;	// 0x3600e681
// converted property getter: - (id)wrap;	// 0x3600da6d
@end


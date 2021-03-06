/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class DOMHTMLOptionsCollection, NSString, DOMHTMLFormElement;

@interface DOMHTMLSelectElement : DOMHTMLElement {
}
@property(assign) BOOL autofocus;	// G=0x316910e9; S=0x316916c1; 
@property(assign) BOOL disabled;	// G=0x316910c9; S=0x3169169d; 
@property(readonly, retain) DOMHTMLFormElement *form;	// G=0x31691409; 
@property(readonly, assign) int length;	// G=0x316913f1; 
@property(assign) BOOL multiple;	// G=0x31691109; S=0x316916e5; 
@property(copy) NSString *name;	// G=0x31691175; S=0x31691709; 
@property(readonly, retain) DOMHTMLOptionsCollection *options;	// G=0x31691575; 
@property(assign) int selectedIndex;	// G=0x3169106d; S=0x31691089; 
@property(assign) int size;	// G=0x31691129; S=0x31691821; 
@property(readonly, copy) NSString *type;	// G=0x31691145; 
@property(copy) NSString *value;	// G=0x316911a5; S=0x316912d9; 
@property(readonly, assign) BOOL willValidate;	// G=0x316910a9; 
- (void)_activateItemAtIndex:(int)index;	// 0x31677f39
- (void)_activateItemAtIndex:(int)index allowMultipleSelection:(BOOL)selection;	// 0x31677f5d
- (void)add:(id)add :(id)arg2;	// 0x316919b9
- (void)add:(id)add before:(id)before;	// 0x31691971
// declared property getter: - (BOOL)autofocus;	// 0x316910e9
- (BOOL)checkValidity;	// 0x3169183d
- (unsigned)completeLength;	// 0x316a5801
// declared property getter: - (BOOL)disabled;	// 0x316910c9
// declared property getter: - (id)form;	// 0x31691409
- (id)item:(unsigned)item;	// 0x31691a1d
// declared property getter: - (int)length;	// 0x316913f1
- (id)listItemAtIndex:(int)index;	// 0x316a5815
// declared property getter: - (BOOL)multiple;	// 0x31691109
// declared property getter: - (id)name;	// 0x31691175
- (id)namedItem:(id)item;	// 0x31691a3d
// declared property getter: - (id)options;	// 0x31691575
- (void)remove:(int)remove;	// 0x31691a01
// declared property getter: - (int)selectedIndex;	// 0x3169106d
// declared property setter: - (void)setAutofocus:(BOOL)autofocus;	// 0x316916c1
- (void)setCustomValidity:(id)validity;	// 0x31691859
// declared property setter: - (void)setDisabled:(BOOL)disabled;	// 0x3169169d
// declared property setter: - (void)setMultiple:(BOOL)multiple;	// 0x316916e5
// declared property setter: - (void)setName:(id)name;	// 0x31691709
// declared property setter: - (void)setSelectedIndex:(int)index;	// 0x31691089
// declared property setter: - (void)setSize:(int)size;	// 0x31691821
// declared property setter: - (void)setValue:(id)value;	// 0x316912d9
// declared property getter: - (int)size;	// 0x31691129
- (int)structuralComplexityContribution;	// 0x316a433d
// declared property getter: - (id)type;	// 0x31691145
- (id)validationMessage;	// 0x31691441
- (id)validity;	// 0x31691425
// declared property getter: - (id)value;	// 0x316911a5
// declared property getter: - (BOOL)willValidate;	// 0x316910a9
@end


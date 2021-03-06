/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <DOMHTMLInputElement.h> // Unknown library


@interface DOMHTMLInputElement (UIWebFormPeripheral)
- (id)createPeripheral;	// 0x31e1474d
@end

@interface DOMHTMLInputElement (UITextInputAdditions)
- (BOOL)isEditing;	// 0x31e38691
- (BOOL)isSecure;	// 0x31e384d9
- (BOOL)isTextControl;	// 0x31e38509
- (int)keyboardType;	// 0x31e38521
- (void)setSelectionWithPoint:(CGPoint)point;	// 0x31e3861d
- (id)text;	// 0x31e384c9
- (id)textInputTraits;	// 0x31e381d5
@end

@interface DOMHTMLInputElement (UIWebInteraction)
- (BOOL)isLikelyToBeginPageLoad;	// 0x31e995e1
- (BOOL)nodeCanBecomeFirstResponder;	// 0x31e99619
@end

@interface DOMHTMLInputElement (UIWebBrowserViewPrivate)
- (void)_accessoryClear;	// 0x31f15a85
- (BOOL)_isAssistedDateType;	// 0x31f1580d
- (BOOL)_requiresAccessoryView;	// 0x31f15979
- (BOOL)_requiresInputView;	// 0x31f159d5
- (void)_startAssistingDocumentView:(id)view;	// 0x31f158bd
- (void)_stopAssistingDocumentView:(id)view;	// 0x31f1590d
- (BOOL)_supportsAccessoryClear;	// 0x31f15a35
- (BOOL)_supportsAutoFill;	// 0x31f15a31
- (id)_textFormElement;	// 0x31f15aa1
@end


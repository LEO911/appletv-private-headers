/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIFormPeripheral.h"

@class DOMHTMLInputElement;
@protocol UIWebFormControl;

__attribute__((visibility("hidden")))
@interface UIWebDateTimePeripheral : NSObject <UIFormPeripheral> {
	DOMHTMLInputElement *_inputElement;	// 4 = 0x4
	id<UIWebFormControl> _control;	// 8 = 0x8
}
@property(retain, nonatomic) id<UIWebFormControl> _control;	// G=0x31e1472d; S=0x31e1473d; @synthesize
@property(retain, nonatomic) DOMHTMLInputElement *_inputElement;	// G=0x31e1470d; S=0x31e1471d; @synthesize
+ (id)createPeripheralWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x31e14685
- (id)initWithDOMHTMLInputElement:(id)domhtmlinputElement;	// 0x31e14511
// declared property getter: - (id)_control;	// 0x31e1472d
- (int)_datePickerModeForInputType:(id)inputType;	// 0x31e14469
// declared property getter: - (id)_inputElement;	// 0x31e1470d
- (id)assistantView;	// 0x31e146ed
- (void)beginEditing;	// 0x31e146cd
- (void)dealloc;	// 0x31e1462d
// declared property setter: - (void)set_control:(id)control;	// 0x31e1473d
// declared property setter: - (void)set_inputElement:(id)element;	// 0x31e1471d
@end

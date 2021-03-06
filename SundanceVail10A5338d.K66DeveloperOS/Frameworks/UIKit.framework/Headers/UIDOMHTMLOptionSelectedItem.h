/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIWebSelectedItemPrivate.h"
#import <NSObject.h> // Unknown library

@class DOMHTMLOptionElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
	BOOL _selected;	// 4 = 0x4
	DOMHTMLOptionElement *_node;	// 8 = 0x8
}
@property(retain, nonatomic) DOMHTMLOptionElement *_node;	// G=0x30e1c0d1; S=0x30e1c0e1; @synthesize
@property(readonly, retain) DOMHTMLOptionElement *node;	// G=0x30e1c025; converted property
@property(assign) BOOL selected;	// G=0x30e1c035; S=0x30e1c049; converted property
- (id)initWithHTMLOptionNode:(id)htmloptionNode;	// 0x30e1bfbd
// declared property getter: - (id)_node;	// 0x30e1c0d1
- (void)dealloc;	// 0x30e1c08d
- (BOOL)isGroup;	// 0x30e1c045
// converted property getter: - (id)node;	// 0x30e1c025
// converted property getter: - (BOOL)selected;	// 0x30e1c035
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x30e1c049
// declared property setter: - (void)set_node:(id)node;	// 0x30e1c0e1
- (void)unselect;	// 0x30e1c079
@end


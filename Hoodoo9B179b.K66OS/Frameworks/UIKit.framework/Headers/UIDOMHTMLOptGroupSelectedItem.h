/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIWebSelectedItemPrivate.h"

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate> {
@private
	DOMHTMLOptGroupElement *_node;	// 4 = 0x4
}
@property(retain, nonatomic) DOMHTMLOptGroupElement *_node;	// G=0x330d5dc5; S=0x330d5dd5; @synthesize
@property(readonly, retain) DOMHTMLOptGroupElement *node;	// G=0x330d5d65; converted property
@property(assign) BOOL selected;	// G=0x330d5d75; S=0x330d5d79; converted property
- (id)initWithHTMLOptGroupNode:(id)htmloptGroupNode;	// 0x330d5d1d
// declared property getter: - (id)_node;	// 0x330d5dc5
- (void)dealloc;	// 0x330d5d81
// converted property getter: - (id)node;	// 0x330d5d65
// converted property getter: - (BOOL)selected;	// 0x330d5d75
// converted property setter: - (void)setSelected:(BOOL)selected;	// 0x330d5d79
// declared property setter: - (void)set_node:(id)node;	// 0x330d5dd5
- (void)unselect;	// 0x330d5d7d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIControl, UIRemoveControl, UIView;

__attribute__((visibility("hidden")))
@interface _UITableViewCellOldEditingData : NSObject {
@private
	UIRemoveControl *_removeControl;	// 4 = 0x4
	UIControl *_grabber;	// 8 = 0x8
	UIView *_separator;	// 12 = 0xc
}
@property(retain, nonatomic) UIControl *reorderControl;	// G=0x35312b59; S=0x35312b69; @synthesize=_grabber
@property(retain, nonatomic) UIView *separatorView;	// G=0x35312b8d; S=0x35312b9d; @synthesize=_separator
- (BOOL)dataRequired;	// 0x35312ab9
- (void)dealloc;	// 0x35312af9
// declared property getter: - (id)reorderControl;	// 0x35312b59
// declared property getter: - (id)separatorView;	// 0x35312b8d
// declared property setter: - (void)setReorderControl:(id)control;	// 0x35312b69
// declared property setter: - (void)setSeparatorView:(id)view;	// 0x35312b9d
@end


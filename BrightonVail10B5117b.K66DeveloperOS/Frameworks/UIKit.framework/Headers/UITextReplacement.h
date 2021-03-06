/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITextRange, NSString, NSArray;

__attribute__((visibility("hidden")))
@interface UITextReplacement : NSObject {
	UITextRange *_range;	// 4 = 0x4
	NSString *_originalText;	// 8 = 0x8
	NSString *_replacementText;	// 12 = 0xc
	NSString *_menuTitle;	// 16 = 0x10
	NSArray *_usageTrackingTypes;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *menuTitle;	// G=0x32e4f0fd; @synthesize=_menuTitle
@property(readonly, assign, nonatomic) NSString *originalText;	// G=0x33003861; @synthesize=_originalText
@property(readonly, assign, nonatomic) UITextRange *range;	// G=0x33003851; @synthesize=_range
@property(readonly, assign, nonatomic) NSString *replacementText;	// G=0x32e4f10d; @synthesize=_replacementText
@property(retain, nonatomic) NSArray *usageTrackingTypes;	// G=0x33003871; S=0x33003881; @synthesize=_usageTrackingTypes
+ (id)replacementWithRange:(id)range original:(id)original replacement:(id)replacement menuTitle:(id)title;	// 0x32e4ed85
- (void)dealloc;	// 0x330037b1
// declared property getter: - (id)menuTitle;	// 0x32e4f0fd
// declared property getter: - (id)originalText;	// 0x33003861
// declared property getter: - (id)range;	// 0x33003851
// declared property getter: - (id)replacementText;	// 0x32e4f10d
// declared property setter: - (void)setUsageTrackingTypes:(id)types;	// 0x33003881
// declared property getter: - (id)usageTrackingTypes;	// 0x33003871
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject {
	NSString *accessibilityConfigurationHint;	// 4 = 0x4
	NSString *accessibilityConfigurationLabel;	// 8 = 0x8
	NSNumber *accessibilityConfigurationTraits;	// 12 = 0xc
	NSNumber *isAccessibilityConfigurationElement;	// 16 = 0x10
	NSObject *object;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *accessibilityConfigurationHint;	// G=0x2f754b19; S=0x2f754b29; @synthesize
@property(retain, nonatomic) NSString *accessibilityConfigurationLabel;	// G=0x2f754b39; S=0x2f754b49; @synthesize
@property(retain, nonatomic) NSNumber *accessibilityConfigurationTraits;	// G=0x2f754b59; S=0x2f754b69; @synthesize
@property(retain, nonatomic) NSNumber *isAccessibilityConfigurationElement;	// G=0x2f754b79; S=0x2f754b89; @synthesize
@property(retain, nonatomic) NSObject *object;	// G=0x2f754b99; S=0x2f754ba9; @synthesize
- (id)initWithCoder:(id)coder;	// 0x2f754789
- (id)initWithObject:(id)object label:(id)label hint:(id)hint traits:(id)traits andIsAccessibilityElement:(id)element;	// 0x2f7546b9
// declared property getter: - (id)accessibilityConfigurationHint;	// 0x2f754b19
// declared property getter: - (id)accessibilityConfigurationLabel;	// 0x2f754b39
// declared property getter: - (id)accessibilityConfigurationTraits;	// 0x2f754b59
- (void)applyConfiguration;	// 0x2f754a29
- (void)dealloc;	// 0x2f754989
- (void)encodeWithCoder:(id)coder;	// 0x2f75489d
// declared property getter: - (id)isAccessibilityConfigurationElement;	// 0x2f754b79
// declared property getter: - (id)object;	// 0x2f754b99
// declared property setter: - (void)setAccessibilityConfigurationHint:(id)hint;	// 0x2f754b29
// declared property setter: - (void)setAccessibilityConfigurationLabel:(id)label;	// 0x2f754b49
// declared property setter: - (void)setAccessibilityConfigurationTraits:(id)traits;	// 0x2f754b69
// declared property setter: - (void)setIsAccessibilityConfigurationElement:(id)element;	// 0x2f754b89
// declared property setter: - (void)setObject:(id)object;	// 0x2f754ba9
@end


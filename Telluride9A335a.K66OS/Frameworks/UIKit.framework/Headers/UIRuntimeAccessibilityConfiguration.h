/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeAccessibilityConfiguration : NSObject {
@private
	NSString *accessibilityConfigurationHint;	// 4 = 0x4
	NSString *accessibilityConfigurationLabel;	// 8 = 0x8
	NSNumber *accessibilityConfigurationTraits;	// 12 = 0xc
	NSNumber *isAccessibilityConfigurationElement;	// 16 = 0x10
	NSObject *object;	// 20 = 0x14
}
@property(retain, nonatomic) NSString *accessibilityConfigurationHint;	// G=0x33c5c915; S=0x33c5c925; @synthesize
@property(retain, nonatomic) NSString *accessibilityConfigurationLabel;	// G=0x33c5c949; S=0x33c5c959; @synthesize
@property(retain, nonatomic) NSNumber *accessibilityConfigurationTraits;	// G=0x33c5c97d; S=0x33c5c98d; @synthesize
@property(retain, nonatomic) NSNumber *isAccessibilityConfigurationElement;	// G=0x33c5c9b1; S=0x33c5c9c1; @synthesize
@property(retain, nonatomic) NSObject *object;	// G=0x33c5c9e5; S=0x33c5c9f5; @synthesize
- (id)initWithCoder:(id)coder;	// 0x33c5c581
- (id)initWithObject:(id)object label:(id)label hint:(id)hint traits:(id)traits andIsAccessibilityElement:(id)element;	// 0x33c5c4b1
// declared property getter: - (id)accessibilityConfigurationHint;	// 0x33c5c915
// declared property getter: - (id)accessibilityConfigurationLabel;	// 0x33c5c949
// declared property getter: - (id)accessibilityConfigurationTraits;	// 0x33c5c97d
- (void)applyConfiguration;	// 0x33c5c825
- (void)dealloc;	// 0x33c5c789
- (void)encodeWithCoder:(id)coder;	// 0x33c5c69d
// declared property getter: - (id)isAccessibilityConfigurationElement;	// 0x33c5c9b1
// declared property getter: - (id)object;	// 0x33c5c9e5
// declared property setter: - (void)setAccessibilityConfigurationHint:(id)hint;	// 0x33c5c925
// declared property setter: - (void)setAccessibilityConfigurationLabel:(id)label;	// 0x33c5c959
// declared property setter: - (void)setAccessibilityConfigurationTraits:(id)traits;	// 0x33c5c98d
// declared property setter: - (void)setIsAccessibilityConfigurationElement:(id)element;	// 0x33c5c9c1
// declared property setter: - (void)setObject:(id)object;	// 0x33c5c9f5
@end


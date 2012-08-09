/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface MCProfileWarning : NSObject <NSCoding> {
	NSString *_localizedTitle;	// 4 = 0x4
	NSString *_localizedBody;	// 8 = 0x8
	BOOL _isLongForm;	// 12 = 0xc
}
@property(assign, nonatomic) BOOL isLongForm;	// G=0x32ba73f1; S=0x32ba7401; @synthesize=_isLongForm
@property(retain, nonatomic) NSString *localizedBody;	// G=0x32ba73b9; S=0x32ba73c9; @synthesize=_localizedBody
@property(retain, nonatomic) NSString *localizedTitle;	// G=0x32ba7381; S=0x32ba7391; @synthesize=_localizedTitle
+ (id)warningWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x32ba719d
- (id)initWithCoder:(id)coder;	// 0x32ba72a1
- (id)initWithLocalizedTitle:(id)localizedTitle localizedBody:(id)body isLongForm:(BOOL)form;	// 0x32ba70ed
- (void).cxx_destruct;	// 0x32ba7411
- (void)encodeWithCoder:(id)coder;	// 0x32ba7205
// declared property getter: - (BOOL)isLongForm;	// 0x32ba73f1
// declared property getter: - (id)localizedBody;	// 0x32ba73b9
// declared property getter: - (id)localizedTitle;	// 0x32ba7381
// declared property setter: - (void)setIsLongForm:(BOOL)form;	// 0x32ba7401
// declared property setter: - (void)setLocalizedBody:(id)body;	// 0x32ba73c9
// declared property setter: - (void)setLocalizedTitle:(id)title;	// 0x32ba7391
@end

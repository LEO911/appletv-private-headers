/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import "SSPurchase.h"
#import "SSCoding.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class NSArray, NSNumber, NSString;

@interface SSTonePurchase : SSPurchase <SSCoding, NSCoding, NSCopying> {
@private
	NSArray *_allowedToneStyles;	// 44 = 0x2c
	NSNumber *_assigneeIdentifier;	// 48 = 0x30
	NSString *_assigneeToneStyle;	// 52 = 0x34
	BOOL _shouldMakeDefaultRingtone;	// 56 = 0x38
	BOOL _shouldMakeDefaultTextTone;	// 57 = 0x39
}
@property(copy, nonatomic) NSArray *allowedToneStyles;	// G=0x30eae34d; S=0x30eae35d; @synthesize=_allowedToneStyles
@property(retain, nonatomic) NSNumber *assigneeIdentifier;	// G=0x30eae381; S=0x30eae391; @synthesize=_assigneeIdentifier
@property(copy, nonatomic) NSString *assigneeToneStyle;	// G=0x30eae3b5; S=0x30eae3c5; @synthesize=_assigneeToneStyle
@property(assign, nonatomic) BOOL shouldMakeDefaultRingtone;	// G=0x30eae3e9; S=0x30eae3f9; @synthesize=_shouldMakeDefaultRingtone
@property(assign, nonatomic) BOOL shouldMakeDefaultTextTone;	// G=0x30eae409; S=0x30eae419; @synthesize=_shouldMakeDefaultTextTone
- (id)initWithCoder:(id)coder;	// 0x30eadcf1
- (id)initWithItem:(id)item offer:(id)offer;	// 0x30eadc15
- (id)initWithPropertyListEncoding:(id)propertyListEncoding;	// 0x30eae1f9
- (id)initWithXPCEncoding:(void *)xpcencoding;	// 0x30eae311
// declared property getter: - (id)allowedToneStyles;	// 0x30eae34d
// declared property getter: - (id)assigneeIdentifier;	// 0x30eae381
// declared property getter: - (id)assigneeToneStyle;	// 0x30eae3b5
- (id)copyPropertyListEncoding;	// 0x30eae0dd
- (id)copyWithZone:(NSZone *)zone;	// 0x30eae009
- (void *)copyXPCEncoding;	// 0x30eae1c5
- (void)dealloc;	// 0x30eadc7d
- (void)encodeWithCoder:(id)coder;	// 0x30eade91
// declared property setter: - (void)setAllowedToneStyles:(id)styles;	// 0x30eae35d
// declared property setter: - (void)setAssigneeIdentifier:(id)identifier;	// 0x30eae391
// declared property setter: - (void)setAssigneeToneStyle:(id)style;	// 0x30eae3c5
// declared property setter: - (void)setShouldMakeDefaultRingtone:(BOOL)makeDefaultRingtone;	// 0x30eae3f9
// declared property setter: - (void)setShouldMakeDefaultTextTone:(BOOL)makeDefaultTextTone;	// 0x30eae419
// declared property getter: - (BOOL)shouldMakeDefaultRingtone;	// 0x30eae3e9
// declared property getter: - (BOOL)shouldMakeDefaultTextTone;	// 0x30eae409
@end

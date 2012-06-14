/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "NSCoding.h"
#import "UIKBShape.h"
#import "NSCopying.h"

@class NSString, NSArray, NSMutableArray, UIKBKeyset;

@interface UIKBKeylayout : UIKBShape <NSCoding, NSCopying> {
	NSString *m_name;	// 60 = 0x3c
	UIKBKeyset *m_keyset;	// 64 = 0x40
	NSMutableArray *m_refs;	// 68 = 0x44
}
@property(retain, nonatomic) UIKBKeyset *keyset;	// G=0x30321b71; S=0x30321b81; @synthesize=m_keyset
@property(retain, nonatomic) NSString *name;	// G=0x30321b3d; S=0x30321b4d; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *references;	// G=0x30321551; 
+ (id)keylayout;	// 0x30320d7d
- (id)init;	// 0x30320dc5
- (id)initWithCoder:(id)coder;	// 0x30320e9d
- (id)copyWithZone:(NSZone *)zone;	// 0x30321001
- (void)dealloc;	// 0x30320e29
- (id)description;	// 0x3032129d
- (void)encodeWithCoder:(id)coder;	// 0x30320f65
// declared property getter: - (id)keyset;	// 0x30321b71
- (void)layoutInRect:(CGRect)rect;	// 0x303215a1
// declared property getter: - (id)name;	// 0x30321b3d
- (id)referenceWithName:(id)name;	// 0x30321489
// declared property getter: - (id)references;	// 0x30321551
// declared property setter: - (void)setKeyset:(id)keyset;	// 0x30321b81
// declared property setter: - (void)setName:(id)name;	// 0x30321b4d
- (void)setRef:(id)ref;	// 0x30321561
- (void)setReferenceWithName:(id)name value:(id)value flags:(unsigned)flags;	// 0x3032132d
@end

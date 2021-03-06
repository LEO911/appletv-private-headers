/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateSetValue : CAStateElement {
	NSString *_keyPath;	// 12 = 0xc
	id _value;	// 16 = 0x10
}
@property(copy, nonatomic) NSString *keyPath;	// G=0x32958a39; S=0x32958a4d; @synthesize=_keyPath
@property(retain, nonatomic) id value;	// G=0x32958231; S=0x32958241; 
- (id)initWithCoder:(id)coder;	// 0x3295898d
- (void)apply:(id)apply;	// 0x3295838d
- (id)copyWithZone:(NSZone *)zone;	// 0x32958765
- (void)dealloc;	// 0x32958809
- (id)debugDescription;	// 0x3295886d
- (void)encodeWithCoder:(id)coder;	// 0x32958905
- (void)foreachLayer:(id)layer;	// 0x32958645
// declared property getter: - (id)keyPath;	// 0x32958a39
- (BOOL)matches:(id)matches;	// 0x3295831d
// declared property setter: - (void)setKeyPath:(id)path;	// 0x32958a4d
// declared property setter: - (void)setValue:(id)value;	// 0x32958241
// declared property getter: - (id)value;	// 0x32958231
@end


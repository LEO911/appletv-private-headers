/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateAddElement : CAStateElement {
	NSString *_keyPath;	// 12 = 0xc
	id _object;	// 16 = 0x10
	id _beforeObject;	// 20 = 0x14
}
@property(retain, nonatomic) id beforeObject;	// G=0x32078811; S=0x32078821; @synthesize=_beforeObject
@property(copy, nonatomic) NSString *keyPath;	// G=0x320787cd; S=0x320787e1; @synthesize=_keyPath
@property(retain, nonatomic) id object;	// G=0x320787f1; S=0x32078801; @synthesize=_object
- (id)initWithCoder:(id)coder;	// 0x320785cd
- (void)apply:(id)apply;	// 0x32078191
// declared property getter: - (id)beforeObject;	// 0x32078811
- (id)copyWithZone:(NSZone *)zone;	// 0x32078451
- (void)dealloc;	// 0x320786ad
- (id)debugDescription;	// 0x32078725
- (void)encodeWithCoder:(id)coder;	// 0x32078511
- (void)foreachLayer:(id)layer;	// 0x32078401
// declared property getter: - (id)keyPath;	// 0x320787cd
- (BOOL)matches:(id)matches;	// 0x32078121
// declared property getter: - (id)object;	// 0x320787f1
// declared property setter: - (void)setBeforeObject:(id)object;	// 0x32078821
// declared property setter: - (void)setKeyPath:(id)path;	// 0x320787e1
// declared property setter: - (void)setObject:(id)object;	// 0x32078801
@end

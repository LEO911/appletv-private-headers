/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CAStateElement.h"

@class NSString;

@interface CAStateRemoveAnimation : CAStateElement {
	NSString *_key;	// 12 = 0xc
}
@property(copy, nonatomic) NSString *key;	// G=0x32afdc45; S=0x32afdc59; @synthesize=_key
- (id)initWithCoder:(id)coder;	// 0x32afdb01
- (void)apply:(id)apply;	// 0x32afd8b5
- (id)copyWithZone:(NSZone *)zone;	// 0x32afda29
- (void)dealloc;	// 0x32afdb75
- (id)debugDescription;	// 0x32afdbc1
- (void)encodeWithCoder:(id)coder;	// 0x32afdaa5
// declared property getter: - (id)key;	// 0x32afdc45
- (id)keyPath;	// 0x32afd799
- (BOOL)matches:(id)matches;	// 0x32afd7dd
// declared property setter: - (void)setKey:(id)key;	// 0x32afdc59
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, CALayer, CAValueFunction;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAValueFunction *_function;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	void *_priv;	// 20 = 0x14
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x36cd58a9; S=0x36cd58b9; 
@property(retain) CAValueFunction *function;	// G=0x36cd58e5; S=0x36cd5dc9; 
@property(retain) CALayer *layer;	// G=0x36cd58d5; S=0x36cd5e11; 
@property(copy) NSString *name;	// G=0x36cd5899; S=0x36cd5e59; 
+ (id)defaultValueForKey:(id)key;	// 0x36cd5895
+ (id)forceField;	// 0x36cd5935
- (id)init;	// 0x36cd58f5
- (id)initWithCoder:(id)coder;	// 0x36cd596d
- (Object *)CA_copyRenderValue;	// 0x36cd5ca5
- (id)copyWithZone:(NSZone *)zone;	// 0x36cd5b7d
- (void)dealloc;	// 0x36cd5d55
- (void)encodeWithCoder:(id)coder;	// 0x36cd5a99
// declared property getter: - (id)function;	// 0x36cd58e5
// declared property getter: - (BOOL)isEnabled;	// 0x36cd58a9
// declared property getter: - (id)layer;	// 0x36cd58d5
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x36cd5b6d
// declared property getter: - (id)name;	// 0x36cd5899
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x36cd58b9
// declared property setter: - (void)setFunction:(id)function;	// 0x36cd5dc9
// declared property setter: - (void)setLayer:(id)layer;	// 0x36cd5e11
// declared property setter: - (void)setName:(id)name;	// 0x36cd5e59
- (void)setValue:(id)value forKey:(id)key;	// 0x36cd5c39
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x36cd5c25
- (id)valueForKey:(id)key;	// 0x36cd5c71
- (id)valueForKeyPath:(id)keyPath;	// 0x36cd5c31
@end


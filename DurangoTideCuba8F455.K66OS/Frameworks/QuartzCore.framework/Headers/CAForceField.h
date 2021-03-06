/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSMutableCopying.h"
#import "NSCopying.h"

@class NSString, CALayer, CAValueFunction;

@interface CAForceField : NSObject <NSCopying, NSMutableCopying, NSCoding> {
@private
	NSString *_name;	// 4 = 0x4
	CALayer *_layer;	// 8 = 0x8
	CAValueFunction *_function;	// 12 = 0xc
	BOOL _enabled;	// 16 = 0x10
	void *_priv;	// 20 = 0x14
}
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x3341f485; S=0x3341f495; 
@property(retain) CAValueFunction *function;	// G=0x3341f4bd; S=0x3341f7d5; 
@property(retain) CALayer *layer;	// G=0x3341f4ad; S=0x3341f811; 
@property(copy) NSString *name;	// G=0x3341f475; S=0x3341f84d; 
+ (id)defaultValueForKey:(id)key;	// 0x3341f471
+ (id)forceField;	// 0x3341f889
- (id)init;	// 0x3341f4cd
- (id)initWithCoder:(id)coder;	// 0x3341f505
- (Object *)CA_copyRenderValue;	// 0x3341f8b9
- (id)copyWithZone:(NSZone *)zone;	// 0x3341f6d1
- (void)dealloc;	// 0x3341f769
- (void)encodeWithCoder:(id)coder;	// 0x3341f609
// declared property getter: - (id)function;	// 0x3341f4bd
// declared property getter: - (BOOL)isEnabled;	// 0x3341f485
// declared property getter: - (id)layer;	// 0x3341f4ad
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x3341f6bd
// declared property getter: - (id)name;	// 0x3341f475
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3341f495
// declared property setter: - (void)setFunction:(id)function;	// 0x3341f7d5
// declared property setter: - (void)setLayer:(id)layer;	// 0x3341f811
// declared property setter: - (void)setName:(id)name;	// 0x3341f84d
- (void)setValue:(id)value forKey:(id)key;	// 0x3341f995
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x3341f9d1
- (id)valueForKey:(id)key;	// 0x3341f969
- (id)valueForKeyPath:(id)keyPath;	// 0x3341f9c5
@end


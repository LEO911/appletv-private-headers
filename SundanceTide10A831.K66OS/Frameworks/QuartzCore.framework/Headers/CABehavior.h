/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {
	void *_attr;	// 4 = 0x4
	unsigned _refcount;	// 8 = 0x8
	unsigned _uid;	// 12 = 0xc
	void *_priv;	// 16 = 0x10
}
@property(assign) id delegate;	// G=0x32bcf7c9; S=0x32bcf7e1; 
@property(assign, getter=isEnabled) BOOL enabled;	// G=0x32bcf799; S=0x32bcf7b1; 
@property(copy) NSString *name;	// G=0x32bcf769; S=0x32bcf781; 
@property(copy) NSDictionary *style;	// G=0x32bcf7f9; S=0x32bcf811; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x32bcee4d
+ (/*function-pointer*/ void *)CA_getterForType:(int)type;	// 0x32bcf749
+ (/*function-pointer*/ void *)CA_setterForType:(int)type;	// 0x32bcf739
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x32bcee2d
+ (id)behavior;	// 0x32bce771
+ (id)defaultValueForKey:(id)key;	// 0x32bce7a9
+ (BOOL)resolveInstanceMethod:(SEL)method;	// 0x32bcf75d
- (id)init;	// 0x32bce7cd
- (id)initWithCoder:(id)coder;	// 0x32bcecdd
- (void)_setCARenderBehavior:(Behavior *)behavior;	// 0x32bceb41
- (BOOL)allowsWeakReference;	// 0x32bcead5
- (id)copyWithZone:(NSZone *)zone;	// 0x32bcee7d
- (void)dealloc;	// 0x32bceaed
- (id)debugDescription;	// 0x32bceef1
// declared property getter: - (id)delegate;	// 0x32bcf7c9
- (void)encodeWithCoder:(id)coder;	// 0x32bcece5
// declared property getter: - (BOOL)isEnabled;	// 0x32bcf799
// declared property getter: - (id)name;	// 0x32bcf769
- (oneway void)release;	// 0x32bce9ad
- (id)retain;	// 0x32bce939
- (unsigned)retainCount;	// 0x32bceac5
- (BOOL)retainWeakReference;	// 0x32bce971
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32bcf7e1
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x32bcf7b1
// declared property setter: - (void)setName:(id)name;	// 0x32bcf781
// declared property setter: - (void)setStyle:(id)style;	// 0x32bcf811
- (void)setValue:(id)value forKey:(id)key;	// 0x32bced21
- (void)setValue:(id)value forKeyPath:(id)keyPath;	// 0x32bcee21
- (void)setValue:(id)value forUndefinedKey:(id)undefinedKey;	// 0x32bceda1
- (BOOL)shouldArchiveValueForKey:(id)key;	// 0x32bcec9d
// declared property getter: - (id)style;	// 0x32bcf7f9
- (id)valueForKey:(id)key;	// 0x32bceced
- (id)valueForKeyPath:(id)keyPath;	// 0x32bcee19
- (id)valueForUndefinedKey:(id)undefinedKey;	// 0x32bced59
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "UIKit-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UIProxyObject : NSObject <NSCoding> {
	NSString *proxiedObjectIdentifier;	// 4 = 0x4
}
@property(retain) NSString *proxiedObjectIdentifier;	// G=0x33c496d1; S=0x33c4968d; converted property
+ (void)addMappingFromIdentifier:(id)identifier toObject:(id)object forCoder:(id)coder;	// 0x33c49349
+ (void)addMappings:(id)mappings forCoder:(id)coder;	// 0x33c493c5
+ (id)mappedObjectForCoder:(id)coder withIdentifier:(id)identifier;	// 0x33c494b9
+ (CFDictionaryRef)proxyDecodingMap;	// 0x33c492fd
+ (void)removeMappingsForCoder:(id)coder;	// 0x33c494f9
- (id)initWithCoder:(id)coder;	// 0x33c49519
- (void)dealloc;	// 0x33c49641
- (void)encodeWithCoder:(id)coder;	// 0x33c49611
// converted property getter: - (id)proxiedObjectIdentifier;	// 0x33c496d1
// converted property setter: - (void)setProxiedObjectIdentifier:(id)identifier;	// 0x33c4968d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSLocale.h> // Unknown library


__attribute__((visibility("hidden")))
@interface NSAutoLocale : NSLocale {
	NSLocale *loc;	// 4 = 0x4
}
+ (BOOL)supportsSecureCoding;	// 0x37393d75
- (id)init;	// 0x37354ebd
- (id)initWithCoder:(id)coder;	// 0x37393dcd
- (id)initWithLocaleIdentifier:(id)localeIdentifier;	// 0x37393cdd
- (id)_prefs;	// 0x37354fa5
- (void)_update:(id)update;	// 0x37393c89
- (Class)classForCoder;	// 0x37393e65
- (id)copyWithZone:(NSZone *)zone;	// 0x37354f51
- (void)dealloc;	// 0x37355149
- (id)description;	// 0x37393d0d
- (id)displayNameForKey:(id)key value:(id)value;	// 0x37393ced
- (void)encodeWithCoder:(id)coder;	// 0x37393d79
- (id)objectForKey:(id)key;	// 0x37354f85
@end

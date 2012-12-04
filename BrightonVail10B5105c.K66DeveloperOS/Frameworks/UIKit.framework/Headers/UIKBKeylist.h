/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface UIKBKeylist : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_keys;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x3485bd59; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x3485bd99; S=0x3485bda9; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x3485bd79; S=0x3485bd89; @synthesize=m_name
+ (id)keylist;	// 0x3485b719
- (id)init;	// 0x3485b7c9
- (id)initWithCoder:(id)coder;	// 0x3485b895
- (id)initWithName:(id)name keys:(id)keys;	// 0x3485b761
- (id)copyWithZone:(NSZone *)zone;	// 0x3485b965
// declared property getter: - (unsigned)count;	// 0x3485bd59
- (void)dealloc;	// 0x3485b831
- (id)description;	// 0x3485bcd9
- (void)encodeWithCoder:(id)coder;	// 0x3485b90d
- (id)keyWithName:(id)name;	// 0x3485bad9
// declared property getter: - (id)keys;	// 0x3485bd99
- (id)keysWithInteractionType:(id)interactionType;	// 0x3485bbc1
// declared property getter: - (id)name;	// 0x3485bd79
// declared property setter: - (void)setKeys:(id)keys;	// 0x3485bda9
// declared property setter: - (void)setName:(id)name;	// 0x3485bd89
@end

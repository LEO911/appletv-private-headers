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
@property(readonly, assign, nonatomic) unsigned count;	// G=0x31ef1461; 
@property(retain, nonatomic) NSMutableArray *keys;	// G=0x31ef14a1; S=0x31ef14b1; @synthesize=m_keys
@property(retain, nonatomic) NSString *name;	// G=0x31ef1481; S=0x31ef1491; @synthesize=m_name
+ (id)keylist;	// 0x31ef0e21
- (id)init;	// 0x31ef0ed1
- (id)initWithCoder:(id)coder;	// 0x31ef0f9d
- (id)initWithName:(id)name keys:(id)keys;	// 0x31ef0e69
- (id)copyWithZone:(NSZone *)zone;	// 0x31ef106d
// declared property getter: - (unsigned)count;	// 0x31ef1461
- (void)dealloc;	// 0x31ef0f39
- (id)description;	// 0x31ef13e1
- (void)encodeWithCoder:(id)coder;	// 0x31ef1015
- (id)keyWithName:(id)name;	// 0x31ef11e1
// declared property getter: - (id)keys;	// 0x31ef14a1
- (id)keysWithInteractionType:(id)interactionType;	// 0x31ef12c9
// declared property getter: - (id)name;	// 0x31ef1481
// declared property setter: - (void)setKeys:(id)keys;	// 0x31ef14b1
// declared property setter: - (void)setName:(id)name;	// 0x31ef1491
@end

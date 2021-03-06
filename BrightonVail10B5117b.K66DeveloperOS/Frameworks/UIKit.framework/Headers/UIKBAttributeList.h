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

@class NSString, NSDictionary, NSMutableDictionary, NSArray;

@interface UIKBAttributeList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableDictionary *m_dict;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x32fa4641; 
@property(readonly, assign, nonatomic) NSDictionary *dict;	// G=0x32fa4909; @synthesize=m_dict
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x32fa4919; S=0x32fa4929; @synthesize=m_explicitlySpecified
@property(copy, nonatomic) NSString *name;	// G=0x32fa48e5; S=0x32fa48f9; @synthesize=m_name
@property(readonly, assign, nonatomic) NSArray *names;	// G=0x32fa4621; 
- (id)init;	// 0x32fa40fd
- (id)initWithCoder:(id)coder;	// 0x32fa4221
- (id)initWithDictionary:(id)dictionary;	// 0x32fa4165
- (id)arrayValueForName:(id)name;	// 0x32fa4895
- (BOOL)boolValueForName:(id)name;	// 0x32fa47fd
- (id)copyWithZone:(NSZone *)zone;	// 0x32fa4349
// declared property getter: - (unsigned)count;	// 0x32fa4641
- (void)dealloc;	// 0x32fa41bd
- (id)description;	// 0x32fa43f5
// declared property getter: - (id)dict;	// 0x32fa4909
- (void)encodeWithCoder:(id)coder;	// 0x32fa42c5
// declared property getter: - (BOOL)explicitlySpecified;	// 0x32fa4919
- (int)intValueForName:(id)name;	// 0x32fa4849
- (void)mergeAttributes:(id)attributes;	// 0x32fa4741
// declared property getter: - (id)name;	// 0x32fa48e5
// declared property getter: - (id)names;	// 0x32fa4621
- (void)setBoolValueForName:(BOOL)name forName:(id)name2;	// 0x32fa46c1
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x32fa4929
- (void)setIntValueForName:(int)name forName:(id)name2;	// 0x32fa4701
// declared property setter: - (void)setName:(id)name;	// 0x32fa48f9
- (void)setValue:(id)value forName:(id)name;	// 0x32fa4661
- (id)stringValueForName:(id)name;	// 0x32fa47ad
- (id)valueForName:(id)name;	// 0x32fa478d
@end


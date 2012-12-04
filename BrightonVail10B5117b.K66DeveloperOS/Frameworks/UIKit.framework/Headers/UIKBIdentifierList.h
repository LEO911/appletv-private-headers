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

@class NSString, NSMutableArray, NSArray;

@interface UIKBIdentifierList : NSObject <NSCoding, NSCopying> {
	NSString *m_name;	// 4 = 0x4
	NSMutableArray *m_list;	// 8 = 0x8
	BOOL m_explicitlySpecified;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) unsigned count;	// G=0x32fd11e9; 
@property(assign, nonatomic) BOOL explicitlySpecified;	// G=0x32fd1275; S=0x32fd1285; @synthesize=m_explicitlySpecified
@property(readonly, assign, nonatomic) NSArray *list;	// G=0x32fd1265; @synthesize=m_list
@property(copy, nonatomic) NSString *name;	// G=0x32fd1241; S=0x32fd1255; @synthesize=m_name
- (id)init;	// 0x32fd0d61
- (id)initWithCoder:(id)coder;	// 0x32fd0e2d
- (void)addIdentifier:(id)identifier;	// 0x32fd1209
- (id)copyWithZone:(NSZone *)zone;	// 0x32fd0f55
// declared property getter: - (unsigned)count;	// 0x32fd11e9
- (void)dealloc;	// 0x32fd0dc9
- (id)description;	// 0x32fd1001
- (void)encodeWithCoder:(id)coder;	// 0x32fd0ed1
// declared property getter: - (BOOL)explicitlySpecified;	// 0x32fd1275
// declared property getter: - (id)list;	// 0x32fd1265
// declared property getter: - (id)name;	// 0x32fd1241
// declared property setter: - (void)setExplicitlySpecified:(BOOL)specified;	// 0x32fd1285
// declared property setter: - (void)setName:(id)name;	// 0x32fd1255
@end

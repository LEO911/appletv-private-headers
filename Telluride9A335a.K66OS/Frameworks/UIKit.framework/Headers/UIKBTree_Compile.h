/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIKBTree.h"

@class NSMutableDictionary, NSArray;

@interface UIKBTree_Compile : UIKBTree {
	NSMutableDictionary *symbols;	// 24 = 0x18
	NSMutableDictionary *refs;	// 28 = 0x1c
}
@property(readonly, assign, nonatomic) NSArray *refList;	// G=0x33cf2679; 
@property(retain, nonatomic) NSMutableDictionary *refs;	// G=0x33cf27b1; S=0x33cf27c1; @synthesize
@property(retain, nonatomic) NSMutableDictionary *symbols;	// G=0x33cf277d; S=0x33cf278d; @synthesize
@property(assign, nonatomic) BOOL variable;	// G=0x33cf26b1; S=0x33cf2701; 
+ (id)stringEnumForType:(int)type;	// 0x33cf0ad5
+ (id)treeOfType:(int)type;	// 0x33cf0185
+ (int)typeForString:(id)string;	// 0x33cf0b71
+ (id)uniqueNameWithType:(int)type;	// 0x33cefdc9
- (id)initWithType:(int)type;	// 0x33cf012d
- (id)attributeSet:(BOOL)set;	// 0x33cf23b5
- (id)copyWithZone:(NSZone *)zone;	// 0x33cf01cd
- (id)geometrySet:(BOOL)set;	// 0x33cf20f1
- (int)indexOfSubtreeWithName:(id)name rows:(id)rows;	// 0x33cf0f99
- (int)indexOfSubtreeWithType:(int)type;	// 0x33cf0f25
- (BOOL)isSameAsTree:(id)tree;	// 0x33cf03dd
- (BOOL)isSymbolType;	// 0x33cf0ccd
- (id)listAtIndex:(int)index;	// 0x33cf0ce9
- (void)mergePropertiesWithOthers:(id)others;	// 0x33cf11f1
- (void)mergePropertiesWithSubtreeRange:(NSRange)subtreeRange properties:(id)properties;	// 0x33cf132d
- (void)mergeSubtreesWithOthers:(id)others;	// 0x33cf1099
- (void)mergeSymbolsWithOthers:(id)others;	// 0x33cf1165
// declared property getter: - (id)refList;	// 0x33cf2679
// declared property getter: - (id)refs;	// 0x33cf27b1
- (void)setAttributeSet:(id)set;	// 0x33cf2545
- (void)setGeometrySet:(id)set;	// 0x33cf2281
// declared property setter: - (void)setRefs:(id)refs;	// 0x33cf27c1
// declared property setter: - (void)setSymbols:(id)symbols;	// 0x33cf278d
- (void)setTarget:(id)target forReference:(id)reference;	// 0x33cf0e35
// declared property setter: - (void)setVariable:(BOOL)variable;	// 0x33cf2701
- (int)shapeHash;	// 0x33cf1da5
- (id)simpleName;	// 0x33cefe3d
- (int)subtreeHash;	// 0x33cf1fe5
- (int)symbolHash:(id)hash;	// 0x33cf1a1d
- (id)symbolValues:(id)values withSymbols:(id)symbols;	// 0x33cf17f5
// declared property getter: - (id)symbols;	// 0x33cf277d
- (void)uniquifyName;	// 0x33cf0071
- (BOOL)usesSymbols;	// 0x33cf154d
// declared property getter: - (BOOL)variable;	// 0x33cf26b1
@end


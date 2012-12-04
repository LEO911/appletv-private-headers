/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSCopying.h"
#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSIndexPath;

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying> {
	NSString *_elementKind;	// 4 = 0x4
	NSString *_reuseIdentifer;	// 8 = 0x8
	CGPoint _center;	// 12 = 0xc
	CGSize _size;	// 20 = 0x14
	CGRect _frame;	// 28 = 0x1c
	float _alpha;	// 44 = 0x2c
	CATransform3D _transform;	// 48 = 0x30
	NSIndexPath *_indexPath;	// 112 = 0x70
	struct {
		unsigned clearsSelectionOnViewWillAppear : 1;
		unsigned insetsApplied : 1;
		unsigned adjustingInsets : 1;
	} _layoutFlags;	// 116 = 0x74
	int _zIndex;	// 120 = 0x78
}
@property(assign, nonatomic) float alpha;	// G=0x30cce0f1; S=0x30cce101; @synthesize=_alpha
@property(assign, nonatomic) CGPoint center;	// G=0x30cce05d; S=0x30ccd691; @synthesize=_center
@property(assign, nonatomic) CGRect frame;	// G=0x30ccd3f1; S=0x30ccd5a5; 
@property(assign, nonatomic, getter=isHidden) BOOL hidden;	// G=0x30ccd001; S=0x30cccfe1; 
@property(retain, nonatomic) NSIndexPath *indexPath;	// G=0x30ccd0bd; S=0x30cce131; @synthesize=_indexPath
@property(readonly, assign, nonatomic) unsigned representedElementCategory;	// G=0x30ccdfe9; 
@property(readonly, assign, nonatomic) NSString *representedElementKind;	// G=0x30cce00d; 
@property(assign, nonatomic) CGSize size;	// G=0x30cce075; S=0x30ccd619; @synthesize=_size
@property(assign, nonatomic) CATransform3D transform3D;	// G=0x30cce08d; S=0x30ccd71d; @synthesize=_transform
@property(assign, nonatomic) int zIndex;	// G=0x30cce111; S=0x30cce121; @synthesize=_zIndex
+ (id)layoutAttributesForCellWithIndexPath:(id)indexPath;	// 0x30ccccd5
+ (id)layoutAttributesForDecorationViewOfKind:(id)kind withIndexPath:(id)indexPath;	// 0x30cccde5
+ (id)layoutAttributesForSupplementaryViewOfKind:(id)kind withIndexPath:(id)indexPath;	// 0x30cccd65
- (id)init;	// 0x30ccce91
- (id)_elementKind;	// 0x30ccd059
- (BOOL)_isCell;	// 0x30ccdfa1
- (BOOL)_isDecorationView;	// 0x30ccdfb5
- (BOOL)_isEquivalentTo:(id)to;	// 0x30ccdc41
- (BOOL)_isSupplementaryView;	// 0x30ccdfc9
- (id)_reuseIdentifier;	// 0x30ccd0ad
- (void)_setElementKind:(id)kind;	// 0x30ccd015
- (void)_setReuseIdentifier:(id)identifier;	// 0x30ccd069
// declared property getter: - (float)alpha;	// 0x30cce0f1
// declared property getter: - (CGPoint)center;	// 0x30cce05d
- (id)copyWithZone:(NSZone *)zone;	// 0x30ccd13d
- (void)dealloc;	// 0x30cccf69
- (id)description;	// 0x30ccd88d
// declared property getter: - (CGRect)frame;	// 0x30ccd3f1
- (unsigned)hash;	// 0x30ccdf61
// declared property getter: - (id)indexPath;	// 0x30ccd0bd
- (id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)kind atIndexPath:(id)indexPath;	// 0x30ccd5a1
- (BOOL)isEqual:(id)equal;	// 0x30ccdba1
// declared property getter: - (BOOL)isHidden;	// 0x30ccd001
// declared property getter: - (unsigned)representedElementCategory;	// 0x30ccdfe9
// declared property getter: - (id)representedElementKind;	// 0x30cce00d
// declared property setter: - (void)setAlpha:(float)alpha;	// 0x30cce101
// declared property setter: - (void)setCenter:(CGPoint)center;	// 0x30ccd691
// declared property setter: - (void)setFrame:(CGRect)frame;	// 0x30ccd5a5
// declared property setter: - (void)setHidden:(BOOL)hidden;	// 0x30cccfe1
// declared property setter: - (void)setIndexPath:(id)path;	// 0x30cce131
// declared property setter: - (void)setSize:(CGSize)size;	// 0x30ccd619
// declared property setter: - (void)setTransform3D:(CATransform3D)d;	// 0x30ccd71d
// declared property setter: - (void)setZIndex:(int)index;	// 0x30cce121
// declared property getter: - (CGSize)size;	// 0x30cce075
// declared property getter: - (CATransform3D)transform3D;	// 0x30cce08d
// declared property getter: - (int)zIndex;	// 0x30cce111
@end

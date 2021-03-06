/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "CMDiagramMapper.h"

@class NSString, OADOrientedBounds;

@interface CMDiagramShapeMapper : CMDiagramMapper {
	int mChildCount;	// 88 = 0x58
	OADOrientedBounds *mDiagramShapeBounds;	// 92 = 0x5c
	NSString *mIdentifier;	// 96 = 0x60
	float mDefaultFontSize;	// 100 = 0x64
	int mMaxMappableTreeDepth;	// 104 = 0x68
	float mDefaultScale;	// 108 = 0x6c
}
- (id)initWithOddDiagram:(id)oddDiagram drawingContext:(id)context orientedBounds:(id)bounds identifier:(id)identifier parent:(id)parent;	// 0x349625e5
- (CGRect)circumscribedBounds;	// 0x349d89f5
- (float)defaultFontSize;	// 0x34965759
- (void)mapAt:(id)at withState:(id)state;	// 0x349628fd
- (void)mapChildrenAt:(id)at withState:(id)state;	// 0x349d8a15
- (void)setDefaultFonSize;	// 0x34963609
- (void)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index;	// 0x3496369d
- (float)setFonSizeForChildNode:(id)childNode atIndex:(unsigned)index level:(int)level;	// 0x349636c1
- (CGSize)sizeForNode:(id)node atIndex:(unsigned)index;	// 0x349c53c1
- (CGSize)textSizeForShapeSize:(CGSize)shapeSize;	// 0x34963d99
@end


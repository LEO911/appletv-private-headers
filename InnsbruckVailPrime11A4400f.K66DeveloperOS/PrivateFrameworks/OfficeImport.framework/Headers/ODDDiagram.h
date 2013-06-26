/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADDrawable.h"

@class ODDStyleDefinition, ODDColorTransform, ODDNodePoint;

@interface ODDDiagram : OADDrawable {
	ODDNodePoint *mDocumentPoint;	// 24 = 0x18
	ODDColorTransform *mColorTransform;	// 28 = 0x1c
	ODDStyleDefinition *mStyleDefinition;	// 32 = 0x20
}
@property(retain) id documentPoint;	// G=0x31850ead; S=0x3184fdcd; converted property
- (id)init;	// 0x3184df95
- (id)colorTransform;	// 0x3184e519
- (void)dealloc;	// 0x31854c61
// converted property getter: - (id)documentPoint;	// 0x31850ead
// converted property setter: - (void)setDocumentPoint:(id)point;	// 0x3184fdcd
- (void)setParentTextListStyle:(id)style;	// 0x31850afd
- (id)styleDefinition;	// 0x3184e241
@end

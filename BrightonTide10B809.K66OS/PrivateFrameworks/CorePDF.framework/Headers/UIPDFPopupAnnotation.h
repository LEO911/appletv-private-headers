/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "CorePDF-Structs.h"
#import "UIPDFAnnotation.h"


@interface UIPDFPopupAnnotation : UIPDFAnnotation {
	UIPDFAnnotation *parent;	// 72 = 0x48
	CGRect _adjustedBounds;	// 76 = 0x4c
}
@property(assign, nonatomic) CGRect adjustedBounds;	// G=0x33899d51; S=0x33899d75; @synthesize=_adjustedBounds
@property(assign, nonatomic) UIPDFAnnotation *parent;	// G=0x33899d31; S=0x33899d41; @synthesize
- (id)init;	// 0x33899c41
- (id)initWithAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x33899be5
// declared property getter: - (CGRect)adjustedBounds;	// 0x33899d51
- (int)annotationType;	// 0x33899d2d
- (CGRect)bounds;	// 0x33899cb9
// declared property getter: - (id)parent;	// 0x33899d31
// declared property setter: - (void)setAdjustedBounds:(CGRect)bounds;	// 0x33899d75
// declared property setter: - (void)setParent:(id)parent;	// 0x33899d41
- (Class)viewClass;	// 0x33899c9d
@end

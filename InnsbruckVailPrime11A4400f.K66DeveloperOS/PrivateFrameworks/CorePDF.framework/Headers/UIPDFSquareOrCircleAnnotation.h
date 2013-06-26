/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import "UIPDFAnnotation.h"
#import "CorePDF-Structs.h"


@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation {
	float _W;	// 80 = 0x50
	unsigned short _S;	// 84 = 0x54
	CGPDFArrayRef _D;	// 88 = 0x58
	float _SE;	// 92 = 0x5c
	float _I;	// 96 = 0x60
}
- (id)initWithAnnotationDictionary:(CGPDFDictionaryRef)annotationDictionary;	// 0x3063fd95
@end

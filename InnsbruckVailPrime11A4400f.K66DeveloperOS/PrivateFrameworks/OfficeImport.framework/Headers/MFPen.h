/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "MFObject.h"

@class TSUColor;

@interface MFPen : NSObject <MFObject> {
	int m_penStyle;	// 4 = 0x4
	int m_penWidth;	// 8 = 0x8
	TSUColor *m_colour;	// 12 = 0xc
	double *m_userStyleArray;	// 16 = 0x10
}
+ (id)pen;	// 0x317cf911
+ (id)penWithStyle:(int)style width:(int)width colour:(id)colour styleArray:(double *)array;	// 0x31903a15
- (id)init;	// 0x317cf949
- (id)initWithStyle:(int)style width:(int)width colour:(id)colour styleArray:(double *)array;	// 0x31765209
- (void)dealloc;	// 0x3176cbc1
- (id)getColor;	// 0x3176b855
- (int)getStyle;	// 0x3176b92d
- (int)getWidth;	// 0x31903a61
- (int)selectInto:(id)into;	// 0x31768f05
@end


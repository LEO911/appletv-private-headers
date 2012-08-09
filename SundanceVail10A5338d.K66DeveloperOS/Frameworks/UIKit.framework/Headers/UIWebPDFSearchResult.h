/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSArray, NSString;

@interface UIWebPDFSearchResult : NSObject {
	NSArray *rotationAngles;	// 4 = 0x4
	unsigned pageIndex;	// 8 = 0x8
	NSArray *strings;	// 12 = 0xc
	NSString *string;	// 16 = 0x10
	CGRect boundingBox;	// 20 = 0x14
	NSArray *rects;	// 36 = 0x24
}
@property(assign, nonatomic) CGRect boundingBox;	// G=0x30fe0689; S=0x30fe06ad; @synthesize
@property(assign, nonatomic) unsigned pageIndex;	// G=0x30fe0629; S=0x30fe0639; @synthesize
@property(retain, nonatomic) NSArray *rects;	// G=0x30fe06c9; S=0x30fe06d9; @synthesize
@property(retain, nonatomic) NSArray *rotationAngles;	// G=0x30fe0609; S=0x30fe0619; @synthesize
@property(retain, nonatomic) NSString *string;	// G=0x30fe0669; S=0x30fe0679; @synthesize
@property(retain, nonatomic) NSArray *strings;	// G=0x30fe0649; S=0x30fe0659; @synthesize
// declared property getter: - (CGRect)boundingBox;	// 0x30fe0689
// declared property getter: - (unsigned)pageIndex;	// 0x30fe0629
// declared property getter: - (id)rects;	// 0x30fe06c9
// declared property getter: - (id)rotationAngles;	// 0x30fe0609
// declared property setter: - (void)setBoundingBox:(CGRect)box;	// 0x30fe06ad
// declared property setter: - (void)setPageIndex:(unsigned)index;	// 0x30fe0639
// declared property setter: - (void)setRects:(id)rects;	// 0x30fe06d9
// declared property setter: - (void)setRotationAngles:(id)angles;	// 0x30fe0619
// declared property setter: - (void)setString:(id)string;	// 0x30fe0679
// declared property setter: - (void)setStrings:(id)strings;	// 0x30fe0659
// declared property getter: - (id)string;	// 0x30fe0669
// declared property getter: - (id)strings;	// 0x30fe0649
@end

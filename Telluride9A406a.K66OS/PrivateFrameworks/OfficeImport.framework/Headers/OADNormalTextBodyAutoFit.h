/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextBodyAutoFit.h"


__attribute__((visibility("hidden")))
@interface OADNormalTextBodyAutoFit : OADTextBodyAutoFit {
@private
	float mFontScalePercent;	// 8 = 0x8
	float mLineSpacingReductionPercent;	// 12 = 0xc
}
- (id)initWithFontScalePercent:(float)fontScalePercent lineSpacingReductionPercent:(float)percent;	// 0x329cb959
- (float)fontScalePercent;	// 0x32ac5741
- (unsigned)hash;	// 0x32ac5881
- (BOOL)isEqual:(id)equal;	// 0x32ac5799
- (float)lineSpacingReductionPercent;	// 0x32ac5751
@end

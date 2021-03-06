/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class PDSlideBase;

__attribute__((visibility("hidden")))
@interface PMSlideMapper : CMMapper {
@private
	PDSlideBase *mSlide;	// 8 = 0x8
	CGRect mRect;	// 12 = 0xc
}
- (id)initWithPDSlide:(id)pdslide slideRect:(CGRect)rect parent:(id)parent;	// 0x343fe021
- (id)defaultTheme;	// 0x3437953d
- (void)mapAt:(id)at withState:(id)state;	// 0x343fe081
- (void)mapBackgroundAt:(id)at recursive:(BOOL)recursive withState:(id)state;	// 0x343fe5f9
- (void)mapDrawablesAt:(id)at withState:(id)state;	// 0x343feeb9
- (void)mapMasterGraphicsAt:(id)at withState:(id)state;	// 0x343fed8d
- (void)mapMasterSlideAt:(id)at withState:(id)state;	// 0x343fe475
- (id)slideName;	// 0x3466c211
- (CGRect)slideRect;	// 0x3466c1ed
- (id)styleMatrix;	// 0x34542d2d
@end


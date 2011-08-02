/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"

@class OADParagraphProperties, CMStyle;

__attribute__((visibility("hidden")))
@interface PMBulletMapper : CMMapper {
@private
	OADParagraphProperties *mProperties;	// 8 = 0x8
	CMStyle *mStyle;	// 12 = 0xc
	int mFontSize;	// 16 = 0x10
}
+ (id)stringForIndex:(int)index withFormat:(int)format;	// 0x32c0e255
- (id)initWithOadProperties:(id)oadProperties fontSize:(int)size parent:(id)parent;	// 0x32b7fc61
- (id)bulletFontName;	// 0x32b97cf9
- (int)bulletSize;	// 0x32b97b65
- (void)dealloc;	// 0x32b80025
- (id)makeBulletWithListState:(id)listState;	// 0x32b979d1
- (void)mapAt:(id)at withState:(id)state;	// 0x32b7fce1
- (void)mapBulletColorWithState:(id)state;	// 0x32b97e5d
@end

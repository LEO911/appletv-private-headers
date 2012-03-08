/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class OADOrientedBounds, OADFill;

__attribute__((visibility("hidden")))
@interface CMImageFillMapper : CMMapper {
@private
	OADFill *mFill;	// 8 = 0x8
	OADOrientedBounds *mBounds;	// 12 = 0xc
}
- (id)initWithOadFill:(id)oadFill bounds:(id)bounds parent:(id)parent;	// 0x328a7add
- (id)blipAtIndex:(unsigned)index;	// 0x328e3a7d
- (id)convertMetafileToPdf:(id)pdf state:(id)state;	// 0x32968431
- (BOOL)isCropped;	// 0x328e36ed
- (id)mainSubBlip;	// 0x328e39d1
- (void)mapAt:(id)at withState:(id)state;	// 0x32b12229
- (id)mapImageFill:(id)fill withState:(id)state;	// 0x328e3865
- (void)mapImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x32998d6d
- (void)mapNonImageFillAt:(id)at toStyle:(id)style withState:(id)state;	// 0x328a7b31
- (CGRect)uncroppedBox;	// 0x328e3fa9
@end

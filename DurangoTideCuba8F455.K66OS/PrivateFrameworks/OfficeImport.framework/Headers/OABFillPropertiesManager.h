/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABFillPropertiesManager.h"
#import "OABColorPropertiesManager.h"
#import <NSObject.h> // Unknown library

@protocol OABPropertiesManager;

@protocol OABFillPropertiesManager <OABColorPropertiesManager>
- (long)fillAngle;
- (long)fillBgAlpha;
- (unsigned long)fillBlipID;
- (id)fillBlipName;
- (long)fillFgAlpha;
- (long)fillFocus;
- (long)fillFocusBottom;
- (long)fillFocusLeft;
- (long)fillFocusRight;
- (long)fillFocusTop;
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;
- (int)fillType;
@end

__attribute__((visibility("hidden")))
@interface OABFillPropertiesManager : NSObject <OABFillPropertiesManager> {
@private
	EshFill *mFill;	// 4 = 0x4
	int mShapeType;	// 8 = 0x8
	id<OABPropertiesManager> mMasterManager;	// 12 = 0xc
}
- (id)initWithFill:(const EshFill *)fill shapeType:(int)type masterShape:(EshShape *)shape;	// 0x32b85b61
- (void)dealloc;	// 0x32b8e241
- (long)fillAngle;	// 0x32b8ebf9
- (long)fillBgAlpha;	// 0x32b8f011
- (EshColor)fillBgColor;	// 0x32b8ed2d
- (EshBlip *)fillBlipDataReference;	// 0x32b8f871
- (unsigned long)fillBlipID;	// 0x32b8f6a9
- (id)fillBlipName;	// 0x32b8f729
- (long)fillFgAlpha;	// 0x32b8efad
- (EshColor)fillFgColor;	// 0x32b8ecc1
- (long)fillFocus;	// 0x32b8ec5d
- (long)fillFocusBottom;	// 0x32c1a665
- (long)fillFocusLeft;	// 0x32c1a545
- (long)fillFocusRight;	// 0x32c1a605
- (long)fillFocusTop;	// 0x32c1a5a5
- (const EshTablePropVal<EshGradientStop> *)fillGradientColors;	// 0x32b8ed99
- (int)fillType;	// 0x32b8642d
- (BOOL)isFilled;	// 0x32b864d9
- (BOOL)isStroked;	// 0x32d2fc8d
- (EshColor)shadowColor;	// 0x32d2fc91
- (EshColor)strokeBgColor;	// 0x32d2fcb5
- (EshColor)strokeFgColor;	// 0x32d2fcd9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OABShapeBaseManager.h"
#import "OABPropertiesManager.h"


__attribute__((visibility("hidden")))
@interface OABShapeManager : OABShapeBaseManager <OABPropertiesManager> {
@private
	EshShape *mShape;	// 20 = 0x14
}
- (id)initWithShape:(EshShape *)shape;	// 0x32945825
- (id)initWithShape:(EshShape *)shape masterShape:(EshShape *)shape2;	// 0x3273ed51
- (BOOL)hidden;	// 0x327b7505
- (BOOL)isFillOK;	// 0x327fb179
- (BOOL)isFilled;	// 0x3273f8c9
- (BOOL)isShadowOK;	// 0x328819a1
- (BOOL)isShadowed;	// 0x327b1435
- (BOOL)isStrokeOK;	// 0x327fad8d
- (BOOL)isStroked;	// 0x327b0755
- (BOOL)isTextPath;	// 0x327aeab5
- (BOOL)textPathBold;	// 0x328b3b15
- (id)textPathFontFamily;	// 0x328b39e9
- (long)textPathFontSize;	// 0x328b3aa1
- (BOOL)textPathItalic;	// 0x328b3b89
- (BOOL)textPathSmallcaps;	// 0x328b3bfd
- (BOOL)textPathStrikethrough;	// 0x32a30c21
- (int)textPathTextAlignment;	// 0x328b3499
- (BOOL)textPathUnderline;	// 0x32a30c71
- (id)textPathUnicodeString;	// 0x328b3521
@end


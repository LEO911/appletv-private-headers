/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import "GQDPath.h"


@interface GQDBezierPath : GQDPath <GQDNameMappable> {
	CGPathRef mPath;	// 8 = 0x8
	char *mPathStr;	// 12 = 0xc
	BOOL mHasVFlip;	// 16 = 0x10
	BOOL mVFlip;	// 17 = 0x11
	BOOL mHasHFlip;	// 18 = 0x12
	BOOL mHFlip;	// 19 = 0x13
}
+ (CFStringRef)createCFStringFromPath:(CGPathRef)path;	// 0x35073399
+ (CGPathRef)createPathFromCString:(const char *)cstring;	// 0x35073509
+ (const StateSpec *)stateForReading;	// 0x35072f79
- (id)initWithPathString:(const char *)pathString;	// 0x35072f85
- (CGPathRef)createBezierPath;	// 0x3507333d
- (void)dealloc;	// 0x35073001
- (BOOL)hasHorizontalFlip;	// 0x35073369
- (BOOL)hasVerticalFlip;	// 0x35073359
- (BOOL)horizontalFlip;	// 0x35073389
- (BOOL)isRectangular;	// 0x35073069
- (CGPathRef)path;	// 0x350732cd
- (char *)pathStr;	// 0x3507332d
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x35073495
- (BOOL)verticalFlip;	// 0x35073379
@end


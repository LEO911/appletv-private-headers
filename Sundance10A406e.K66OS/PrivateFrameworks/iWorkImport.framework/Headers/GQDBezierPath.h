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
+ (CFStringRef)createCFStringFromPath:(CGPathRef)path;	// 0x32448f79
+ (CGPathRef)createPathFromCString:(const char *)cstring;	// 0x324490e9
+ (const StateSpec *)stateForReading;	// 0x32448b59
- (id)initWithPathString:(const char *)pathString;	// 0x32448b65
- (CGPathRef)createBezierPath;	// 0x32448f1d
- (void)dealloc;	// 0x32448be1
- (BOOL)hasHorizontalFlip;	// 0x32448f49
- (BOOL)hasVerticalFlip;	// 0x32448f39
- (BOOL)horizontalFlip;	// 0x32448f69
- (BOOL)isRectangular;	// 0x32448c49
- (CGPathRef)path;	// 0x32448ead
- (char *)pathStr;	// 0x32448f0d
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x32449075
- (BOOL)verticalFlip;	// 0x32448f59
@end


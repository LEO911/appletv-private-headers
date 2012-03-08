/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class NSAffineTransform;
@protocol MFDeviceDriver;

__attribute__((visibility("hidden")))
@interface MFTransform : NSObject <NSCopying> {
@private
	NSAffineTransform *m_world;	// 4 = 0x4
	CGPoint m_windowOrg;	// 8 = 0x8
	CGPoint m_windowExt;	// 16 = 0x10
	CGPoint m_viewportOrg;	// 24 = 0x18
	CGPoint m_viewportExt;	// 32 = 0x20
	NSAffineTransform *m_combinedTransform;	// 40 = 0x28
	int m_mapMode;	// 44 = 0x2c
	NSObject<MFDeviceDriver> *m_deviceDriver;	// 48 = 0x30
}
- (id)initWithDriver:(id)driver;	// 0x351bc3f1
- (CGPoint)DPtoLP:(CGPoint)lp;	// 0x353ee3ed
- (CGPoint)LPtoDP:(CGPoint)dp;	// 0x353ee3b5
- (id)copyWithZone:(NSZone *)zone;	// 0x351c2489
- (void)dealloc;	// 0x351b7fa9
- (int)getMapMode;	// 0x351c27dd
- (id)getTransformMatrix;	// 0x351c278d
- (CGPoint)getViewportExtent;	// 0x351c2761
- (CGPoint)getViewportOrg;	// 0x351c2735
- (CGPoint)getWindowExtent;	// 0x351c2709
- (CGPoint)getWindowOrg;	// 0x351c26dd
- (id)getWorldMatrix;	// 0x351c268d
- (BOOL)isUpsideDown;	// 0x353ee5d1
- (int)modifyWorldTransform:(const CGAffineTransform *)transform :(int)arg2;	// 0x352e8d75
- (int)offsetViewportOrg:(int)org :(int)arg2;	// 0x353ee489
- (int)offsetWindowOrg:(int)org :(int)arg2;	// 0x353ee4d9
- (int)scaleViewportExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x352717e1
- (int)scaleWindowExt:(int)ext :(int)arg2 :(int)arg3 :(int)arg4;	// 0x353ee529
- (int)setMapMode:(int)mode;	// 0x351bd769
- (void)setTransformMatrix:(id)matrix;	// 0x351c279d
- (void)setViewportExt:(CGPoint)ext;	// 0x351c2779
- (int)setViewportExt:(int)ext :(int)arg2;	// 0x351bdd45
- (void)setViewportOrg:(CGPoint)org;	// 0x351c274d
- (int)setViewportOrg:(int)org :(int)arg2;	// 0x351bdcc9
- (void)setWindowExt:(CGPoint)ext;	// 0x351c2721
- (int)setWindowExt:(int)ext :(int)arg2;	// 0x351bdc19
- (void)setWindowOrg:(CGPoint)org;	// 0x351c26f5
- (int)setWindowOrg:(int)org :(int)arg2;	// 0x351bd895
- (void)setWorldMatrix:(id)matrix;	// 0x351c269d
- (int)setWorldTransform:(const CGAffineTransform *)transform;	// 0x35315361
- (int)updateTransform;	// 0x351bd8d1
@end

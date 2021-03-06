/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import </libobjc.A.h>
#import "OfficeImport-Structs.h"


@interface MFPGraphicsState : NSObject {
	CGAffineTransform mPageTransform;	// 4 = 0x4
	CGAffineTransform mWorldTransform;	// 28 = 0x1c
}
@property(assign) CGAffineTransform pageTransform;	// G=0x3199b39d; S=0x3199b3bd; converted property
@property(assign) CGAffineTransform worldTransform;	// G=0x3199b495; S=0x3199b4b5; converted property
- (id)initWithDefaults;	// 0x317cde41
- (id)initWithGraphicsState:(id)graphicsState;	// 0x3199b2ed
- (id).cxx_construct;	// 0x317cde3d
- (void)dealloc;	// 0x317d0589
- (void)multiplyWorldTransformBy:(CGAffineTransform)by order:(int)order;	// 0x3199b531
// converted property getter: - (CGAffineTransform)pageTransform;	// 0x3199b39d
- (void)removeTransform:(CGAffineTransform)transform;	// 0x3199b35d
// converted property setter: - (void)setPageTransform:(CGAffineTransform)transform;	// 0x3199b3bd
// converted property setter: - (void)setWorldTransform:(CGAffineTransform)transform;	// 0x3199b4b5
// converted property getter: - (CGAffineTransform)worldTransform;	// 0x3199b495
@end


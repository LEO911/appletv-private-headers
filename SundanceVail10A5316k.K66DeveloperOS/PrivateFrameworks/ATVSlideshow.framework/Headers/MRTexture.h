/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"

@class EAGLContext;

@interface MRTexture : NSObject {
	EAGLContext *mParentGLContext;	// 4 = 0x4
	unsigned long mWidth;	// 8 = 0x8
	unsigned long mHeight;	// 12 = 0xc
	unsigned mTextureName;	// 16 = 0x10
	unsigned mTextureTarget;	// 20 = 0x14
	unsigned long mPixelFormat;	// 24 = 0x18
	double mTimestamp;	// 28 = 0x1c
	unsigned mFramebufferName;	// 36 = 0x24
	EAGLContext *mGLContext;	// 40 = 0x28
	int mMinFilter;	// 44 = 0x2c
	int mMagFilter;	// 48 = 0x30
	int mWrapS;	// 52 = 0x34
	int mWrapT;	// 56 = 0x38
	float mBorderColor[4];	// 60 = 0x3c
}
@property(readonly, assign, nonatomic) unsigned framebufferName;	// G=0x36517631; @synthesize=mFramebufferName
@property(readonly, assign, nonatomic) EAGLContext *glContext;	// G=0x36517611; @synthesize=mGLContext
@property(readonly, assign, nonatomic) unsigned long height;	// G=0x365175b5; @synthesize=mHeight
@property(assign, nonatomic) int magFilter;	// G=0x36517661; S=0x36517671; @synthesize=mMagFilter
@property(assign, nonatomic) int minFilter;	// G=0x36517641; S=0x36517651; @synthesize=mMinFilter
@property(readonly, assign, nonatomic) unsigned long pixelFormat;	// G=0x36517621; @synthesize=mPixelFormat
@property(readonly, assign, nonatomic) unsigned textureName;	// G=0x365175c5; @synthesize=mTextureName
@property(readonly, assign, nonatomic) unsigned textureTarget;	// G=0x365175d5; @synthesize=mTextureTarget
@property(assign, nonatomic) double timestamp;	// G=0x365175e5; S=0x365175fd; @synthesize=mTimestamp
@property(readonly, assign, nonatomic) unsigned long width;	// G=0x365175a5; @synthesize=mWidth
@property(assign, nonatomic) int wrapS;	// G=0x36517681; S=0x36517691; @synthesize=mWrapS
@property(assign, nonatomic) int wrapT;	// G=0x365176a1; S=0x365176b1; @synthesize=mWrapT
- (id)initWithData:(void *)data width:(unsigned long)width height:(unsigned long)height rowBytes:(unsigned long)bytes inGLContext:(id)glcontext options:(const XXStruct_Y6T2PB *)options;	// 0x3651694d
- (id)initWithDatas:(void **)datas dataCount:(unsigned)count width:(unsigned long)width height:(unsigned long)height rowBytes:(unsigned long)bytes inGLContext:(id)glcontext options:(const XXStruct_Y6T2PB *)options;	// 0x36516d75
- (id)initWithIOSurface:(IOSurfaceRef)iosurface inGLContext:(id)glcontext options:(const XXStruct_Y6T2PB *)options;	// 0x36516615
- (id)initWithSize:(CGSize)size inGLContext:(id)glcontext options:(const XXStruct_Y6T2PB *)options;	// 0x365161a5
- (void)cleanup;	// 0x3651722d
- (void)dealloc;	// 0x365171ad
- (void)finalize;	// 0x365171ed
// declared property getter: - (unsigned)framebufferName;	// 0x36517631
// declared property getter: - (id)glContext;	// 0x36517611
// declared property getter: - (unsigned long)height;	// 0x365175b5
// declared property getter: - (int)magFilter;	// 0x36517661
// declared property getter: - (int)minFilter;	// 0x36517641
// declared property getter: - (unsigned long)pixelFormat;	// 0x36517621
// declared property setter: - (void)setMagFilter:(int)filter;	// 0x36517671
// declared property setter: - (void)setMinFilter:(int)filter;	// 0x36517651
// declared property setter: - (void)setTimestamp:(double)timestamp;	// 0x365175fd
// declared property setter: - (void)setWrapS:(int)s;	// 0x36517691
// declared property setter: - (void)setWrapT:(int)t;	// 0x365176b1
// declared property getter: - (unsigned)textureName;	// 0x365175c5
// declared property getter: - (unsigned)textureTarget;	// 0x365175d5
// declared property getter: - (double)timestamp;	// 0x365175e5
- (void)uploadData:(void *)data rowBytes:(unsigned)bytes toRect:(CGRect)rect;	// 0x3651744d
// declared property getter: - (unsigned long)width;	// 0x365175a5
// declared property getter: - (int)wrapS;	// 0x36517681
// declared property getter: - (int)wrapT;	// 0x365176a1
@end

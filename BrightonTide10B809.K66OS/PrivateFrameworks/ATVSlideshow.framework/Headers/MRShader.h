/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSDictionary, MRContext;

@interface MRShader : NSObject {
	NSString *mShaderID;	// 4 = 0x4
	NSString *mShaderKey;	// 8 = 0x8
	NSDictionary *mDescription;	// 12 = 0xc
	MRContext *mContext;	// 16 = 0x10
	unsigned mProgram;	// 20 = 0x14
	unsigned mVertexShader;	// 24 = 0x18
	unsigned mFragmentShader;	// 28 = 0x1c
	MRContext *mUseContext;	// 32 = 0x20
	float mModelViewProjectionMatrix[16];	// 36 = 0x24
	float mNormal[3];	// 100 = 0x64
	float mTextureMatrix[4][16];	// 112 = 0x70
	float mForeColor[4];	// 368 = 0x170
	int mModelViewProjectionMatrixLocation;	// 384 = 0x180
	int mNormalLocation;	// 388 = 0x184
	int mTextureMatrixLocation[4];	// 392 = 0x188
	int mForeColorLocation;	// 408 = 0x198
	NSMutableDictionary *mUniformLocations;	// 412 = 0x19c
	NSMutableDictionary *mUniforms;	// 416 = 0x1a0
	NSMutableDictionary *mAttributeLocations;	// 420 = 0x1a4
	BOOL mTextureUnitsAreBound;	// 424 = 0x1a8
}
@property(readonly, assign, nonatomic) unsigned program;	// G=0x33225eed; @synthesize=mProgram
@property(readonly, assign) NSString *shaderID;	// G=0x33225ec5; @synthesize=mShaderID
@property(readonly, assign) NSString *shaderKey;	// G=0x33225ed9; @synthesize=mShaderKey
@property(assign) BOOL textureUnitsAreBound;	// G=0x33225efd; S=0x33225f15; @synthesize=mTextureUnitsAreBound
@property(retain) MRContext *useContext;	// G=0x33224fdd; S=0x33224fed; 
- (id)initWithShaderID:(id)shaderID shaderKey:(id)key description:(id)description vertexShader:(unsigned)shader andFragmentShader:(unsigned)shader5 inContext:(id)context;	// 0x33224b09
- (int)_locationForUniform:(id)uniform;	// 0x33225385
- (BOOL)caresAboutForeColor;	// 0x332252a1
- (BOOL)caresAboutNormal;	// 0x332250f1
- (void)dealloc;	// 0x33224ded
- (int)locationForAttribute:(id)attribute;	// 0x33225e11
// declared property getter: - (unsigned)program;	// 0x33225eed
- (void)setForeColor:(const float *)color;	// 0x332252e5
- (void)setModelViewProjectionMatrix:(float [16])matrix;	// 0x33225051
- (void)setNormal:(float)normal :(float)arg2 :(float)arg3;	// 0x33225135
- (void)setTextureMatrix:(float [16])matrix onTextureUnit:(unsigned)unit;	// 0x332251e5
// declared property setter: - (void)setTextureUnitsAreBound:(BOOL)bound;	// 0x33225f15
- (void)setUniform:(id)uniform forKey:(id)key;	// 0x33225c11
- (void)setUniformFloat:(float)aFloat forKey:(id)key;	// 0x3322553d
- (void)setUniformInt:(int)int forKey:(id)key;	// 0x33225439
- (void)setUniformMat3:(float [16])a3 forKey:(id)key;	// 0x33225ac9
- (void)setUniformMat4:(float [16])a4 forKey:(id)key;	// 0x33225b6d
- (void)setUniformVec2:(float)a2 :(float)arg2 forKey:(id)key;	// 0x3322565d
- (void)setUniformVec3:(float)a3 :(float)arg2 :(float)arg3 forKey:(id)key;	// 0x332257b9
- (void)setUniformVec4:(float)a4 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)key;	// 0x33225941
// declared property setter: - (void)setUseContext:(id)context;	// 0x33224fed
// declared property getter: - (id)shaderID;	// 0x33225ec5
// declared property getter: - (id)shaderKey;	// 0x33225ed9
// declared property getter: - (BOOL)textureUnitsAreBound;	// 0x33225efd
// declared property getter: - (id)useContext;	// 0x33224fdd
@end

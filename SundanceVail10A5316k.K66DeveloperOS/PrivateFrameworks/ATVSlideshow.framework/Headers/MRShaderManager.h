/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library

@class NSLock, NSMutableDictionary;

@interface MRShaderManager : NSObject {
	NSMutableDictionary *mGLShadersPerContext;	// 4 = 0x4
	NSMutableDictionary *mShadersPerContext;	// 8 = 0x8
	NSMutableDictionary *mShaderDescriptions;	// 12 = 0xc
	NSLock *mGLShadersPerContextLock;	// 16 = 0x10
	NSLock *mShadersPerContextLock;	// 20 = 0x14
}
+ (void)initialize;	// 0x3650e509
+ (id)shaderKeyForShaderID:(id)shaderID andArguments:(id)arguments;	// 0x3650fd75
+ (id)sharedManager;	// 0x3650e571
- (id)init;	// 0x3650e581
- (unsigned)_glShaderForID:(id)anId inBaseContext:(id)baseContext isFragmentShader:(BOOL)shader withArguments:(id)arguments;	// 0x3650f3f5
- (void)cleanup;	// 0x3650ef05
- (void)dealloc;	// 0x3650ee85
- (void)finalize;	// 0x3650eec5
- (void)forgetContext:(id)context;	// 0x3650f099
- (void)registerShaderWithFragmentShaderSource:(id)fragmentShaderSource andVertexShaderName:(id)name forShaderID:(id)shaderID;	// 0x3650ff85
- (void)registerVertexShaderWithVertexShaderSource:(id)vertexShaderSource forShaderID:(id)shaderID;	// 0x3650fef5
- (void)releaseResources;	// 0x3650ef81
- (id)shaderForShaderID:(id)shaderID inContext:(id)context withArguments:(id)arguments;	// 0x3650fa6d
@end

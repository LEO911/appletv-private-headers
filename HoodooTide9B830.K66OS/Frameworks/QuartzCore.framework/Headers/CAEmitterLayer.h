/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "CALayer.h"

@class NSString, NSArray;

@interface CAEmitterLayer : CALayer {
}
@property(assign) float birthRate;	// G=0x36cd19ad; S=0x36cd19a5; 
@property(copy) NSArray *emitterCells;	// G=0x36cd19bd; S=0x36cd19b5; 
@property(assign) float emitterDepth;	// G=0x36cd1935; S=0x36cd192d; 
@property(copy) NSString *emitterMode;	// G=0x36cd197d; S=0x36cd1975; 
@property(assign) CGPoint emitterPosition;	// G=0x36cd1969; S=0x36cd1961; 
@property(copy) NSString *emitterShape;	// G=0x36cd198d; S=0x36cd1985; 
@property(assign) CGSize emitterSize;	// G=0x36cd1945; S=0x36cd193d; 
@property(assign) float emitterZPosition;	// G=0x36cd1959; S=0x36cd1951; 
@property(assign) float lifetime;	// G=0x36cd199d; S=0x36cd1995; 
@property(assign) BOOL preservesDepth;	// G=0x36cd18dd; S=0x36cd18d5; 
@property(copy) NSString *renderMode;	// G=0x36cd18f5; S=0x36cd18ed; 
@property(assign) float scale;	// G=0x36cd1915; S=0x36cd190d; 
@property(assign) unsigned seed;	// G=0x36cd18cd; S=0x36cd18c5; 
@property(assign) float spin;	// G=0x36cd1905; S=0x36cd18fd; 
@property(assign) float velocity;	// G=0x36cd1925; S=0x36cd191d; 
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)observers;	// 0x36cd1789
+ (id)defaultValueForKey:(id)key;	// 0x36cd17e1
- (Layer *)_copyRenderLayer:(Transaction *)layer layerFlags:(unsigned)flags commitFlags:(unsigned *)flags3;	// 0x36cd1a11
- (bool)_renderLayerDefinesProperty:(unsigned)property;	// 0x36cd19c5
// declared property getter: - (float)birthRate;	// 0x36cd19ad
- (void)didChangeValueForKey:(id)key;	// 0x36cd1729
// declared property getter: - (id)emitterCells;	// 0x36cd19bd
// declared property getter: - (float)emitterDepth;	// 0x36cd1935
// declared property getter: - (id)emitterMode;	// 0x36cd197d
// declared property getter: - (CGPoint)emitterPosition;	// 0x36cd1969
// declared property getter: - (id)emitterShape;	// 0x36cd198d
// declared property getter: - (CGSize)emitterSize;	// 0x36cd1945
// declared property getter: - (float)emitterZPosition;	// 0x36cd1959
- (id)implicitAnimationForKeyPath:(id)keyPath;	// 0x36cd1d0d
// declared property getter: - (float)lifetime;	// 0x36cd199d
// declared property getter: - (BOOL)preservesDepth;	// 0x36cd18dd
// declared property getter: - (id)renderMode;	// 0x36cd18f5
// declared property getter: - (float)scale;	// 0x36cd1915
// declared property getter: - (unsigned)seed;	// 0x36cd18cd
// declared property setter: - (void)setBirthRate:(float)rate;	// 0x36cd19a5
// declared property setter: - (void)setEmitterCells:(id)cells;	// 0x36cd19b5
// declared property setter: - (void)setEmitterDepth:(float)depth;	// 0x36cd192d
// declared property setter: - (void)setEmitterMode:(id)mode;	// 0x36cd1975
// declared property setter: - (void)setEmitterPosition:(CGPoint)position;	// 0x36cd1961
// declared property setter: - (void)setEmitterShape:(id)shape;	// 0x36cd1985
// declared property setter: - (void)setEmitterSize:(CGSize)size;	// 0x36cd193d
// declared property setter: - (void)setEmitterZPosition:(float)position;	// 0x36cd1951
// declared property setter: - (void)setLifetime:(float)lifetime;	// 0x36cd1995
// declared property setter: - (void)setPreservesDepth:(BOOL)depth;	// 0x36cd18d5
// declared property setter: - (void)setRenderMode:(id)mode;	// 0x36cd18ed
// declared property setter: - (void)setScale:(float)scale;	// 0x36cd190d
// declared property setter: - (void)setSeed:(unsigned)seed;	// 0x36cd18c5
// declared property setter: - (void)setSpin:(float)spin;	// 0x36cd18fd
// declared property setter: - (void)setVelocity:(float)velocity;	// 0x36cd191d
// declared property getter: - (float)spin;	// 0x36cd1905
// declared property getter: - (float)velocity;	// 0x36cd1925
@end


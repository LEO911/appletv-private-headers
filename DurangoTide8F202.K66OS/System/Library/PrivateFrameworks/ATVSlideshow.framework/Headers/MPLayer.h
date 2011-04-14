/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "NSCoding.h"
#import "ATVSlideshow-Structs.h"
#import "NSCopying.h"
#import "MPActionSupport.h"
#import "MPFilterSupport.h"
#import "MPAnimationSupport.h"
#import "MPAudioSupport.h"
#import "MPActionableSupport.h"
#import "MPGeometrySupport.h"
#import <NSObject.h> // Unknown library
#import "MPActionableSupportInternal.h"
#import "MPLayerableSupport.h"
#import "MPTimingSupport.h"

@class MPAudioPlaylist, MCMontage, MCPlugParallel, NSMutableDictionary, NSMutableArray, MPLayerInternal;

@interface MPLayer : NSObject <MPActionableSupportInternal, NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport, MPAudioSupport, MPActionableSupport, MPLayerableSupport, MPGeometrySupport, MPTimingSupport, MPActionSupport> {
@private
	MCPlugParallel *_plug;	// 4 = 0x4
	NSMutableDictionary *_attributes;	// 8 = 0x8
	NSMutableArray *_effectContainers;	// 12 = 0xc
	NSMutableArray *_filters;	// 16 = 0x10
	NSMutableDictionary *_animationPaths;	// 20 = 0x14
	NSMutableDictionary *_actions;	// 24 = 0x18
	MPAudioPlaylist *_audioPlaylist;	// 28 = 0x1c
	MCMontage *_montage;	// 32 = 0x20
	id _parent;	// 36 = 0x24
	MPLayerInternal *_internal;	// 40 = 0x28
	BOOL _skipTimeCalculations;	// 44 = 0x2c
}
@property(readonly, retain) NSMutableDictionary *actions;	// G=0x31464b85; converted property
@property(readonly, retain) NSMutableDictionary *animationPaths;	// G=0x31463b35; converted property
@property(retain) MPAudioPlaylist *audioPlaylist;	// G=0x3146481d; S=0x3146482d; converted property
@property(assign) int audioPriority;	// G=0x31464831; S=0x31464851; converted property
@property(assign) double duration;	// G=0x31464519; S=0x31464539; converted property
@property(readonly, retain) NSMutableArray *effectContainers;	// G=0x31463469; converted property
@property(readonly, retain) NSMutableArray *filters;	// G=0x31463561; converted property
@property(assign) float height;	// G=0x31466a1d; S=0x31466a41; converted property
@property(assign) BOOL isAudioLayer;	// G=0x314649f9; S=0x31464a19; converted property
@property(retain) id layerID;	// G=0x31464af9; S=0x31464ad9; converted property
@property(retain) MCMontage *montage;	// G=0x31464e2d; S=0x31466105; converted property
@property(assign) double numberOfLoops;	// G=0x314648f5; S=0x31464915; converted property
@property(assign) float opacity;	// G=0x31463d61; S=0x31463d81; converted property
@property(retain) id parent;	// G=0x3146442d; S=0x314660b1; converted property
@property(assign) double phaseInDuration;	// G=0x31464645; S=0x31464665; converted property
@property(assign) double phaseOutDuration;	// G=0x31464731; S=0x31464751; converted property
@property(retain) MCPlugParallel *plug;	// G=0x31464e1d; S=0x314659e1; converted property
@property(assign) CGPoint position;	// G=0x31463e2d; S=0x31463e4d; converted property
@property(assign) float rotationAngle;	// G=0x31463fdd; S=0x31463ffd; converted property
@property(retain) id scriptingAnimations;	// G=0x31466abd; S=0x31466e59; converted property
@property(assign) CGSize size;	// G=0x314640a9; S=0x314640c9; converted property
@property(assign) BOOL skipTimeCalculations;	// G=0x3146615d; S=0x3146616d; converted property
@property(assign) double timeIn;	// G=0x3146443d; S=0x3146445d; converted property
@property(retain) id title;	// G=0x314633c5; S=0x314633e5; converted property
@property(assign) float width;	// G=0x31466a6d; S=0x31466a91; converted property
@property(assign) float xPosition;	// G=0x3146697d; S=0x314669a1; converted property
@property(assign) float xRotationAngle;	// G=0x3146418d; S=0x314641ad; converted property
@property(assign) float yPosition;	// G=0x314669cd; S=0x314669f1; converted property
@property(assign) float yRotationAngle;	// G=0x31464259; S=0x31464279; converted property
@property(assign) int zIndex;	// G=0x31464325; S=0x31464361; converted property
@property(assign) float zPosition;	// G=0x31463f11; S=0x31463f31; converted property
+ (id)animatedLayer;	// 0x31461b45
+ (BOOL)automaticallyNotifiesObserversForKey:(id)key;	// 0x31461aa1
+ (id)effectLayer;	// 0x31461b81
+ (id)layer;	// 0x31461acd
+ (id)sequentialLayer;	// 0x31461b09
- (id)init;	// 0x31461bbd
- (id)initWithCoder:(id)coder;	// 0x314626fd
- (id)action;	// 0x3146513d
- (id)actionForKey:(id)key;	// 0x31464b95
// converted property getter: - (id)actions;	// 0x31464b85
- (void)addEffectContainer:(id)container;	// 0x31463479
- (void)addEffectContainers:(id)containers;	// 0x314634c9
- (void)addFilter:(id)filter;	// 0x31463571
- (void)addFilters:(id)filters;	// 0x314635c1
- (id)animationPathForKey:(id)key;	// 0x31463b45
// converted property getter: - (id)animationPaths;	// 0x31463b35
// converted property getter: - (id)audioPlaylist;	// 0x3146481d
// converted property getter: - (int)audioPriority;	// 0x31464831
- (void)cleanup;	// 0x314658e9
- (void)configureActions;	// 0x31466661
- (void)copyActions:(id)actions;	// 0x314657c5
- (void)copyAnimationPaths:(id)paths;	// 0x314656e9
- (void)copyAudioPlaylist:(id)playlist;	// 0x314658a1
- (void)copyEffectContainers:(id)containers;	// 0x314654f9
- (void)copyFilters:(id)filters;	// 0x314655f1
- (void)copyStruct:(id)aStruct;	// 0x314651c9
- (id)copyWithZone:(NSZone *)zone;	// 0x314631bd
- (int)countOfEffectContainers;	// 0x3146672d
- (int)countOfFilters;	// 0x31466855
- (void)dealloc;	// 0x314632d9
- (id)description;	// 0x31461ed1
- (void)dump;	// 0x31464e3d
// converted property getter: - (double)duration;	// 0x31464519
// converted property getter: - (id)effectContainers;	// 0x31463469
- (void)encodeWithCoder:(id)coder;	// 0x31461ff5
// converted property getter: - (id)filters;	// 0x31463561
- (void)finalize;	// 0x314632a9
- (id)fullDebugLog;	// 0x31464e61
// converted property getter: - (float)height;	// 0x31466a1d
- (void)insertEffectContainers:(id)containers atIndex:(int)index;	// 0x31463501
- (void)insertFilters:(id)filters atIndex:(int)index;	// 0x314635f9
- (void)insertObject:(id)object inEffectContainersAtIndex:(int)index;	// 0x3146676d
- (void)insertObject:(id)object inFiltersAtIndex:(int)index;	// 0x31466895
// converted property getter: - (BOOL)isAudioLayer;	// 0x314649f9
// converted property getter: - (id)layerID;	// 0x31464af9
- (id)layerKey;	// 0x31464b19
// converted property getter: - (id)montage;	// 0x31464e2d
- (void)moveEffectContainersFromIndices:(id)indices toIndex:(int)index;	// 0x3146355d
- (void)moveFiltersFromIndices:(id)indices toIndex:(int)index;	// 0x31463a71
// converted property getter: - (double)numberOfLoops;	// 0x314648f5
- (id)objectID;	// 0x31465189
- (id)objectInEffectContainersAtIndex:(int)index;	// 0x3146674d
- (id)objectInFiltersAtIndex:(int)index;	// 0x31466875
// converted property getter: - (float)opacity;	// 0x31463d61
// converted property getter: - (id)parent;	// 0x3146442d
- (id)parentDocument;	// 0x31465095
// converted property getter: - (double)phaseInDuration;	// 0x31464645
// converted property getter: - (double)phaseOutDuration;	// 0x31464731
// converted property getter: - (id)plug;	// 0x31464e1d
- (id)plugID;	// 0x31465169
// converted property getter: - (CGPoint)position;	// 0x31463e2d
- (void)reconnectAllTransitions;	// 0x3146648d
- (void)reconnectTransitionForEffectContainerAtIndex:(int)index;	// 0x3146637d
- (void)recreateWithPlug:(id)plug;	// 0x31466159
- (void)removeActionForKey:(id)key;	// 0x31464d69
- (void)removeAllEffectContainers;	// 0x31463509
- (void)removeAllFilters;	// 0x31463a1d
- (void)removeAnimationPathForKey:(id)key;	// 0x31463c99
- (void)removeEffectContainersAtIndices:(id)indices;	// 0x31463505
- (void)removeFiltersAtIndices:(id)indices;	// 0x3146388d
- (void)removeObjectFromEffectContainersAtIndex:(int)index;	// 0x314667a5
- (void)removeObjectFromFiltersAtIndex:(int)index;	// 0x314668cd
- (void)replaceObjectInEffectContainersAtIndex:(int)index withObject:(id)object;	// 0x314667d9
- (void)replaceObjectInFiltersAtIndex:(int)index withObject:(id)object;	// 0x31466901
- (void)resetStartTimes;	// 0x31466555
// converted property getter: - (float)rotationAngle;	// 0x31463fdd
// converted property getter: - (id)scriptingAnimations;	// 0x31466abd
- (void)setAction:(id)action forKey:(id)key;	// 0x31464bb5
- (void)setAnimationPath:(id)path forKey:(id)key;	// 0x31463b65
// converted property setter: - (void)setAudioPlaylist:(id)playlist;	// 0x3146482d
// converted property setter: - (void)setAudioPriority:(int)priority;	// 0x31464851
// converted property setter: - (void)setDuration:(double)duration;	// 0x31464539
// converted property setter: - (void)setHeight:(float)height;	// 0x31466a41
// converted property setter: - (void)setIsAudioLayer:(BOOL)layer;	// 0x31464a19
// converted property setter: - (void)setLayerID:(id)anId;	// 0x31464ad9
// converted property setter: - (void)setMontage:(id)montage;	// 0x31466105
// converted property setter: - (void)setNumberOfLoops:(double)loops;	// 0x31464915
// converted property setter: - (void)setOpacity:(float)opacity;	// 0x31463d81
// converted property setter: - (void)setParent:(id)parent;	// 0x314660b1
// converted property setter: - (void)setPhaseInDuration:(double)duration;	// 0x31464665
// converted property setter: - (void)setPhaseOutDuration:(double)duration;	// 0x31464751
// converted property setter: - (void)setPlug:(id)plug;	// 0x314659e1
// converted property setter: - (void)setPosition:(CGPoint)position;	// 0x31463e4d
// converted property setter: - (void)setRotationAngle:(float)angle;	// 0x31463ffd
// converted property setter: - (void)setScriptingAnimations:(id)animations;	// 0x31466e59
// converted property setter: - (void)setSize:(CGSize)size;	// 0x314640c9
// converted property setter: - (void)setSkipTimeCalculations:(BOOL)calculations;	// 0x3146616d
// converted property setter: - (void)setTimeIn:(double)anIn;	// 0x3146445d
// converted property setter: - (void)setTitle:(id)title;	// 0x314633e5
// converted property setter: - (void)setWidth:(float)width;	// 0x31466a91
// converted property setter: - (void)setXPosition:(float)position;	// 0x314669a1
// converted property setter: - (void)setXRotationAngle:(float)angle;	// 0x314641ad
// converted property setter: - (void)setYPosition:(float)position;	// 0x314669f1
// converted property setter: - (void)setYRotationAngle:(float)angle;	// 0x31464279
// converted property setter: - (void)setZIndex:(int)index;	// 0x31464361
// converted property setter: - (void)setZPosition:(float)position;	// 0x31463f31
// converted property getter: - (CGSize)size;	// 0x314640a9
// converted property getter: - (BOOL)skipTimeCalculations;	// 0x3146615d
// converted property getter: - (double)timeIn;	// 0x3146443d
// converted property getter: - (id)title;	// 0x314633c5
- (void)updateDurationPadding:(double)padding;	// 0x314661b9
- (void)updateMainDuration;	// 0x314662a5
- (id)uuid;	// 0x314651a9
// converted property getter: - (float)width;	// 0x31466a6d
// converted property getter: - (float)xPosition;	// 0x3146697d
// converted property getter: - (float)xRotationAngle;	// 0x3146418d
// converted property getter: - (float)yPosition;	// 0x314669cd
// converted property getter: - (float)yRotationAngle;	// 0x31464259
// converted property getter: - (int)zIndex;	// 0x31464325
// converted property getter: - (float)zPosition;	// 0x31463f11
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSSet;

@interface CAWindowServerDisplay : NSObject {
@private
	void *_impl;	// 4 = 0x4
}
@property(copy) NSString *TVMode;	// G=0x32b16315; S=0x32b162a1; 
@property(copy) NSString *TVSignalType;	// G=0x32b163f9; S=0x32b16351; 
@property(assign) BOOL allowsVirtualModes;	// G=0x32b161e9; S=0x32b16209; 
@property(assign, getter=isBlanked) BOOL blanked;	// G=0x32b15de5; S=0x32b15dc5; 
@property(readonly, assign) CGRect bounds;	// G=0x32b14c81; 
@property(readonly, assign) CAWindowServerDisplay *cloneMaster;	// G=0x32b15da5; 
@property(readonly, assign) NSSet *clones;	// G=0x32b15621; 
@property(copy, nonatomic) NSString *colorMode;	// G=0x32b160fd; S=0x32b16159; 
@property(assign) float contrast;	// G=0x32b15fd1; S=0x32b15fb1; 
@property(readonly, assign) NSString *deviceName;	// G=0x32b14d49; 
@property(readonly, assign) unsigned displayId;	// G=0x32b14d65; 
@property(assign) float idealRefreshRate;	// G=0x32b16099; S=0x32b16079; 
@property(assign) BOOL invertsColors;	// G=0x32b15f89; S=0x32b15f69; 
@property(assign) float maximumRefreshRate;	// G=0x32b16055; S=0x32b16035; 
@property(assign) float minimumRefreshRate;	// G=0x32b16011; S=0x32b15ff1; 
@property(assign, getter=isMirroringEnabled) BOOL mirroringEnabled;	// G=0x32b16245; S=0x32b16229; 
@property(readonly, assign) NSString *name;	// G=0x32b14d31; 
@property(copy) NSString *orientation;	// G=0x32b15eb9; S=0x32b15e1d; 
@property(assign) float overscanAmount;	// G=0x32b15f45; S=0x32b15f25; 
@property(readonly, assign) unsigned rendererFlags;	// G=0x32b14d81; 
@property(assign) int tag;	// G=0x32b16285; S=0x32b16269; 
@property(assign) BOOL usesPreferredModeRefreshRate;	// G=0x32b160dd; S=0x32b160bd; 
// declared property getter: - (id)TVMode;	// 0x32b16315
// declared property getter: - (id)TVSignalType;	// 0x32b163f9
- (id)_initWithCADisplayServer:(Server *)cadisplayServer;	// 0x32b14bb9
- (void)addClone:(id)clone;	// 0x32b15acd
- (void)addClone:(id)clone options:(id)options;	// 0x32b15881
// declared property getter: - (BOOL)allowsVirtualModes;	// 0x32b161e9
// declared property getter: - (CGRect)bounds;	// 0x32b14c81
- (unsigned)clientPortAtPosition:(CGPoint)position;	// 0x32a4c1a1
- (unsigned)clientPortOfContextId:(unsigned)contextId;	// 0x32b14e61
// declared property getter: - (id)cloneMaster;	// 0x32b15da5
// declared property getter: - (id)clones;	// 0x32b15621
// declared property getter: - (id)colorMode;	// 0x32b160fd
- (unsigned)contextIdAtPosition:(CGPoint)position;	// 0x32a4604d
- (unsigned)contextIdHostingContextId:(unsigned)anId;	// 0x32b14e91
- (id)contextIdsWithClientPort:(unsigned)clientPort;	// 0x32b14da9
// declared property getter: - (float)contrast;	// 0x32b15fd1
- (CGPoint)convertPoint:(CGPoint)point fromContextId:(unsigned)contextId;	// 0x32b15519
- (CGPoint)convertPoint:(CGPoint)point toContextId:(unsigned)contextId;	// 0x32a4c1d9
- (void)dealloc;	// 0x32b14c31
- (id)description;	// 0x32b16459
// declared property getter: - (id)deviceName;	// 0x32b14d49
// declared property getter: - (unsigned)displayId;	// 0x32b14d65
- (CGRect)frameOfContextId:(unsigned)contextId;	// 0x32b14ed1
// declared property getter: - (float)idealRefreshRate;	// 0x32b16099
- (void)invalidate;	// 0x32b14bfd
// declared property getter: - (BOOL)invertsColors;	// 0x32b15f89
// declared property getter: - (BOOL)isBlanked;	// 0x32b15de5
// declared property getter: - (BOOL)isMirroringEnabled;	// 0x32b16245
// declared property getter: - (float)maximumRefreshRate;	// 0x32b16055
// declared property getter: - (float)minimumRefreshRate;	// 0x32b16011
// declared property getter: - (id)name;	// 0x32b14d31
// declared property getter: - (id)orientation;	// 0x32b15eb9
// declared property getter: - (float)overscanAmount;	// 0x32b15f45
- (void)removeAllClones;	// 0x32b15c01
- (void)removeClone:(id)clone;	// 0x32b15ae1
// declared property getter: - (unsigned)rendererFlags;	// 0x32b14d81
// declared property setter: - (void)setAllowsVirtualModes:(BOOL)modes;	// 0x32b16209
// declared property setter: - (void)setBlanked:(BOOL)blanked;	// 0x32b15dc5
// declared property setter: - (void)setColorMode:(id)mode;	// 0x32b16159
// declared property setter: - (void)setContrast:(float)contrast;	// 0x32b15fb1
// declared property setter: - (void)setIdealRefreshRate:(float)rate;	// 0x32b16079
// declared property setter: - (void)setInvertsColors:(BOOL)colors;	// 0x32b15f69
// declared property setter: - (void)setMaximumRefreshRate:(float)rate;	// 0x32b16035
// declared property setter: - (void)setMinimumRefreshRate:(float)rate;	// 0x32b15ff1
// declared property setter: - (void)setMirroringEnabled:(BOOL)enabled;	// 0x32b16229
// declared property setter: - (void)setOrientation:(id)orientation;	// 0x32b15e1d
// declared property setter: - (void)setOverscanAmount:(float)amount;	// 0x32b15f25
// declared property setter: - (void)setTVMode:(id)mode;	// 0x32b162a1
// declared property setter: - (void)setTVSignalType:(id)type;	// 0x32b16351
// declared property setter: - (void)setTag:(int)tag;	// 0x32b16269
// declared property setter: - (void)setUsesPreferredModeRefreshRate:(BOOL)rate;	// 0x32b160bd
// declared property getter: - (int)tag;	// 0x32b16285
// declared property getter: - (BOOL)usesPreferredModeRefreshRate;	// 0x32b160dd
- (void)willUnblank;	// 0x32b15e05
@end


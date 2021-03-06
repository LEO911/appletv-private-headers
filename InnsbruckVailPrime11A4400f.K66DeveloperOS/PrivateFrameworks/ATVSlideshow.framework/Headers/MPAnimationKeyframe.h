/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import </libobjc.A.h>

@class NSMutableDictionary, MCAnimationKeyframe, MPAnimationPath;

@interface MPAnimationKeyframe : NSObject <NSCoding, NSCopying> {
	NSMutableDictionary *_attributes;	// 4 = 0x4
	MPAnimationPath *_parentPath;	// 8 = 0x8
	MCAnimationKeyframe *_keyframe;	// 12 = 0xc
	double _time;	// 16 = 0x10
	unsigned _offsetType;	// 24 = 0x18
	double _preControl;	// 28 = 0x1c
	double _postControl;	// 36 = 0x24
}
@property(assign, nonatomic) unsigned offsetType;	// G=0x2fb4820d; S=0x2fb480b1; @synthesize=_offsetType
@property(retain) MPAnimationPath *parentPath;	// G=0x2fb48061; S=0x2fb4aa49; converted property
@property(assign, nonatomic) double postControl;	// G=0x2fb48171; S=0x2fb481b1; @synthesize=_postControl
@property(assign, nonatomic) double preControl;	// G=0x2fb480e9; S=0x2fb48129; @synthesize=_preControl
@property(assign, nonatomic) double time;	// G=0x2fb481f5; S=0x2fb48071; @synthesize=_time
- (id)init;	// 0x2fb47b51
- (id)initWithCoder:(id)coder;	// 0x2fb47dd9
- (void)copyVars:(id)vars;	// 0x2fb4abd9
- (id)copyWithZone:(NSZone *)zone;	// 0x2fb47f99
- (void)dealloc;	// 0x2fb47ff1
- (void)dump;	// 0x2fb4a9a1
- (void)encodeWithCoder:(id)coder;	// 0x2fb47c05
- (id)fullDebugLog;	// 0x2fb4a9c9
// declared property getter: - (unsigned)offsetType;	// 0x2fb4820d
- (id)parentDocument;	// 0x2fb4aaa9
// converted property getter: - (id)parentPath;	// 0x2fb48061
// declared property getter: - (double)postControl;	// 0x2fb48171
// declared property getter: - (double)preControl;	// 0x2fb480e9
- (int)relativeTimeCompare:(id)compare;	// 0x2fb4a945
- (void)setKeyframe:(id)keyframe;	// 0x2fb4aac9
// declared property setter: - (void)setOffsetType:(unsigned)type;	// 0x2fb480b1
// converted property setter: - (void)setParentPath:(id)path;	// 0x2fb4aa49
// declared property setter: - (void)setPostControl:(double)control;	// 0x2fb481b1
// declared property setter: - (void)setPreControl:(double)control;	// 0x2fb48129
// declared property setter: - (void)setTime:(double)time;	// 0x2fb48071
// declared property getter: - (double)time;	// 0x2fb481f5
@end


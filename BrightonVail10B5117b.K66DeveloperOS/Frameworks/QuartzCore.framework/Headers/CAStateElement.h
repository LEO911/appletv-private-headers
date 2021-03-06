/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class CALayer, NSString;

@interface CAStateElement : NSObject <NSCopying, NSCoding> {
	CALayer *_target;	// 4 = 0x4
	CAStateElement *_source;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *keyPath;	// G=0x32afd645; 
@property(retain, nonatomic) CAStateElement *source;	// G=0x32afd779; S=0x32afd789; @synthesize=_source
@property(assign, nonatomic) CALayer *target;	// G=0x32afd759; S=0x32afd769; @synthesize=_target
- (id)initWithCoder:(id)coder;	// 0x32afd6c5
- (void)apply:(id)apply;	// 0x32afd64d
- (id)copyWithZone:(NSZone *)zone;	// 0x32afd659
- (void)dealloc;	// 0x32afd5d9
- (void)encodeWithCoder:(id)coder;	// 0x32afd65d
- (void)foreachLayer:(id)layer;	// 0x32afd655
// declared property getter: - (id)keyPath;	// 0x32afd645
- (BOOL)matches:(id)matches;	// 0x32afd649
- (id)save;	// 0x32afd651
// declared property setter: - (void)setSource:(id)source;	// 0x32afd789
// declared property setter: - (void)setTarget:(id)target;	// 0x32afd769
// declared property getter: - (id)source;	// 0x32afd779
// declared property getter: - (id)target;	// 0x32afd759
- (id)targetName;	// 0x32afd625
@end


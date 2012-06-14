/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import <NSObject.h> // Unknown library
#import "ATVSlideshow-Structs.h"
#import "NSCoding.h"
#import "NSCopying.h"

@class MCAction;
@protocol MPActionSupport;

@interface MPAction : NSObject <NSCoding, NSCopying> {
	NSObject<MPActionSupport> *_parentObject;	// 4 = 0x4
	MCAction *_action;	// 8 = 0x8
	NSObject *_targetObject;	// 12 = 0xc
}
@property(retain) id parent;	// G=0x3200c7e9; S=0x3200c951; converted property
@property(retain, nonatomic) NSObject *targetObject;	// G=0x3200c4a1; S=0x3200c5ad; @synthesize=_targetObject
+ (id)action;	// 0x3200c3a1
- (id)init;	// 0x3200c3e5
- (id)initWithCoder:(id)coder;	// 0x3200c431
- (void)configureTarget;	// 0x3200c9ad
- (id)copyWithZone:(NSZone *)zone;	// 0x3200c729
- (void)dealloc;	// 0x3200c665
- (void)encodeWithCoder:(id)coder;	// 0x3200c6dd
- (id)key;	// 0x3200c79d
// converted property getter: - (id)parent;	// 0x3200c7e9
- (id)parentDocument;	// 0x3200c7f9
- (void)setAction:(id)action;	// 0x3200cad5
// converted property setter: - (void)setParent:(id)parent;	// 0x3200c951
// declared property setter: - (void)setTargetObject:(id)object;	// 0x3200c5ad
// declared property getter: - (id)targetObject;	// 0x3200c4a1
@end

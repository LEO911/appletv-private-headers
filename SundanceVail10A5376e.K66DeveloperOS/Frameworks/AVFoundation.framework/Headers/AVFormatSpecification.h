/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class AVOutputSettings;

@interface AVFormatSpecification : NSObject {
	AVOutputSettings *_outputSettings;	// 4 = 0x4
	opaqueCMFormatDescription *_sourceFormatDescription;	// 8 = 0x8
}
@property(readonly, retain) AVOutputSettings *outputSettings;	// G=0x36919935; converted property
@property(readonly, assign) opaqueCMFormatDescription *sourceFormatDescription;	// G=0x36919945; converted property
+ (id)formatSpecificationWithOutputSettings:(id)outputSettings sourceFormatDescription:(opaqueCMFormatDescription *)description;	// 0x36919891
- (id)initWithOutputSettings:(id)outputSettings sourceFormatDescription:(opaqueCMFormatDescription *)description;	// 0x3691981d
- (void)dealloc;	// 0x369198d1
// converted property getter: - (id)outputSettings;	// 0x36919935
// converted property getter: - (opaqueCMFormatDescription *)sourceFormatDescription;	// 0x36919945
@end

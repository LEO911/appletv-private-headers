/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSMutableArray;

@interface AVPixelBufferAttributeMediator : NSObject {
	NSMutableArray *_layers;	// 4 = 0x4
	CFArrayRef _otherStakeHoldersOrdered;	// 8 = 0x8
	CFDictionaryRef _otherStakeHoldersToAttributesMap;	// 12 = 0xc
	BOOL layersAreSuppressed;	// 16 = 0x10
}
- (id)init;	// 0x317ec225
- (void)dealloc;	// 0x317ec371
- (void)finalize;	// 0x317ec315
- (id)mediatedPixelBufferAttributes;	// 0x317ec5ed
- (void)removeRequestedPixelBufferAttributesAttributesForKey:(id)key;	// 0x317ec4dd
- (void)setLayersAreSuppressed:(BOOL)suppressed;	// 0x317ec5dd
- (void)setRequestedPixelBufferAttributes:(id)attributes forKey:(id)key;	// 0x317ec3e9
@end


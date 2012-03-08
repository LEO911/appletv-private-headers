/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "AVFoundation-Structs.h"

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : NSObject <NSCopying> {
	AVTimedMetadataGroupInternal *_priv;	// 4 = 0x4
}
@property(readonly, copy) NSArray *items;	// G=0x354a9879; 
@property(readonly, assign) XXStruct_yD8eWC timeRange;	// G=0x354a9801; 
- (id)init;	// 0x354a9c15
- (id)initWithItems:(id)items timeRange:(XXStruct_yD8eWC)range;	// 0x354a99a9
- (id)copyWithZone:(NSZone *)zone;	// 0x354a9a4d
- (void)dealloc;	// 0x354aa03d
- (id)description;	// 0x354a9f11
- (void)finalize;	// 0x354a9ff9
- (unsigned)hash;	// 0x354a9d15
- (BOOL)isEqual:(id)equal;	// 0x354a9d95
// declared property getter: - (id)items;	// 0x354a9879
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x354a9a79
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x354a9801
@end

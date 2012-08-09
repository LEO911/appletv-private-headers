/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library

@class AVTimedMetadataGroupInternal, NSArray;

@interface AVTimedMetadataGroup : NSObject <NSCopying> {
	AVTimedMetadataGroupInternal *_priv;	// 4 = 0x4
}
@property(readonly, assign) NSArray *items;	// G=0x317c15e9; 
@property(readonly, assign) XXStruct_yD8eWC timeRange;	// G=0x317c1579; 
- (id)init;	// 0x317c0f35
- (id)initWithItems:(id)items timeRange:(XXStruct_yD8eWC)range;	// 0x317c1029
- (id)copyWithZone:(NSZone *)zone;	// 0x317c1179
- (void)dealloc;	// 0x317c10c9
- (id)description;	// 0x317c1281
- (void)finalize;	// 0x317c1135
- (unsigned)hash;	// 0x317c14e9
- (BOOL)isEqual:(id)equal;	// 0x317c135d
// declared property getter: - (id)items;	// 0x317c15e9
- (id)mutableCopyWithZone:(NSZone *)zone;	// 0x317c11a1
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x317c1579
@end

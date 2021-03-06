/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVTimedMetadataGroup.h"

@class AVMutableTimedMetadataGroupInternal, NSArray;

@interface AVMutableTimedMetadataGroup : AVTimedMetadataGroup {
	AVMutableTimedMetadataGroupInternal *_mutablePriv;	// 8 = 0x8
}
@property(copy) NSArray *items;	// G=0x3678ae51; S=0x3678ae79; 
@property(assign) XXStruct_yD8eWC timeRange;	// G=0x3678ad71; S=0x3678ade1; 
- (id)copyWithZone:(NSZone *)zone;	// 0x3678aed9
// declared property getter: - (id)items;	// 0x3678ae51
// declared property setter: - (void)setItems:(id)items;	// 0x3678ae79
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x3678ade1
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x3678ad71
@end


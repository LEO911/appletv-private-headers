/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVMetadataObjectInternal;

@interface AVMetadataObject : NSObject {
	AVMetadataObjectInternal *_objectInternal;	// 4 = 0x4
}
@property(readonly, assign) CGRect bounds;	// G=0x30357c11; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x30357bd9; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x30357ba1; 
@property(readonly, assign) NSString *type;	// G=0x30357c45; 
- (id)init;	// 0x30357a55
// declared property getter: - (CGRect)bounds;	// 0x30357c11
- (void)dealloc;	// 0x30357b55
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x30357bd9
- (id)input;	// 0x30357c65
// declared property getter: - (XXStruct_pwHToB)time;	// 0x30357ba1
// declared property getter: - (id)type;	// 0x30357c45
@end

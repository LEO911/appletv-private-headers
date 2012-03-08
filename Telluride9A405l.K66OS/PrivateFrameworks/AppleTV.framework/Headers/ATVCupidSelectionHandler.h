/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRSelectionHandler.h"
#import <NSObject.h> // Unknown library

@class BRStreamingPhotoCollection;

@interface ATVCupidSelectionHandler : NSObject <BRSelectionHandler> {
@private
	BRStreamingPhotoCollection *_assetParentCollection;	// 4 = 0x4
}
@property(retain) BRStreamingPhotoCollection *assetParentCollection;	// G=0x35d8d9f9; S=0x35d8da0d; @synthesize=_assetParentCollection
// declared property getter: - (id)assetParentCollection;	// 0x35d8d9f9
- (void)dealloc;	// 0x35d8d9ad
- (BOOL)handleSelectionForControl:(id)control;	// 0x35d8d7e1
// declared property setter: - (void)setAssetParentCollection:(id)collection;	// 0x35d8da0d
@end

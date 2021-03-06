/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSOperation.h> // Unknown library
#import "QuickLook-Structs.h"

@class UIImage;

@interface QLThumbnailOperation : NSOperation {
	int _index;	// 12 = 0xc
	CGSize _size;	// 16 = 0x10
	UIImage *_image;	// 24 = 0x18
}
@property(retain) UIImage *image;	// G=0x30e2f2f9; S=0x30e2f30d; @synthesize=_image
@property(assign) int index;	// G=0x30e2f27d; S=0x30e2f291; @synthesize=_index
@property(assign) CGSize size;	// G=0x30e2f2a9; S=0x30e2f2cd; @synthesize=_size
- (id)init;	// 0x30e2f205
- (void)dealloc;	// 0x30e2f231
// declared property getter: - (id)image;	// 0x30e2f2f9
// declared property getter: - (int)index;	// 0x30e2f27d
// declared property setter: - (void)setImage:(id)image;	// 0x30e2f30d
// declared property setter: - (void)setIndex:(int)index;	// 0x30e2f291
// declared property setter: - (void)setSize:(CGSize)size;	// 0x30e2f2cd
// declared property getter: - (CGSize)size;	// 0x30e2f2a9
@end


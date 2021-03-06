/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UIView.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface UICompositeImageView : UIView {
@private
	NSMutableArray *m_images;	// 44 = 0x2c
}
- (id)initWithFrame:(CGRect)frame;	// 0x30227259
- (void)addImage:(id)image;	// 0x30227535
- (void)addImage:(id)image operation:(int)operation fraction:(float)fraction;	// 0x302274c1
- (void)addImage:(id)image toRect:(CGRect)rect fromRect:(CGRect)rect3;	// 0x302271b1
- (void)addImage:(id)image toRect:(CGRect)rect fromRect:(CGRect)rect3 operation:(int)operation fraction:(float)fraction;	// 0x3022711d
- (void)dealloc;	// 0x30227211
- (void)drawRect:(CGRect)rect;	// 0x302270b1
- (void)removeAllImages;	// 0x302270e9
@end


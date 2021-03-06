/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIColor, UIImage, CALayer, UIView;

__attribute__((visibility("hidden")))
@interface _UISwitchInfo : NSObject {
	int imageState;	// 4 = 0x4
	UIImage *images[8];	// 8 = 0x8
	UIView *rightEdgeView;	// 40 = 0x28
	UIView *leftEdgeView;	// 44 = 0x2c
	float position;	// 48 = 0x30
	UIColor *onButtonColor;	// 52 = 0x34
	CALayer *maskLayer;	// 56 = 0x38
	struct {
		unsigned isShowingMoreItem : 1;
		unsigned needsToRebuildItems : 1;
		unsigned isBarHidden : 1;
		unsigned editButtonOnLeft : 1;
	} _switchFlags;	// 60 = 0x3c
}
- (void)dealloc;	// 0x32d643c9
- (void)setMinimumTrackImage:(id)image forStates:(unsigned)states;	// 0x32d64471
@end


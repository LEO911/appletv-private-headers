/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedImageArrayPreviewElement : ATVFeedElement {
@private
	BOOL _inOrder;	// 28 = 0x1c
	BOOL _shuffle;	// 29 = 0x1d
	NSArray *_images;	// 32 = 0x20
}
@property(retain, nonatomic) NSArray *images;	// G=0x33b84539; S=0x33b84549; @synthesize=_images
@property(assign, nonatomic) BOOL inOrder;	// G=0x33b844f9; S=0x33b84509; @synthesize=_inOrder
@property(assign, nonatomic) BOOL shuffle;	// G=0x33b84519; S=0x33b84529; @synthesize=_shuffle
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x33b842dd
- (void)dealloc;	// 0x33b844ad
// declared property getter: - (id)images;	// 0x33b84539
// declared property getter: - (BOOL)inOrder;	// 0x33b844f9
// declared property setter: - (void)setImages:(id)images;	// 0x33b84549
// declared property setter: - (void)setInOrder:(BOOL)order;	// 0x33b84509
// declared property setter: - (void)setShuffle:(BOOL)shuffle;	// 0x33b84529
// declared property getter: - (BOOL)shuffle;	// 0x33b84519
@end

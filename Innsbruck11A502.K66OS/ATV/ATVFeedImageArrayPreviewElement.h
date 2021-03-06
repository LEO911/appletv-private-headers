/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedImageArrayPreviewElement : ATVFeedElement {
	BOOL _inOrder;	// 4 = 0x4
	BOOL _shuffle;	// 5 = 0x5
	NSArray *_images;	// 8 = 0x8
}
@property(retain, nonatomic) NSArray *images;	// G=0x134ebd; S=0x134ecd; @synthesize=_images
@property(assign, nonatomic) BOOL inOrder;	// G=0x134e7d; S=0x134e8d; @synthesize=_inOrder
@property(assign, nonatomic) BOOL shuffle;	// G=0x134e9d; S=0x134ead; @synthesize=_shuffle
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x134c21
- (void).cxx_destruct;	// 0x134ef5
// declared property getter: - (id)images;	// 0x134ebd
// declared property getter: - (BOOL)inOrder;	// 0x134e7d
// declared property setter: - (void)setImages:(id)images;	// 0x134ecd
// declared property setter: - (void)setInOrder:(BOOL)order;	// 0x134e8d
// declared property setter: - (void)setShuffle:(BOOL)shuffle;	// 0x134ead
// declared property getter: - (BOOL)shuffle;	// 0x134e9d
@end


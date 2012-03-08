/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSDiscardableContent.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkItem : NSObject <NSDiscardableContent> {
@private
	NSString *_artKey;	// 4 = 0x4
	NSArray *_images;	// 8 = 0x8
	struct {
		unsigned isDiscarded : 1;
		unsigned useCount;
	} _flags;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) NSString *artKey;	// G=0x33c01219; @synthesize=_artKey
@property(retain, nonatomic) NSArray *images;	// G=0x33ac5ad5; S=0x33a42c85; @synthesize=_images
- (id)initWithArtKey:(id)artKey;	// 0x33a42a11
// declared property getter: - (id)artKey;	// 0x33c01219
- (BOOL)beginContentAccess;	// 0x33a42a81
- (void)dealloc;	// 0x33c0115d
- (void)discardContentIfPossible;	// 0x33c011e9
- (void)endContentAccess;	// 0x33a42ce5
- (unsigned)hash;	// 0x33c011c9
// declared property getter: - (id)images;	// 0x33ac5ad5
- (BOOL)isContentDiscarded;	// 0x33ac5ac1
// declared property setter: - (void)setImages:(id)images;	// 0x33a42c85
@end

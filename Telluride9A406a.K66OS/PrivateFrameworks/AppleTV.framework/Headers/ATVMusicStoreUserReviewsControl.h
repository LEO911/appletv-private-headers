/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreUserReviewsControl : BRControl {
@private
	NSDictionary *_itemDictionary;	// 48 = 0x30
}
+ (id)userReviewsControlWithDictionary:(id)dictionary;	// 0x32fb7379
- (id)initWithDictionary:(id)dictionary;	// 0x32fb73b5
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x32fb8039
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x32fb7f2d
- (id)_largeImageForRating:(float)rating;	// 0x32fb8245
- (id)_smallImageForRating:(float)rating;	// 0x32fb8121
- (id)accessibilityLabel;	// 0x32fb7f11
- (void)dealloc;	// 0x32fb740d
- (void)layoutSubcontrols;	// 0x32fb7459
@end


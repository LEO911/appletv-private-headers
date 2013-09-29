/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreRottenTomatoesControl : BRControl {
	NSDictionary *_itemDictionary;	// 84 = 0x54
}
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x1fe4a5
- (id)initWithDictionary:(id)dictionary;	// 0x1fe4e1
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1ff669
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x1ff729
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x1ff5e1
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x1ff819
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x1ff841
- (id)accessibilityLabel;	// 0x1ff5c5
- (void)dealloc;	// 0x1fe539
- (void)layoutSubcontrols;	// 0x1fe585
@end

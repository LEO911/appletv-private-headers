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
+ (id)rottenTomatesControlWithDictionary:(id)dictionary;	// 0x20d9ad
- (id)initWithDictionary:(id)dictionary;	// 0x20d9e9
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x20eb45
- (CGRect)_addTextControlWithAttributedString:(id)attributedString maxSize:(CGSize)size xOrigin:(float)origin topLine:(float)line;	// 0x20ec05
- (CGRect)_addTextControlWithText:(id)text attributes:(id)attributes maxSize:(CGSize)size origin:(CGPoint)origin;	// 0x20eab9
- (id)_imageForFreshnessRating:(int)freshnessRating;	// 0x20ecf5
- (id)_labelForFreshnessRating:(int)freshnessRating locInfo:(id)info;	// 0x20ed1d
- (id)accessibilityLabel;	// 0x20ea9d
- (void)dealloc;	// 0x20da41
- (void)layoutSubcontrols;	// 0x20da8d
@end

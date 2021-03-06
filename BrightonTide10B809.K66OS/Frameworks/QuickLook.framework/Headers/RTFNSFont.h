/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface RTFNSFont : NSObject {
	NSString *_fontName;	// 4 = 0x4
	float _fontSize;	// 8 = 0x8
	float _pointSize;	// 12 = 0xc
}
@property(retain) NSString *fontName;	// G=0x32a21469; S=0x32a2147d; @synthesize=_fontName
@property(assign) float fontSize;	// G=0x32a2148d; S=0x32a214a1; @synthesize=_fontSize
@property(assign) float pointSize;	// G=0x32a214b9; S=0x32a214cd; @synthesize=_pointSize
+ (id)fontWithName:(id)name size:(float)size;	// 0x32a212e1
+ (id)systemFontOfSize:(float)size;	// 0x32a212dd
+ (id)userFixedPitchFontOfSize:(float)size;	// 0x32a212d5
+ (id)userFontOfSize:(float)size;	// 0x32a212d9
- (id)initWithName:(id)name size:(float)size;	// 0x32a213f9
// declared property getter: - (id)fontName;	// 0x32a21469
// declared property getter: - (float)fontSize;	// 0x32a2148d
- (unsigned)mostCompatibleStringEncoding;	// 0x32a21465
// declared property getter: - (float)pointSize;	// 0x32a214b9
// declared property setter: - (void)setFontName:(id)name;	// 0x32a2147d
// declared property setter: - (void)setFontSize:(float)size;	// 0x32a214a1
// declared property setter: - (void)setPointSize:(float)size;	// 0x32a214cd
@end


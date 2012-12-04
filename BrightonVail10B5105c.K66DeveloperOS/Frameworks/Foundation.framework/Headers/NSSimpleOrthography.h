/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSOrthography.h"


@interface NSSimpleOrthography : NSOrthography {
	unsigned _orthographyFlags;	// 4 = 0x4
}
@property(readonly, assign) unsigned orthographyFlags;	// G=0x36164249; converted property
+ (void)initialize;	// 0x36163eed
+ (id)orthographyWithFlags:(unsigned)flags;	// 0x36163f39
- (id)initWithCoder:(id)coder;	// 0x36164125
- (id)initWithDominantScript:(id)dominantScript languageMap:(id)map;	// 0x36164019
- (id)initWithFlags:(unsigned)flags;	// 0x36163f79
- (id)allLanguages;	// 0x36164341
- (id)allScripts;	// 0x36164325
- (Class)classForCoder;	// 0x361640a1
- (id)dominantLanguage;	// 0x36164305
- (id)dominantLanguageForScript:(id)script;	// 0x361642c1
- (id)dominantScript;	// 0x3616420d
- (void)encodeWithCoder:(id)coder;	// 0x361640b1
- (id)languageMap;	// 0x3616422d
- (id)languagesForScript:(id)script;	// 0x36164259
// converted property getter: - (unsigned)orthographyFlags;	// 0x36164249
@end

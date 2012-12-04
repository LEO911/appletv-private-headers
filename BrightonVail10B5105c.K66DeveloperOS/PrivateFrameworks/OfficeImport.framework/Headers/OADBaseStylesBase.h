/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADColorScheme, OADFontScheme, OADStyleMatrix;

@interface OADBaseStylesBase : NSObject {
	OADColorScheme *mColorScheme;	// 4 = 0x4
	OADStyleMatrix *mStyleMatrix;	// 8 = 0x8
	OADFontScheme *mFontScheme;	// 12 = 0xc
}
@property(retain, nonatomic) OADFontScheme *fontScheme;	// G=0x378c2a8d; S=0x378c2a9d; @synthesize=mFontScheme
- (id)colorScheme;	// 0x378c5499
- (void)dealloc;	// 0x3792c255
// declared property getter: - (id)fontScheme;	// 0x378c2a8d
// declared property setter: - (void)setFontScheme:(id)scheme;	// 0x378c2a9d
- (id)styleMatrix;	// 0x37980aa1
@end

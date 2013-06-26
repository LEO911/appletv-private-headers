/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class NSDate, WDText, NSString, WDCharacterRun;

@interface WDAnnotation : WDRun {
	int mType;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDCharacterRun *mReference;	// 16 = 0x10
	BOOL mReferencePopertiesFixed;	// 20 = 0x14
	NSDate *mDate;	// 24 = 0x18
	NSString *mOwner;	// 28 = 0x1c
	WDAnnotation *mOtherEndOfRangedAnnotation;	// 32 = 0x20
}
@property(retain) id date;	// G=0x34aa7269; S=0x34aa7279; converted property
@property(retain) id otherEndOfRangedAnnotation;	// G=0x34aa7301; S=0x34aa7311; converted property
@property(retain) id owner;	// G=0x34aa72b5; S=0x34aa72c5; converted property
- (id)initWithParagraph:(id)paragraph type:(int)type;	// 0x34aa708d
- (int)annotationType;	// 0x34aa7259
// converted property getter: - (id)date;	// 0x34aa7269
- (void)dealloc;	// 0x34aa734d
// converted property getter: - (id)otherEndOfRangedAnnotation;	// 0x34aa7301
// converted property getter: - (id)owner;	// 0x34aa72b5
- (id)reference;	// 0x34aa7221
- (BOOL)referencePropertiesFixed;	// 0x34aa7231
- (int)runType;	// 0x34aa7255
// converted property setter: - (void)setDate:(id)date;	// 0x34aa7279
// converted property setter: - (void)setOtherEndOfRangedAnnotation:(id)rangedAnnotation;	// 0x34aa7311
// converted property setter: - (void)setOwner:(id)owner;	// 0x34aa72c5
- (void)setReferencePropertiesFixed;	// 0x34aa7241
- (id)text;	// 0x34aa7211
@end

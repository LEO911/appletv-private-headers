/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class NSString, NSMutableSet;

@interface MCAsset : MCObject {
	NSMutableSet *mTexts;	// 12 = 0xc
	NSString *mPath;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isInUse;	// G=0x33a67269; 
@property(copy) NSString *path;	// G=0x33a67315; S=0x33a67329; @synthesize=mPath
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x33a67111
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x33a672d5
- (void)demolish;	// 0x33a67181
- (void)forgetText:(id)text;	// 0x33a672b5
- (id)imprint;	// 0x33a67209
// declared property getter: - (BOOL)isInUse;	// 0x33a67269
- (void)learnText:(id)text;	// 0x33a67295
// declared property getter: - (id)path;	// 0x33a67315
// declared property setter: - (void)setPath:(id)path;	// 0x33a67329
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObject.h"

@class MCAsset, NSString, NSArray, MCContainerEffect, NSAttributedString;

@interface MCText : MCObject {
	MCAsset *mAsset;	// 12 = 0xc
	unsigned mIndex;	// 16 = 0x10
	NSString *mKeyInAsset;	// 20 = 0x14
	MCContainerEffect *mContainer;	// 24 = 0x18
	NSArray *mStringAttributes;	// 28 = 0x1c
}
@property(retain, nonatomic) MCAsset *asset;	// G=0x3341fcc9; S=0x3341fdad; @synthesize=mAsset
@property(copy) NSAttributedString *attributedString;	// G=0x3341ff01; S=0x3341ff11; @dynamic
@property(assign) MCContainerEffect *container;	// G=0x3341ffb1; S=0x3341ffc5; @synthesize=mContainer
@property(assign, nonatomic) unsigned index;	// G=0x3341ff6d; S=0x3341ff7d; @synthesize=mIndex
@property(copy) NSString *keyInAsset;	// G=0x3341ff8d; S=0x3341ffa1; @synthesize=mKeyInAsset
@property(retain) NSArray *stringAttributes;	// G=0x3341ffdd; S=0x3341fff1; @synthesize=mStringAttributes
- (id)initWithImprint:(id)imprint andMontage:(id)montage;	// 0x3341f9a9
// declared property getter: - (id)asset;	// 0x3341fcc9
// declared property getter: - (id)attributedString;	// 0x3341ff01
- (id)attributedStringWithCTAttributes;	// 0x3341fed5
// declared property getter: - (id)container;	// 0x3341ffb1
- (void)demolish;	// 0x3341faed
- (id)imprint;	// 0x3341fba9
// declared property getter: - (unsigned)index;	// 0x3341ff6d
// declared property getter: - (id)keyInAsset;	// 0x3341ff8d
// declared property setter: - (void)setAsset:(id)asset;	// 0x3341fdad
// declared property setter: - (void)setAttributedString:(id)string;	// 0x3341ff11
// declared property setter: - (void)setContainer:(id)container;	// 0x3341ffc5
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x3341ff7d
// declared property setter: - (void)setKeyInAsset:(id)asset;	// 0x3341ffa1
// declared property setter: - (void)setStringAttributes:(id)attributes;	// 0x3341fff1
// declared property getter: - (id)stringAttributes;	// 0x3341ffdd
@end

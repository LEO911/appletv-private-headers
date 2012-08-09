/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "ATVSlideshow-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, NSArray;

@interface MRScrapbookLayout : NSObject {
	CGRect rect;	// 4 = 0x4
	NSString *frame;	// 20 = 0x14
	NSString *mask;	// 24 = 0x18
	float zRotation;	// 28 = 0x1c
	NSArray *subtract;	// 32 = 0x20
	double startTime;	// 36 = 0x24
	int slideIndex;	// 44 = 0x2c
	float aspectRatio;	// 48 = 0x30
	BOOL stretch;	// 52 = 0x34
	BOOL isText;	// 53 = 0x35
	BOOL isBreak;	// 54 = 0x36
	NSString *backgroundPaper;	// 56 = 0x38
	BOOL twoPart;	// 60 = 0x3c
	BOOL move;	// 61 = 0x3d
	CGRect paperRect;	// 64 = 0x40
	int drawCardIndex;	// 80 = 0x50
	BOOL skip;	// 84 = 0x54
	int moveIndex;	// 88 = 0x58
}
@property(retain, nonatomic) NSString *backgroundPaper;	// G=0x32215f29; S=0x32215f39; @synthesize
@property(retain, nonatomic) NSString *frame;	// G=0x32215ee9; S=0x32215ef9; @synthesize
@property(retain, nonatomic) NSString *mask;	// G=0x32215ec9; S=0x32215ed9; @synthesize
@property(retain, nonatomic) NSArray *subtract;	// G=0x32215f09; S=0x32215f19; @synthesize
// declared property getter: - (id)backgroundPaper;	// 0x32215f29
- (void)dealloc;	// 0x32215e21
// declared property getter: - (id)frame;	// 0x32215ee9
// declared property getter: - (id)mask;	// 0x32215ec9
// declared property setter: - (void)setBackgroundPaper:(id)paper;	// 0x32215f39
// declared property setter: - (void)setFrame:(id)frame;	// 0x32215ef9
// declared property setter: - (void)setMask:(id)mask;	// 0x32215ed9
// declared property setter: - (void)setSubtract:(id)subtract;	// 0x32215f19
// declared property getter: - (id)subtract;	// 0x32215f09
@end

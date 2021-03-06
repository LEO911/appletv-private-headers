/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"

@class NSString, ATVImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItemContents : BRControl {
	BOOL _waitingForImages;	// 84 = 0x54
	BOOL _dimmed;	// 85 = 0x55
	BOOL _highlightRightJustifiedText;	// 86 = 0x56
	ATVImage *_leftImage;	// 88 = 0x58
	id<BRImageProxy> _leftImageProxy;	// 92 = 0x5c
	ATVImage *_rightImage;	// 96 = 0x60
	id<BRImageProxy> _rightImageProxy;	// 100 = 0x64
	NSString *_imageSeparatorText;	// 104 = 0x68
	NSString *_text;	// 108 = 0x6c
	NSString *_detailedText;	// 112 = 0x70
	NSString *_rightJustifiedText;	// 116 = 0x74
}
@property(copy) NSString *detailedText;	// G=0xab86d; S=0xab881; @synthesize=_detailedText
@property(assign) BOOL dimmed;	// G=0xab785; S=0xab62d; 
@property(assign) BOOL highlightRightJustifiedText;	// G=0xaaf75; S=0xaaf1d; 
@property(copy) NSString *imageSeparatorText;	// G=0xab825; S=0xab839; @synthesize=_imageSeparatorText
@property(retain) ATVImage *leftImage;	// G=0xab795; S=0xab7a9; @synthesize=_leftImage
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0xab7b9; S=0xab7cd; @synthesize=_leftImageProxy
@property(retain) ATVImage *rightImage;	// G=0xab7dd; S=0xab7f1; @synthesize=_rightImage
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0xab801; S=0xab815; @synthesize=_rightImageProxy
@property(copy) NSString *rightJustifiedText;	// G=0xab891; S=0xab8a5; @synthesize=_rightJustifiedText
@property(copy) NSString *text;	// G=0xab849; S=0xab85d; @synthesize=_text
- (id)init;	// 0xaac21
- (void)_getRightJustifiedAttributed:(id *)attributed textRect:(CGRect *)rect;	// 0xaad81
- (void)_imageLoadFailed:(id)failed;	// 0xab9d9
- (void)_imageLoadSucceeded:(id)succeeded;	// 0xab8b5
- (void)_setWaitingForImages:(BOOL)images;	// 0xabaa5
- (void)dealloc;	// 0xaac79
// declared property getter: - (id)detailedText;	// 0xab86d
// declared property getter: - (BOOL)dimmed;	// 0xab785
- (void)drawRect:(CGRect)rect;	// 0xaaf85
// declared property getter: - (BOOL)highlightRightJustifiedText;	// 0xaaf75
// declared property getter: - (id)imageSeparatorText;	// 0xab825
// declared property getter: - (id)leftImage;	// 0xab795
// declared property getter: - (id)leftImageProxy;	// 0xab7b9
// declared property getter: - (id)rightImage;	// 0xab7dd
// declared property getter: - (id)rightImageProxy;	// 0xab801
// declared property getter: - (id)rightJustifiedText;	// 0xab891
// declared property setter: - (void)setDetailedText:(id)text;	// 0xab881
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0xab62d
// declared property setter: - (void)setHighlightRightJustifiedText:(BOOL)text;	// 0xaaf1d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0xab839
// declared property setter: - (void)setLeftImage:(id)image;	// 0xab7a9
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0xab7cd
// declared property setter: - (void)setRightImage:(id)image;	// 0xab7f1
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0xab815
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0xab8a5
// declared property setter: - (void)setText:(id)text;	// 0xab85d
// declared property getter: - (id)text;	// 0xab849
@end


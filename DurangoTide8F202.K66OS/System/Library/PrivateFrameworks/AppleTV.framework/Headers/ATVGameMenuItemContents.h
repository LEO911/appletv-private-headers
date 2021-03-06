/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <BRControl.h> // Unknown library

@class NSString, BRImage;
@protocol BRImageProxy;

__attribute__((visibility("hidden")))
@interface ATVGameMenuItemContents : BRControl {
@private
	BOOL _waitingForImages;	// 44 = 0x2c
	BOOL _dimmed;	// 45 = 0x2d
	BOOL _highlightRightJustifiedText;	// 46 = 0x2e
	BRImage *_leftImage;	// 48 = 0x30
	id<BRImageProxy> _leftImageProxy;	// 52 = 0x34
	BRImage *_rightImage;	// 56 = 0x38
	id<BRImageProxy> _rightImageProxy;	// 60 = 0x3c
	NSString *_imageSeparatorText;	// 64 = 0x40
	NSString *_text;	// 68 = 0x44
	NSString *_detailedText;	// 72 = 0x48
	NSString *_rightJustifiedText;	// 76 = 0x4c
}
@property(copy) NSString *detailedText;	// G=0x3371c7c5; S=0x3371c8f5; @synthesize=_detailedText
@property(assign) BOOL dimmed;	// G=0x3371c1b5; S=0x3371c5fd; 
@property(assign) BOOL highlightRightJustifiedText;	// G=0x3371c1a5; S=0x3371c46d; 
@property(copy) NSString *imageSeparatorText;	// G=0x3371c795; S=0x3371c8a5; @synthesize=_imageSeparatorText
@property(retain) BRImage *leftImage;	// G=0x3371c735; S=0x3371c7f5; @synthesize=_leftImage
@property(retain) id<BRImageProxy> leftImageProxy;	// G=0x3371c74d; S=0x3371c821; @synthesize=_leftImageProxy
@property(retain) BRImage *rightImage;	// G=0x3371c765; S=0x3371c84d; @synthesize=_rightImage
@property(retain) id<BRImageProxy> rightImageProxy;	// G=0x3371c77d; S=0x3371c879; @synthesize=_rightImageProxy
@property(copy) NSString *rightJustifiedText;	// G=0x3371c7dd; S=0x3371c91d; @synthesize=_rightJustifiedText
@property(copy) NSString *text;	// G=0x3371c7ad; S=0x3371c8cd; @synthesize=_text
- (id)init;	// 0x3371c5ad
- (void)_getRightJustifiedAttributed:(id *)attributed textRect:(CGRect *)rect;	// 0x3371c945
- (void)_imageLoadFailed:(id)failed;	// 0x3371c2bd
- (void)_imageLoadSucceeded:(id)succeeded;	// 0x3371c371
- (void)_setWaitingForImages:(BOOL)images;	// 0x3371c1c5
- (void)dealloc;	// 0x3371c4bd
// declared property getter: - (id)detailedText;	// 0x3371c7c5
// declared property getter: - (BOOL)dimmed;	// 0x3371c1b5
- (void)drawInContext:(CGContextRef)context;	// 0x3371caa5
// declared property getter: - (BOOL)highlightRightJustifiedText;	// 0x3371c1a5
// declared property getter: - (id)imageSeparatorText;	// 0x3371c795
// declared property getter: - (id)leftImage;	// 0x3371c735
// declared property getter: - (id)leftImageProxy;	// 0x3371c74d
// declared property getter: - (id)rightImage;	// 0x3371c765
// declared property getter: - (id)rightImageProxy;	// 0x3371c77d
// declared property getter: - (id)rightJustifiedText;	// 0x3371c7dd
// declared property setter: - (void)setDetailedText:(id)text;	// 0x3371c8f5
// declared property setter: - (void)setDimmed:(BOOL)dimmed;	// 0x3371c5fd
// declared property setter: - (void)setHighlightRightJustifiedText:(BOOL)text;	// 0x3371c46d
// declared property setter: - (void)setImageSeparatorText:(id)text;	// 0x3371c8a5
// declared property setter: - (void)setLeftImage:(id)image;	// 0x3371c7f5
// declared property setter: - (void)setLeftImageProxy:(id)proxy;	// 0x3371c821
// declared property setter: - (void)setRightImage:(id)image;	// 0x3371c84d
// declared property setter: - (void)setRightImageProxy:(id)proxy;	// 0x3371c879
// declared property setter: - (void)setRightJustifiedText:(id)text;	// 0x3371c91d
// declared property setter: - (void)setText:(id)text;	// 0x3371c8cd
// declared property getter: - (id)text;	// 0x3371c7ad
@end


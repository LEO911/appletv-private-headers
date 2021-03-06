/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <UIView.h> // Unknown library

@class NSNumberFormatter, UILabel;

@interface QLPageNumberView : UIView {
	int _pageNumber;	// 84 = 0x54
	int _pageCount;	// 88 = 0x58
	UILabel *_backgroundLabel;	// 92 = 0x5c
	UILabel *_label;	// 96 = 0x60
	NSNumberFormatter *_indexFormatter;	// 100 = 0x64
}
@property(assign) int pageCount;	// G=0x332c6d49; S=0x332c6d05; 
@property(assign) int pageNumber;	// G=0x332c6cf5; S=0x332c6cb1; 
- (id)initWithFrame:(CGRect)frame;	// 0x332c6831
- (CGPathRef)_copyMutablePathForRoundedRect:(CGRect)roundedRect radius:(float)radius inverted:(BOOL)inverted;	// 0x332c6ecd
- (id)_indexFormatter;	// 0x332c6a95
- (void)_updateString;	// 0x332c6b49
- (void)dealloc;	// 0x332c6a49
- (void)drawRect:(CGRect)rect;	// 0x332c70ed
- (void)layoutSubviews;	// 0x332c6e1d
// declared property getter: - (int)pageCount;	// 0x332c6d49
// declared property getter: - (int)pageNumber;	// 0x332c6cf5
// declared property setter: - (void)setPageCount:(int)count;	// 0x332c6d05
// declared property setter: - (void)setPageNumber:(int)number;	// 0x332c6cb1
- (void)sizeToFit;	// 0x332c6d59
@end


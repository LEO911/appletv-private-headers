/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <NSObject.h> // Unknown library
#import "UIFoundation-Structs.h"
#import "NSCoding.h"

@class NSString, NSData, UITextAttachmentView;

@interface NSTextAttachment : NSObject <NSCoding> {
	NSData *_data;	// 4 = 0x4
	NSString *_uti;	// 8 = 0x8
	UITextAttachmentView *_wrapperView;	// 12 = 0xc
}
@property(retain) id contentView;	// G=0x368d6ed1; S=0x368d6e4d; converted property
@property(assign, nonatomic) CGRect drawingBounds;	// G=0x368d6fe9; S=0x368d6fad; 
@property(retain, nonatomic) id image;	// G=0x368d6f09; S=0x368d6f29; 
- (id)initWithCoder:(id)coder;	// 0x368d6cd5
- (id)initWithData:(id)data ofType:(id)type;	// 0x368d69ed
- (id)initWithFileWrapper:(id)fileWrapper;	// 0x368d6ba1
- (void)_setWrapperView:(id)view;	// 0x368d6d41
- (id)_wrapperView;	// 0x368d6d95
- (id)attachmentCell;	// 0x368d6ef9
// converted property getter: - (id)contentView;	// 0x368d6ed1
- (void)dealloc;	// 0x368d6a65
// declared property getter: - (CGRect)drawingBounds;	// 0x368d6fe9
- (void)encodeWithCoder:(id)coder;	// 0x368d6c85
- (id)fileWrapper;	// 0x368d6af9
// declared property getter: - (id)image;	// 0x368d6f09
// converted property setter: - (void)setContentView:(id)view;	// 0x368d6e4d
// declared property setter: - (void)setDrawingBounds:(CGRect)bounds;	// 0x368d6fad
// declared property setter: - (void)setImage:(id)image;	// 0x368d6f29
@end


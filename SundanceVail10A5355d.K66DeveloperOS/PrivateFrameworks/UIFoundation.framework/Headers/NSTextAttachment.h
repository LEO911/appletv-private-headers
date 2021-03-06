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
@property(retain) id contentView;	// G=0x32562cd9; S=0x32562c55; converted property
@property(assign, nonatomic) CGRect drawingBounds;	// G=0x32562df1; S=0x32562db5; 
@property(retain, nonatomic) id image;	// G=0x32562d11; S=0x32562d31; 
- (id)initWithCoder:(id)coder;	// 0x32562add
- (id)initWithData:(id)data ofType:(id)type;	// 0x325627f5
- (id)initWithFileWrapper:(id)fileWrapper;	// 0x325629a9
- (void)_setWrapperView:(id)view;	// 0x32562b49
- (id)_wrapperView;	// 0x32562b9d
- (id)attachmentCell;	// 0x32562d01
// converted property getter: - (id)contentView;	// 0x32562cd9
- (void)dealloc;	// 0x3256286d
// declared property getter: - (CGRect)drawingBounds;	// 0x32562df1
- (void)encodeWithCoder:(id)coder;	// 0x32562a8d
- (id)fileWrapper;	// 0x32562901
// declared property getter: - (id)image;	// 0x32562d11
// converted property setter: - (void)setContentView:(id)view;	// 0x32562c55
// declared property setter: - (void)setDrawingBounds:(CGRect)bounds;	// 0x32562db5
// declared property setter: - (void)setImage:(id)image;	// 0x32562d31
@end


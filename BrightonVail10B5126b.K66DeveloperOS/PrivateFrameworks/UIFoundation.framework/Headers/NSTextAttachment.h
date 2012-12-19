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
@property(retain) id contentView;	// G=0x35ad3b11; S=0x35ad3a8d; converted property
@property(assign, nonatomic) CGRect drawingBounds;	// G=0x35ad3c29; S=0x35ad3bed; 
@property(retain, nonatomic) id image;	// G=0x35ad3b49; S=0x35ad3b69; 
- (id)initWithCoder:(id)coder;	// 0x35ad3915
- (id)initWithData:(id)data ofType:(id)type;	// 0x35ad362d
- (id)initWithFileWrapper:(id)fileWrapper;	// 0x35ad37e1
- (void)_setWrapperView:(id)view;	// 0x35ad3981
- (id)_wrapperView;	// 0x35ad39d5
- (id)attachmentCell;	// 0x35ad3b39
// converted property getter: - (id)contentView;	// 0x35ad3b11
- (void)dealloc;	// 0x35ad36a5
// declared property getter: - (CGRect)drawingBounds;	// 0x35ad3c29
- (void)encodeWithCoder:(id)coder;	// 0x35ad38c5
- (id)fileWrapper;	// 0x35ad3739
// declared property getter: - (id)image;	// 0x35ad3b49
// converted property setter: - (void)setContentView:(id)view;	// 0x35ad3a8d
// declared property setter: - (void)setDrawingBounds:(CGRect)bounds;	// 0x35ad3bed
// declared property setter: - (void)setImage:(id)image;	// 0x35ad3b69
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSURL;

__attribute__((visibility("hidden")))
@interface UIActivityItemURLRep : NSObject {
	NSURL *_URL;	// 4 = 0x4
	UIImage *_thumbnail;	// 8 = 0x8
	int _attachmentURLType;	// 12 = 0xc
}
@property(retain, nonatomic) NSURL *URL;	// G=0x3065edc9; S=0x3065edd9; @synthesize=_URL
@property(assign, nonatomic) int attachmentURLType;	// G=0x3065ee09; S=0x3065ee19; @synthesize=_attachmentURLType
@property(retain, nonatomic) UIImage *thumbnail;	// G=0x3065ede9; S=0x3065edf9; @synthesize=_thumbnail
// declared property getter: - (id)URL;	// 0x3065edc9
// declared property getter: - (int)attachmentURLType;	// 0x3065ee09
- (void)dealloc;	// 0x3065ed21
- (BOOL)isFileURL;	// 0x3065ed79
- (id)scheme;	// 0x3065eda1
// declared property setter: - (void)setAttachmentURLType:(int)type;	// 0x3065ee19
// declared property setter: - (void)setThumbnail:(id)thumbnail;	// 0x3065edf9
// declared property setter: - (void)setURL:(id)url;	// 0x3065edd9
// declared property getter: - (id)thumbnail;	// 0x3065ede9
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>

@class NSURL, NSString;

__attribute__((visibility("hidden")))
@interface _UIPreviewItemProxy : NSObject {
	NSURL *_URL;	// 4 = 0x4
	NSURL *_previewURLOverride;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSURL *_URLsToDeleteOnDealloc;	// 16 = 0x10
	NSString *_previewItemContentType;	// 20 = 0x14
	NSURL *_URLToDeleteOnDealloc;	// 24 = 0x18
}
@property(copy, nonatomic) NSURL *URLToDeleteOnDealloc;	// G=0x2f7a5271; S=0x2f7a5285; @synthesize=_URLToDeleteOnDealloc
@property(copy, nonatomic) NSString *previewItemContentType;	// G=0x2f7a5165; S=0x2f7a5121; 
@property(copy, nonatomic) NSString *previewItemTitle;	// G=0x2f7a524d; S=0x2f7a5261; @synthesize=_name
@property(copy, nonatomic) NSURL *previewItemURL;	// G=0x2f7a5205; S=0x2f7a5219; @synthesize=_URL
@property(copy, nonatomic) NSURL *previewItemURLOverride;	// G=0x2f7a5229; S=0x2f7a523d; @synthesize=_previewURLOverride
// declared property getter: - (id)URLToDeleteOnDealloc;	// 0x2f7a5271
- (id)_primitive_previewItemContentType;	// 0x2f7a51c1
- (void)dealloc;	// 0x2f7a503d
// declared property getter: - (id)previewItemContentType;	// 0x2f7a5165
// declared property getter: - (id)previewItemTitle;	// 0x2f7a524d
// declared property getter: - (id)previewItemURL;	// 0x2f7a5205
- (id)previewItemURLForDisplay;	// 0x2f7a51d1
// declared property getter: - (id)previewItemURLOverride;	// 0x2f7a5229
// declared property setter: - (void)setPreviewItemContentType:(id)type;	// 0x2f7a5121
// declared property setter: - (void)setPreviewItemTitle:(id)title;	// 0x2f7a5261
// declared property setter: - (void)setPreviewItemURL:(id)url;	// 0x2f7a5219
// declared property setter: - (void)setPreviewItemURLOverride:(id)override;	// 0x2f7a523d
// declared property setter: - (void)setURLToDeleteOnDealloc:(id)deleteOnDealloc;	// 0x2f7a5285
@end


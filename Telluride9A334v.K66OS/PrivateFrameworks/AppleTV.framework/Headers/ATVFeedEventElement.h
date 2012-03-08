/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedElement.h"

@class ATVFeedImageElement, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedEventElement : ATVFeedElement {
@private
	NSString *_title;	// 28 = 0x1c
	NSString *_description;	// 32 = 0x20
	ATVFeedImageElement *_image;	// 36 = 0x24
	NSDate *_startDate;	// 40 = 0x28
	NSDate *_endDate;	// 44 = 0x2c
}
@property(copy, nonatomic) NSString *description;	// G=0x3332b639; S=0x3332b649; @synthesize=_description
@property(retain, nonatomic) NSDate *endDate;	// G=0x3332b6d5; S=0x3332b6e5; @synthesize=_endDate
@property(retain, nonatomic) ATVFeedImageElement *image;	// G=0x3332b66d; S=0x3332b67d; @synthesize=_image
@property(retain, nonatomic) NSDate *startDate;	// G=0x3332b6a1; S=0x3332b6b1; @synthesize=_startDate
@property(copy, nonatomic) NSString *title;	// G=0x3332b605; S=0x3332b615; @synthesize=_title
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3332b385
- (void)dealloc;	// 0x3332b569
// declared property getter: - (id)description;	// 0x3332b639
// declared property getter: - (id)endDate;	// 0x3332b6d5
// declared property getter: - (id)image;	// 0x3332b66d
// declared property setter: - (void)setDescription:(id)description;	// 0x3332b649
// declared property setter: - (void)setEndDate:(id)date;	// 0x3332b6e5
// declared property setter: - (void)setImage:(id)image;	// 0x3332b67d
// declared property setter: - (void)setStartDate:(id)date;	// 0x3332b6b1
// declared property setter: - (void)setTitle:(id)title;	// 0x3332b615
// declared property getter: - (id)startDate;	// 0x3332b6a1
// declared property getter: - (id)title;	// 0x3332b605
@end

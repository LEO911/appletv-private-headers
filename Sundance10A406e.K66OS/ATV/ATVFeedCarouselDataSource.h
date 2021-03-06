/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, ATVMerchant, ATVFeedElement, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVFeedCarouselDataSource : XXUnknownSuperclass <ATVCarouselViewDataSource> {
	NSDictionary *_data;	// 4 = 0x4
	NSString *_templateName;	// 8 = 0x8
	ATVFeedElement *_feedElement;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
}
@property(retain) ATVMerchant *merchant;	// G=0x150249; S=0x15025d; @synthesize=_merchant
- (id)initWithData:(id)data templateName:(id)name;	// 0x14ff6d
- (id)initWithFeedElement:(id)feedElement templateName:(id)name;	// 0x14ffe5
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x150151
- (void)dealloc;	// 0x15005d
// declared property getter: - (id)merchant;	// 0x150249
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x1500e9
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x15025d
@end


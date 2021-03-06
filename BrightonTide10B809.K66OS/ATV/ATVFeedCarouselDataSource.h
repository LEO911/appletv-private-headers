/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ATVCarouselViewDataSource.h"

@class ATVFeedElement, NSString, NSDictionary, ATVMerchant;

__attribute__((visibility("hidden")))
@interface ATVFeedCarouselDataSource : XXUnknownSuperclass <ATVCarouselViewDataSource> {
	NSDictionary *_data;	// 4 = 0x4
	NSString *_templateName;	// 8 = 0x8
	ATVFeedElement *_feedElement;	// 12 = 0xc
	ATVMerchant *_merchant;	// 16 = 0x10
}
@property(retain) ATVMerchant *merchant;	// G=0x15ed11; S=0x15ed25; @synthesize=_merchant
- (id)initWithData:(id)data templateName:(id)name;	// 0x15ea35
- (id)initWithFeedElement:(id)feedElement templateName:(id)name;	// 0x15eaad
- (id)carouselView:(id)view itemAtIndex:(unsigned)index;	// 0x15ec19
- (void)dealloc;	// 0x15eb25
// declared property getter: - (id)merchant;	// 0x15ed11
- (unsigned)numberOfItemsForCarouselView:(id)carouselView;	// 0x15ebb1
// declared property setter: - (void)setMerchant:(id)merchant;	// 0x15ed25
@end


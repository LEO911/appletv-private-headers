/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedPhotoElement : ATVFeedElement {
	NSString *_caption;	// 4 = 0x4
	NSArray *_assets;	// 8 = 0x8
	NSArray *_badges;	// 12 = 0xc
}
@property(retain, nonatomic) NSArray *assets;	// G=0x3e1fc5; S=0x3e1fd5; @synthesize=_assets
@property(retain, nonatomic) NSArray *badges;	// G=0x3e1ffd; S=0x3e200d; @synthesize=_badges
@property(retain, nonatomic) NSString *caption;	// G=0x3e1f8d; S=0x3e1f9d; @synthesize=_caption
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3e1c3d
- (void).cxx_destruct;	// 0x3e2035
// declared property getter: - (id)assets;	// 0x3e1fc5
// declared property getter: - (id)badges;	// 0x3e1ffd
// declared property getter: - (id)caption;	// 0x3e1f8d
// declared property setter: - (void)setAssets:(id)assets;	// 0x3e1fd5
// declared property setter: - (void)setBadges:(id)badges;	// 0x3e200d
// declared property setter: - (void)setCaption:(id)caption;	// 0x3e1f9d
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary, NSValue, UIImage;

__attribute__((visibility("hidden")))
@interface _UISearchBarAppearanceStorage : NSObject {
	NSMutableDictionary *searchFieldBackgroundImages;	// 4 = 0x4
	NSValue *searchFieldPositionAdjustment;	// 8 = 0x8
	NSMutableDictionary *iconImages;	// 12 = 0xc
	UIImage *separatorImage;	// 16 = 0x10
}
@property(retain, nonatomic) NSValue *searchFieldPositionAdjustment;	// G=0x302dcfad; S=0x304a3065; @synthesize
@property(retain, nonatomic) UIImage *separatorImage;	// G=0x302dc18d; S=0x302dc265; @synthesize
- (void)dealloc;	// 0x304a2fd9
- (id)imageForIcon:(int)icon state:(unsigned)state;	// 0x302dbd65
- (id)searchFieldBackgroundImageForState:(unsigned)state;	// 0x302dbb35
// declared property getter: - (id)searchFieldPositionAdjustment;	// 0x302dcfad
// declared property getter: - (id)separatorImage;	// 0x302dc18d
- (void)setImage:(id)image forIcon:(int)icon state:(unsigned)state;	// 0x302dbe05
- (void)setSearchFieldBackgroundImage:(id)image forState:(unsigned)state;	// 0x302dbb81
// declared property setter: - (void)setSearchFieldPositionAdjustment:(id)adjustment;	// 0x304a3065
// declared property setter: - (void)setSeparatorImage:(id)image;	// 0x302dc265
@end


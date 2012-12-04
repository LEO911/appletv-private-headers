/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "ATVFeedController.h"

@class BRControl, BRScrollControl;

__attribute__((visibility("hidden")))
@interface ATVFeedScrollerController : ATVFeedController {
	BRScrollControl *_scroller;	// 104 = 0x68
}
@property(readonly, assign, nonatomic) BRControl *headerControl;	// G=0x150099; 
- (id)initWithDictionary:(id)dictionary;	// 0x14f395
- (id)initWithFeedElement:(id)feedElement;	// 0x14f331
- (BOOL)_canHandleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x14f509
- (id)_containerWithControl:(id)control size:(CGRect)size;	// 0x150241
- (void)_handleUpdateWithFeedElement:(id)feedElement loadType:(int)type;	// 0x14f5a9
- (BOOL)_hasFixedHeader;	// 0x150319
- (BOOL)_updateContent;	// 0x14f5b9
- (id)accessibilityLabel;	// 0x150071
- (void)dealloc;	// 0x14f3f9
// declared property getter: - (id)headerControl;	// 0x150099
- (BOOL)showsHeader;	// 0x1503b5
- (void)wasPushed;	// 0x14f445
@end

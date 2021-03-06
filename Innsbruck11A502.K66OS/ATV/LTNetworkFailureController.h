/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVTCPIPConfigDelegate.h"
#import "AppleTV-Structs.h"
#import "BRMenuController.h"
#import "BRMenuListItemProvider.h"

@class NSString, BRAirportNetwork;

__attribute__((visibility("hidden")))
@interface LTNetworkFailureController : BRMenuController <BRMenuListItemProvider, ATVTCPIPConfigDelegate> {
	BRAirportNetwork *_network;	// 144 = 0x90
	BOOL _localNetworkUp;	// 148 = 0x94
	NSString *_popToLabel;	// 152 = 0x98
}
- (id)initForNetwork:(id)network withPopToLabel:(id)label;	// 0x4a2a3d
- (void).cxx_destruct;	// 0x4a2e11
- (void)_setTitleAndPromptStrings;	// 0x4a2e45
- (void)configurationComplete:(BOOL)complete forInterface:(int)interface;	// 0x4a2d71
- (void)configurationPending:(id)pending forInterface:(int)interface;	// 0x4a2d6d
- (float)heightForRow:(long)row;	// 0x4a2d65
- (long)itemCount;	// 0x4a2d49
- (id)itemForRow:(long)row;	// 0x4a2cbd
- (void)itemSelected:(long)selected;	// 0x4a2b65
- (BOOL)rowSelectable:(long)selectable;	// 0x4a2d69
- (id)titleForRow:(long)row;	// 0x4a2d61
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library


@interface UIKeyboardOverlayManager : NSObject {
}
+ (id)overlayDirectory;	// 0x32251611
+ (BOOL)overlaysEnabled;	// 0x31f80739
+ (id)sharedInstance;	// 0x32251555
- (id)baseLayoutForOverlay:(id)overlay;	// 0x322512f1
- (id)localizedNameForOverlay:(id)overlay;	// 0x3225136d
- (void)modifyKeyboard:(id)keyboard withOverlay:(id)overlay;	// 0x32250fed
- (id)overlayList;	// 0x32251455
- (BOOL)overlayNameIsValid:(id)valid;	// 0x32251591
@end

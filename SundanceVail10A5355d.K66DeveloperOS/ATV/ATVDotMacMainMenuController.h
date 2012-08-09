/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMediaMenuController.h"
#import "BRTextFieldDelegate.h"


__attribute__((visibility("hidden")))
@interface ATVDotMacMainMenuController : BRMediaMenuController <BRTextFieldDelegate> {
	BOOL _isScreenSaverMenu;	// 172 = 0xac
}
+ (void)initialize;	// 0x186d89
+ (id)menuController;	// 0x186e9d
+ (id)screenSaverMenuController;	// 0x186ee1
- (id)init;	// 0x186f29
- (id)initForScreenSaver:(BOOL)screenSaver;	// 0x186f3d
- (void)_accountLoaded:(id)loaded;	// 0x187881
- (void)_handleAccountSelection:(id)selection;	// 0x187769
- (void)_handleAddSelection:(id)selection;	// 0x1875cd
- (void)dealloc;	// 0x187315
- (long)defaultIndex;	// 0x187391
- (BOOL)isNetworkDependent;	// 0x1875c9
- (float)listVerticalOffset;	// 0x187371
- (void)textDidChange:(id)text;	// 0x1873c5
- (void)textDidEndEditing:(id)text;	// 0x1873c9
@end

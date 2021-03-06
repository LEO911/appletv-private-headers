/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"


@interface ATVMusicStoreControlFactory : NSObject <BRControlFactory, BRControlHeightFactory> {
@private
	BOOL _forMainMenu;	// 4 = 0x4
}
+ (void)initialize;	// 0x30677631
+ (id)mainMenuFactory;	// 0x30677ce9
+ (void)registerPopulator:(Class)populator;	// 0x30677a61
+ (id)standardFactory;	// 0x30677c8d
- (id)initForMainMenu:(BOOL)mainMenu;	// 0x30677385
- (id)_populatorForData:(id)data;	// 0x30677bb5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x30677719
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x306773c1
@end


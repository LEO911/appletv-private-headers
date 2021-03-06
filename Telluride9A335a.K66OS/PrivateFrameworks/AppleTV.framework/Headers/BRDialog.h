/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString, BRWindow, BRControl;

@interface BRDialog : NSObject {
@private
	BRWindow *_window;	// 4 = 0x4
	BRControl *_control;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
}
@property(readonly, retain) BRControl *control;	// G=0x34276719; converted property
@property(readonly, retain) NSString *identifier;	// G=0x34276751; converted property
+ (void)dismissDialogWithIdentifier:(id)identifier;	// 0x34276f89
+ (void)initialize;	// 0x34276495
+ (BOOL)isDialogCurrentlyPosted;	// 0x34276b09
+ (BOOL)isDialogPostedWithIdentifier:(id)identifier;	// 0x34276aa1
+ (void)postDialogWithControl:(id)control identifier:(id)identifier;	// 0x34276b35
+ (void)postDialogWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x3427690d
+ (void)postModalDialog:(id)dialog;	// 0x34276ba1
+ (void)postModalDialogWithControl:(id)control identifier:(id)identifier;	// 0x34276b59
+ (void)postModalDialogWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x34276dfd
+ (void)postModalDialogWithController:(id)controller identifier:(id)identifier;	// 0x34276b7d
+ (void)postModalDialogWithController:(id)controller identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x34276e6d
- (id)initWithControl:(id)control identifier:(id)identifier style:(int)style opaque:(BOOL)opaque;	// 0x342764f9
- (void)_dialogStackBankrupt:(id)bankrupt;	// 0x34277249
- (void)_transitionCompleted:(id)completed;	// 0x34277281
// converted property getter: - (id)control;	// 0x34276719
- (void)dealloc;	// 0x34276661
// converted property getter: - (id)identifier;	// 0x34276751
- (void)transitionIn;	// 0x34276789
- (void)transitionOut;	// 0x3427680d
@end


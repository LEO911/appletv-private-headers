/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

#import </libobjc.A.h>

@class UITableView, NSPredicate, NSString, PSSpecifierStub, UIAlertView, NSMutableArray;
@protocol BTDevicePickerDelegate;

@interface BTDevicePicker : NSObject {
	UIAlertView *_alertView;	// 4 = 0x4
	UITableView *_tableView;	// 8 = 0x8
	NSMutableArray *_deviceList;	// 12 = 0xc
	id<BTDevicePickerDelegate> _delegate;	// 16 = 0x10
	NSString *_title;	// 20 = 0x14
	unsigned _service;	// 24 = 0x18
	NSPredicate *_predicate;	// 28 = 0x1c
	BOOL _showingAlert;	// 32 = 0x20
	BOOL _checkingPaired;	// 33 = 0x21
	PSSpecifierStub *_connectingSpec;	// 36 = 0x24
	Class _btSSPRequestClass;	// 40 = 0x28
	Class _btAlertClass;	// 44 = 0x2c
	id _btSSPAlert;	// 48 = 0x30
	id _btAlert;	// 52 = 0x34
}
@property(assign, nonatomic) id<BTDevicePickerDelegate> delegate;	// G=0x2d0381c9; S=0x2d0381d9; @synthesize=_delegate
- (id)initWithTitle:(id)title service:(unsigned)service discoveryNameFilter:(id)filter;	// 0x2d035fb1
- (void)_btSSPConfirmationHandler:(id)handler;	// 0x2d03743d
- (void)_btSSPNumericComparisonHandler:(id)handler;	// 0x2d0374ed
- (void)_btSSPPasskeyDisplayHandler:(id)handler;	// 0x2d0375d1
- (void)alertSheetDismissed:(id)dismissed;	// 0x2d037ec5
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x2d036c71
- (void)applicationWillResignActive:(id)application;	// 0x2d036bf1
- (void)authenticationRequestHandler:(id)handler;	// 0x2d0376b5
- (void)checkAttachTimeout;	// 0x2d0369e5
- (void)cleanupPairing;	// 0x2d0369a9
- (void)dealloc;	// 0x2d0363f1
// declared property getter: - (id)delegate;	// 0x2d0381c9
- (void)deviceConnectionCompleteHandler:(id)handler;	// 0x2d037d05
- (void)deviceDiscoveryStoppedHandler:(id)handler;	// 0x2d036f35
- (void)deviceFoundHandler:(id)handler;	// 0x2d036f91
- (void)deviceLostHandler:(id)handler;	// 0x2d03737d
- (void)deviceNameChangedHandler:(id)handler;	// 0x2d037155
- (void)devicePairedHandler:(id)handler;	// 0x2d037ab1
- (void)dismissAnimated:(BOOL)animated;	// 0x2d0368e5
- (void)powerChanged:(id)changed;	// 0x2d036dc9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2d0381d9
- (void)show;	// 0x2d0365d9
- (void)showInternal;	// 0x2d0366b5
- (void)startScanning;	// 0x2d036a89
- (id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;	// 0x2d0380dd
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x2d037f41
- (int)tableView:(id)view numberOfRowsInSection:(int)section;	// 0x2d0380bd
@end

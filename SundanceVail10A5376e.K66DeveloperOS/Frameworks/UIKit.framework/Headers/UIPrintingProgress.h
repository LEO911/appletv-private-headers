/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIAlertView, NSString, UIPrintingProgressViewController;

__attribute__((visibility("hidden")))
@interface UIPrintingProgress : NSObject {
	NSString *_printerName;	// 4 = 0x4
	id _cancelHandler;	// 8 = 0x8
	double _startTime;	// 12 = 0xc
	double _displayTime;	// 20 = 0x14
	UIAlertView *_alert;	// 28 = 0x1c
	UIPrintingProgressViewController *_viewController;	// 32 = 0x20
	BOOL _donePrinting;	// 36 = 0x24
}
- (id)initWithPrinterName:(id)printerName cancelHandler:(id)handler;	// 0x3058e975
- (void)alertView:(id)view clickedButtonAtIndex:(int)index;	// 0x3058f079
- (void)alertViewCancel:(id)cancel;	// 0x3058f069
- (void)dealloc;	// 0x3058e9ed
- (void)didPresentAlertView:(id)view;	// 0x3058f031
- (void)endProgress;	// 0x3058f091
- (void)hideProgressAnimated:(BOOL)animated;	// 0x3058eecd
- (double)nextPrintDelay;	// 0x3058f429
- (void)progressCancel;	// 0x3058efb9
- (BOOL)progressVisible;	// 0x3058ea8d
- (void)setPage:(int)page ofPage:(int)page2;	// 0x3058f24d
- (void)setPrintInfoState:(int)state;	// 0x3058f1b1
- (void)showProgress:(id)progress immediately:(BOOL)immediately;	// 0x3058eb29
@end


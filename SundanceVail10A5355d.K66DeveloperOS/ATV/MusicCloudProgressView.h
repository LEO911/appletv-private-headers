/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "MusicCloudAdView.h"

@class BRProgressBarWidget, BRWaitSpinnerControl;

__attribute__((visibility("hidden")))
@interface MusicCloudProgressView : MusicCloudAdView {
	BRProgressBarWidget *_progressBar;	// 80 = 0x50
	BRWaitSpinnerControl *_loadingSpinner;	// 84 = 0x54
}
- (id)init;	// 0x6fc71
- (void).cxx_destruct;	// 0x70201
- (void)_connectionProgressHandler:(id)handler;	// 0x6ffe5
- (id)accessibilityLabel;	// 0x70119
- (void)dealloc;	// 0x6fe59
- (BOOL)isAccessibilityElement;	// 0x70115
- (void)layoutSubcontrols;	// 0x6fec5
@end

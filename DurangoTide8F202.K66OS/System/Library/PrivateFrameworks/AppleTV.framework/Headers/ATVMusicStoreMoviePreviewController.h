/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <BRController.h> // Unknown library

@class NSDictionary, ATVURLDocument, NSTimer, BRWaitPromptControl;

@interface ATVMusicStoreMoviePreviewController : BRController {
@private
	BRWaitPromptControl *_waitPrompt;	// 60 = 0x3c
	NSTimer *_timer;	// 64 = 0x40
	NSDictionary *_dictionary;	// 68 = 0x44
	ATVURLDocument *_document;	// 72 = 0x48
}
+ (id)previewControllerWithDictionary:(id)dictionary;	// 0x336e9cf1
- (id)init;	// 0x336e93c1
- (id)initWithStoreDictionary:(id)storeDictionary;	// 0x336e9a5d
- (void)_movieDataFetchRequestProcessed:(id)processed;	// 0x336e9509
- (void)_showPromptTimer:(id)timer;	// 0x336e9469
- (BOOL)brEventAction:(id)action;	// 0x336e93c5
- (void)controlWasActivated;	// 0x336e97c5
- (void)controlWasDeactivated;	// 0x336e949d
- (void)dealloc;	// 0x336e99c9
@end

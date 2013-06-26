/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "iTunesStore-Structs.h"
#import "ISOperation.h"

@class ISDialog, ISDialogButton, NSArray;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation : ISOperation {
	ISDialog *_dialog;	// 60 = 0x3c
	BOOL _performDefaultActions;	// 64 = 0x40
	ISDialogButton *_selectedButton;	// 68 = 0x44
	NSArray *_textFieldValues;	// 72 = 0x48
	id _userNotification;	// 76 = 0x4c
}
@property(assign) id<ISDialogOperationDelegate> delegate;	// @dynamic
@property(retain) ISDialog *dialog;	// G=0x33c7a151; S=0x33c7a165; @synthesize=_dialog
@property(assign) BOOL performDefaultActions;	// G=0x33c7a175; S=0x33c7a18d; @synthesize=_performDefaultActions
@property(retain) ISDialogButton *selectedButton;	// G=0x33c7a1a5; S=0x33c7a1b9; @synthesize=_selectedButton
@property(readonly, assign) NSArray *textFieldValues;	// G=0x33c79811; 
@property(retain) id userNotification;	// G=0x33c7a1c9; S=0x33c7a1dd; @synthesize=_userNotification
+ (id)operationWithDialog:(id)dialog;	// 0x33c7952d
+ (id)operationWithError:(id)error;	// 0x33c79591
- (id)init;	// 0x33c79449
- (void)_handleResponseForNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x33c79ab9
- (void)_run;	// 0x33c79b39
- (void)_showUserNotification:(id)notification;	// 0x33c79f91
- (void)_waitForUserNotificationResponse:(CFUserNotificationRef)userNotificationResponse;	// 0x33c7a0d9
- (void)cancel;	// 0x33c79871
- (void)dealloc;	// 0x33c79489
// declared property getter: - (id)dialog;	// 0x33c7a151
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x33c795f5
// declared property getter: - (BOOL)performDefaultActions;	// 0x33c7a175
- (void)run;	// 0x33c798b9
// declared property getter: - (id)selectedButton;	// 0x33c7a1a5
// declared property setter: - (void)setDialog:(id)dialog;	// 0x33c7a165
// declared property setter: - (void)setPerformDefaultActions:(BOOL)actions;	// 0x33c7a18d
// declared property setter: - (void)setSelectedButton:(id)button;	// 0x33c7a1b9
// declared property setter: - (void)setUserNotification:(id)notification;	// 0x33c7a1dd
// declared property getter: - (id)textFieldValues;	// 0x33c79811
// declared property getter: - (id)userNotification;	// 0x33c7a1c9
@end

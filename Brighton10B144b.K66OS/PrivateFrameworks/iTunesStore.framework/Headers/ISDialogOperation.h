/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "iTunesStore-Structs.h"

@class NSArray, ISDialog, ISDialogButton;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation : ISOperation {
	ISDialog *_dialog;	// 60 = 0x3c
	BOOL _performDefaultActions;	// 64 = 0x40
	ISDialogButton *_selectedButton;	// 68 = 0x44
	NSArray *_textFieldValues;	// 72 = 0x48
	id _userNotification;	// 76 = 0x4c
}
@property(assign) id<ISDialogOperationDelegate> delegate;	// @dynamic
@property(retain) ISDialog *dialog;	// G=0x3688a1a9; S=0x3688a1bd; @synthesize=_dialog
@property(assign) BOOL performDefaultActions;	// G=0x3688a1cd; S=0x3688a1e5; @synthesize=_performDefaultActions
@property(retain) ISDialogButton *selectedButton;	// G=0x3688a1fd; S=0x3688a211; @synthesize=_selectedButton
@property(readonly, assign) NSArray *textFieldValues;	// G=0x36889861; 
@property(retain) id userNotification;	// G=0x3688a221; S=0x3688a235; @synthesize=_userNotification
+ (id)operationWithDialog:(id)dialog;	// 0x3688957d
+ (id)operationWithError:(id)error;	// 0x368895e1
- (id)init;	// 0x36889499
- (void)_handleResponseForNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x36889b1d
- (void)_run;	// 0x36889b9d
- (void)_showUserNotification:(id)notification;	// 0x36889fed
- (void)_waitForUserNotificationResponse:(CFUserNotificationRef)userNotificationResponse;	// 0x3688a131
- (void)cancel;	// 0x368898c1
- (void)dealloc;	// 0x368894d9
// declared property getter: - (id)dialog;	// 0x3688a1a9
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x36889645
// declared property getter: - (BOOL)performDefaultActions;	// 0x3688a1cd
- (void)run;	// 0x36889909
// declared property getter: - (id)selectedButton;	// 0x3688a1fd
// declared property setter: - (void)setDialog:(id)dialog;	// 0x3688a1bd
// declared property setter: - (void)setPerformDefaultActions:(BOOL)actions;	// 0x3688a1e5
// declared property setter: - (void)setSelectedButton:(id)button;	// 0x3688a211
// declared property setter: - (void)setUserNotification:(id)notification;	// 0x3688a235
// declared property getter: - (id)textFieldValues;	// 0x36889861
// declared property getter: - (id)userNotification;	// 0x3688a221
@end

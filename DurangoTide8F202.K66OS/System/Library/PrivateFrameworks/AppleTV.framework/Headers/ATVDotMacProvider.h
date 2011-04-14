/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import <NSObject.h> // Unknown library

@class NSString, NSDate, NSMutableArray;
@protocol BRControlFactory;

__attribute__((visibility("hidden")))
@interface ATVDotMacProvider : NSObject <BRProvider> {
@private
	NSMutableArray *_data;	// 4 = 0x4
	id<BRControlFactory> _controlFactory;	// 8 = 0x8
	NSDate *_lastUpdateDate;	// 12 = 0xc
	BOOL _updatePending;	// 16 = 0x10
	NSString *_uniqueID;	// 20 = 0x14
	BOOL _chainLoadingDisabled;	// 24 = 0x18
	BOOL _isTemporaryProvider;	// 25 = 0x19
}
@property(assign) BOOL chainLoadingDisabled;	// G=0x33693fd5; S=0x33693fc5; converted property
@property(readonly, retain) NSString *uniqueID;	// G=0x33693fe5; converted property
+ (BOOL)accountWithNameIsPersistent:(id)nameIsPersistent;	// 0x336962e1
+ (id)providerOfPersistentAccounts;	// 0x33696391
- (id)initAsTemporaryProvider:(BOOL)provider;	// 0x336961d1
- (BOOL)_accountIconLoadedForAccount:(id)account updateData:(id)data;	// 0x336953a9
- (void)_accountToRemove:(id)remove;	// 0x336965ed
- (id)_accountWithName:(id)name;	// 0x33694889
- (id)_assetWithIdentifier:(id)identifier parentCollection:(id)collection;	// 0x336948fd
- (BOOL)_assetsLoadedForCollection:(id)collection updateData:(id)data;	// 0x33694bbd
- (id)_cachedAccountIconForIconPath:(id)iconPath;	// 0x336949fd
- (void)_cancelDataMonitoringForAccounts;	// 0x33695af9
- (id)_collectionWithIdentifier:(id)identifier withParentAccountName:(id)parentAccountName;	// 0x33694975
- (id)_data;	// 0x33693ff9
- (BOOL)_handlesObject:(id)object;	// 0x33693ff5
- (BOOL)_imageLoadedForAsset:(id)asset updateData:(id)data;	// 0x33694a71
- (id)_initForPersistentAccounts;	// 0x33695d25
- (void)_listenerUpdate:(id)update;	// 0x33695ab5
- (BOOL)_mediaLoadedForAccount:(id)account updateData:(id)data;	// 0x33695451
- (void)_newAccountToAdd:(id)add;	// 0x33696789
- (BOOL)_newAuthenticationForCollection:(id)collection updateData:(id)data;	// 0x33695269
- (id)_persistentAccounts;	// 0x33695b71
- (void)_postUpdateNotification:(id)notification;	// 0x33695a51
- (void)_processChangeToObject:(id)object;	// 0x33696b29
- (void)_sendUpdateNotification;	// 0x336969f5
- (void)_sendUpdateNotificationAfterDelay;	// 0x33695a81
- (void)_updateDataCount;	// 0x33694009
- (id)accessibilityLabel;	// 0x33696ca1
// converted property getter: - (BOOL)chainLoadingDisabled;	// 0x33693fd5
- (id)controlFactory;	// 0x33693fb5
- (id)dataAtIndex:(long)index;	// 0x33696071
- (long)dataCount;	// 0x336960cd
- (void)dealloc;	// 0x336960f1
- (void)handleDataUpdate:(id)update updateData:(id)data;	// 0x33695e21
- (id)hashForDataAtIndex:(long)index;	// 0x33696021
- (void)invalidate;	// 0x33695fe1
// converted property setter: - (void)setChainLoadingDisabled:(BOOL)disabled;	// 0x33693fc5
// converted property getter: - (id)uniqueID;	// 0x33693fe5
@end

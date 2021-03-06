/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRTypeaheadPhraseAccumulatorChangeHandler.h"
#import "BRViewController.h"

@class NSArray, ATVDataClient, ATVDataQuery, NSString, BRMediaMenuView, NSTimer;

__attribute__((visibility("hidden")))
@interface BRDataQueryController : BRViewController <BRTypeaheadPhraseAccumulatorChangeHandler> {
	id _serverID;	// 104 = 0x68
	unsigned long _dataClientType;	// 108 = 0x6c
	ATVDataClient *_dataClient;	// 112 = 0x70
	BRMediaMenuView *_mediaMenuView;	// 116 = 0x74
	NSArray *_data;	// 120 = 0x78
	ATVDataQuery *_preDataQuery;	// 124 = 0x7c
	ATVDataQuery *_dataQuery;	// 128 = 0x80
	ATVDataQuery *_previewQuery;	// 132 = 0x84
	ATVDataQuery *_queueQuery;	// 136 = 0x88
	NSTimer *_spinnerTimer;	// 140 = 0x8c
	BOOL _showingSpinner;	// 144 = 0x90
	void *_dataItemToSelect;	// 148 = 0x94
	ATVDataQuery *_playQuery;	// 152 = 0x98
	BOOL _handlingDataClientUpdate;	// 156 = 0x9c
	BOOL _reloadListViewNeeded;	// 157 = 0x9d
	NSTimer *_serverFoundWaitTimer;	// 160 = 0xa0
	BOOL attemptConnectionOnServerRemove;	// 164 = 0xa4
	NSString *_spinnerLoadingText;	// 168 = 0xa8
	unsigned long _updateDataClientTypes;	// 172 = 0xac
	BOOL _refreshNeeded;	// 176 = 0xb0
	BOOL _popToRootWhenExhumed;	// 177 = 0xb1
}
@property(assign, nonatomic) BOOL attemptConnectionOnServerRemove;	// G=0x29cffd; S=0x29d00d; @synthesize
@property(readonly, retain) NSArray *data;	// G=0x29c475; converted property
@property(readonly, assign, nonatomic) ATVDataClient *dataClient;	// G=0x29c4b5; @synthesize=_dataClient
@property(readonly, assign) unsigned long dataClientType;	// G=0x29c4a5; converted property
@property(assign) void *dataItemToSelect;	// G=0x29c561; S=0x29c535; converted property
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x29c465; converted property
@property(assign, nonatomic) BOOL popToRootWhenExhumed;	// G=0x29d06d; S=0x29d07d; @synthesize=_popToRootWhenExhumed
@property(readonly, assign, nonatomic) BOOL refreshNeeded;	// G=0x29d05d; @synthesize=_refreshNeeded
@property(readonly, retain) id serverID;	// G=0x29c495; converted property
@property(retain, nonatomic) NSString *spinnerLoadingText;	// G=0x29d01d; S=0x29d02d; @synthesize=_spinnerLoadingText
@property(assign, nonatomic) unsigned long updateDataClientTypes;	// G=0x29d03d; S=0x29d04d; @synthesize=_updateDataClientTypes
+ (id)controllerForATVMediaType:(id)atvmediaType collection:(id)collection dataClient:(id)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x29b981
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x29b9bd
- (id)initWithServerID:(id)serverID dataClientType:(unsigned long)type;	// 0x29b985
- (void)_dataClientConnectionHandler:(id)handler;	// 0x29e651
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x29e4c5
- (void)_dataClientDataUpdated:(id)updated;	// 0x29ea69
- (void)_dataClientStatusChanged:(id)changed;	// 0x29e9d9
- (void)_dataQueryComplete;	// 0x29de19
- (void)_dataServerConnectionHandler:(id)handler;	// 0x29e89d
- (void)_dataServerFailedToConnect:(id)connect;	// 0x29e91d
- (void)_dataServersChangedHandler:(id)handler;	// 0x29ec3d
- (void)_displayErrorForQuery:(id)query;	// 0x29d9fd
- (void)_displayFailedToConnect;	// 0x29db9d
- (void)_executeDataQuery;	// 0x29e08d
- (void)_executePreDataQuery;	// 0x29df61
- (void)_handleDataQueryCompletion;	// 0x29d181
- (BOOL)_isDataServerEqual:(id)equal;	// 0x29f041
- (void)_mediaItemPropertySetNotification:(id)notification;	// 0x29eba5
- (void)_playQueryComplete;	// 0x29deb9
- (void)_preDataQueryComplete;	// 0x29dd01
- (void)_previewQueryComplete;	// 0x29de5d
- (void)_serverFoundWaitHandler:(id)handler;	// 0x29f129
- (void)_setDataClient:(id)client;	// 0x29d889
- (void)_setDataQuery:(id)query;	// 0x29e2d5
- (void)_setPlayQuery:(id)query;	// 0x29e36d
- (void)_setPreDataQuery:(id)query;	// 0x29e289
- (void)_setPreviewQuery:(id)query;	// 0x29e321
- (void)_setQueueQuery:(id)query;	// 0x29e3b9
- (void)_setServerID:(id)anId dataClientType:(unsigned long)type;	// 0x29d7a1
- (void)_showMediaView;	// 0x29df11
- (void)_showSpinner:(BOOL)spinner;	// 0x29d5d1
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay displayLoadingText:(BOOL)text;	// 0x29d08d
- (void)_showSpinnerTimer:(id)timer;	// 0x29d591
- (void)_updateDisabledStateForMenusInList:(id)list;	// 0x29d349
- (id)accessibilityScreenContent;	// 0x29cb99
// declared property getter: - (BOOL)attemptConnectionOnServerRemove;	// 0x29cffd
- (void)controlWasActivated;	// 0x29cbd1
- (void)controlWasDeactivated;	// 0x29cc2d
- (id)controllerIdentifier;	// 0x29e42d
- (id)currentItems;	// 0x29c485
// converted property getter: - (id)data;	// 0x29c475
// declared property getter: - (id)dataClient;	// 0x29c4b5
- (id)dataClientName;	// 0x29c4c5
// converted property getter: - (unsigned long)dataClientType;	// 0x29c4a5
- (BOOL)dataClientUpdated:(id)updated;	// 0x29e48d
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x29e429
// converted property getter: - (void *)dataItemToSelect;	// 0x29c561
- (BOOL)dataQueryComplete:(id)complete;	// 0x29e411
- (id)dataServer;	// 0x29c4f5
- (BOOL)dataServerConnectionChanged:(id)changed;	// 0x29e4c1
- (void)dealloc;	// 0x29bb35
- (id)defaultIndexPathToSelect;	// 0x29e419
- (id)errorControlForQuery:(id)query;	// 0x29e485
- (id)errorForNoContent;	// 0x29e465
- (BOOL)handleUpdateNotification:(id)notification;	// 0x29e415
- (id)identifier;	// 0x29bd1d
- (id)indexPathForDataItem:(void *)dataItem;	// 0x29e425
- (BOOL)isQueryResultValid:(id)valid;	// 0x29e491
- (unsigned)itemIndexForPhrase:(id)phrase inItems:(id)items;	// 0x29cc89
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x29c579
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x29c925
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x29c575
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x29c571
// converted property getter: - (id)mediaMenuView;	// 0x29c465
- (id)newDataQuery;	// 0x29e40d
- (id)newPlayQueryForIndexPath:(id)indexPath;	// 0x29e45d
- (id)newPreDataQuery;	// 0x29e405
- (id)newPreviewQueryForIndexPath:(id)indexPath;	// 0x29e41d
- (void)playQueryComplete:(id)complete;	// 0x29e461
// declared property getter: - (BOOL)popToRootWhenExhumed;	// 0x29d06d
- (BOOL)preDataQueryComplete:(id)complete;	// 0x29e409
- (id)previewForItems:(id)items;	// 0x29cac9
- (BOOL)previewQueryComplete:(id)complete;	// 0x29e421
// declared property getter: - (BOOL)refreshNeeded;	// 0x29d05d
- (void)resolveQueueQueryForSelectedItemWithAction:(int)action;	// 0x29c6ad
- (void)restartDataQueryProcess;	// 0x29ca99
// converted property getter: - (id)serverID;	// 0x29c495
// declared property setter: - (void)setAttemptConnectionOnServerRemove:(BOOL)remove;	// 0x29d00d
// converted property setter: - (void)setDataItemToSelect:(void *)select;	// 0x29c535
// declared property setter: - (void)setPopToRootWhenExhumed:(BOOL)rootWhenExhumed;	// 0x29d07d
// declared property setter: - (void)setSpinnerLoadingText:(id)text;	// 0x29d02d
// declared property setter: - (void)setUpdateDataClientTypes:(unsigned long)types;	// 0x29d04d
// declared property getter: - (id)spinnerLoadingText;	// 0x29d01d
- (BOOL)typeaheadPhraseAccumulator:(id)accumulator phraseChanged:(id)changed;	// 0x29cf41
- (id)typeaheadPropertyName;	// 0x29cfe9
- (int)typeaheadSelectionOffset;	// 0x29cff9
// declared property getter: - (unsigned long)updateDataClientTypes;	// 0x29d03d
- (id)waitControl;	// 0x29e489
- (void)wasExhumed;	// 0x29c361
- (void)wasPopped;	// 0x29c241
- (void)wasPushed;	// 0x29bd3d
@end


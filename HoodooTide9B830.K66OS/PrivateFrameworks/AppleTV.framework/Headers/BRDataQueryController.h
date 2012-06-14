/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSArray, BRMediaMenuView, NSTimer, NSString;

@interface BRDataQueryController : BRViewController {
@private
	id _serverID;	// 88 = 0x58
	unsigned long _dataClientType;	// 92 = 0x5c
	ATVDataClientRef _dataClient;	// 96 = 0x60
	BRMediaMenuView *_mediaMenuView;	// 100 = 0x64
	NSArray *_data;	// 104 = 0x68
	ATVMediaQueryRef _preDataQuery;	// 108 = 0x6c
	ATVMediaQueryRef _dataQuery;	// 112 = 0x70
	ATVMediaQueryRef _previewQuery;	// 116 = 0x74
	NSTimer *_spinnerTimer;	// 120 = 0x78
	BOOL _showingSpinner;	// 124 = 0x7c
	void *_dataItemToSelect;	// 128 = 0x80
	ATVMediaQueryRef _playQuery;	// 132 = 0x84
	BOOL _handlingDataClientUpdate;	// 136 = 0x88
	BOOL _refreshNeeded;	// 137 = 0x89
	BOOL _reloadListViewNeeded;	// 138 = 0x8a
	NSTimer *_serverFoundWaitTimer;	// 140 = 0x8c
	BOOL attemptConnectionOnServerRemove;	// 144 = 0x90
	NSString *_spinnerLoadingText;	// 148 = 0x94
}
@property(assign, nonatomic) BOOL attemptConnectionOnServerRemove;	// G=0x32990321; S=0x32990331; @synthesize
@property(readonly, retain) NSArray *data;	// G=0x3298ff41; converted property
@property(readonly, assign, nonatomic) ATVDataClientRef dataClient;	// G=0x3298ff71; @synthesize=_dataClient
@property(readonly, assign) unsigned long dataClientType;	// G=0x3298ff61; converted property
@property(assign) void *dataItemToSelect;	// G=0x3298fff1; S=0x3298ffc5; converted property
@property(readonly, retain) BRMediaMenuView *mediaMenuView;	// G=0x3298ff05; converted property
@property(readonly, retain) id serverID;	// G=0x3298ff51; converted property
@property(retain, nonatomic) NSString *spinnerLoadingText;	// G=0x32990341; S=0x32990351; @synthesize=_spinnerLoadingText
+ (id)controllerForATVMediaType:(ATVMediaTypeRef)atvmediaType collection:(ATVMediaCollectionRef)collection dataClient:(ATVDataClientRef)client dataClientType:(unsigned long)type playAllItems:(BOOL)items;	// 0x3298f52d
- (id)initWithDataClient:(ATVDataClientRef)dataClient dataClientType:(unsigned long)type;	// 0x3298f56d
- (id)initWithServerID:(id)serverID dataClientType:(unsigned long)type;	// 0x3298f531
- (void)_dataClientConnectionHandler:(id)handler;	// 0x32991701
- (void)_dataClientConnectionHandlerWithObject:(id)object;	// 0x32991591
- (void)_dataClientDataUpdated:(id)updated;	// 0x32991aa5
- (void)_dataClientStatusChanged:(id)changed;	// 0x32991a49
- (void)_dataQueryComplete;	// 0x32991039
- (void)_dataServerConnectionHandler:(id)handler;	// 0x32991925
- (void)_dataServerFailedToConnect:(id)connect;	// 0x32991995
- (void)_dataServersChangedHandler:(id)handler;	// 0x32991c49
- (void)_displayErrorForQuery:(ATVMediaQueryRef)query;	// 0x32990c35
- (void)_displayFailedToConnect;	// 0x32990dcd
- (void)_executeDataQuery;	// 0x32991275
- (void)_executePreDataQuery;	// 0x32991175
- (void)_handleDataQueryCompletion;	// 0x32990475
- (BOOL)_isDataServerEqual:(ATVDataServerRef)equal;	// 0x32992001
- (void)_mediaItemPropertySetNotification:(id)notification;	// 0x32991bb1
- (void)_playQueryComplete;	// 0x329910cd
- (void)_preDataQueryComplete;	// 0x32990f15
- (void)_previewQueryComplete;	// 0x3299107d
- (void)_serverFoundWaitHandler:(id)handler;	// 0x329920e5
- (void)_setDataClient:(ATVDataClientRef)client;	// 0x32990b21
- (void)_setDataQuery:(ATVMediaQueryRef)query;	// 0x32991469
- (void)_setPlayQuery:(ATVMediaQueryRef)query;	// 0x329914d1
- (void)_setPreDataQuery:(ATVMediaQueryRef)query;	// 0x32991435
- (void)_setPreviewQuery:(ATVMediaQueryRef)query;	// 0x3299149d
- (void)_setServerID:(id)anId dataClientType:(unsigned long)type;	// 0x32990a5d
- (void)_showMediaView;	// 0x32991125
- (void)_showSpinner:(BOOL)spinner;	// 0x32990895
- (void)_showSpinner:(BOOL)spinner delay:(BOOL)delay displayLoadingText:(BOOL)text;	// 0x32990375
- (void)_showSpinnerTimer:(id)timer;	// 0x32990855
- (void)_updateDisabledStateForMenusInList:(id)list;	// 0x32990631
- (id)accessibilityScreenContent;	// 0x329902e9
// declared property getter: - (BOOL)attemptConnectionOnServerRemove;	// 0x32990321
- (id)controllerIdentifier;	// 0x32991529
- (ATVMediaQueryRef)createDataQuery;	// 0x3299150d
- (ATVMediaQueryRef)createPlayQueryForIndexPath:(id)indexPath;	// 0x32991559
- (ATVMediaQueryRef)createPreDataQuery;	// 0x32991505
- (ATVMediaQueryRef)createPreviewQueryForIndexPath:(id)indexPath;	// 0x32991519
// converted property getter: - (id)data;	// 0x3298ff41
// declared property getter: - (ATVDataClientRef)dataClient;	// 0x3298ff71
- (id)dataClientName;	// 0x3298ff81
// converted property getter: - (unsigned long)dataClientType;	// 0x3298ff61
- (BOOL)dataClientUpdated:(id)updated;	// 0x32991589
- (void *)dataItemAtIndexPath:(id)indexPath;	// 0x32991525
// converted property getter: - (void *)dataItemToSelect;	// 0x3298fff1
- (BOOL)dataQueryComplete:(ATVMediaQueryRef)complete;	// 0x32991511
- (ATVDataServerRef)dataServer;	// 0x3298ffa5
- (BOOL)dataServerConnectionChanged:(ATVDataServerRef)changed;	// 0x3299158d
- (void)dealloc;	// 0x3298f6bd
- (id)defaultIndexPathToSelect;	// 0x32991515
- (id)errorControlForQuery:(ATVMediaQueryRef)query;	// 0x32991581
- (id)errorForNoContent;	// 0x32991561
- (id)identifier;	// 0x3298f84d
- (id)indexPathForDataItem:(void *)dataItem;	// 0x32991521
- (void)list:(id)list didFocusItemAtIndexPath:(id)indexPath;	// 0x32990009
- (void)list:(id)list didPlayItemAtIndexPath:(id)indexPath;	// 0x32990109
- (id)list:(id)list menuItemForRowAtIndexPath:(id)indexPath;	// 0x32990005
- (long)list:(id)list numberOfRowsInSection:(long)section;	// 0x32990001
// converted property getter: - (id)mediaMenuView;	// 0x3298ff05
- (void)playQueryComplete:(ATVMediaQueryRef)complete;	// 0x3299155d
- (BOOL)preDataQueryComplete:(id)complete;	// 0x32991509
- (id)previewForItems:(id)items;	// 0x32990219
- (BOOL)previewQueryComplete:(ATVMediaQueryRef)complete;	// 0x3299151d
- (void)restartDataQueryProcess;	// 0x329901e9
// converted property getter: - (id)serverID;	// 0x3298ff51
// declared property setter: - (void)setAttemptConnectionOnServerRemove:(BOOL)remove;	// 0x32990331
// converted property setter: - (void)setDataItemToSelect:(void *)select;	// 0x3298ffc5
// declared property setter: - (void)setSpinnerLoadingText:(id)text;	// 0x32990351
- (void)setTitle:(id)title;	// 0x3298ff15
// declared property getter: - (id)spinnerLoadingText;	// 0x32990341
- (id)waitControl;	// 0x32991585
- (void)wasExhumed;	// 0x3298fe49
- (void)wasPopped;	// 0x3298fd31
- (void)wasPushed;	// 0x3298f86d
@end

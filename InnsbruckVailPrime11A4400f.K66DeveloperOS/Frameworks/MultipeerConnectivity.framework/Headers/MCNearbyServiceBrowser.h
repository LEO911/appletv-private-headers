/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

#import "NSNetServiceDelegate.h"
#import </libobjc.A.h>
#import "NSNetServiceBrowserDelegate.h"

@class MCPeerID, NSMutableDictionary, NSString, NSNetServiceBrowser;
@protocol MCNearbyServiceBrowserDelegate, OS_dispatch_queue;

@interface MCNearbyServiceBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
	BOOL _isBrowsing;	// 4 = 0x4
	BOOL _wasBrowsing;	// 5 = 0x5
	id<MCNearbyServiceBrowserDelegate> _delegate;	// 8 = 0x8
	MCPeerID *_myPeerID;	// 12 = 0xc
	NSString *_serviceType;	// 16 = 0x10
	NSString *_formattedServiceType;	// 20 = 0x14
	NSMutableDictionary *_peers;	// 24 = 0x18
	NSNetServiceBrowser *_networkBrowser;	// 28 = 0x1c
	int _outgoingInviteID;	// 32 = 0x20
	NSObject<OS_dispatch_queue> *_syncQueue;	// 36 = 0x24
	NSMutableDictionary *_invites;	// 40 = 0x28
}
@property(assign, nonatomic) id<MCNearbyServiceBrowserDelegate> delegate;	// G=0x2e88e145; S=0x2e88e155; @synthesize=_delegate
@property(copy, nonatomic) NSString *formattedServiceType;	// G=0x2e88e199; S=0x2e88e1ad; @synthesize=_formattedServiceType
@property(retain, nonatomic) NSMutableDictionary *invites;	// G=0x2e88e23d; S=0x2e88e24d; @synthesize=_invites
@property(assign, nonatomic) BOOL isBrowsing;	// G=0x2e88e25d; S=0x2e88e26d; @synthesize=_isBrowsing
@property(readonly, assign, nonatomic) MCPeerID *myPeerID;	// G=0x2e88e165; @synthesize=_myPeerID
@property(retain, nonatomic) NSNetServiceBrowser *networkBrowser;	// G=0x2e88e1dd; S=0x2e88e1ed; @synthesize=_networkBrowser
@property(assign, nonatomic) int outgoingInviteID;	// G=0x2e88e1fd; S=0x2e88e20d; @synthesize=_outgoingInviteID
@property(retain, nonatomic) NSMutableDictionary *peers;	// G=0x2e88e1bd; S=0x2e88e1cd; @synthesize=_peers
@property(copy, nonatomic) NSString *serviceType;	// G=0x2e88e175; S=0x2e88e189; @synthesize=_serviceType
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;	// G=0x2e88e21d; S=0x2e88e22d; @synthesize=_syncQueue
@property(assign, nonatomic) BOOL wasBrowsing;	// G=0x2e88e27d; S=0x2e88e28d; @synthesize=_wasBrowsing
- (id)init;	// 0x2e88a3e9
- (id)initWithPeer:(id)peer serviceType:(id)type;	// 0x2e88a419
- (void)applicationDidEnterBackgroundNotification:(id)application;	// 0x2e88ad05
- (void)applicationWillEnterForegroundNotification:(id)application;	// 0x2e88ad61
- (void)applicationWillTerminateNotification:(id)application;	// 0x2e88ad51
- (void)dealloc;	// 0x2e88a6c5
// declared property getter: - (id)delegate;	// 0x2e88e145
// declared property getter: - (id)formattedServiceType;	// 0x2e88e199
- (void)invitePeer:(id)peer toSession:(id)session withContext:(id)context timeout:(double)timeout;	// 0x2e88d089
// declared property getter: - (id)invites;	// 0x2e88e23d
// declared property getter: - (BOOL)isBrowsing;	// 0x2e88e25d
// declared property getter: - (id)myPeerID;	// 0x2e88e165
- (void)netService:(id)service didUpdateTXTRecordData:(id)data;	// 0x2e88db61
- (void)netServiceBrowser:(id)browser didFindDomain:(id)domain moreComing:(BOOL)coming;	// 0x2e88d2a5
- (void)netServiceBrowser:(id)browser didFindService:(id)service moreComing:(BOOL)coming;	// 0x2e88d1a1
- (void)netServiceBrowser:(id)browser didNotSearch:(id)search;	// 0x2e88d341
- (void)netServiceBrowser:(id)browser didRemoveDomain:(id)domain moreComing:(BOOL)coming;	// 0x2e88d3d9
- (void)netServiceBrowser:(id)browser didRemoveService:(id)service moreComing:(BOOL)coming;	// 0x2e88d475
- (void)netServiceBrowserDidStopSearch:(id)netServiceBrowser;	// 0x2e88d865
- (void)netServiceBrowserWillSearch:(id)netServiceBrowser;	// 0x2e88d8cd
// declared property getter: - (id)networkBrowser;	// 0x2e88e1dd
// declared property getter: - (int)outgoingInviteID;	// 0x2e88e1fd
- (void)parseIDString:(id *)string displayName:(id *)name fromIdentifier:(id)identifier;	// 0x2e88a7e5
// declared property getter: - (id)peers;	// 0x2e88e1bd
- (id)rebuildUserDiscoveryInfoFromTXTRecordDictionary:(id)txtrecordDictionary;	// 0x2e88d935
// declared property getter: - (id)serviceType;	// 0x2e88e175
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x2e88e155
// declared property setter: - (void)setFormattedServiceType:(id)type;	// 0x2e88e1ad
// declared property setter: - (void)setInvites:(id)invites;	// 0x2e88e24d
// declared property setter: - (void)setIsBrowsing:(BOOL)browsing;	// 0x2e88e26d
// declared property setter: - (void)setNetworkBrowser:(id)browser;	// 0x2e88e1ed
// declared property setter: - (void)setOutgoingInviteID:(int)anId;	// 0x2e88e20d
// declared property setter: - (void)setPeers:(id)peers;	// 0x2e88e1cd
// declared property setter: - (void)setServiceType:(id)type;	// 0x2e88e189
// declared property setter: - (void)setSyncQueue:(id)queue;	// 0x2e88e22d
// declared property setter: - (void)setWasBrowsing:(BOOL)browsing;	// 0x2e88e28d
- (void)startBrowsingForPeers;	// 0x2e88ab09
- (void)stopBrowsingForPeers;	// 0x2e88ac89
- (void)syncAttachConnection:(id)connection toPeer:(id)peer;	// 0x2e88beb5
- (void)syncCloseConnectionForPeer:(id)peer;	// 0x2e88bef9
- (void)syncHandleInviteResponse:(id)response fromPeer:(id)peer;	// 0x2e88c3fd
- (void)syncInitiateConnectionToPeer:(id)peer;	// 0x2e88ae29
- (void)syncInvitePeer:(id)peer toSession:(id)session;	// 0x2e88c149
- (int)syncNextOutgoingInviteID;	// 0x2e88a7cd
// declared property getter: - (id)syncQueue;	// 0x2e88e21d
- (void)syncReceivedData:(id)data fromPeer:(id)peer;	// 0x2e88cedd
- (void)syncSendData:(id)data toPeer:(id)peer withCompletionHandler:(id)completionHandler;	// 0x2e88ce85
- (void)syncSendDictionary:(id)dictionary toPeer:(id)peer withCompletionHandler:(id)completionHandler;	// 0x2e88bff1
- (void)syncStartBrowsingForPeers;	// 0x2e88a925
- (void)syncStopBrowsingForPeers;	// 0x2e88ab85
// declared property getter: - (BOOL)wasBrowsing;	// 0x2e88e27d
@end


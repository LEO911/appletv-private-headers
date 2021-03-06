/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

#import <NSObject.h> // Unknown library
#import "IMSecureObject.h"

@class NSDate, IMAccount, NSMutableArray, NSString, NSMutableDictionary, IMMessage, NSArray, IMHandle;

@interface IMChat : NSObject <IMSecureObject> {
	NSString *_guid;	// 4 = 0x4
	IMAccount *_account;	// 8 = 0x8
	NSString *_roomName;	// 12 = 0xc
	NSString *_roomNameWithoutSuffix;	// 16 = 0x10
	NSDate *_dateCreated;	// 20 = 0x14
	NSDate *_dateModified;	// 24 = 0x18
	NSMutableArray *_chatItems;	// 28 = 0x1c
	NSMutableDictionary *_unfinishedChatItemMap;	// 32 = 0x20
	NSMutableArray *_participants;	// 36 = 0x24
	NSMutableDictionary *_participantStates;	// 40 = 0x28
	IMMessage *_invitationForPendingParticipants;	// 44 = 0x2c
	NSMutableArray *_messagesPendingJoin;	// 48 = 0x30
	NSMutableDictionary *_chatProperties;	// 52 = 0x34
	NSMutableDictionary *_participantProperties;	// 56 = 0x38
	int _securityLevel;	// 60 = 0x3c
	unsigned _overallChatStatus;	// 64 = 0x40
	int _joinState;	// 68 = 0x44
	unsigned char _style;	// 72 = 0x48
	int _directConnectionStatus;	// 76 = 0x4c
	double _joinedTimeInterval;	// 80 = 0x50
	unsigned _chatItemChangeCount;	// 88 = 0x58
	BOOL _isFirstMessageInvitation;	// 92 = 0x5c
	BOOL _wasInvitationHandled;	// 93 = 0x5d
	BOOL _disabledEncryption;	// 94 = 0x5e
	BOOL _suppressEncryptionChatItems;	// 95 = 0x5f
	BOOL _didSendAFinishedMessage;	// 96 = 0x60
	BOOL _shouldAnnouncePeopleJoin;	// 97 = 0x61
}
@property(readonly, assign, nonatomic) IMAccount *account;	// G=0x303a26cd; @synthesize=_account
@property(readonly, assign, nonatomic) BOOL canBeSecure;	// G=0x303a2ad9; 
@property(readonly, assign, nonatomic) BOOL canHaveMultipleParticipants;	// G=0x303a2ed5; 
@property(readonly, assign, nonatomic) NSString *chatIdentifier;	// G=0x303a2efd; 
@property(readonly, assign, nonatomic) NSArray *chatItems;	// G=0x303a26ed; @synthesize=_chatItems
@property(readonly, assign, nonatomic) unsigned char chatStyle;	// G=0x303a26ad; @synthesize=_style
@property(readonly, assign, nonatomic) NSDate *dateCreated;	// G=0x303a268d; @synthesize=_dateCreated
@property(readonly, assign, nonatomic) NSDate *dateModified;	// G=0x303a267d; @synthesize=_dateModified
@property(readonly, assign, nonatomic) int directConnectionStatus;	// G=0x303a262d; 
@property(readonly, assign, nonatomic) NSString *guid;	// G=0x303a26dd; @synthesize=_guid
@property(readonly, assign, nonatomic) BOOL hasUnhandledInvitation;	// G=0x303a25e1; 
@property(retain, nonatomic) IMMessage *invitationForPendingParticipants;	// G=0x303a263d; S=0x303a7349; @synthesize=_invitationForPendingParticipants
@property(readonly, assign, nonatomic) int joinState;	// G=0x303a264d; @synthesize=_joinState
@property(readonly, assign, nonatomic) unsigned overallChatStatus;	// G=0x303a2e99; 
@property(readonly, assign, nonatomic) NSArray *participants;	// G=0x303a26bd; @synthesize=_participants
@property(retain, nonatomic) IMHandle *recipient;	// G=0x303a2835; S=0x303a2855; 
@property(readonly, assign, nonatomic) NSString *roomName;	// G=0x303a269d; @synthesize=_roomName
@property(readonly, assign, nonatomic) NSString *roomNameWithoutSuffix;	// G=0x303a7371; 
@property(assign, nonatomic) int securityLevel;	// G=0x303a261d; S=0x303a5fd1; 
@property(assign, nonatomic, setter=setSupressEncryptionChatItems:) BOOL suppressEncryptionChatItems;	// G=0x303a265d; S=0x303a266d; @synthesize=_suppressEncryptionChatItems
- (id)init;	// 0x303a4b41
- (void)_accountLoggedOut:(id)anOut;	// 0x303a3a65
- (void)_addParticipant:(id)participant;	// 0x303a26fd
- (void)_appendChatItem:(id)item;	// 0x303a4249
- (void)_beginChatItemChanges;	// 0x303a64f1
- (void)_buildChatItemForDecidingHandleWentOffline:(id)decidingHandleWentOffline;	// 0x303a6a81
- (void)_buildChatItemForDirectConnectionStatus:(int)directConnectionStatus;	// 0x303a6b65
- (void)_buildChatItemForDisconnectOrLogout;	// 0x303a6c65
- (void)_buildChatItemForErrorMessage:(id)errorMessage;	// 0x303a41e5
- (void)_buildChatItemForNewRecipient:(id)newRecipient isNewAccount:(BOOL)account;	// 0x303a67a5
- (void)_buildChatItemForOverallChatStatusFrom:(unsigned)from to:(unsigned)to;	// 0x303a71cd
- (void)_buildChatItemForParticipantState:(int)participantState handle:(id)handle;	// 0x303a68f1
- (void)_buildChatItemForSecurityLevelChangeFrom:(int)from to:(int)to;	// 0x303a6551
- (void)_buildInitialChatItems:(id)items;	// 0x303a55dd
- (id)_dateStampForChatItem:(id)chatItem atIndex:(unsigned)index;	// 0x303a46d5
- (void)_endChatItemChanges;	// 0x303a6489
- (void)_fixLastStatusMessageIfNecessary;	// 0x303a2f95
- (void)_handleHandleStatusChanged:(id)changed;	// 0x303a3b39
- (void)_handleIncomingMessage:(id)message;	// 0x303a3389
- (id)_initWithGUID:(id)guid account:(id)account style:(unsigned char)style directConnectionStatus:(int)status roomName:(id)name chatItems:(id)items participants:(id)participants;	// 0x303a5b25
- (void)_insertArchivedChatItems:(id)items;	// 0x303a5155
- (unsigned)_insertChatItem:(id)item atIndex:(unsigned)index;	// 0x303a4425
- (BOOL)_isDuplicate:(id)duplicate;	// 0x303a2609
- (id)_newHeaderChatItemWithDate:(id)date;	// 0x303a6db1
- (id)_newInitialTypingIndicatorChatItem;	// 0x303a47e9
- (void)_participant:(id)participant statusChanged:(int)changed;	// 0x303a31fd
- (void)_postChatItem:(id)item atIndex:(unsigned)index;	// 0x303a63a9
- (void)_postNotification:(id)notification userInfo:(id)info;	// 0x303a6079
- (void)_recomputeOverallChatStatusQuietly:(BOOL)quietly;	// 0x303a3bc9
- (void)_remapHandle:(id)handle toHandle:(id)handle2;	// 0x303a30c5
- (void)_removeChatItem:(id)item andTimestamp:(BOOL)timestamp;	// 0x303a4285
- (void)_removeInitialTypingIndicator;	// 0x303a4171
- (void)_replaceChatItem:(id)item withChatItem:(id)chatItem;	// 0x303a60e9
- (void)_setDirectConnectionStatus:(int)status;	// 0x303a3345
- (void)_setJoinState:(int)state;	// 0x303a5015
- (void)_setParticipantState:(int)state forHandle:(id)handle;	// 0x303a3929
- (BOOL)_shouldAnnouncePeopleJoin;	// 0x303a4931
- (BOOL)_shouldDisplayInitialTypingIndicator;	// 0x303a48f1
- (void)_showErrorMessage:(id)message;	// 0x303a3179
- (id)_timeStampForChatItem:(id)chatItem atIndex:(unsigned)index;	// 0x303a45a1
- (void)_unwatchHandleStatusChangedForHandle:(id)handle;	// 0x303a3a9d
- (void)_updateHeaderChatItem;	// 0x303a59f5
- (void)_updateSecurityLevelForMessage:(id)message;	// 0x303a3861
- (void)_watchHandleStatusChangedForHandle:(id)handle;	// 0x303a3ae5
- (void)acceptInvitation;	// 0x303a2e25
// declared property getter: - (id)account;	// 0x303a26cd
- (void)addPendingParticipants:(id)participants;	// 0x303a4b6d
- (id)allChatProperties;	// 0x303a260d
- (id)allPropertiesOfParticipant:(id)participant;	// 0x303a2c99
- (void)attemptDirectConnection;	// 0x303a27fd
// declared property getter: - (BOOL)canBeSecure;	// 0x303a2ad9
// declared property getter: - (BOOL)canHaveMultipleParticipants;	// 0x303a2ed5
// declared property getter: - (id)chatIdentifier;	// 0x303a2efd
// declared property getter: - (id)chatItems;	// 0x303a26ed
// declared property getter: - (unsigned char)chatStyle;	// 0x303a26ad
- (void)clear;	// 0x303a3d81
- (id)convertToChatStyle:(unsigned char)chatStyle;	// 0x303a25dd
// declared property getter: - (id)dateCreated;	// 0x303a268d
// declared property getter: - (id)dateModified;	// 0x303a267d
- (void)dealloc;	// 0x303a49ad
- (void)declineInvitation;	// 0x303a2dd5
// declared property getter: - (int)directConnectionStatus;	// 0x303a262d
// declared property getter: - (id)guid;	// 0x303a26dd
// declared property getter: - (BOOL)hasUnhandledInvitation;	// 0x303a25e1
// declared property getter: - (id)invitationForPendingParticipants;	// 0x303a263d
- (void)inviteParticipants:(id)participants reason:(id)reason;	// 0x303a4d85
- (void)join;	// 0x303a27a1
// declared property getter: - (int)joinState;	// 0x303a264d
- (void)leave;	// 0x303a2751
- (void)mark;	// 0x303a3d2d
// declared property getter: - (unsigned)overallChatStatus;	// 0x303a2e99
// declared property getter: - (id)participants;	// 0x303a26bd
- (id)participantsWithState:(unsigned)state;	// 0x303a4f09
- (void)processChatItem:(id)item;	// 0x303a25d9
// declared property getter: - (id)recipient;	// 0x303a2835
- (void)removeParticipants:(id)participants reason:(id)reason;	// 0x303a4c21
// declared property getter: - (id)roomName;	// 0x303a269d
// declared property getter: - (id)roomNameWithoutSuffix;	// 0x303a7371
// declared property getter: - (int)securityLevel;	// 0x303a261d
- (void)sendMessage:(id)message;	// 0x303a2d39
// declared property setter: - (void)setInvitationForPendingParticipants:(id)pendingParticipants;	// 0x303a7349
// declared property setter: - (void)setRecipient:(id)recipient;	// 0x303a2855
// declared property setter: - (void)setSecurityLevel:(int)level;	// 0x303a5fd1
// declared property setter: - (void)setSupressEncryptionChatItems:(BOOL)items;	// 0x303a266d
- (void)setValue:(id)value forChatProperty:(id)chatProperty;	// 0x303a2cd1
- (void)setValue:(id)value forProperty:(id)property ofParticipant:(id)participant;	// 0x303a2b41
- (BOOL)shouldAppendDatestampAfterChatItem:(id)item andBeforeChatItem:(id)item2;	// 0x303a3ef1
- (BOOL)shouldAppendTimestampAfterChatItem:(id)item andBeforeChatItem:(id)item2;	// 0x303a4031
- (BOOL)shouldInsertChatItem:(id)item atIndex:(unsigned)index;	// 0x303a25d5
- (int)stateForParticipant:(id)participant;	// 0x303a2f51
// declared property getter: - (BOOL)suppressEncryptionChatItems;	// 0x303a265d
- (id)valueForChatProperty:(id)chatProperty;	// 0x303a2d19
- (id)valueForProperty:(id)property ofParticipant:(id)participant;	// 0x303a2c71
@end


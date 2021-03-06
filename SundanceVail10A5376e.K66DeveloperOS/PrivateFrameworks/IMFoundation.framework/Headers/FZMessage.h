/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "IMRemoteObjectCoding.h"
#import "IMFoundation-Structs.h"

@class NSDictionary, NSDate, NSAttributedString, NSData, NSString, NSArray;

@interface FZMessage : NSObject <NSCoding, NSCopying, IMRemoteObjectCoding> {
	NSString *_handle;	// 4 = 0x4
	NSString *_service;	// 8 = 0x8
	NSString *_account;	// 12 = 0xc
	NSString *_subject;	// 16 = 0x10
	NSString *_unformattedID;	// 20 = 0x14
	NSString *_accountID;	// 24 = 0x18
	NSString *_roomName;	// 28 = 0x1c
	NSDictionary *_senderInfo;	// 32 = 0x20
	NSString *_plainBody;	// 36 = 0x24
	unsigned _error;	// 40 = 0x28
	NSString *_guid;	// 44 = 0x2c
	NSDate *_time;	// 48 = 0x30
	NSArray *_fileTransferGUIDs;	// 52 = 0x34
	NSString *_countryCode;	// 56 = 0x38
	unsigned long long _flags;	// 60 = 0x3c
	NSAttributedString *_body;	// 68 = 0x44
	NSData *_bodyData;	// 72 = 0x48
	long long _replaceID;	// 76 = 0x4c
	long long _messageID;	// 84 = 0x54
	NSDate *_timeRead;	// 92 = 0x5c
	NSDate *_timeDelivered;	// 96 = 0x60
}
@property(retain, nonatomic) NSString *account;	// G=0x36eae811; S=0x36eae821; @synthesize=_account
@property(retain, nonatomic) NSString *accountID;	// G=0x36eae851; S=0x36eae861; @synthesize=_accountID
@property(retain, nonatomic) NSAttributedString *body;	// G=0x36ea3845; S=0x36ea4445; @synthesize=_body
@property(retain, nonatomic) NSData *bodyData;	// G=0x36eae921; S=0x36eae931; @synthesize=_bodyData
@property(retain, nonatomic) NSString *countryCode;	// G=0x36eae901; S=0x36eae911; @synthesize=_countryCode
@property(assign, nonatomic) unsigned errorCode;	// G=0x36eae8d1; S=0x36eae8e1; @synthesize=_error
@property(retain, nonatomic) NSArray *fileTransferGUIDs;	// G=0x36ea3835; S=0x36ea44bd; @synthesize=_fileTransferGUIDs
@property(assign, nonatomic) unsigned long long flags;	// G=0x36ea3809; S=0x36ea3ad1; @synthesize=_flags
@property(retain, nonatomic) NSString *guid;	// G=0x36ea39d1; S=0x36eae8f1; @synthesize=_guid
@property(retain, nonatomic) NSString *handle;	// G=0x36eae7d1; S=0x36eae7e1; @synthesize=_handle
@property(assign, nonatomic) BOOL hasDataDetectorResults;	// G=0x36eada79; S=0x36eada91; 
@property(readonly, assign, nonatomic) BOOL isAlert;	// G=0x36ead985; 
@property(readonly, assign, nonatomic) BOOL isDelivered;	// G=0x36ead9c1; 
@property(readonly, assign, nonatomic) BOOL isEmpty;	// G=0x36ea37f5; 
@property(readonly, assign, nonatomic) BOOL isFinished;	// G=0x36ea3821; 
@property(readonly, assign, nonatomic) BOOL isFromMe;	// G=0x36ead9ad; 
@property(readonly, assign, nonatomic) BOOL isPrepared;	// G=0x36ead9d5; 
@property(readonly, assign, nonatomic) BOOL isRead;	// G=0x36ead999; 
@property(readonly, assign, nonatomic) BOOL isSent;	// G=0x36eada51; 
@property(readonly, assign, nonatomic) BOOL isTypingMessage;	// G=0x36ead9e9; 
@property(assign, nonatomic) long long messageID;	// G=0x36eae96d; S=0x36eae985; @synthesize=_messageID
@property(retain, nonatomic) NSString *plainBody;	// G=0x36eae8b1; S=0x36eae8c1; @synthesize=_plainBody
@property(assign, nonatomic) long long replaceID;	// G=0x36eae941; S=0x36eae959; @synthesize=_replaceID
@property(retain, nonatomic) NSString *roomName;	// G=0x36eae871; S=0x36eae881; @synthesize=_roomName
@property(retain, nonatomic) NSString *sender;	// G=0x36ea3999; S=0x36ea39f1; 
@property(retain, nonatomic) NSDictionary *senderInfo;	// G=0x36eae891; S=0x36eae8a1; @synthesize=_senderInfo
@property(retain, nonatomic) NSString *service;	// G=0x36eae7f1; S=0x36eae801; @synthesize=_service
@property(retain, nonatomic) NSString *subject;	// G=0x36ea3989; S=0x36eadd81; @synthesize=_subject
@property(retain, nonatomic) NSDate *time;	// G=0x36ea39e1; S=0x36ea3ac1; @synthesize=_time
@property(retain, nonatomic) NSDate *timeDelivered;	// G=0x36eae9b9; S=0x36eae9c9; @synthesize=_timeDelivered
@property(retain, nonatomic) NSDate *timeRead;	// G=0x36eae999; S=0x36eae9a9; @synthesize=_timeRead
@property(retain, nonatomic) NSString *unformattedID;	// G=0x36eae831; S=0x36eae841; @synthesize=_unformattedID
@property(readonly, assign, nonatomic) BOOL wasDataDetected;	// G=0x36eadadd; 
@property(readonly, assign, nonatomic) BOOL wasDowngraded;	// G=0x36eada65; 
- (id)initWithCoder:(id)coder;	// 0x36ea3321
- (id)initWithDictionary:(id)dictionary;	// 0x36eacf71
- (id)initWithDictionary:(id)dictionary hint:(id)hint;	// 0x36eaca6d
- (id)initWithIMRemoteObjectSerializedDictionary:(id)imremoteObjectSerializedDictionary;	// 0x36ead3e9
- (id)initWithSender:(id)sender time:(id)time body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid;	// 0x36ea2ef1
- (id)initWithSenderInfo:(id)senderInfo time:(id)time body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags error:(id)error guid:(id)guid;	// 0x36ead5c5
- (id)initWithSenderInfo:(id)senderInfo time:(id)time body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags guid:(id)guid account:(id)account accountID:(id)anId service:(id)service handle:(id)handle roomName:(id)name error:(id)error;	// 0x36ead3f9
- (id)initWithSenderInfo:(id)senderInfo time:(id)time body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags guid:(id)guid messageID:(long long)anId account:(id)account accountID:(id)anId10 service:(id)service handle:(id)handle roomName:(id)name error:(id)error;	// 0x36ead491
- (id)initWithSenderInfo:(id)senderInfo time:(id)time timeRead:(id)read timeDelivered:(id)delivered body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags guid:(id)guid messageID:(long long)anId account:(id)account accountID:(id)anId12 service:(id)service handle:(id)handle roomName:(id)name error:(id)error;	// 0x36ead529
- (id)initWithSenderInfo:(id)senderInfo time:(id)time timeRead:(id)read timeDelivered:(id)delivered body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags guid:(id)guid messageID:(long long)anId account:(id)account accountID:(id)anId12 service:(id)service handle:(id)handle roomName:(id)name errorType:(unsigned)type;	// 0x36ead641
- (id)initWithSenderInfo:(id)senderInfo time:(id)time timeRead:(id)read timeDelivered:(id)delivered subject:(id)subject body:(id)body attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags guid:(id)guid messageID:(long long)anId account:(id)account accountID:(id)anId13 service:(id)service handle:(id)handle roomName:(id)name errorType:(unsigned)type;	// 0x36ead6c9
- (id)initWithSenderInfo:(id)senderInfo time:(id)time timeRead:(id)read timeDelivered:(id)delivered subject:(id)subject body:(id)body bodyData:(id)data attributes:(id)attributes fileTransferGUIDs:(id)guids flags:(unsigned long long)flags guid:(id)guid messageID:(long long)anId account:(id)account accountID:(id)anId14 service:(id)service handle:(id)handle roomName:(id)name unformattedID:(id)anId18 countryCode:(id)code errorType:(unsigned)type;	// 0x36ead759
- (void)_clearBodyData;	// 0x36eadd55
- (void)_generateBodyDataIfNeeded;	// 0x36eadb25
- (void)_generateBodyTextIfNeeded;	// 0x36eadb5d
- (void)_regenerateBodyData;	// 0x36eadcc5
- (void)_regenerateBodyText;	// 0x36eadba5
// declared property getter: - (id)account;	// 0x36eae811
// declared property getter: - (id)accountID;	// 0x36eae851
- (void)adjustIsEmptyFlag;	// 0x36ea2f45
// declared property getter: - (id)body;	// 0x36ea3845
// declared property getter: - (id)bodyData;	// 0x36eae921
- (id)copyDictionaryRepresentation;	// 0x36eacfad
- (id)copyWithZone:(NSZone *)zone;	// 0x36eac739
// declared property getter: - (id)countryCode;	// 0x36eae901
- (void)dealloc;	// 0x36ea3665
- (id)description;	// 0x36eae3f5
- (id)dictionaryRepresentation;	// 0x36eacf85
- (void)encodeWithCoder:(id)coder;	// 0x36ea3051
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)imremoteObjectSerializedDictionary;	// 0x36ead3a5
// declared property getter: - (unsigned)errorCode;	// 0x36eae8d1
// declared property getter: - (id)fileTransferGUIDs;	// 0x36ea3835
// declared property getter: - (unsigned long long)flags;	// 0x36ea3809
// declared property getter: - (id)guid;	// 0x36ea39d1
// declared property getter: - (id)handle;	// 0x36eae7d1
// declared property getter: - (BOOL)hasDataDetectorResults;	// 0x36eada79
// declared property getter: - (BOOL)isAlert;	// 0x36ead985
// declared property getter: - (BOOL)isDelivered;	// 0x36ead9c1
- (BOOL)isEmote;	// 0x36eada3d
// declared property getter: - (BOOL)isEmpty;	// 0x36ea37f5
- (BOOL)isEqual:(id)equal;	// 0x36eaddd9
// declared property getter: - (BOOL)isFinished;	// 0x36ea3821
// declared property getter: - (BOOL)isFromMe;	// 0x36ead9ad
// declared property getter: - (BOOL)isPrepared;	// 0x36ead9d5
// declared property getter: - (BOOL)isRead;	// 0x36ead999
// declared property getter: - (BOOL)isSent;	// 0x36eada51
// declared property getter: - (BOOL)isTypingMessage;	// 0x36ead9e9
// declared property getter: - (long long)messageID;	// 0x36eae96d
// declared property getter: - (id)plainBody;	// 0x36eae8b1
// declared property getter: - (long long)replaceID;	// 0x36eae941
// declared property getter: - (id)roomName;	// 0x36eae871
// declared property getter: - (id)sender;	// 0x36ea3999
// declared property getter: - (id)senderInfo;	// 0x36eae891
// declared property getter: - (id)service;	// 0x36eae7f1
// declared property setter: - (void)setAccount:(id)account;	// 0x36eae821
// declared property setter: - (void)setAccountID:(id)anId;	// 0x36eae861
// declared property setter: - (void)setBody:(id)body;	// 0x36ea4445
// declared property setter: - (void)setBodyData:(id)data;	// 0x36eae931
// declared property setter: - (void)setCountryCode:(id)code;	// 0x36eae911
// declared property setter: - (void)setErrorCode:(unsigned)code;	// 0x36eae8e1
// declared property setter: - (void)setFileTransferGUIDs:(id)guids;	// 0x36ea44bd
// declared property setter: - (void)setFlags:(unsigned long long)flags;	// 0x36ea3ad1
// declared property setter: - (void)setGuid:(id)guid;	// 0x36eae8f1
// declared property setter: - (void)setHandle:(id)handle;	// 0x36eae7e1
// declared property setter: - (void)setHasDataDetectorResults:(BOOL)results;	// 0x36eada91
// declared property setter: - (void)setMessageID:(long long)anId;	// 0x36eae985
// declared property setter: - (void)setPlainBody:(id)body;	// 0x36eae8c1
// declared property setter: - (void)setReplaceID:(long long)anId;	// 0x36eae959
// declared property setter: - (void)setRoomName:(id)name;	// 0x36eae881
// declared property setter: - (void)setSender:(id)sender;	// 0x36ea39f1
// declared property setter: - (void)setSenderInfo:(id)info;	// 0x36eae8a1
// declared property setter: - (void)setService:(id)service;	// 0x36eae801
// declared property setter: - (void)setSubject:(id)subject;	// 0x36eadd81
// declared property setter: - (void)setTime:(id)time;	// 0x36ea3ac1
// declared property setter: - (void)setTimeDelivered:(id)delivered;	// 0x36eae9c9
// declared property setter: - (void)setTimeRead:(id)read;	// 0x36eae9a9
// declared property setter: - (void)setUnformattedID:(id)anId;	// 0x36eae841
- (void)setWasDataDetected:(BOOL)detected;	// 0x36eadaf1
// declared property getter: - (id)subject;	// 0x36ea3989
// declared property getter: - (id)time;	// 0x36ea39e1
// declared property getter: - (id)timeDelivered;	// 0x36eae9b9
// declared property getter: - (id)timeRead;	// 0x36eae999
// declared property getter: - (id)unformattedID;	// 0x36eae831
// declared property getter: - (BOOL)wasDataDetected;	// 0x36eadadd
// declared property getter: - (BOOL)wasDowngraded;	// 0x36eada65
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import "MIME-Structs.h"
#import <NSObject.h> // Unknown library

@class MessageStore, NSString, NSArray;

@interface Message : NSObject {
	MessageStore *_store;	// 4 = 0x4
	unsigned _preferredEncoding;	// 8 = 0x8
	NSString *_senderAddressComment;	// 12 = 0xc
	unsigned _dateSentInterval;	// 16 = 0x10
	unsigned _dateReceivedInterval;	// 20 = 0x14
	unsigned long long _generationNumber;	// 24 = 0x18
	NSString *_subject;	// 32 = 0x20
	NSArray *_to;	// 36 = 0x24
	NSArray *_cc;	// 40 = 0x28
	NSArray *_bcc;	// 44 = 0x2c
	NSArray *_sender;	// 48 = 0x30
	NSString *_contentType;	// 52 = 0x34
	long long _messageIDHeaderHash;	// 56 = 0x38
	long long _conversationID;	// 64 = 0x40
	NSString *_summary;	// 72 = 0x48
	NSString *_externalID;	// 76 = 0x4c
	unsigned _calculatedAttachmentInfo : 1;	// 80 = 0x50
	unsigned short _numberOfAttachments;	// 82 = 0x52
}
@property(retain) NSArray *bcc;	// G=0x36d41ac5; S=0x36d4195d; converted property
@property(retain) NSArray *cc;	// G=0x36d41c41; S=0x36d41ad9; converted property
@property(retain) NSString *contentType;	// G=0x36d420bd; S=0x36d42045; converted property
@property(assign) long long conversationID;	// G=0x36d41935; S=0x36d418c5; converted property
@property(retain) NSString *externalID;	// G=0x36d41881; S=0x36d41831; converted property
@property(assign) unsigned long long generationNumber;	// G=0x36d40d69; S=0x36d40d55; converted property
@property(assign) long long messageIDHash;	// G=0x36d42cd5; S=0x36d4190d; converted property
@property(retain) id messageStore;	// G=0x36d43195; S=0x36d43135; converted property
@property(readonly, assign) unsigned short numberOfAttachments;	// G=0x36d40cc9; converted property
@property(assign) unsigned long preferredEncoding;	// G=0x36d40ced; S=0x36d42b0d; converted property
@property(readonly, retain) NSString *senderAddressComment;	// G=0x36d41dd1; converted property
@property(retain) NSString *subject;	// G=0x36d4237d; S=0x36d42305; converted property
@property(readonly, retain) NSString *summary;	// G=0x36d417ed; converted property
@property(retain) NSArray *to;	// G=0x36d41dbd; S=0x36d41c55; converted property
+ (Class)dataMessageStoreToUse;	// 0x36d40e71
+ (id)messageWithRFC822Data:(id)rfc822Data;	// 0x36d40df9
+ (void)setMessageClassForStore:(id)store;	// 0x36d40dc9
- (id)init;	// 0x36d40d89
- (void)_calculateAttachmentInfoFromBody:(id)body;	// 0x36d40d41
- (id)_copyDateFromDateHeaderInHeaders:(id)headers;	// 0x36d428ad
- (id)_copyDateFromReceivedHeadersInHeaders:(id)headers;	// 0x36d429b1
- (BOOL)_doesDateAppearToBeSane:(id)beSane;	// 0x36d42ad1
- (long long)_messageIDHeaderHashIvar;	// 0x36d42bdd
- (void)_setDateReceivedFromHeaders:(id)headers;	// 0x36d4280d
- (void)_setDateSentFromHeaders:(id)headers;	// 0x36d4276d
- (id)additionalHeadersForForward;	// 0x36d40e8d
- (id)additionalHeadersForReply;	// 0x36d40eb9
// converted property getter: - (id)bcc;	// 0x36d41ac5
- (id)bccIfCached;	// 0x36d41ab1
- (id)bestAlternativeInPart:(id)part;	// 0x36d40ee5
- (id)bodyData;	// 0x36d41229
- (id)bodyDataIsComplete:(BOOL *)complete;	// 0x36d41215
- (id)bodyDataIsComplete:(BOOL *)complete isPartial:(BOOL *)partial;	// 0x36d411d9
- (id)cachedAttributes;	// 0x36d40fa9
- (void)calculateAttachmentInfoFromBody:(id)body;	// 0x36d41031
- (BOOL)calculatedNumberOfAttachments;	// 0x36d40cd9
- (BOOL)canBeDeleted;	// 0x36d40d81
// converted property getter: - (id)cc;	// 0x36d41c41
- (id)ccIfCached;	// 0x36d41c2d
// converted property getter: - (id)contentType;	// 0x36d420bd
// converted property getter: - (long long)conversationID;	// 0x36d41935
- (id)copyWithZone:(NSZone *)zone;	// 0x36d431d9
- (id)dataConsumerForMimePart:(id)mimePart;	// 0x36d40cb9
- (id)dataForMimePart:(id)mimePart;	// 0x36d41165
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete;	// 0x36d41125
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x36d410d9
- (id)dataPathForMimePart:(id)mimePart;	// 0x36d40d3d
- (id)dateReceived;	// 0x36d42295
- (double)dateReceivedAsTimeIntervalSince1970;	// 0x36d421a1
- (id)dateSent;	// 0x36d42225
- (double)dateSentAsTimeIntervalSince1970;	// 0x36d42151
- (void)dealloc;	// 0x36d42db5
- (id)defaultAlternativeInPart:(id)part;	// 0x36d40f11
// converted property getter: - (id)externalID;	// 0x36d41881
- (id)firstSender;	// 0x36d41fd9
- (int)generationCompare:(id)compare;	// 0x36d40f3d
// converted property getter: - (unsigned long long)generationNumber;	// 0x36d40d69
- (id)headerData;	// 0x36d411a9
- (id)headers;	// 0x36d43105
- (id)headersIfAvailable;	// 0x36d430d5
- (BOOL)isLibraryMessage;	// 0x36d40d85
- (BOOL)isMessageContentsLocallyAvailable;	// 0x36d40cc5
- (void)loadCachedHeaderValuesFromHeaders:(id)headers;	// 0x36d42415
- (id)messageBody;	// 0x36d430a1
- (id)messageBodyIfAvailable;	// 0x36d4306d
- (id)messageBodyIfAvailableUpdatingFlags:(BOOL)flags;	// 0x36d43005
- (id)messageBodyUpdatingFlags:(BOOL)flags;	// 0x36d43039
- (id)messageData;	// 0x36d42ec1
- (BOOL)messageData:(id *)data messageSize:(unsigned *)size isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x36d42f01
- (id)messageDataIsComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x36d42ed5
- (id)messageID;	// 0x36d40cc1
// converted property getter: - (long long)messageIDHash;	// 0x36d42cd5
- (id)messageIDHeader;	// 0x36d42c9d
- (id)messageIDHeaderInFortyBytesOrLess;	// 0x36d42c15
- (unsigned)messageSize;	// 0x36d42d8d
// converted property getter: - (id)messageStore;	// 0x36d43195
- (BOOL)needsDateReceived;	// 0x36d40cfd
// converted property getter: - (unsigned short)numberOfAttachments;	// 0x36d40cc9
- (id)path;	// 0x36d40d35
- (id)persistentID;	// 0x36d40d39
- (id)preferredEmailAddressToReplyWith;	// 0x36d40cbd
// converted property getter: - (unsigned long)preferredEncoding;	// 0x36d40ced
- (id)refreshedMessage;	// 0x36d40cb1
- (id)remoteID;	// 0x36d41261
// converted property getter: - (id)senderAddressComment;	// 0x36d41dd1
- (id)senders;	// 0x36d42031
- (id)sendersIfCached;	// 0x36d4201d
// converted property setter: - (void)setBcc:(id)bcc;	// 0x36d4195d
// converted property setter: - (void)setCc:(id)cc;	// 0x36d41ad9
// converted property setter: - (void)setContentType:(id)type;	// 0x36d42045
// converted property setter: - (void)setConversationID:(long long)anId;	// 0x36d418c5
- (void)setDateReceivedTimeIntervalSince1970:(double)a1970;	// 0x36d421f1
- (void)setDateSentTimeIntervalSince1970:(double)a1970;	// 0x36d40d15
// converted property setter: - (void)setExternalID:(id)anId;	// 0x36d41831
// converted property setter: - (void)setGenerationNumber:(unsigned long long)number;	// 0x36d40d55
- (void)setMessageData:(id)data isPartial:(BOOL)partial;	// 0x36d40cb5
// converted property setter: - (void)setMessageIDHash:(long long)hash;	// 0x36d4190d
- (void)setMessageInfo:(id)info to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceivedTimeIntervalSince1970:(double)a1970 dateSentTimeIntervalSince1970:(double)a19707 messageIDHash:(long long)hash conversationID:(long long)anId summary:(id)summary;	// 0x36d416b9
- (void)setMessageInfoFromMessage:(id)message;	// 0x36d41271
// converted property setter: - (void)setMessageStore:(id)store;	// 0x36d43135
- (void)setNumberOfAttachments:(unsigned)attachments;	// 0x36d40d45
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted;	// 0x36d40ff5
// converted property setter: - (void)setPreferredEncoding:(unsigned long)encoding;	// 0x36d42b0d
- (void)setSender:(id)sender;	// 0x36d41e85
// converted property setter: - (void)setSubject:(id)subject;	// 0x36d42305
- (void)setSubject:(id)subject to:(id)to cc:(id)cc bcc:(id)bcc sender:(id)sender dateReceived:(double)received dateSent:(double)sent messageIDHash:(long long)hash conversationIDHash:(long long)hash9 summary:(id)summary withOptions:(unsigned)options;	// 0x36d413a1
// converted property setter: - (void)setTo:(id)to;	// 0x36d41c55
// converted property getter: - (id)subject;	// 0x36d4237d
// converted property getter: - (id)summary;	// 0x36d417ed
// converted property getter: - (id)to;	// 0x36d41dbd
- (id)toIfCached;	// 0x36d41da9
- (unsigned long)uid;	// 0x36d40d31
- (id)uniqueArray:(id)array withStore:(id)store;	// 0x36d4171d
@end


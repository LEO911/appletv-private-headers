/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "MIME-Structs.h"

@class NSMutableSet, NSMutableArray;

@interface MessageStore : NSObject <NSCopying> {
	NSMutableSet *_uniqueStrings;	// 4 = 0x4
	union {
		struct {
			NSMutableArray *_headerDataCache;
			NSMutableArray *_headerCache;
			NSMutableArray *_bodyDataCache;
			NSMutableArray *_bodyCache;
		} objectCaches;
		struct {
			CFDictionaryRef _headerDataCache;
			CFDictionaryRef _headerCache;
			CFDictionaryRef _bodyDataCache;
			CFDictionaryRef _bodyCache;
		} intKeyCaches;
	} _caches;	// 8 = 0x8
}
+ (Class)classForMimePart;	// 0x328b6475
+ (Class)headersClass;	// 0x328b6309
+ (void)setDefaultMessageHeadersClass:(Class)aClass;	// 0x328b6d81
- (id)_bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x328b6491
- (id)_cachedBodyDataContainerForMessage:(id)message valueIfNotPresent:(id)present;	// 0x328b6b25
- (id)_cachedBodyDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x328b6a49
- (id)_cachedBodyForMessage:(id)message valueIfNotPresent:(id)present;	// 0x328b6ad5
- (id)_cachedHeaderDataForMessage:(id)message valueIfNotPresent:(id)present;	// 0x328b693d
- (id)_cachedHeadersForMessage:(id)message valueIfNotPresent:(id)present;	// 0x328b6b0d
- (id)_fetchBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available downloadIfNecessary:(BOOL)necessary partial:(BOOL *)partial;	// 0x328b6bed
- (void)_flushAllCaches;	// 0x328b6bd9
- (void)_flushAllCachesLocking:(BOOL)locking;	// 0x328b6b3d
- (void)_flushAllMessageData;	// 0x328b62e5
- (id)_setOrGetBody:(id)body forMessage:(id)message updateFlags:(BOOL)flags;	// 0x328b6435
- (id)additionalHeadersForForwardOfMessage:(id)message;	// 0x328b6d95
- (id)additionalHeadersForReplyOfMessage:(id)message;	// 0x328b6d91
- (id)bestAlternativeForPart:(id)part;	// 0x328b68a5
- (id)bodyDataForMessage:(id)message isComplete:(BOOL *)complete isPartial:(BOOL *)partial downloadIfNecessary:(BOOL)necessary;	// 0x328b6c19
- (id)bodyForMessage:(id)message fetchIfNotAvailable:(BOOL)available updateFlags:(BOOL)flags;	// 0x328b65e5
- (id)copyWithZone:(NSZone *)zone;	// 0x328b62f5
- (id)dataForMimePart:(id)mimePart inRange:(NSRange)range isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary didDownload:(BOOL *)download;	// 0x328b670d
- (void)dealloc;	// 0x328b6285
- (id)decryptedTopLevelPartForPart:(id)part;	// 0x328b6825
- (id)defaultAlternativeForPart:(id)part;	// 0x328b6895
- (id)fullBodyDataForMessage:(id)message andHeaderDataIfReadilyAvailable:(id *)available isComplete:(BOOL *)complete downloadIfNecessary:(BOOL)necessary;	// 0x328b6671
- (BOOL)hasCompleteDataForMimePart:(id)mimePart;	// 0x328b6ce1
- (id)headerDataForMessage:(id)message downloadIfNecessary:(BOOL)necessary;	// 0x328b6305
- (id)headersForMessage:(id)message fetchIfNotAvailable:(BOOL)available;	// 0x328b6339
- (void)setMessageClass:(Class)aClass;	// 0x328b6d7d
- (void)setNumberOfAttachments:(unsigned)attachments isSigned:(BOOL)aSigned isEncrypted:(BOOL)encrypted forMessage:(id)message;	// 0x328b6d65
- (id)uniquedString:(id)string;	// 0x328b6695
- (BOOL)wantsLineEndingConversionForMIMEPart:(id)mimepart;	// 0x328b6d79
@end


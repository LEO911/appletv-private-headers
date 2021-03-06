/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library

@class ASProtocolCapabilities;

@interface ASProtocol : NSObject {
	ASProtocolCapabilities *_capabilities;	// 4 = 0x4
}
- (id)init;	// 0x3434a851
- (id)initWithCachedVersion:(id)cachedVersion;	// 0x3434a555
- (id)initWithVersion:(id)version;	// 0x3434a56d
- (id)_initWithVersion:(id)version capabilitiesVersion:(id)version2;	// 0x3434a935
- (id)_requestLinePrefixWithTask:(id)task;	// 0x3434a475
- (void)_setCapabilitiesVersion:(id)version;	// 0x3434a585
- (id)_usernameOnlyPortionOfUserString:(id)userString;	// 0x3434aa5d
- (id)addressBookConstraintsPath;	// 0x3434a2c9
- (BOOL)allAttachmentsAreBase64ed;	// 0x3434a241
- (id)calendarConstraintsPath;	// 0x3434a2e9
- (void)dealloc;	// 0x3434a809
- (BOOL)fetchAttachmentsWithItemOperations;	// 0x3434a23d
- (BOOL)headerNeedsPolicyKey;	// 0x3434a20d
- (BOOL)headerNeedsProtocolVersion;	// 0x3434a211
- (BOOL)headerNeedsUserAgent;	// 0x3434a209
- (id)protocolVersion;	// 0x3434a205
- (id)requestURLStringWithTask:(id)task;	// 0x3434a37d
- (BOOL)requiresExplicitlyFalseGetChanges;	// 0x3434a229
- (BOOL)sendAttendeeRole;	// 0x3434a21d
- (BOOL)sendCalendarInfoInRecurrence;	// 0x3434a245
- (BOOL)sendEmailInWBXML;	// 0x3434a231
- (BOOL)serverCreatesEventChangesForInvitations;	// 0x3434a249
- (BOOL)shouldSendClassForFolderItemsSync;	// 0x3434a221
- (BOOL)shouldSendFullContactInfo;	// 0x3434a225
- (BOOL)shouldUseWBXMLProvisioning;	// 0x3434a215
- (BOOL)supportsItemOperationsCommand;	// 0x3434a309
- (int)supportsMailboxSearch;	// 0x3434a351
- (BOOL)supportsSettingsCommand;	// 0x3434a32d
- (BOOL)useBooleanFolderItemsSyncDeletesAsMoves;	// 0x3434a22d
- (BOOL)useSmartMailTasks;	// 0x3434a239
- (BOOL)usesAirSyncBaseNamespace;	// 0x3434a219
- (BOOL)usesTopLevelStatusCodes;	// 0x3434a235
- (BOOL)versionChangeRequiresAccountUpgrade:(id)upgrade;	// 0x3434a201
@end


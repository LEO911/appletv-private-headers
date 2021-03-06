/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, PFUbiquityLocation, NSTimer, NSDate, NSPersistentStoreCoordinator, NSLock;

@interface _PFUbiquityRecordsExporter : NSObject {
	NSString *_localPeerID;	// 4 = 0x4
	NSTimer *_tempMoveTimer;	// 8 = 0x8
	NSDate *_lastTransactionDate;	// 12 = 0xc
	PFUbiquityLocation *_ubiquityRootLocation;	// 16 = 0x10
	NSPersistentStoreCoordinator *_monitoredPersistentStoreCoordinator;	// 20 = 0x14
	NSLock *_transactionLock;	// 24 = 0x18
	NSMutableDictionary *_pendingTransactionsToStoreNameAndTransactionNumber;	// 28 = 0x1c
}
@property(retain) NSDate *lastTransactionDate;	// G=0x33dcca95; S=0x33dccaa9; @synthesize=_lastTransactionDate
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x33dcca51; @synthesize=_localPeerID
@property(retain) NSTimer *tempMoveTimer;	// G=0x33dcca71; S=0x33dcca85; @synthesize=_tempMoveTimer
@property(readonly, assign, nonatomic) PFUbiquityLocation *ubiquityRootLocation;	// G=0x33dcca61; @synthesize=_ubiquityRootLocation
- (id)init;	// 0x33dc8e71
- (id)initWithLocalPeerID:(id)localPeerID andUbiquityRootLocation:(id)location;	// 0x33dc8e75
- (void)beginWatchingForChangesFromStore:(id)store;	// 0x33dc9175
- (void)cleanUpFromRolledbackPendingTransaction:(id)rolledbackPendingTransaction withNotification:(id)notification;	// 0x33dc9699
- (id)createDictionaryForObjectsInSaveNotification:(id)saveNotification forTransactionOfType:(int)type withExportContext:(id)exportContext andSaveSnapshot:(id)snapshot;	// 0x33dcb819
- (id)createSetOfStoresToExportForNotification:(id)notification;	// 0x33dc953d
- (void)dealloc;	// 0x33dc8f8d
- (id)description;	// 0x33dc90b9
// declared property getter: - (id)lastTransactionDate;	// 0x33dcca95
// declared property getter: - (id)localPeerID;	// 0x33dcca51
- (void)managedObjectContextDidSave:(id)managedObjectContext;	// 0x33dc9e61
- (void)onlyExportFromPersistentStoreCoordinator:(id)persistentStoreCoordinator;	// 0x33dcbe6d
- (void)scheduleTempMoveTimerWithPeerURL:(id)peerURL;	// 0x33dcc8d9
// declared property setter: - (void)setLastTransactionDate:(id)date;	// 0x33dccaa9
// declared property setter: - (void)setTempMoveTimer:(id)timer;	// 0x33dcca85
- (BOOL)shouldRespondToSaveNotification:(id)saveNotification;	// 0x33dc91cd
// declared property getter: - (id)tempMoveTimer;	// 0x33dcca71
- (void)timerMoveLogsFromTempDirectory:(id)tempDirectory;	// 0x33dcbe7d
// declared property getter: - (id)ubiquityRootLocation;	// 0x33dcca61
@end


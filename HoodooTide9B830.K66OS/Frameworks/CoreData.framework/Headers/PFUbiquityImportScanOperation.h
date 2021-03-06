/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import "PFUbiquityImportOperation.h"

@class NSSet, PFUbiquityLocation, NSString, NSObject;
@protocol PFUbiquityImportScanOperationDelegate;

__attribute__((visibility("hidden")))
@interface PFUbiquityImportScanOperation : PFUbiquityImportOperation {
@private
	PFUbiquityLocation *_rootLocationToScan;	// 24 = 0x18
	NSString *_localPeerID;	// 28 = 0x1c
	NSSet *_activeStoreNames;	// 32 = 0x20
	BOOL _includeLocalPeerLogs;	// 36 = 0x24
	BOOL _isFirstImport;	// 37 = 0x25
}
@property(readonly, assign, nonatomic) NSSet *activeStoreNames;	// G=0x323a207d; @synthesize=_activeStoreNames
@property(assign) NSObject<PFUbiquityImportScanOperationDelegate> *delegate;	// G=0x323a3c65; S=0x323a3c39; 
@property(readonly, assign, nonatomic) BOOL includeLocalPeerLogs;	// G=0x323a206d; @synthesize=_includeLocalPeerLogs
@property(assign, nonatomic) BOOL isFirstImport;	// G=0x323a204d; S=0x323a205d; @synthesize=_isFirstImport
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x323a208d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) PFUbiquityLocation *rootLocationToScan;	// G=0x323a209d; @synthesize=_rootLocationToScan
- (id)init;	// 0x323a20ad
- (id)initWithLocalPeerID:(id)localPeerID ubiquityRootLocation:(id)location activeStoreNames:(id)names includingLocalPeerLogs:(BOOL)logs;	// 0x323a3e65
// declared property getter: - (id)activeStoreNames;	// 0x323a207d
- (BOOL)batchDownloadTransactionLogsAtLocations:(id)locations error:(id *)error;	// 0x323a2129
- (void)dealloc;	// 0x323a3dd1
// declared property getter: - (id)delegate;	// 0x323a3c65
// declared property getter: - (BOOL)includeLocalPeerLogs;	// 0x323a206d
- (BOOL)isEqual:(id)equal;	// 0x323a3c91
// declared property getter: - (BOOL)isFirstImport;	// 0x323a204d
// declared property getter: - (id)localPeerID;	// 0x323a208d
- (void)main;	// 0x323a23c9
// declared property getter: - (id)rootLocationToScan;	// 0x323a209d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x323a3c39
// declared property setter: - (void)setIsFirstImport:(BOOL)import;	// 0x323a205d
@end


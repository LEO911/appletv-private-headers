/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import </libobjc.A.h>

@class NSMutableDictionary, NSString, NSArray, NSDate;

@interface PFUbiquitySaveSnapshot : NSObject {
	NSDate *_transactionDate;	// 4 = 0x4
	NSString *_modelVersionHash;	// 8 = 0x8
	NSString *_exportingPeerID;	// 12 = 0xc
	NSString *_localPeerID;	// 16 = 0x10
	NSMutableDictionary *_storeNameToStoreSaveSnapshots;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *exportingPeerID;	// G=0x2d19286d; @synthesize=_exportingPeerID
@property(readonly, assign, nonatomic) NSString *localPeerID;	// G=0x2d19287d; @synthesize=_localPeerID
@property(readonly, assign, nonatomic) NSString *modelVersionHash;	// G=0x2d19285d; @synthesize=_modelVersionHash
@property(readonly, assign, nonatomic) NSArray *storeNames;	// G=0x2d19281d; 
@property(retain, nonatomic) NSDate *transactionDate;	// G=0x2d19283d; S=0x2d19284d; @synthesize=_transactionDate
- (id)initWithSaveNotification:(id)saveNotification withLocalPeerID:(id)localPeerID;	// 0x2d192481
- (id)initWithTransactionLog:(id)transactionLog;	// 0x2d1922f1
- (void)dealloc;	// 0x2d1925a1
- (id)description;	// 0x2d192661
// declared property getter: - (id)exportingPeerID;	// 0x2d19286d
// declared property getter: - (id)localPeerID;	// 0x2d19287d
// declared property getter: - (id)modelVersionHash;	// 0x2d19285d
// declared property setter: - (void)setTransactionDate:(id)date;	// 0x2d19284d
// declared property getter: - (id)storeNames;	// 0x2d19281d
- (id)storeSaveSnapshotForStore:(id)store;	// 0x2d192735
- (id)storeSaveSnapshotForStoreName:(id)storeName;	// 0x2d192715
// declared property getter: - (id)transactionDate;	// 0x2d19283d
@end


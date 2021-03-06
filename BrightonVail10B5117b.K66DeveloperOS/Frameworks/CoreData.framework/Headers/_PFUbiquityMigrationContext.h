/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

@interface _PFUbiquityMigrationContext : NSObject {
	PFUbiquityTransactionLog *_transactionLog;	// 4 = 0x4
	PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;	// 8 = 0x8
	PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;	// 12 = 0xc
}
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *destinationStoreSaveSnapshot;	// G=0x31024161; S=0x31024171; @synthesize=_destinationStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityStoreSaveSnapshot *sourceStoreSaveSnapshot;	// G=0x31024141; S=0x31024151; @synthesize=_sourceStoreSaveSnapshot
@property(retain, nonatomic) PFUbiquityTransactionLog *transactionLog;	// G=0x31024121; S=0x31024131; @synthesize=_transactionLog
- (void)dealloc;	// 0x31024091
// declared property getter: - (id)destinationStoreSaveSnapshot;	// 0x31024161
// declared property setter: - (void)setDestinationStoreSaveSnapshot:(id)snapshot;	// 0x31024171
// declared property setter: - (void)setSourceStoreSaveSnapshot:(id)snapshot;	// 0x31024151
// declared property setter: - (void)setTransactionLog:(id)log;	// 0x31024131
- (id)sourceGlobalObjectIDFromCompressedID:(id)compressedID;	// 0x31024071
// declared property getter: - (id)sourceStoreSaveSnapshot;	// 0x31024141
// declared property getter: - (id)transactionLog;	// 0x31024121
@end


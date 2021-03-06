/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

#import <NSObject.h> // Unknown library

@class NSString, MZKeyValueStoreSerializer, MZKeyValueStoreTransaction;
@protocol MZKeyValueStoreOperationDelegate;

@interface MZKeyValueStoreRequest : NSObject {
	NSString *_domain;	// 4 = 0x4
	MZKeyValueStoreTransaction *_transaction;	// 8 = 0x8
	NSString *_DSID;	// 12 = 0xc
	id<MZKeyValueStoreOperationDelegate> _delegate;	// 16 = 0x10
	BOOL _shouldAuthenticate;	// 20 = 0x14
	MZKeyValueStoreSerializer *_serializer;	// 24 = 0x18
}
@property(copy, nonatomic) NSString *DSID;	// G=0x300ed61d; S=0x300ed631; @synthesize=_DSID
@property(assign, nonatomic) id<MZKeyValueStoreOperationDelegate> delegate;	// G=0x300ed641; S=0x300ed651; @synthesize=_delegate
@property(copy, nonatomic) NSString *domain;	// G=0x300ed5d9; S=0x300ed5ed; @synthesize=_domain
@property(retain, nonatomic) MZKeyValueStoreSerializer *serializer;	// G=0x300ed569; S=0x300ed681; @synthesize=_serializer
@property(assign, nonatomic) BOOL shouldAuthenticate;	// G=0x300ed661; S=0x300ed671; @synthesize=_shouldAuthenticate
@property(retain, nonatomic) MZKeyValueStoreTransaction *transaction;	// G=0x300ed5fd; S=0x300ed60d; @synthesize=_transaction
- (id)initWithTransaction:(id)transaction;	// 0x300eceb9
// declared property getter: - (id)DSID;	// 0x300ed61d
- (void)dealloc;	// 0x300ecf0d
// declared property getter: - (id)delegate;	// 0x300ed641
// declared property getter: - (id)domain;	// 0x300ed5d9
- (void)postData:(id)data;	// 0x300ed001
- (void)scheduleStoreURLOperation:(id)operation data:(id)data;	// 0x300ed495
// declared property getter: - (id)serializer;	// 0x300ed569
// declared property setter: - (void)setDSID:(id)dsid;	// 0x300ed631
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x300ed651
// declared property setter: - (void)setDomain:(id)domain;	// 0x300ed5ed
// declared property setter: - (void)setSerializer:(id)serializer;	// 0x300ed681
// declared property setter: - (void)setShouldAuthenticate:(BOOL)authenticate;	// 0x300ed671
// declared property setter: - (void)setTransaction:(id)transaction;	// 0x300ed60d
// declared property getter: - (BOOL)shouldAuthenticate;	// 0x300ed661
- (void)start;	// 0x300ecfc1
// declared property getter: - (id)transaction;	// 0x300ed5fd
@end


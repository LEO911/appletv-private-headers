/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary, NSRecursiveLock;

__attribute__((visibility("hidden")))
@interface PFUbiquityGlobalObjectIDCache : NSObject {
@private
	NSString *_storeName;	// 4 = 0x4
	NSString *_localPeerID;	// 8 = 0x8
	NSMutableDictionary *_peerIDToEntityNameToPrimaryKey;	// 12 = 0xc
	NSRecursiveLock *_peerIDToEntityNameToPrimaryKeyLock;	// 16 = 0x10
}
@property(retain, nonatomic) NSString *localPeerID;	// G=0x32e5c751; S=0x32e5c761; @synthesize=_localPeerID
@property(retain, nonatomic) NSString *storeName;	// G=0x32e5c731; S=0x32e5c741; @synthesize=_storeName
+ (id)stringValueFromArray:(id)array atIndexDescribedByStringNumber:(id)indexDescribedByStringNumber;	// 0x32e5c6c1
- (id)init;	// 0x32e5bf3d
- (id)initWithLocalPeerID:(id)localPeerID forStoreName:(id)storeName;	// 0x32e5bfe9
- (id)createGlobalIDForCompressedString:(id)compressedString withEntityNames:(id)entityNames primaryKeys:(id)keys peerIDs:(id)ids;	// 0x32e5c0f5
- (void)dealloc;	// 0x32e5c04d
// declared property getter: - (id)localPeerID;	// 0x32e5c751
- (void)purgeCache;	// 0x32e5c539
// declared property setter: - (void)setLocalPeerID:(id)anId;	// 0x32e5c761
// declared property setter: - (void)setStoreName:(id)name;	// 0x32e5c741
// declared property getter: - (id)storeName;	// 0x32e5c731
@end


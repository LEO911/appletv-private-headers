/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {
	NSNumber *_accountIdentifier;	// 4 = 0x4
	NSMutableDictionary *_itemIDsByType;	// 8 = 0x8
}
@property(retain, nonatomic) NSNumber *accountIdentifier;	// G=0x37a76ad5; S=0x37a76ae5; @synthesize=_accountIdentifier
@property(readonly, assign, nonatomic) NSArray *allItemTypes;	// G=0x37a769ed; 
- (id)initWithItems:(id)items;	// 0x37a76771
// declared property getter: - (id)accountIdentifier;	// 0x37a76ad5
- (void)addItemIdentifier:(id)identifier forItemType:(id)itemType;	// 0x37a76905
// declared property getter: - (id)allItemTypes;	// 0x37a769ed
- (id)copyWithZone:(NSZone *)zone;	// 0x37a76a45
- (void)dealloc;	// 0x37a768a1
- (id)itemIdentifiersForItemType:(id)itemType;	// 0x37a76a0d
// declared property setter: - (void)setAccountIdentifier:(id)identifier;	// 0x37a76ae5
@end


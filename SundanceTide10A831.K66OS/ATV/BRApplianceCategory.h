/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSInvocation;

__attribute__((visibility("hidden")))
@interface BRApplianceCategory : XXUnknownSuperclass {
	NSMutableDictionary *_info;	// 4 = 0x4
	NSDictionary *_storeDescription;	// 8 = 0x8
	BOOL _followsStoreCategory;	// 12 = 0xc
}
@property(retain, nonatomic) NSInvocation *action;	// G=0x283ab9; S=0x283a55; 
@property(assign, nonatomic) BOOL followsStoreCategory;	// G=0x2841a1; S=0x283be1; @synthesize=_followsStoreCategory
@property(retain, nonatomic) id identifier;	// G=0x283a05; S=0x2839ad; 
@property(retain) NSMutableDictionary *info;	// G=0x284159; S=0x28416d; @synthesize=_info
@property(assign, nonatomic) BOOL isDefaultCategory;	// G=0x283949; S=0x2838d5; 
@property(assign, nonatomic) BOOL isStoreCategory;	// G=0x283b7d; S=0x283b09; 
@property(assign, nonatomic) BOOL isStoreDependent;	// G=0x283d2d; S=0x283cb9; 
@property(retain, nonatomic) NSString *name;	// G=0x2837ad; S=0x283749; 
@property(assign, nonatomic) float preferredOrder;	// G=0x283871; S=0x2837fd; 
@property(assign, nonatomic) BOOL shouldDisplayOnStartup;	// G=0x283e05; S=0x283d91; 
@property(retain) NSDictionary *storeDescription;	// G=0x28417d; S=0x284191; @synthesize=_storeDescription
@property(retain, nonatomic) NSArray *textEntryHistoryDisplayBehaviors;	// G=0x284109; S=0x28409d; 
@property(retain, nonatomic) NSArray *textEntryHistoryDisplayClients;	// G=0x28404d; S=0x283fe1; 
@property(retain, nonatomic) NSString *textEntryHistoryStorageBehavior;	// G=0x283f91; S=0x283f25; 
@property(retain, nonatomic) NSString *textEntryHistoryStorageClient;	// G=0x283ed5; S=0x283e69; 
+ (id)categoryWithDescription:(id)description;	// 0x2835a5
+ (id)categoryWithName:(id)name identifier:(id)identifier preferredOrder:(float)order;	// 0x28351d
- (id)init;	// 0x283611
- (void).cxx_destruct;	// 0x2841b1
// declared property getter: - (id)action;	// 0x283ab9
- (id)description;	// 0x283685
// declared property getter: - (BOOL)followsStoreCategory;	// 0x2841a1
- (BOOL)followsStoreCateogry;	// 0x283c55
// declared property getter: - (id)identifier;	// 0x283a05
// declared property getter: - (id)info;	// 0x284159
// declared property getter: - (BOOL)isDefaultCategory;	// 0x283949
// declared property getter: - (BOOL)isStoreCategory;	// 0x283b7d
// declared property getter: - (BOOL)isStoreDependent;	// 0x283d2d
// declared property getter: - (id)name;	// 0x2837ad
// declared property getter: - (float)preferredOrder;	// 0x283871
// declared property setter: - (void)setAction:(id)action;	// 0x283a55
// declared property setter: - (void)setFollowsStoreCategory:(BOOL)category;	// 0x283be1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x2839ad
// declared property setter: - (void)setInfo:(id)info;	// 0x28416d
// declared property setter: - (void)setIsDefaultCategory:(BOOL)category;	// 0x2838d5
// declared property setter: - (void)setIsStoreCategory:(BOOL)category;	// 0x283b09
// declared property setter: - (void)setIsStoreDependent:(BOOL)dependent;	// 0x283cb9
// declared property setter: - (void)setName:(id)name;	// 0x283749
// declared property setter: - (void)setPreferredOrder:(float)order;	// 0x2837fd
// declared property setter: - (void)setShouldDisplayOnStartup:(BOOL)displayOnStartup;	// 0x283d91
// declared property setter: - (void)setStoreDescription:(id)description;	// 0x284191
// declared property setter: - (void)setTextEntryHistoryDisplayBehaviors:(id)behaviors;	// 0x28409d
// declared property setter: - (void)setTextEntryHistoryDisplayClients:(id)clients;	// 0x283fe1
// declared property setter: - (void)setTextEntryHistoryStorageBehavior:(id)behavior;	// 0x283f25
// declared property setter: - (void)setTextEntryHistoryStorageClient:(id)client;	// 0x283e69
// declared property getter: - (BOOL)shouldDisplayOnStartup;	// 0x283e05
// declared property getter: - (id)storeDescription;	// 0x28417d
// declared property getter: - (id)textEntryHistoryDisplayBehaviors;	// 0x284109
// declared property getter: - (id)textEntryHistoryDisplayClients;	// 0x28404d
// declared property getter: - (id)textEntryHistoryStorageBehavior;	// 0x283f91
// declared property getter: - (id)textEntryHistoryStorageClient;	// 0x283ed5
@end

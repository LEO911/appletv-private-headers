/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import "ASItem.h"

@class NSArray, ASFolderItemsSyncResponse, NSNumber, NSString;

@interface ASCollection : ASItem {
	int _dataclass;	// 40 = 0x28
	NSString *_syncKey;	// 44 = 0x2c
	NSString *_collectionId;	// 48 = 0x30
	NSNumber *_status;	// 52 = 0x34
	NSNumber *_moreAvailable;	// 56 = 0x38
	NSArray *_changedItems;	// 60 = 0x3c
	NSArray *_responseItems;	// 64 = 0x40
	ASFolderItemsSyncResponse *_parentResponse;	// 68 = 0x44
	int _sniffableType;	// 72 = 0x48
	BOOL _checkedShouldSniffInvites;	// 76 = 0x4c
}
@property(retain) NSArray *changedItems;	// G=0x33bdbd11; S=0x33bdbd49; converted property
@property(retain) NSString *collectionId;	// G=0x33bdda81; S=0x33bddab9; converted property
@property(readonly, assign) int dataclass;	// G=0x33bdbb61; converted property
@property(retain) NSNumber *moreAvailable;	// G=0x33bddb79; S=0x33bddbb1; converted property
@property(retain) NSArray *responseItems;	// G=0x33bdbd8d; S=0x33bdbdc5; converted property
@property(retain) NSNumber *status;	// G=0x33bddafd; S=0x33bddb35; converted property
@property(retain) NSString *syncKey;	// G=0x33bdda05; S=0x33bdda3d; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x33bdb8ad
+ (id)asParseRules;	// 0x33bdbe09
+ (BOOL)frontingBasicTypes;	// 0x33bdb9a9
+ (BOOL)notifyOfUnknownTokens;	// 0x33bdb9fd
+ (BOOL)parsingLeafNode;	// 0x33bdb901
+ (BOOL)parsingWithSubItems;	// 0x33bdb955
- (id)init;	// 0x33bdba51
// converted property getter: - (id)changedItems;	// 0x33bdbd11
// converted property getter: - (id)collectionId;	// 0x33bdda81
// converted property getter: - (int)dataclass;	// 0x33bdbb61
- (void)dealloc;	// 0x33bdba9d
- (id)description;	// 0x33bddbf5
// converted property getter: - (id)moreAvailable;	// 0x33bddb79
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x33bdd89d
// converted property getter: - (id)responseItems;	// 0x33bdbd8d
// converted property setter: - (void)setChangedItems:(id)items;	// 0x33bdbd49
// converted property setter: - (void)setCollectionId:(id)anId;	// 0x33bddab9
- (void)setDataclassString:(id)string;	// 0x33bdbc31
// converted property setter: - (void)setMoreAvailable:(id)available;	// 0x33bddbb1
- (void)setParentResponse:(id)response;	// 0x33bdbb51
// converted property setter: - (void)setResponseItems:(id)items;	// 0x33bdbdc5
// converted property setter: - (void)setStatus:(id)status;	// 0x33bddb35
// converted property setter: - (void)setSyncKey:(id)key;	// 0x33bdda3d
- (int)sniffableTypeForAccount:(id)account;	// 0x33bdd995
// converted property getter: - (id)status;	// 0x33bddafd
// converted property getter: - (id)syncKey;	// 0x33bdda05
@end

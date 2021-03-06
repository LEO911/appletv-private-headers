/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import "CoreDAVPropertyFindBaseTask.h"

@class NSSet, NSDictionary;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask {
	NSSet *_searchItems;	// 144 = 0x90
	BOOL _applyToPrincipalCollectionSet;	// 148 = 0x94
	NSDictionary *_extraAttributes;	// 152 = 0x98
}
@property(assign) BOOL applyToPrincipalCollectionSet;	// G=0x33429cd9; S=0x33429cf1; @synthesize=_applyToPrincipalCollectionSet
@property(retain) NSDictionary *extraAttributes;	// G=0x33429cb5; S=0x33429cc9; @synthesize=_extraAttributes
@property(retain) NSSet *searchItems;	// G=0x33429c91; S=0x33429ca5; @synthesize=_searchItems
- (id)initWithPropertiesToFind:(id)find atURL:(id)url;	// 0x3342986d
- (id)initWithPropertySearches:(id)propertySearches propertiesToFind:(id)find atURL:(id)url applyToPrincipalCollectionSet:(BOOL)principalCollectionSet extraAttributes:(id)attributes;	// 0x33429915
// declared property getter: - (BOOL)applyToPrincipalCollectionSet;	// 0x33429cd9
- (void)dealloc;	// 0x334298b1
// declared property getter: - (id)extraAttributes;	// 0x33429cb5
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x33429c4d
- (id)httpMethod;	// 0x33429985
- (id)requestBody;	// 0x33429991
// declared property getter: - (id)searchItems;	// 0x33429c91
// declared property setter: - (void)setApplyToPrincipalCollectionSet:(BOOL)principalCollectionSet;	// 0x33429cf1
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x33429cc9
// declared property setter: - (void)setSearchItems:(id)items;	// 0x33429ca5
@end


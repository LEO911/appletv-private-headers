/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVCloudCollectionQueryHandler.h"
#import "AppleTV-Structs.h"


__attribute__((visibility("hidden")))
@interface ATVCloudPlaylistQueryHandler : ATVCloudCollectionQueryHandler {
}
+ (id)mlPredicatePropertyForATVProperty:(CFStringRef)atvproperty;	// 0x32ae7c65
+ (id)mlPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x32ae7da9
+ (id)mlQueryPropertyForATVProperty:(CFStringRef)atvproperty;	// 0x32ae7ab9
- (void)_handleDAAPQuery:(ATVMediaQueryRef)query;	// 0x32ae90d5
- (void)_handleQuery:(ATVMediaQueryRef)query;	// 0x32ae839d
- (id)_mlQueryForATVMediaQuery:(ATVMediaQueryRef)atvmediaQuery mediaTypePredicate:(id *)predicate;	// 0x32ae80c5
- (id)_predicateForPlaylistMediaType:(CFStringRef)playlistMediaType;	// 0x32ae9a91
- (unsigned long)_specialPlaylistKindForMLKind:(id)mlkind;	// 0x32ae9b81
- (id)countedPropertiesForATVProperties:(id)atvproperties;	// 0x32ae7f5d
- (Class)entityClass;	// 0x32ae7f65
- (id)foreignPersistentIDProperty;	// 0x32ae7f59
- (void)handleQuery:(ATVMediaQueryRef)query withContext:(void *)context;	// 0x32ae7ec1
- (id)mlPropertyForMLCountedProperty:(id)mlcountedProperty;	// 0x32ae7f61
- (id)orderingPropertiesForProperty:(id)property;	// 0x32ae7efd
- (/*function-pointer*/ void *)propertyAccessorFn;	// 0x32ae7f81
@end

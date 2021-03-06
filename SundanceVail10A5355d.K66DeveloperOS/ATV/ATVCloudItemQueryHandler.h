/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCloudQueryHandler.h"


__attribute__((visibility("hidden")))
@interface ATVCloudItemQueryHandler : ATVCloudQueryHandler {
}
+ (id)_mlPropertiesForATVProperties:(id)atvproperties;	// 0xd0a0d
+ (id)atvMediaItemsForCloudIDs:(id)cloudIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0xce14d
+ (id)atvMediaItemsForTrackIDs:(id)trackIDs mlLibrary:(id)library dataClient:(id)client propertiesRequested:(id)requested;	// 0xce4f5
+ (id)mlPredicatePropertyForATVProperty:(id)atvproperty;	// 0xcde75
+ (id)mlPropertyForATVProperty:(id)atvproperty;	// 0xce06d
+ (id)mlQueryPropertyForATVProperty:(id)atvproperty;	// 0xcd86d
- (void)_handleDAAPQuery:(id)query;	// 0xcf451
- (void)_handleQuery:(id)query;	// 0xcec05
- (id)_mlQueryForATVMediaQuery:(id)atvmediaQuery playlist:(id *)playlist usingSections:(BOOL *)sections;	// 0xce769
- (id)_orderingPropertiesForProperty:(id)property;	// 0xd08bd
- (id)_orderingTermsForProperty:(id)property;	// 0xd0919
- (void)_setValue:(id)value forKey:(id)key inResponseBuffer:(id)responseBuffer;	// 0xd0775
- (void)handleQuery:(id)query withContext:(void *)context;	// 0xcd821
@end


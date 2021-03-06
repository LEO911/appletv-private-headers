/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import "StoreServices-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"

@class NSArray, NSString;

@interface SSDownloadManagerOptions : NSObject <NSCopying> {
	NSArray *_downloadKinds;	// 4 = 0x4
	BOOL _filterExternalOriginatedDownloads;	// 8 = 0x8
	NSString *_persistenceIdentifier;	// 12 = 0xc
	NSArray *_prefetchedDownloadExternalProperties;	// 16 = 0x10
	NSArray *_prefetchedDownloadProperties;	// 20 = 0x14
}
@property(copy, nonatomic) NSArray *downloadKinds;	// G=0x3282576d; S=0x32825781; @synthesize=_downloadKinds
@property(copy, nonatomic) NSString *persistenceIdentifier;	// G=0x32825791; S=0x328257a5; @synthesize=_persistenceIdentifier
@property(copy, nonatomic) NSArray *prefetchedDownloadExternalProperties;	// G=0x328257b5; S=0x328257c9; @synthesize=_prefetchedDownloadExternalProperties
@property(copy, nonatomic) NSArray *prefetchedDownloadProperties;	// G=0x328257d9; S=0x328257ed; @synthesize=_prefetchedDownloadProperties
@property(assign, nonatomic) BOOL shouldFilterExternalOriginatedDownloads;	// G=0x328257fd; S=0x3282580d; @synthesize=_filterExternalOriginatedDownloads
- (id)copyWithZone:(NSZone *)zone;	// 0x328254d5
- (void)dealloc;	// 0x32825449
// declared property getter: - (id)downloadKinds;	// 0x3282576d
- (unsigned)hash;	// 0x3282559d
- (BOOL)isEqual:(id)equal;	// 0x328255bd
// declared property getter: - (id)persistenceIdentifier;	// 0x32825791
// declared property getter: - (id)prefetchedDownloadExternalProperties;	// 0x328257b5
// declared property getter: - (id)prefetchedDownloadProperties;	// 0x328257d9
// declared property setter: - (void)setDownloadKinds:(id)kinds;	// 0x32825781
// declared property setter: - (void)setPersistenceIdentifier:(id)identifier;	// 0x328257a5
// declared property setter: - (void)setPrefetchedDownloadExternalProperties:(id)properties;	// 0x328257c9
// declared property setter: - (void)setPrefetchedDownloadProperties:(id)properties;	// 0x328257ed
// declared property setter: - (void)setShouldFilterExternalOriginatedDownloads:(BOOL)filterExternalOriginatedDownloads;	// 0x3282580d
// declared property getter: - (BOOL)shouldFilterExternalOriginatedDownloads;	// 0x328257fd
@end


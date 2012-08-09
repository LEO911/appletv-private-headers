/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISReview, NSURL;

@interface ISFetchReviewOperation : ISOperation {
	int _assetType;	// 60 = 0x3c
	BOOL _backgroundReview;	// 64 = 0x40
	unsigned long long _itemIdentifier;	// 68 = 0x44
	unsigned _softwareVersionIdentifier;	// 76 = 0x4c
	ISReview *_review;	// 80 = 0x50
	NSURL *_url;	// 84 = 0x54
}
@property(assign) int assetType;	// G=0x37a6cba5; S=0x37a6cbb9; @synthesize=_assetType
@property(assign, getter=isBackgroundReview) BOOL backgroundReview;	// G=0x37a6cbd1; S=0x37a6cbe9; @synthesize=_backgroundReview
@property(assign) unsigned long long itemIdentifier;	// G=0x37a6cc01; S=0x37a6cc35; @synthesize=_itemIdentifier
@property(retain) ISReview *review;	// G=0x37a6cc69; S=0x37a6cc7d; @synthesize=_review
@property(assign) unsigned softwareVersionIdentifier;	// G=0x37a6cc8d; S=0x37a6cca1; @synthesize=_softwareVersionIdentifier
@property(retain) NSURL *url;	// G=0x37a6ccb9; S=0x37a6cccd; @synthesize=_url
- (void)_fetchReviewInformation;	// 0x37a6c7f1
// declared property getter: - (int)assetType;	// 0x37a6cba5
- (void)dealloc;	// 0x37a6c719
// declared property getter: - (BOOL)isBackgroundReview;	// 0x37a6cbd1
// declared property getter: - (unsigned long long)itemIdentifier;	// 0x37a6cc01
// declared property getter: - (id)review;	// 0x37a6cc69
- (void)run;	// 0x37a6c771
// declared property setter: - (void)setAssetType:(int)type;	// 0x37a6cbb9
// declared property setter: - (void)setBackgroundReview:(BOOL)review;	// 0x37a6cbe9
// declared property setter: - (void)setItemIdentifier:(unsigned long long)identifier;	// 0x37a6cc35
// declared property setter: - (void)setReview:(id)review;	// 0x37a6cc7d
// declared property setter: - (void)setSoftwareVersionIdentifier:(unsigned)identifier;	// 0x37a6cca1
// declared property setter: - (void)setUrl:(id)url;	// 0x37a6cccd
// declared property getter: - (unsigned)softwareVersionIdentifier;	// 0x37a6cc8d
// declared property getter: - (id)url;	// 0x37a6ccb9
@end

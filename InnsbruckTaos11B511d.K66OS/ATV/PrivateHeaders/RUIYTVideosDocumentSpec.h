/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTFeedDocumentSpec.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface RUIYTVideosDocumentSpec : XXUnknownSuperclass <RUIYTFeedDocumentSpec> {
	BOOL _isPlaylist;	// 4 = 0x4
	BOOL _requiresAccessToken;	// 5 = 0x5
	int _type;	// 8 = 0x8
	NSString *_sortPreferenceKey;	// 12 = 0xc
	NSString *_title;	// 16 = 0x10
	double _refreshInterval;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x29721d; 
@property(assign, nonatomic) BOOL isPlaylist;	// G=0x2975ad; S=0x2975bd; @synthesize=_isPlaylist
@property(readonly, assign, nonatomic) NSString *moreNRemainingSubTitle;	// G=0x2974a5; 
@property(readonly, assign, nonatomic) NSString *moreNToMTitle;	// G=0x297475; 
@property(readonly, assign, nonatomic) NSString *moreNTotalSubTitle;	// G=0x297495; 
@property(readonly, assign, nonatomic) NSString *moreSingleRemainingSubTitle;	// G=0x297485; 
@property(readonly, assign, nonatomic) NSString *moreSingleTitle;	// G=0x297465; 
@property(readonly, assign, nonatomic) NSString *noContentErrorMessage;	// G=0x2974b5; 
@property(assign, nonatomic) double refreshInterval;	// G=0x297605; S=0x29761d; @synthesize=_refreshInterval
@property(assign, nonatomic) BOOL requiresAccessToken;	// G=0x297631; S=0x297641; @synthesize=_requiresAccessToken
@property(retain, nonatomic) NSString *sortPreferenceKey;	// G=0x297575; S=0x297585; @synthesize=_sortPreferenceKey
@property(retain, nonatomic) NSString *title;	// G=0x2975cd; S=0x2975dd; @synthesize=_title
@property(assign, nonatomic) int type;	// G=0x297555; S=0x297565; @synthesize=_type
+ (id)byAuthorDocumentSpecWithAuthorName:(id)authorName;	// 0x297025
+ (id)fetchDocumentSpecWithAssetIDs:(id)assetIDs;	// 0x2971a5
+ (id)relatedDocumentSpecWithAsset:(id)asset;	// 0x2970fd
+ (id)videoSearchDocumentSpecWithSearchTerm:(id)searchTerm;	// 0x296f99
+ (id)videosDocumentSpecForType:(int)type;	// 0x296ca1
+ (id)videosDocumentSpecForType:(int)type title:(id)title feedURL:(id)url requiresAccessToken:(BOOL)token;	// 0x296ea1
- (void).cxx_destruct;	// 0x297651
// declared property getter: - (id)identifier;	// 0x29721d
// declared property getter: - (BOOL)isPlaylist;	// 0x2975ad
// declared property getter: - (id)moreNRemainingSubTitle;	// 0x2974a5
// declared property getter: - (id)moreNToMTitle;	// 0x297475
// declared property getter: - (id)moreNTotalSubTitle;	// 0x297495
// declared property getter: - (id)moreSingleRemainingSubTitle;	// 0x297485
// declared property getter: - (id)moreSingleTitle;	// 0x297465
// declared property getter: - (id)noContentErrorMessage;	// 0x2974b5
// declared property getter: - (double)refreshInterval;	// 0x297605
// declared property getter: - (BOOL)requiresAccessToken;	// 0x297631
// declared property setter: - (void)setIsPlaylist:(BOOL)playlist;	// 0x2975bd
// declared property setter: - (void)setRefreshInterval:(double)interval;	// 0x29761d
// declared property setter: - (void)setRequiresAccessToken:(BOOL)token;	// 0x297641
// declared property setter: - (void)setSortPreferenceKey:(id)key;	// 0x297585
// declared property setter: - (void)setTitle:(id)title;	// 0x2975dd
// declared property setter: - (void)setType:(int)type;	// 0x297565
// declared property getter: - (id)sortPreferenceKey;	// 0x297575
// declared property getter: - (id)title;	// 0x2975cd
// declared property getter: - (int)type;	// 0x297555
- (id)videosDocument;	// 0x297519
@end


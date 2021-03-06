/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTFeedDocumentSpec.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RUIYTVideosDocumentSpec : RUIYTFeedDocumentSpec {
	NSString *_title;	// 4 = 0x4
	double _refreshInterval;	// 8 = 0x8
	int _type;	// 16 = 0x10
	NSString *_sortPreferenceKey;	// 20 = 0x14
	BOOL _isPlaylist;	// 24 = 0x18
	BOOL _requiresAccessToken;	// 25 = 0x19
}
@property(assign, nonatomic) BOOL isPlaylist;	// G=0x246109; S=0x246119; @synthesize=_isPlaylist
@property(assign) double refreshInterval;	// G=0x245dd5; S=0x245dc1; converted property
@property(assign, nonatomic) BOOL requiresAccessToken;	// G=0x246129; S=0x246139; @synthesize=_requiresAccessToken
@property(retain, nonatomic) NSString *sortPreferenceKey;	// G=0x2460d1; S=0x2460e1; @synthesize=_sortPreferenceKey
@property(retain) NSString *title;	// G=0x245dad; S=0x245d85; converted property
@property(assign, nonatomic) int type;	// G=0x2460b1; S=0x2460c1; @synthesize=_type
+ (id)byAuthorDocumentSpecWithAuthorName:(id)authorName;	// 0x245c05
+ (id)relatedDocumentSpecWithAsset:(id)asset;	// 0x245cdd
+ (id)videoSearchDocumentSpecWithSearchTerm:(id)searchTerm;	// 0x245b79
+ (id)videosDocumentSpecForType:(int)type;	// 0x2458d9
+ (id)videosDocumentSpecForType:(int)type title:(id)title feedURL:(id)url requiresAccessToken:(BOOL)token;	// 0x245a81
- (void).cxx_destruct;	// 0x246149
- (id)identifier;	// 0x245ded
// declared property getter: - (BOOL)isPlaylist;	// 0x246109
- (id)moreNRemainingSubTitle;	// 0x246011
- (id)moreNToMTitle;	// 0x245fe1
- (id)moreNTotalSubTitle;	// 0x246001
- (id)moreSingleRemainingSubTitle;	// 0x245ff1
- (id)moreSingleTitle;	// 0x245fd1
- (id)noContentErrorMessage;	// 0x246021
// converted property getter: - (double)refreshInterval;	// 0x245dd5
// declared property getter: - (BOOL)requiresAccessToken;	// 0x246129
// declared property setter: - (void)setIsPlaylist:(BOOL)playlist;	// 0x246119
// converted property setter: - (void)setRefreshInterval:(double)interval;	// 0x245dc1
// declared property setter: - (void)setRequiresAccessToken:(BOOL)token;	// 0x246139
// declared property setter: - (void)setSortPreferenceKey:(id)key;	// 0x2460e1
// converted property setter: - (void)setTitle:(id)title;	// 0x245d85
// declared property setter: - (void)setType:(int)type;	// 0x2460c1
// declared property getter: - (id)sortPreferenceKey;	// 0x2460d1
// converted property getter: - (id)title;	// 0x245dad
// declared property getter: - (int)type;	// 0x2460b1
- (id)videosDocument;	// 0x246075
@end


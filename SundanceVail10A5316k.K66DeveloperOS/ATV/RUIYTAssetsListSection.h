/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTListSection.h"

@class RUIYTAssetsInfo;

__attribute__((visibility("hidden")))
@interface RUIYTAssetsListSection : RUIYTListSection {
	BOOL _treatAsPlaylist;	// 12 = 0xc
	BOOL _requestsPageLoad;	// 13 = 0xd
	RUIYTAssetsInfo *_assetsInfo;	// 16 = 0x10
}
@property(retain) RUIYTAssetsInfo *assetsInfo;	// G=0x235b61; S=0x235b75; @synthesize=_assetsInfo
@property(assign) BOOL requestsPageLoad;	// G=0x235b31; S=0x235b49; @synthesize=_requestsPageLoad
@property(assign) BOOL treatAsPlaylist;	// G=0x235b01; S=0x235b19; @synthesize=_treatAsPlaylist
- (void).cxx_destruct;	// 0x235b85
// declared property getter: - (id)assetsInfo;	// 0x235b61
// declared property getter: - (BOOL)requestsPageLoad;	// 0x235b31
// declared property setter: - (void)setAssetsInfo:(id)info;	// 0x235b75
// declared property setter: - (void)setRequestsPageLoad:(BOOL)load;	// 0x235b49
// declared property setter: - (void)setTreatAsPlaylist:(BOOL)playlist;	// 0x235b19
// declared property getter: - (BOOL)treatAsPlaylist;	// 0x235b01
@end

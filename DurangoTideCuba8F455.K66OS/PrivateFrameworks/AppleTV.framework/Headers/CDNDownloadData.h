/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSString, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CDNDownloadData : NSObject {
@private
	NSString *name;	// 4 = 0x4
	unsigned short cdnId;	// 8 = 0x8
	unsigned rank;	// 12 = 0xc
	unsigned rankBySpeed;	// 16 = 0x10
	unsigned rankByNormalizedSpeed;	// 20 = 0x14
	unsigned origIndexFromNCCP;	// 24 = 0x18
	unsigned sortedIndex;	// 28 = 0x1c
	unsigned long long bandwidth;	// 32 = 0x20
	unsigned numTotalDownloadables;	// 40 = 0x28
	unsigned numSuccessfulDownloadables;	// 44 = 0x2c
	unsigned numFailedDownloadables;	// 48 = 0x30
	NSMutableArray *downloadableData;	// 52 = 0x34
}
@property(readonly, assign, nonatomic) unsigned long long bandwidth;	// G=0x3084e30c; @synthesize
@property(readonly, assign, nonatomic) unsigned short cdnId;	// G=0x3084e39c; @synthesize
@property(readonly, retain, nonatomic) NSMutableArray *downloadableData;	// G=0x3084e2bc; @synthesize
@property(readonly, retain, nonatomic) NSString *name;	// G=0x3084e3b0; @synthesize
@property(readonly, assign, nonatomic) unsigned numFailedDownloadables;	// G=0x3084e2d0; @synthesize
@property(readonly, assign, nonatomic) unsigned numSuccessfulDownloadables;	// G=0x3084e2e4; @synthesize
@property(readonly, assign, nonatomic) unsigned numTotalDownloadables;	// G=0x3084e2f8; @synthesize
@property(readonly, assign, nonatomic) unsigned origIndexFromNCCP;	// G=0x3084e34c; @synthesize
@property(readonly, assign, nonatomic) unsigned rank;	// G=0x3084e388; @synthesize
@property(readonly, assign, nonatomic) unsigned rankByNormalizedSpeed;	// G=0x3084e360; @synthesize
@property(readonly, assign, nonatomic) unsigned rankBySpeed;	// G=0x3084e374; @synthesize
@property(assign, nonatomic) unsigned sortedIndex;	// G=0x3084e324; S=0x3084e338; @synthesize
- (id)initWithCdn:(Cdn *)cdn;	// 0x3084e5dc
- (BOOL)allDownloadablesDownloaded;	// 0x3084e774
// declared property getter: - (unsigned long long)bandwidth;	// 0x3084e30c
// declared property getter: - (unsigned short)cdnId;	// 0x3084e39c
- (int)compareByNormalizedSpeed:(id)speed;	// 0x3084e3e0
- (int)compareByRank:(id)rank;	// 0x3084e4c8
- (int)compareBySpeed:(id)speed;	// 0x3084e454
- (void)computeNumDownloadables;	// 0x3084e99c
- (void)dealloc;	// 0x3084e53c
// declared property getter: - (id)downloadableData;	// 0x3084e2bc
- (id)getDownloadURL:(unsigned)url withContentProfile:(int)contentProfile;	// 0x3084eddc
- (id)getRedirectedDownloadURL:(unsigned)url withContentProfile:(int)contentProfile;	// 0x3084ebf8
// declared property getter: - (id)name;	// 0x3084e3b0
// declared property getter: - (unsigned)numFailedDownloadables;	// 0x3084e2d0
// declared property getter: - (unsigned)numSuccessfulDownloadables;	// 0x3084e2e4
// declared property getter: - (unsigned)numTotalDownloadables;	// 0x3084e2f8
// declared property getter: - (unsigned)origIndexFromNCCP;	// 0x3084e34c
// declared property getter: - (unsigned)rank;	// 0x3084e388
// declared property getter: - (unsigned)rankByNormalizedSpeed;	// 0x3084e360
// declared property getter: - (unsigned)rankBySpeed;	// 0x3084e374
// declared property setter: - (void)setSortedIndex:(unsigned)index;	// 0x3084e338
// declared property getter: - (unsigned)sortedIndex;	// 0x3084e324
@end

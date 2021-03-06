/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import "RadioRequest.h"

@class SSURLConnectionRequest, NSString;

@interface RadioLikeRequest : RadioRequest {
	long long _itemID;	// 28 = 0x1c
	int _likeStatus;	// 36 = 0x24
	SSURLConnectionRequest *_request;	// 40 = 0x28
	int _seedType;	// 44 = 0x2c
	NSString *_stationHash;	// 48 = 0x30
	long long _stationID;	// 52 = 0x34
	BOOL _isSeed;	// 60 = 0x3c
}
@property(assign, nonatomic) BOOL isSeed;	// G=0x3265e969; S=0x3265e979; @synthesize=_isSeed
@property(assign, nonatomic) int likeStatus;	// G=0x3265e949; S=0x3265e959; @synthesize=_likeStatus
- (id)init;	// 0x3265dc99
- (id)initWithItemID:(long long)itemID seedType:(int)type station:(id)station;	// 0x3265ded5
- (id)initWithTrack:(id)track station:(id)station;	// 0x3265dcdd
- (id)initWithTrackID:(id)trackID station:(id)station;	// 0x3265ddd9
- (void).cxx_destruct;	// 0x3265e989
// declared property getter: - (BOOL)isSeed;	// 0x3265e969
// declared property getter: - (int)likeStatus;	// 0x3265e949
// declared property setter: - (void)setIsSeed:(BOOL)seed;	// 0x3265e979
// declared property setter: - (void)setLikeStatus:(int)status;	// 0x3265e959
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x3265dfbd
- (void)startWithLikeCompletionHandler:(id)likeCompletionHandler;	// 0x3265e04d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library

@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {
	AVAssetResourceLoadingDataRequestInternal *_dataRequest;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) long long currentOffset;	// G=0x2c320bf1; 
@property(readonly, assign, nonatomic) int requestedLength;	// G=0x2c320bd1; 
@property(readonly, assign, nonatomic) long long requestedOffset;	// G=0x2c320bad; 
- (id)initWithLoadingRequest:(id)loadingRequest requestedOffset:(long long)offset requestedLength:(int)length canSupplyIncrementalDataImmediately:(BOOL)immediately;	// 0x2c3208cd
- (id)_loadingRequest;	// 0x2c320d7d
// declared property getter: - (long long)currentOffset;	// 0x2c320bf1
- (void)dealloc;	// 0x2c320a15
- (id)description;	// 0x2c320b05
- (void)finalize;	// 0x2c320aa9
// declared property getter: - (int)requestedLength;	// 0x2c320bd1
// declared property getter: - (long long)requestedOffset;	// 0x2c320bad
- (void)respondWithData:(id)data;	// 0x2c320da9
@end


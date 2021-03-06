/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVKit-Structs.h"
#import "DAVRequest.h"


@interface DAVGetInfos : DAVRequest {
}
+ (id)getInfosRequestWithSession:(id)session path:(id)path;	// 0x314cf80d
+ (id)getInfosRequestWithURL:(id)url;	// 0x314cf845
- (id)initGetInfosWithSession:(id)session path:(id)path;	// 0x314cf791
- (id)initGetInfosWithURL:(id)url;	// 0x314cf7d1
- (void)finalizeOperation;	// 0x314cfaa5
- (id)infos;	// 0x314cf771
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MEITunesRemoteMediaProvider.h"
#import "MEITunesMediaProvider.h"


@interface MEITunesRemoteMediaProvider : MEITunesMediaProvider {
}
- (void)finalizeUnload;	// 0x12005
- (BOOL)isLocal;	// 0x11fad
- (int)load;	// 0x123c5
- (void)setStatus:(int)status;	// 0x12239
- (int)unload;	// 0x12301
@end

@interface MEITunesRemoteMediaProvider (Protected)
- (int)_loadLibrary:(id)library;	// 0x11fb1
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IOSBridgeAPI.h"
#import "AppleTV-Structs.h"


@interface NetflixObjCAPI : IOSBridgeAPI {
	IOSObjCEventConnection *objCEventConnection_;	// 4 = 0x4
}
@property(assign) IOSObjCEventConnection *objCEventConnection;	// G=0x56aba5; S=0x56abb9; @synthesize=objCEventConnection_
+ (id)sharedInstance;	// 0x56a8dd
- (void)cleanup;	// 0x56aa25
- (void)dealloc;	// 0x56a9c9
// declared property getter: - (IOSObjCEventConnection *)objCEventConnection;	// 0x56aba5
- (id)objectsync;	// 0x56aa5d
// declared property setter: - (void)setObjCEventConnection:(IOSObjCEventConnection *)connection;	// 0x56abb9
- (void)writeResponse:(id)response;	// 0x56ab6d
@end

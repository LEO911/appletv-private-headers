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
@property(assign) IOSObjCEventConnection *objCEventConnection;	// G=0x4d7fb5; S=0x4d7fc9; @synthesize=objCEventConnection_
+ (id)sharedInstance;	// 0x4d7ced
- (void)cleanup;	// 0x4d7e35
- (void)dealloc;	// 0x4d7dd9
// declared property getter: - (IOSObjCEventConnection *)objCEventConnection;	// 0x4d7fb5
- (id)objectsync;	// 0x4d7e6d
// declared property setter: - (void)setObjCEventConnection:(IOSObjCEventConnection *)connection;	// 0x4d7fc9
- (void)writeResponse:(id)response;	// 0x4d7f7d
@end


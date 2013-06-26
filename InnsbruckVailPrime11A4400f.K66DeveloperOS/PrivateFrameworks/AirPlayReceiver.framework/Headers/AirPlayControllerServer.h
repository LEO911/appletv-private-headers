/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

#import </libobjc.A.h>
#import "AirPlayControllerAsync.h"
#import "NSXPCListenerDelegate.h"

@class NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync> {
	NSObject<OS_dispatch_queue> *_queue;	// 4 = 0x4
	NSString *_serviceName;	// 8 = 0x8
	NSXPCListener *_xpcListener;	// 12 = 0xc
	id _performCommandBlock;	// 16 = 0x10
	id _copyPropertyBlock;	// 20 = 0x14
	id _setPropertyBlock;	// 24 = 0x18
}
@property(copy, nonatomic) id copyPropertyBlock;	// G=0x2ff3a13d; S=0x2ff3a151; @synthesize=_copyPropertyBlock
@property(assign, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;	// G=0x2ff3a109; S=0x2ff397dd; @synthesize=_queue
@property(copy, nonatomic) id performCommandBlock;	// G=0x2ff3a119; S=0x2ff3a12d; @synthesize=_performCommandBlock
@property(copy, nonatomic) id setPropertyBlock;	// G=0x2ff3a161; S=0x2ff3a175; @synthesize=_setPropertyBlock
- (void)_connectionInvalidated:(id)invalidated;	// 0x2ff39c45
// declared property getter: - (id)copyPropertyBlock;	// 0x2ff3a13d
- (void)dealloc;	// 0x2ff396f5
// declared property getter: - (id)dispatchQueue;	// 0x2ff3a109
- (void)getProperty:(id)property qualifier:(id)qualifier completion:(id)completion;	// 0x2ff39ee1
- (void)invalidate;	// 0x2ff39809
- (BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;	// 0x2ff398c9
- (void)performCommand:(id)command qualifier:(id)qualifier params:(id)params completion:(id)completion;	// 0x2ff39cbd
// declared property getter: - (id)performCommandBlock;	// 0x2ff3a119
- (void)postEvent:(id)event qualifier:(id)qualifier params:(id)params completion:(id)completion;	// 0x2ff39e25
// declared property setter: - (void)setCopyPropertyBlock:(id)block;	// 0x2ff3a151
// declared property setter: - (void)setDispatchQueue:(id)queue;	// 0x2ff397dd
// declared property setter: - (void)setPerformCommandBlock:(id)block;	// 0x2ff3a12d
- (void)setProperty:(id)property qualifier:(id)qualifier value:(id)value completion:(id)completion;	// 0x2ff3a009
// declared property getter: - (id)setPropertyBlock;	// 0x2ff3a161
// declared property setter: - (void)setSetPropertyBlock:(id)block;	// 0x2ff3a175
- (void)startWithXPCName:(id)xpcname;	// 0x2ff39829
@end

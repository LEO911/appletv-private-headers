/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/OpenGLES.framework/OpenGLES
 */

#import "OpenGLES-Structs.h"
#import <NSObject.h> // Unknown library


@interface EAGLSharegroup : NSObject {
@private
	EAGLSharegroupPrivate *_private;	// 4 = 0x4
}
- (id)init;	// 0x30f1672d
- (id)initWithAPI:(unsigned)api;	// 0x30f16801
- (id)initWithAPI:(unsigned)api sharedWithCompute:(BOOL)compute;	// 0x30f16815
- (unsigned)APIs;	// 0x30f16731
- (void)dealloc;	// 0x30f16959
- (GLISharedRecRef)getGLIShared;	// 0x30f16745
- (void)loadGLIPlugin:(GLDPixelFormatRec *)plugin sharedWithCompute:(BOOL)compute;	// 0x30f16759
@end


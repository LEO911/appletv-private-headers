/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/GameController.framework/GameController
 */

#import "_GCSnapshot.h"
#import "_GCExtendedGamepad.h"

@class NSData;

__attribute__((visibility("hidden")))
@interface _GCExtendedGamepadSnapshot : _GCExtendedGamepad <_GCSnapshot> {
	NSData *_snapshotData;	// 56 = 0x38
}
@property(copy) NSData *snapshotData;	// G=0x2dd89025; S=0x2dd89039; @synthesize=_snapshotData
- (id)initWithController:(id)controller snapshotData:(id)data;	// 0x2dd89339
- (void).cxx_destruct;	// 0x2dd893c9
// declared property setter: - (void)setSnapshotData:(id)data;	// 0x2dd89039
// declared property getter: - (id)snapshotData;	// 0x2dd89025
@end


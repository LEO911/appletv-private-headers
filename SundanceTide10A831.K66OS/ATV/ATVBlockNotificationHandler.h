/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ATVBlockNotificationHandler : XXUnknownSuperclass {
	BOOL _listening;	// 4 = 0x4
	id _block;	// 8 = 0x8
}
@property(copy, nonatomic) id block;	// G=0x25bd0d; S=0x25bd21; @synthesize=_block
- (void)_notification:(id)notification;	// 0x25bc9d
// declared property getter: - (id)block;	// 0x25bd0d
- (void)dealloc;	// 0x25bba1
// declared property setter: - (void)setBlock:(id)block;	// 0x25bd21
- (void)startObservingNotificationName:(id)name object:(id)object;	// 0x25bbf5
- (void)stopObservingAll;	// 0x25bc55
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MSASAlbum, ACAccount;

__attribute__((visibility("hidden")))
@interface ATVCupidSharedPhotoStream : XXUnknownSuperclass {
	MSASAlbum *_album;	// 4 = 0x4
	ACAccount *_appleAccount;	// 8 = 0x8
}
@property(retain, nonatomic) MSASAlbum *album;	// G=0x4c7b31; S=0x4c7b41; @synthesize=_album
@property(retain, nonatomic) ACAccount *appleAccount;	// G=0x4c7b69; S=0x4c7b79; @synthesize=_appleAccount
+ (id)collectionTypeForAlbum:(id)album;	// 0x4c7419
+ (id)collectionWithDataClient:(id)dataClient album:(id)album accessObject:(id)object;	// 0x4c748d
- (id)initWithDataClient:(id)dataClient;	// 0x4c788d
- (id)initWithDataClient:(id)dataClient album:(id)album appleAccount:(id)account;	// 0x4c7899
- (void).cxx_destruct;	// 0x4c7ba1
// declared property getter: - (id)album;	// 0x4c7b31
// declared property getter: - (id)appleAccount;	// 0x4c7b69
- (id)concreteValueForProperty:(id)property;	// 0x4c793d
// declared property setter: - (void)setAlbum:(id)album;	// 0x4c7b41
// declared property setter: - (void)setAppleAccount:(id)account;	// 0x4c7b79
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSNumber, NSString;

@interface TLITunesTone : NSObject {
	NSString *_identifier;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	NSString *_path;	// 12 = 0xc
	NSString *_artworkFile;	// 16 = 0x10
	NSDictionary *_playbackProperties;	// 20 = 0x14
	NSNumber *_pid;	// 24 = 0x18
	unsigned _duration;	// 28 = 0x1c
	BOOL _ringtone;	// 32 = 0x20
	BOOL _purchased;	// 33 = 0x21
	BOOL _protected;	// 34 = 0x22
}
@property(retain, nonatomic) NSString *artworkFile;	// G=0x34f2982d; S=0x34f2983d; @synthesize=_artworkFile
@property(assign, nonatomic) unsigned duration;	// G=0x34f29861; S=0x34f29871; @synthesize=_duration
@property(retain, nonatomic) NSString *identifier;	// G=0x34f296e9; S=0x34f296f9; @synthesize=_identifier
@property(retain, nonatomic) NSString *name;	// G=0x34f2971d; S=0x34f2972d; @synthesize=_name
@property(retain, nonatomic) NSString *path;	// G=0x34f29751; S=0x34f29761; @synthesize=_path
@property(retain, nonatomic) NSNumber *pid;	// G=0x34f297f9; S=0x34f29809; @synthesize=_pid
@property(retain, nonatomic) NSDictionary *playbackProperties;	// G=0x34f29785; S=0x34f29795; @synthesize=_playbackProperties
@property(assign, nonatomic) BOOL protected;	// G=0x34f29881; S=0x34f29891; @synthesize=_protected
@property(assign, nonatomic, getter=isPurchased) BOOL purchased;	// G=0x34f297b9; S=0x34f297c9; @synthesize=_purchased
@property(assign, nonatomic, getter=isRingtone) BOOL ringtone;	// G=0x34f297d9; S=0x34f297e9; @synthesize=_ringtone
// declared property getter: - (id)artworkFile;	// 0x34f2982d
- (void)dealloc;	// 0x34f292e1
// declared property getter: - (unsigned)duration;	// 0x34f29861
// declared property getter: - (id)identifier;	// 0x34f296e9
// declared property getter: - (BOOL)isPurchased;	// 0x34f297b9
// declared property getter: - (BOOL)isRingtone;	// 0x34f297d9
- (BOOL)loadFromPropertyList:(id)propertyList;	// 0x34f29391
// declared property getter: - (id)name;	// 0x34f2971d
// declared property getter: - (id)path;	// 0x34f29751
// declared property getter: - (id)pid;	// 0x34f297f9
// declared property getter: - (id)playbackProperties;	// 0x34f29785
// declared property getter: - (BOOL)protected;	// 0x34f29881
// declared property setter: - (void)setArtworkFile:(id)file;	// 0x34f2983d
// declared property setter: - (void)setDuration:(unsigned)duration;	// 0x34f29871
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x34f296f9
// declared property setter: - (void)setName:(id)name;	// 0x34f2972d
// declared property setter: - (void)setPath:(id)path;	// 0x34f29761
// declared property setter: - (void)setPid:(id)pid;	// 0x34f29809
// declared property setter: - (void)setPlaybackProperties:(id)properties;	// 0x34f29795
// declared property setter: - (void)setProtected:(BOOL)aProtected;	// 0x34f29891
// declared property setter: - (void)setPurchased:(BOOL)purchased;	// 0x34f297c9
// declared property setter: - (void)setRingtone:(BOOL)ringtone;	// 0x34f297e9
@end

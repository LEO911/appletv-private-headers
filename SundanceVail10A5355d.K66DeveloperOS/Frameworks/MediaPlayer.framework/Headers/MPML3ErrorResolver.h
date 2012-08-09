/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPAVErrorResolver.h"
#import "SSRequestDelegate.h"

@class MPMediaItem, NSError, SSKeybagRequest;

@interface MPML3ErrorResolver : MPAVErrorResolver <SSRequestDelegate> {
	MPMediaItem *_mediaItem;	// 8 = 0x8
	SSKeybagRequest *_request;	// 12 = 0xc
	NSError *_error;	// 16 = 0x10
}
@property(retain, nonatomic) NSError *error;	// G=0x337965ed; S=0x337965fd; @synthesize=_error
@property(retain, nonatomic) MPMediaItem *mediaItem;	// G=0x337965ad; S=0x337965bd; @synthesize=_mediaItem
@property(retain, nonatomic) SSKeybagRequest *request;	// G=0x337965cd; S=0x337965dd; @synthesize=_request
- (id)initWithMediaItem:(id)mediaItem;	// 0x337961cd
- (void)dealloc;	// 0x33796221
// declared property getter: - (id)error;	// 0x337965ed
// declared property getter: - (id)mediaItem;	// 0x337965ad
// declared property getter: - (id)request;	// 0x337965cd
- (void)request:(id)request didFailWithError:(id)error;	// 0x337964a1
- (void)requestDidFinish:(id)request;	// 0x33796521
- (void)resolveError:(id)error;	// 0x337962bd
// declared property setter: - (void)setError:(id)error;	// 0x337965fd
// declared property setter: - (void)setMediaItem:(id)item;	// 0x337965bd
// declared property setter: - (void)setRequest:(id)request;	// 0x337965dd
@end

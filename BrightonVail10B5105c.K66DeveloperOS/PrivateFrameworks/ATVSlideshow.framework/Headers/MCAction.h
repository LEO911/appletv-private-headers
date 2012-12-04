/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCObjectLight.h"

@class NSString;

@interface MCAction : MCObjectLight {
	unsigned long _flags;	// 4 = 0x4
	NSString *_targetObjectID;	// 8 = 0x8
}
@property(copy) NSString *targetObjectID;	// G=0x3250654d; S=0x32506561; @synthesize=_targetObjectID
@property(assign, nonatomic) BOOL tracksInParent;	// G=0x325063e9; S=0x325063fd; 
- (id)initWithImprint:(id)imprint;	// 0x32506309
- (void)_copySelfToSnapshot:(id)snapshot;	// 0x325064ad
- (void)demolish;	// 0x32506361
- (id)description;	// 0x325064dd
- (id)imprint;	// 0x3250638d
- (BOOL)isSnapshot;	// 0x32506421
// declared property setter: - (void)setTargetObjectID:(id)anId;	// 0x32506561
// declared property setter: - (void)setTracksInParent:(BOOL)parent;	// 0x325063fd
- (id)snapshot;	// 0x32506435
// declared property getter: - (id)targetObjectID;	// 0x3250654d
// declared property getter: - (BOOL)tracksInParent;	// 0x325063e9
@end

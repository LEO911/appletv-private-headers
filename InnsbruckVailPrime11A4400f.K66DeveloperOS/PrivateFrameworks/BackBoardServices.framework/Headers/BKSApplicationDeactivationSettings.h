/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import "BackBoardServices-Structs.h"
#import </libobjc.A.h>
#import "NSCopying.h"
#import "BKSXPCCoding.h"

@class NSString;

@interface BKSApplicationDeactivationSettings : NSObject <NSCopying, BKSXPCCoding> {
	BOOL _animated;	// 4 = 0x4
	BOOL _underLock;	// 5 = 0x5
	BOOL _flip;	// 6 = 0x6
	BOOL _crossfade;	// 7 = 0x7
	NSString *_contextInfo;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL animated;	// G=0x301c1991; S=0x301c19a1; @synthesize=_animated
@property(copy, nonatomic) NSString *contextInfo;	// G=0x301c1a11; S=0x301c1a25; @synthesize=_contextInfo
@property(assign, nonatomic) BOOL crossfade;	// G=0x301c19f1; S=0x301c1a01; @synthesize=_crossfade
@property(assign, nonatomic) BOOL flip;	// G=0x301c19d1; S=0x301c19e1; @synthesize=_flip
@property(assign, nonatomic) BOOL underLock;	// G=0x301c19b1; S=0x301c19c1; @synthesize=_underLock
- (id)initWithSettings:(id)settings zone:(NSZone *)zone;	// 0x301c1531
- (id)initWithXPCDictionary:(id)xpcdictionary;	// 0x301c1809
// declared property getter: - (BOOL)animated;	// 0x301c1991
// declared property getter: - (id)contextInfo;	// 0x301c1a11
- (id)copyWithZone:(NSZone *)zone;	// 0x301c17c9
// declared property getter: - (BOOL)crossfade;	// 0x301c19f1
- (void)dealloc;	// 0x301c161d
- (id)description;	// 0x301c1669
- (void)encodeWithXPCDictionary:(id)xpcdictionary;	// 0x301c18d5
// declared property getter: - (BOOL)flip;	// 0x301c19d1
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x301c19a1
// declared property setter: - (void)setContextInfo:(id)info;	// 0x301c1a25
// declared property setter: - (void)setCrossfade:(BOOL)crossfade;	// 0x301c1a01
// declared property setter: - (void)setFlip:(BOOL)flip;	// 0x301c19e1
// declared property setter: - (void)setUnderLock:(BOOL)lock;	// 0x301c19c1
// declared property getter: - (BOOL)underLock;	// 0x301c19b1
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "NSCoding.h"
#import <NSObject.h> // Unknown library
#import "NSCopying.h"

@class NSMutableData;
@protocol OS_dispatch_queue;

@interface MPReshuffledArrayIndexMap : NSObject <NSCoding, NSCopying> {
	unsigned _arrayCount;	// 4 = 0x4
	unsigned _identityIndexesCount;	// 8 = 0x8
	NSObject<OS_dispatch_queue> *_shuffledIndexesQueue;	// 12 = 0xc
	NSMutableData *_shuffledIndexesData;	// 16 = 0x10
	NSRange _focusedRange;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) unsigned countOfArrayIndexMappings;	// G=0x36d277bd; 
@property(assign, nonatomic) NSRange focusedRange;	// G=0x36d27c81; S=0x36d27c99; @synthesize=_focusedRange
- (id)initWithCoder:(id)coder;	// 0x36d27425
- (id)initWithSourceArrayCount:(unsigned)sourceArrayCount identityArraysCount:(unsigned)count;	// 0x36d273ad
- (id)initWithSourceArrayCount:(unsigned)sourceArrayCount identityIndexesCount:(unsigned)count;	// 0x36d272cd
- (void)_onQueueExtendMap;	// 0x36d277fd
- (id)copyWithZone:(NSZone *)zone;	// 0x36d27635
// declared property getter: - (unsigned)countOfArrayIndexMappings;	// 0x36d277bd
- (void)dealloc;	// 0x36d273c1
- (void)encodeWithCoder:(id)coder;	// 0x36d2756d
// declared property getter: - (NSRange)focusedRange;	// 0x36d27c81
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x36d27c99
- (unsigned)sourceArrayIndexForIndex:(unsigned)index;	// 0x36d27a91
@end

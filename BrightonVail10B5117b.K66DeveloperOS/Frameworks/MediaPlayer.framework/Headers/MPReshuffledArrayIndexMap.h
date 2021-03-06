/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <NSObject.h> // Unknown library
#import "NSCoding.h"
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
@property(readonly, assign, nonatomic) unsigned countOfArrayIndexMappings;	// G=0x31df486d; 
@property(assign, nonatomic) NSRange focusedRange;	// G=0x31df4d71; S=0x31df4d89; @synthesize=_focusedRange
- (id)initWithCoder:(id)coder;	// 0x31df44d5
- (id)initWithSourceArrayCount:(unsigned)sourceArrayCount identityArraysCount:(unsigned)count;	// 0x31df445d
- (id)initWithSourceArrayCount:(unsigned)sourceArrayCount identityIndexesCount:(unsigned)count;	// 0x31df437d
- (BOOL)_onQueueExtendMap;	// 0x31df48ad
- (id)copyWithZone:(NSZone *)zone;	// 0x31df46e5
// declared property getter: - (unsigned)countOfArrayIndexMappings;	// 0x31df486d
- (void)dealloc;	// 0x31df4471
- (void)encodeWithCoder:(id)coder;	// 0x31df461d
// declared property getter: - (NSRange)focusedRange;	// 0x31df4d71
// declared property setter: - (void)setFocusedRange:(NSRange)range;	// 0x31df4d89
- (unsigned)sourceArrayIndexForIndex:(unsigned)index;	// 0x31df4b4d
@end


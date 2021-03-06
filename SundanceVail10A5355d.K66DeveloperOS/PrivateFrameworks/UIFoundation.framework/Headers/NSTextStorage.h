/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import "UIFoundation-Structs.h"
#import <NSMutableAttributedString.h> // Unknown library

@class NSMutableArray;

@interface NSTextStorage : NSMutableAttributedString {
	NSRange _editedRange;	// 4 = 0x4
	int _editedDelta;	// 12 = 0xc
	struct {
		unsigned editedMask : 8;
		unsigned  : 8;
		unsigned disabled : 16;
	} _flags;	// 16 = 0x10
	NSMutableArray *_layoutManagers;	// 20 = 0x14
	id _sideData;	// 24 = 0x18
}
@property(assign) id delegate;	// G=0x32554519; S=0x3255431d; converted property
@property(readonly, assign) NSRange editedRange;	// G=0x32553bbd; converted property
@property(readonly, retain) NSMutableArray *layoutManagers;	// G=0x32553a9d; converted property
+ (id)allocWithZone:(NSZone *)zone;	// 0x32553591
- (id)init;	// 0x325535dd
- (id)initWithCoder:(id)coder;	// 0x3255393d
- (BOOL)_forceFixAttributes;	// 0x32553ad5
- (BOOL)_isEditing;	// 0x32553ba1
- (BOOL)_lockForReading;	// 0x32553aad
- (BOOL)_lockForWriting;	// 0x32553ab1
- (BOOL)_lockForWritingWithExceptionHandler:(BOOL)exceptionHandler;	// 0x32553ac9
- (void)_notifyEdited:(unsigned)edited range:(NSRange)range changeInLength:(int)length invalidatedRange:(NSRange)range4;	// 0x32554231
- (NSRange)_rangeByEstimatingAttributeFixingForRange:(NSRange)range;	// 0x32553e45
- (void)_setForceFixAttributes:(BOOL)attributes;	// 0x32553ad1
- (void)_unlock;	// 0x32553acd
- (void)addLayoutManager:(id)manager;	// 0x325539dd
- (void)beginEditing;	// 0x32553ad9
- (int)changeInLength;	// 0x32553be5
- (Class)classForCoder;	// 0x32553889
- (void)dealloc;	// 0x325536f9
// converted property getter: - (id)delegate;	// 0x32554519
- (void)edited:(unsigned)edited range:(NSRange)range changeInLength:(int)length;	// 0x32553bf5
- (unsigned)editedMask;	// 0x32553bd5
// converted property getter: - (NSRange)editedRange;	// 0x32553bbd
- (void)encodeWithCoder:(id)coder;	// 0x32553899
- (void)endEditing;	// 0x32553b09
- (void)ensureAttributesAreFixedInRange:(NSRange)range;	// 0x32553f91
- (void)finalize;	// 0x32553835
- (BOOL)fixesAttributesLazily;	// 0x3255422d
- (void)fontSetChanged;	// 0x325542bd
- (void)invalidateAttributesInRange:(NSRange)range;	// 0x32553e8d
// converted property getter: - (id)layoutManagers;	// 0x32553a9d
- (void)processEditing;	// 0x32553d69
- (void)removeLayoutManager:(id)manager;	// 0x32553a1d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x3255431d
@end


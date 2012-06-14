/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class SBJsonStreamWriterState, NSMutableArray, NSString;
@protocol SBJsonStreamWriterDelegate;

__attribute__((visibility("hidden")))
@interface SBJsonStreamWriter : NSObject {
@private
	NSString *error;	// 4 = 0x4
	NSMutableArray *stateStack;	// 8 = 0x8
	SBJsonStreamWriterState *state;	// 12 = 0xc
	id<SBJsonStreamWriterDelegate> delegate;	// 16 = 0x10
	unsigned maxDepth;	// 20 = 0x14
	BOOL sortKeys;	// 24 = 0x18
	BOOL humanReadable;	// 25 = 0x19
}
@property(assign) id<SBJsonStreamWriterDelegate> delegate;	// G=0x32c46a69; S=0x32c46a79; @synthesize
@property(copy) NSString *error;	// G=0x32c469a1; S=0x32c469b5; @synthesize
@property(assign) BOOL humanReadable;	// G=0x32c46a29; S=0x32c46a39; @synthesize
@property(assign) unsigned maxDepth;	// G=0x32c469d9; S=0x32c469e9; @synthesize
@property(assign) BOOL sortKeys;	// G=0x32c46a49; S=0x32c46a59; @synthesize
@property(assign, nonatomic) SBJsonStreamWriterState *state;	// G=0x32c469f9; S=0x32c46a09; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x32c46a19; @synthesize
+ (void)initialize;	// 0x32c45505
- (id)init;	// 0x32c4559d
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x32c456bd
- (void)dealloc;	// 0x32c45649
// declared property getter: - (id)delegate;	// 0x32c46a69
// declared property getter: - (id)error;	// 0x32c469a1
// declared property getter: - (BOOL)humanReadable;	// 0x32c46a29
// declared property getter: - (unsigned)maxDepth;	// 0x32c469d9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x32c46a79
// declared property setter: - (void)setError:(id)error;	// 0x32c469b5
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x32c46a39
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x32c469e9
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x32c46a59
// declared property setter: - (void)setState:(id)state;	// 0x32c46a09
// declared property getter: - (BOOL)sortKeys;	// 0x32c46a49
// declared property getter: - (id)state;	// 0x32c469f9
// declared property getter: - (id)stateStack;	// 0x32c46a19
- (BOOL)writeArray:(id)array;	// 0x32c458b1
- (BOOL)writeArrayClose;	// 0x32c45d7d
- (BOOL)writeArrayOpen;	// 0x32c45bfd
- (BOOL)writeBool:(BOOL)aBool;	// 0x32c45f6d
- (BOOL)writeNull;	// 0x32c45e95
- (BOOL)writeNumber:(id)number;	// 0x32c46669
- (BOOL)writeObject:(id)object;	// 0x32c456ed
- (BOOL)writeObjectClose;	// 0x32c45b05
- (BOOL)writeObjectOpen;	// 0x32c45985
- (BOOL)writeString:(id)string;	// 0x32c46219
- (BOOL)writeValue:(id)value;	// 0x32c4605d
@end

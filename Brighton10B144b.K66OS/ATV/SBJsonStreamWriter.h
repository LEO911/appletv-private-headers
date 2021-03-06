/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBJsonStreamWriterState, NSMutableArray, NSString;
@protocol SBJsonStreamWriterDelegate;

@interface SBJsonStreamWriter : XXUnknownSuperclass {
	NSString *error;	// 4 = 0x4
	NSMutableArray *stateStack;	// 8 = 0x8
	SBJsonStreamWriterState *state;	// 12 = 0xc
	id<SBJsonStreamWriterDelegate> delegate;	// 16 = 0x10
	unsigned maxDepth;	// 20 = 0x14
	BOOL sortKeys;	// 24 = 0x18
	BOOL humanReadable;	// 25 = 0x19
}
@property(assign) id<SBJsonStreamWriterDelegate> delegate;	// G=0x4be63d; S=0x4be651; @synthesize
@property(copy) NSString *error;	// G=0x4be55d; S=0x4be571; @synthesize
@property(assign) BOOL humanReadable;	// G=0x4be5dd; S=0x4be5f5; @synthesize
@property(assign) unsigned maxDepth;	// G=0x4be581; S=0x4be595; @synthesize
@property(assign) BOOL sortKeys;	// G=0x4be60d; S=0x4be625; @synthesize
@property(assign, nonatomic) SBJsonStreamWriterState *state;	// G=0x4be5ad; S=0x4be5bd; @synthesize
@property(readonly, assign, nonatomic) NSMutableArray *stateStack;	// G=0x4be5cd; @synthesize
+ (void)initialize;	// 0x4bd0c5
- (id)init;	// 0x4bd15d
- (void)appendBytes:(const void *)bytes length:(unsigned)length;	// 0x4bd279
- (void)dealloc;	// 0x4bd205
// declared property getter: - (id)delegate;	// 0x4be63d
// declared property getter: - (id)error;	// 0x4be55d
// declared property getter: - (BOOL)humanReadable;	// 0x4be5dd
// declared property getter: - (unsigned)maxDepth;	// 0x4be581
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x4be651
// declared property setter: - (void)setError:(id)error;	// 0x4be571
// declared property setter: - (void)setHumanReadable:(BOOL)readable;	// 0x4be5f5
// declared property setter: - (void)setMaxDepth:(unsigned)depth;	// 0x4be595
// declared property setter: - (void)setSortKeys:(BOOL)keys;	// 0x4be625
// declared property setter: - (void)setState:(id)state;	// 0x4be5bd
// declared property getter: - (BOOL)sortKeys;	// 0x4be60d
// declared property getter: - (id)state;	// 0x4be5ad
// declared property getter: - (id)stateStack;	// 0x4be5cd
- (BOOL)writeArray:(id)array;	// 0x4bd4a5
- (BOOL)writeArrayClose;	// 0x4bd969
- (BOOL)writeArrayOpen;	// 0x4bd7f5
- (BOOL)writeBool:(BOOL)aBool;	// 0x4bdb41
- (BOOL)writeNull;	// 0x4bda71
- (BOOL)writeNumber:(id)number;	// 0x4be231
- (BOOL)writeObject:(id)object;	// 0x4bd2a9
- (BOOL)writeObjectClose;	// 0x4bd709
- (BOOL)writeObjectOpen;	// 0x4bd595
- (BOOL)writeString:(id)string;	// 0x4bdddd
- (BOOL)writeValue:(id)value;	// 0x4bdc29
@end

